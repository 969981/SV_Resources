/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317f624; name: FUN_0317f624
 */


void FUN_0317f624(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar1 = PTR_PTR_047d1a50;
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x30);
      iVar4 = *(int *)(param_1 + 1);
      if (0 < iVar4) {
        puVar5 = (undefined8 *)*param_1;
        puVar8 = puVar2;
        puVar9 = puVar5;
        iVar7 = iVar4;
        do {
          uVar3 = puVar9[3];
          puVar8[1] = puVar9[1];
          puVar8[3] = uVar3;
          uVar3 = *puVar9;
          puVar8[2] = puVar9[2];
          *puVar8 = uVar3;
          FUN_0317f754(puVar9 + 4);
          puVar8[4] = puVar9[4];
          *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar9 + 5);
          *(undefined4 *)((long)puVar8 + 0x2c) = *(undefined4 *)((long)puVar9 + 0x2c);
          iVar7 = iVar7 + -1;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar8 = puVar8 + 6;
          puVar9 = puVar9 + 6;
        } while (iVar7 != 0);
        puVar6 = (uint *)((long)puVar5 + 0x2c);
        do {
          puVar6[-1] = 0;
          if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar6 + -3),(ulong)*puVar6 << 3)
            ;
          }
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          iVar4 = iVar4 + -1;
          *puVar6 = 0x80000000;
          puVar6 = puVar6 + 0xc;
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar4;
    }
  }
  return;
}


