# Edge AI Predictive Maintenance System

An ESP32-based motor condition monitoring system that uses analog vibration sensing, signal conditioning, and data analysis to investigate predictive maintenance at the edge.

## Project Overview

This project explores how vibration measurements can be used to monitor the operating condition of a motor.

The system begins with an analog accelerometer mounted to a motor. The accelerometer's output is conditioned using an analog band-pass filter and amplifier before being sampled by an ESP32.

The project will initially focus on designing and characterizing the analog electronics before progressing to embedded data acquisition, signal processing, and machine learning.

## System Architecture

```text
Motor
  │
  ▼
Analog Accelerometer
  │
  ▼
Band-Pass Filter
  │
  ▼
Amplifier
  │
  ▼
ESP32 ADC
  │
  ▼
Data Collection
  │
  ▼
Signal Processing
  │
  ▼
Machine Learning
  │
  ▼
Motor Condition Analysis
```

## Current Focus

The current phase focuses on the electronics required to acquire a useful vibration signal.

* Analog accelerometer integration
* Band-pass filter design
* Op-amp amplification
* ESP32 ADC interfacing
* Circuit simulation and characterization
* Vibration data acquisition

## Planned Development

### Phase 1 — Analog Electronics

* Select and characterize an analog accelerometer
* Design the vibration signal-conditioning circuit
* Design the band-pass filter
* Design the amplifier
* Simulate and build the circuit
* Characterize the circuit experimentally

### Phase 2 — Embedded Data Acquisition

* Develop ESP32 firmware
* Sample the conditioned vibration signal
* Store and transmit vibration measurements
* Validate ADC sampling and signal quality

### Phase 3 — Signal Processing

* Analyze vibration waveforms
* Perform frequency-domain analysis
* Extract time- and frequency-domain features
* Establish baseline motor behavior

### Phase 4 — Machine Learning

* Build a motor-condition dataset
* Train anomaly detection and/or classification models
* Evaluate model performance
* Investigate whether vibration alone provides sufficient information for condition monitoring

### Phase 5 — Edge AI

* Optimize the selected model for embedded inference
* Deploy the model to the ESP32
* Perform local motor-condition analysis

## Hardware

* ESP32
* ADXL335 analog accelerometer
* Motor
* Op-amp signal-conditioning circuitry
* Passive filter components
* Breadboard/prototyping hardware

## Software

* C/C++ for ESP32 firmware
* Python for data analysis and machine learning
* Git/GitHub for version control

## Project Goals

1. Design an analog front end capable of producing a usable vibration signal.
2. Acquire vibration data from a motor using an ESP32.
3. Identify meaningful vibration characteristics in the time and frequency domains.
4. Investigate whether vibration measurements can distinguish normal and abnormal motor behavior.
5. Explore deployment of condition-monitoring algorithms on an edge device.

## Status

**Current phase:** Analog electronics and vibration sensing

The project is under active development.

## License

See [LICENSE](LICENSE).
