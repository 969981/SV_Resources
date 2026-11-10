/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f8710; name: FUN_011f8710
 */


undefined1  [16] FUN_011f8710(float param_1,long param_2)

{
  int *piVar1;
  ushort *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = *(undefined8 *)(param_2 + 0x1c8);
  uVar5 = *(undefined8 *)(param_2 + 0x1c0);
  piVar1 = *(int **)(param_2 + 0x160);
  if (piVar1 == (int *)0x0) {
    fVar7 = 1.0;
  }
  else {
    puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
    if (*puVar2 < 7) {
      fVar8 = 1.2;
      fVar7 = 0.8;
    }
    else {
      if ((ulong)puVar2[3] == 0) {
        fVar7 = 0.8;
      }
      else {
        fVar7 = *(float *)((long)piVar1 + (ulong)puVar2[3]);
      }
      if ((*puVar2 < 9) || ((ulong)puVar2[4] == 0)) {
        fVar8 = 1.2;
      }
      else {
        fVar8 = *(float *)((long)piVar1 + (ulong)puVar2[4]);
      }
    }
    fVar3 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
    fVar7 = fVar7 + (fVar8 - fVar7) * fVar3;
  }
  auVar4._0_4_ = ((float)uVar5 * param_1) / fVar7;
  auVar4._4_4_ = ((float)((ulong)uVar5 >> 0x20) * param_1) / fVar7;
  auVar4._8_4_ = ((float)uVar6 * param_1) / fVar7;
  auVar4._12_4_ = ((float)((ulong)uVar6 >> 0x20) * param_1) / fVar7;
  return auVar4;
}


