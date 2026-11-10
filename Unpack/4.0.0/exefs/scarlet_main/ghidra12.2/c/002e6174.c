/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e6174; name: FUN_002e6174
 */


undefined8 FUN_002e6174(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    *param_3 = 0;
    uVar3 = (uint)*param_1;
    if (*param_1 != 5) goto joined_r0x002e61f8;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    *param_3 = 0;
    uVar3 = (uint)*param_1;
    if (uVar3 != 5) goto joined_r0x002e61f8;
  }
  if (*(short *)(param_1 + 6) == 0) {
    return 0;
  }
  pbVar1 = param_1 + 8;
  if (*(short *)(param_1 + 6) != 1) {
    pbVar1 = *(byte **)pbVar1;
  }
  param_1 = *(byte **)pbVar1;
  uVar3 = (uint)*param_1;
joined_r0x002e61f8:
  if (1 < uVar3 - 3) {
    return 0;
  }
  if (uVar3 == 3) {
    pbVar1 = param_1 + 0x18;
    uVar2 = 1;
  }
  else {
    pbVar1 = *(byte **)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_002e5dc0(*(ushort *)(param_1 + 2) >> 5 & 1,pbVar1,uVar2);
  *param_3 = param_1[2] & 1;
  return 1;
}


