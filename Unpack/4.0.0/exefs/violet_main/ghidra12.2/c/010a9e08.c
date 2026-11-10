/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a9e08; name: FUN_010a9e08
 */


void FUN_010a9e08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x90) = param_2[2];
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  local_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined1 *)(param_1 + 0x90);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x38),&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined1 *)(param_1 + 0x90);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x40),&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined1 *)(param_1 + 0x90);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x48),&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined1 *)(param_1 + 0x90);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x50),&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined1 *)(param_1 + 0x90);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x58),&local_38);
  return;
}


