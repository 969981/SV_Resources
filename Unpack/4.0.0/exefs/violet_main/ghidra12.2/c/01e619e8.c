/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e619e8; name: FUN_01e619e8
 */


uint FUN_01e619e8(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_68;
  undefined4 local_60 [2];
  long local_58 [4];
  undefined1 auStack_38 [24];
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) == 0)) {
    uVar2 = 0;
    goto LAB_01e61aac;
  }
  FUN_017522c8(local_58,auStack_38,0x18);
  local_60[0] = 0x14;
  if (local_58[0] != 0) {
    FUN_01e61adc(&local_68,local_60,local_58[0] + 8);
    if (local_58[0] != 0) {
      FUN_01e61b5c(&local_68,param_1 + 0xb0,local_58[0] + 8);
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    local_68 = 0;
LAB_01e61ac4:
    FUN_01c1abf8(&local_68);
    uVar2 = 0;
  }
  else {
    FUN_01c27dd8(&local_68);
    lVar1 = local_68;
    if (local_68 == 0) goto LAB_01e61ac4;
    uVar3 = FUN_014c27b0(local_58);
    uVar4 = FUN_014c27c8(local_58);
    uVar2 = FUN_01e61bd8(lVar1,uVar3,uVar4);
    FUN_01c1abf8(&local_68);
  }
  FUN_01694aa8(local_58);
LAB_01e61aac:
  return uVar2 & 1;
}


