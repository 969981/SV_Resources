/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a46d4; name: FUN_010a46d4
 */


void FUN_010a46d4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  *(undefined8 *)(param_1 + 0x88) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = param_2[2];
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 6);
  if (param_2[4] != 0) {
    FUN_010a4800(param_1 + 0xb0);
  }
  if (param_2[3] != 0) {
    FUN_010a493c(param_1 + 0xa8);
  }
  if (param_2[5] != 0) {
    FUN_010a4a78(param_1 + 0xb8);
  }
  lVar1 = param_1 + 0x40;
  local_30 = *(undefined8 *)(param_1 + 0x98);
  local_28 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x60) = local_30;
  *(undefined8 *)(param_1 + 0x68) = local_28;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb8);
  local_38 = lVar1;
  FUN_010a47c8(*(undefined8 *)(param_1 + 0xb0),&local_38);
  local_30 = *(undefined8 *)(param_1 + 0xa0);
  local_38 = lVar1;
  FUN_010a47b4(*(undefined8 *)(param_1 + 0xa8),&local_38);
  local_30 = *(undefined8 *)(param_1 + 0xa0);
  local_28 = *(undefined8 *)(param_1 + 0x98);
  local_38 = lVar1;
  FUN_010a47e4(*(undefined8 *)(param_1 + 0xb8),&local_38);
  return;
}


