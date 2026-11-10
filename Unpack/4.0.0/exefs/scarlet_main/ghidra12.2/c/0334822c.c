/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334822c; name: FUN_0334822c
 */


undefined8 FUN_0334822c(long *param_1,undefined4 *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  long *plVar12;
  
  uVar5 = FUN_0334ac30();
  iVar8 = (int)uVar5;
  if ((int)param_1[1] == iVar8) {
    iVar2 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar8) {
      FUN_0334ad2c(param_1,(long)iVar2);
      iVar8 = (int)param_1[1];
    }
    puVar10 = (undefined4 *)(*param_1 + (long)iVar8 * 0x18);
    *puVar10 = *param_2;
    plVar12 = (long *)(puVar10 + 2);
    *plVar12 = 0;
    puVar11 = puVar10 + 4;
    puVar11[0] = 0;
    puVar11[1] = 0x80000000;
    uVar4 = *(uint *)(param_3 + 1);
    if ((int)uVar4 < 1) {
      *plVar12 = 0;
      *puVar11 = 0;
      puVar10[5] = 0x80000000;
    }
    else {
      puVar9 = (undefined8 *)*param_3;
      puVar6 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 3);
      uVar3 = uVar4 & 3;
      *plVar12 = (long)puVar6;
      *puVar11 = uVar4;
      puVar10[5] = uVar4;
      if (2 < uVar4 - 1) {
        iVar8 = -(uVar4 & 0xfffffffc);
        puVar7 = puVar6;
        do {
          *puVar7 = *puVar9;
          puVar7[1] = puVar9[1];
          puVar7[2] = puVar9[2];
          puVar1 = puVar9 + 3;
          puVar6 = puVar7 + 4;
          puVar9 = puVar9 + 4;
          iVar8 = iVar8 + 4;
          puVar7[3] = *puVar1;
          puVar7 = puVar6;
        } while (iVar8 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar5;
}


