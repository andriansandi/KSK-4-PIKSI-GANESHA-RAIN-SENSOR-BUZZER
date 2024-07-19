# Arduino Rain Sensor with Buzzer

This project uses an Arduino to monitor a rain sensor and activate a buzzer when rain is detected. The system reads both analog and digital values from the rain sensor and controls the buzzer accordingly.

## Components

- Arduino board (e.g., Arduino Uno)
- Rain sensor module
- Buzzer
- Connecting wires

## Circuit Diagram

- Connect the **analog output** of the rain sensor to **pin A0** on the Arduino.
- Connect the **digital output** of the rain sensor to **pin 2** on the Arduino.
- Connect the **buzzer** to **pin 8** on the Arduino and **GND**.
- Ensure the rain sensor's **VCC** and **GND** are connected to the Arduino's **5V** and **GND**, respectively.

## How to Use

1. **Upload the Code**: Upload the provided code to your Arduino board.
2. **Assemble the Circuit**: Connect the rain sensor and buzzer to the Arduino according to the circuit diagram.
3. **Power the Arduino**: Ensure the Arduino is powered on.
4. **Observe the System**:
    - The buzzer will sound when rain is detected (analog value <= 600).
    - The buzzer will turn off if no rain is detected.

## Code Explanation

- **Analog Reading**: Reads the analog value from the rain sensor to determine the presence of rain.
- **Digital Reading**: Reads the digital output from the rain sensor for additional monitoring (not used in this code).
- **Buzzer Control**: Activates the buzzer when rain is detected and deactivates it otherwise.

## Troubleshooting

- **No Output**: Ensure the rain sensor and buzzer are correctly connected. Check the power supply.
- **Incorrect Readings**: Verify the sensor connections and calibration. Adjust the threshold value (600) as needed.
- **Buzzer Not Working**: Check the buzzer connection and make sure it is functioning properly.

## Maintainer

[Sandi Andrian](mailto:andrian.sandi@gmail.com)

## License

This project is licensed under the MIT License.
