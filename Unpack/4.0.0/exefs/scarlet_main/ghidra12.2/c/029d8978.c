/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d8978; name: FUN_029d8978
 */


uint FUN_029d8978(float param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar7 = *piVar2 - 1;
  piVar3 = (int *)((long)(piVar2 + (ulong)uVar7 + 1) + (ulong)(uint)piVar2[(ulong)uVar7 + 1]);
  fVar9 = 0.0;
  if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar8 != 0)) {
    fVar9 = *(float *)((long)piVar3 + uVar8);
  }
  if (fVar9 <= param_1) {
    return uVar7;
  }
  if (uVar7 < 2) {
    return 0;
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6 + uVar7 >> 1;
    piVar3 = (int *)((long)(piVar2 + (ulong)uVar5 + 1) + (ulong)(uint)piVar2[(ulong)uVar5 + 1]);
    fVar9 = 0.0;
    if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
      fVar9 = 0.0;
      if (uVar8 != 0) {
        fVar9 = *(float *)((long)piVar3 + uVar8);
      }
    }
    uVar4 = uVar5;
    if (fVar9 <= param_1) {
      uVar4 = uVar7;
      uVar6 = uVar5;
    }
    uVar7 = uVar4;
  } while (1 < uVar4 - uVar6);
  return uVar6;
}


