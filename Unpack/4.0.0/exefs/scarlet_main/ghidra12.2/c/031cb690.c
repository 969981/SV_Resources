/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cb690; name: FUN_031cb690
 */


void FUN_031cb690(long *param_1,ulong *param_2)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  
  uVar3 = param_2[1];
  uVar1 = *param_2;
  fVar2 = (float)(uVar1 >> 0x20);
  param_1[5] = 0;
  param_1[4] = CONCAT44(-(float)uVar1,fVar2);
  param_1[1] = (ulong)(uint)-fVar2;
  *param_1 = uVar3 << 0x20;
  param_1[3] = uVar1 & 0xffffffff;
  param_1[2] = (ulong)(uint)-(float)uVar3;
  return;
}


