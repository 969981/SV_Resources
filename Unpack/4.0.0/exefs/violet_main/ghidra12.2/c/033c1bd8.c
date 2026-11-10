/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c1bd8; name: FUN_033c1bd8
 */


void FUN_033c1bd8(long param_1)

{
  undefined4 uVar1;
  
  if (0.0 <= *(float *)(param_1 + 0x30)) {
    uVar1 = 0x42c80000;
    if (100.0 < *(float *)(param_1 + 0x30)) goto LAB_033c1bfc;
  }
  else {
    uVar1 = 0;
LAB_033c1bfc:
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0xc)) {
    uVar1 = 0x42c80000;
    if (100.0 < *(float *)(param_1 + 0xc)) goto LAB_033c1c24;
  }
  else {
    uVar1 = 0;
LAB_033c1c24:
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0x10)) {
    uVar1 = 0x42c80000;
    if (100.0 < *(float *)(param_1 + 0x10)) goto LAB_033c1c4c;
  }
  else {
    uVar1 = 0;
LAB_033c1c4c:
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0x14)) {
    uVar1 = 0x43480000;
    if (200.0 < *(float *)(param_1 + 0x14)) goto LAB_033c1c74;
  }
  else {
    uVar1 = 0;
LAB_033c1c74:
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  uVar1 = 0x41a00000;
  if ((*(float *)(param_1 + 0x18) < 20.0) ||
     (uVar1 = 0x44160000, 600.0 < *(float *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  uVar1 = 0x442f0000;
  if ((*(float *)(param_1 + 0x1c) < 700.0) ||
     (uVar1 = 0x461c4000, 10000.0 < *(float *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  uVar1 = 0xc1400000;
  if ((*(float *)(param_1 + 0x20) < -12.0) ||
     (uVar1 = 0x41c00000, 24.0 < *(float *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  uVar1 = 0xc1400000;
  if ((*(float *)(param_1 + 0x24) < -12.0) ||
     (uVar1 = 0x41c00000, 24.0 < *(float *)(param_1 + 0x24))) {
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  if (0.0 <= *(float *)(param_1 + 0x28)) {
    uVar1 = 0x3f800000;
    if (*(float *)(param_1 + 0x28) <= 1.0) goto LAB_033c1d2c;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar1;
LAB_033c1d2c:
  if (*(float *)(param_1 + 0x38) < 100.0) {
    *(undefined4 *)(param_1 + 0x38) = 0x42c80000;
  }
  return;
}


