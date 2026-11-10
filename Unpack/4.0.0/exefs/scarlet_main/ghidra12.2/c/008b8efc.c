/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b8efc; name: FUN_008b8efc
 */


void FUN_008b8efc(long param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  local_28 = *param_3 + *param_4;
  fStack_24 = param_3[1] - param_4[2];
  local_30 = (*(float *)(param_1 + 0x50) - *param_4) - param_4[1];
  fStack_2c = (*(float *)(param_1 + 0x54) - param_4[2]) - param_4[3];
  if ((*(byte *)(param_1 + 0x10a) >> 3 & 1) != 0) {
    fVar1 = (float)(int)*(short *)(param_1 + 0xd2) * 0.0625;
    fVar2 = (float)(int)*(short *)(param_1 + 0xd6) * 0.0625;
    local_28 = local_28 - fVar1;
    fStack_24 = fStack_24 + fVar2;
    local_30 = local_30 + fVar1 + (float)(int)*(short *)(param_1 + 0xd4) * 0.0625;
    fStack_2c = fStack_2c + fVar2 + (float)(int)*(short *)(param_1 + 0xd8) * 0.0625;
  }
  uVar3 = FUN_008a2d6c(*(undefined8 *)(param_1 + 0x118),param_2);
  FUN_00892a80(param_2,uVar3,&local_28,&local_30,*(undefined1 *)(param_1 + 0xf9),
               *(undefined8 *)(param_1 + 0x100));
  return;
}


