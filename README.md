# LAV-DF 60 Frames Audio Preprocessed

This dataset is a **preprocessed version of the LAV-DF dataset** —  
*"Do You Really Mean That? Content Driven Audio-Visual Deepfake Dataset and Multimodal Method for Temporal Forgery Localization"*  
by Cai *et al.*, 2022 (DICTA Conference).

The dataset has been restructured to facilitate multimodal deepfake detection tasks.  
For each video, **60 evenly spaced frames** and the corresponding **audio track** have been extracted,  
along with frame-level **real/fake labels** and **timestamps**.

For each frame, MTCNN (Multi-task Cascaded Con-
volutional Networks) was employed to detect and crop the faces.

---

## 🧠 Dataset Description

Each entry in the dataset corresponds to one frame and includes:

| Column | Description |
|:--------|:-------------|
| `video_id` | Unique ID of the source video |
| `frame_index` | Frame number (0–59) |
| `frame_path` | Path to the extracted image frame |
| `label` | 0 = Real, 1 = Fake |
| `audio_path` | Path to the extracted audio file (`.flac`) |
| `timestamp` | Timestamp (in seconds) of the frame within the video |

---

## 📁 Folder Structure

The dataset is organized into three splits: **train**, **validation**, and **test**.
 
---

lav-df-60frames-audio-preprocessed/
│
├── train/
│ ├── image_frames/
│ │ ├── 000472_frame_0_0.jpg
│ │ ├── 000472_frame_1_0.jpg
│ │ ├── ...
│ ├── audio_files_per_video/
│ │ ├── 000472_audio.flac
│ │ ├── 000501_audio.flac
│ │ ├── ...
│ ├── labels.csv
│
├── val/
│ ├── image_frames/
│ ├── audio_files_per_video/
│ ├── labels.csv
│
├── test/
│ ├── image_frames/
│ ├── audio_files_per_video/
│ ├── labels.csv
│
├── lav_df_60frames_audio_preprocessed.py
└── README.md

---

## 🔧 Loading the Dataset

You can load this dataset directly from Hugging Face using:

```python
from datasets import load_dataset

dataset = load_dataset("faisalishfaq/lav-df-60frames-audio-preprocessed")

print(dataset)
print(dataset["train"][0])
```

Each split (train, validation, test) will contain all relevant metadata:
```
{
  'video_id': '000472',
  'frame_index': 0,
  'frame_path': 'train/image_frames/000472_frame_0_0.jpg',
  'label': 0,
  'audio_path': 'train/audio_files_per_video/000472_audio.flac',
  'timestamp': 0.0
}
```
## 💾 Data Preparation Overview

During preprocessing:

Videos were loaded, and durations were computed to ensure uniform frame sampling.

60 evenly spaced frames were extracted per video.

MTCNN (Multi-task Cascaded Convolutional Networks) was used to detect and crop faces from each frame.

Cropped faces were saved in split/image_frames/.

Corresponding audio was extracted and saved in split/audio_files_per_video/.

Timestamps for each frame were recorded in split_timestamps.csv.

A function find_fake_periods aligned timestamps with fake annotations to assign binary labels (1 = fake, 0 = real).

## 🧩 Features

Multimodal: Includes both image and audio data.

Frame-level labels: Allows training of temporal or multimodal models.

Ready-to-train structure: Ideal for PyTorch, TensorFlow, or Hugging Face pipelines.

## 📜 License

This dataset is distributed under the Creative Commons Attribution–NonCommercial 4.0 International (CC BY-NC 4.0) license.

You may use, share, and adapt the dataset for non-commercial research purposes,
with proper attribution to the original authors.

License link: CC BY-NC 4.0

## 📚 Reference

If you use this dataset, please cite the original LAV-DF paper:

@inproceedings{cai2022you,
  title = {Do You Really Mean That? Content Driven Audio-Visual Deepfake Dataset and Multimodal Method for Temporal Forgery Localization},
  author = {Cai, Zhixi and Stefanov, Kalin and Dhall, Abhinav and Hayat, Munawar},
  booktitle = {2022 International Conference on Digital Image Computing: Techniques and Applications (DICTA)},
  year = {2022},
  doi = {10.1109/DICTA56598.2022.10034605},
  pages = {1--10},
  address = {Sydney, Australia},
}

## 👨‍💻 Maintainer

Dataset prepared by: Faisal Ishfaq

Based on: LAV-DF Dataset

## 💬 Notes

This preprocessed version is designed to simplify research on:

Multimodal deepfake detection

Temporal forgery localization

Cross-modal attention and transformer architectures

Users can modify the provided labels.csv to integrate with their own pipelines easily.
