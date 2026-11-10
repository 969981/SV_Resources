/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03066b20; name: FUN_03066b20
 */


void FUN_03066b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) << 5);
      uVar6 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar6) {
        puVar7 = (undefined8 *)*param_1;
        puVar8 = puVar5;
        if (uVar6 != 1) {
          iVar9 = -(uVar6 & 0xfffffffe);
          do {
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            iVar9 = iVar9 + 2;
            uVar4 = puVar7[3];
            puVar8[2] = puVar7[2];
            puVar8[3] = uVar4;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
            uVar2 = puVar7[4];
            uVar3 = puVar7[5];
            puVar1 = puVar7 + 6;
            uVar4 = puVar7[7];
            puVar7 = puVar7 + 8;
            puVar8[6] = *puVar1;
            puVar8[7] = uVar4;
            puVar8[4] = uVar2;
            puVar8[5] = uVar3;
            puVar8 = puVar8 + 8;
          } while (iVar9 != 0);
        }
        if ((uVar6 & 1) != 0) {
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          uVar4 = puVar7[3];
          puVar8[2] = puVar7[2];
          puVar8[3] = uVar4;
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
        }
        uVar6 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar5;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
  }
  return;
}


