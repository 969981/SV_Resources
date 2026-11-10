/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01802eb4; name: FUN_01802eb4
 */


void FUN_01802eb4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar1 = param_1 + 0xe0;
  uVar4 = FUN_01802f88(lVar1);
  if ((float)uVar4 < 0.0) {
    return;
  }
  *(float *)(param_1 + 0x8c) = (float)uVar4;
  FUN_01802f4c(lVar1);
  uVar2 = FUN_00c84218(uVar4,0,lVar1);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0x90) != 1) goto LAB_01802f14;
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined4 *)(param_1 + 0x90) = uVar3;
LAB_01802f14:
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x4c));
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x1a0);
  if (fVar5 < *(float *)(param_1 + 0x1a0)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}


