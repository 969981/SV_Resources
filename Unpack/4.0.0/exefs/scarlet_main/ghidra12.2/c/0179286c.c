/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179286c; name: FUN_0179286c
 */


float FUN_0179286c(float param_1,long param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  piVar2 = *(int **)(param_2 + 0x160);
  if (piVar2 == (int *)0x0) {
    return 0.0;
  }
  puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar1 = *puVar3;
  if (uVar1 < 0x19) {
    param_1 = *(float *)(param_2 + 0x200) * 0.0 * param_1;
    if (uVar1 < 7) {
      fVar5 = 1.2;
      fVar6 = 0.8;
      goto LAB_017928d0;
    }
  }
  else {
    if ((ulong)puVar3[0xc] == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)((long)piVar2 + (ulong)puVar3[0xc]);
    }
    param_1 = fVar5 * *(float *)(param_2 + 0x200) * param_1;
  }
  if ((ulong)puVar3[3] == 0) {
    fVar6 = 0.8;
  }
  else {
    fVar6 = *(float *)((long)piVar2 + (ulong)puVar3[3]);
  }
  if ((uVar1 < 9) || ((ulong)puVar3[4] == 0)) {
    fVar5 = 1.2;
  }
  else {
    fVar5 = *(float *)((long)piVar2 + (ulong)puVar3[4]);
  }
LAB_017928d0:
  fVar4 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
  return param_1 / (fVar6 + (fVar5 - fVar6) * fVar4);
}


