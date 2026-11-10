/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317d9c8; name: FUN_0317d9c8
 */


void FUN_0317d9c8(undefined8 *param_1)

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
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x48);
      puVar1 = PTR_PTR_047d1a50;
      iVar4 = *(int *)(param_1 + 1);
      if (0 < iVar4) {
        puVar5 = (undefined8 *)*param_1;
        puVar8 = puVar2;
        puVar9 = puVar5;
        iVar7 = iVar4;
        do {
          uVar3 = puVar9[1];
          *puVar8 = *puVar9;
          puVar8[1] = uVar3;
          FUN_0317db5c(puVar9 + 2);
          puVar8[2] = puVar9[2];
          *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar9 + 3);
          *(undefined4 *)((long)puVar8 + 0x1c) = *(undefined4 *)((long)puVar9 + 0x1c);
          puVar9[2] = 0;
          puVar9[3] = 0;
          *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar9 + 4);
          FUN_01339774(puVar9 + 5,puVar1);
          puVar8[5] = puVar9[5];
          *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar9 + 6);
          *(undefined4 *)((long)puVar8 + 0x34) = *(undefined4 *)((long)puVar9 + 0x34);
          uVar3 = puVar9[7];
          iVar7 = iVar7 + -1;
          puVar9[5] = 0;
          puVar9[6] = 0;
          *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar9 + 8);
          puVar8[7] = uVar3;
          puVar8 = puVar8 + 9;
          puVar9 = puVar9 + 9;
        } while (iVar7 != 0);
        puVar6 = (uint *)((long)puVar5 + 0x1c);
        do {
          puVar6[5] = 0;
          if ((-1 < (int)puVar6[6]) && (*(long *)(puVar6 + 3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar6 + 3),(ulong)puVar6[6] << 2);
          }
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[6] = 0x80000000;
          puVar6[-1] = 0;
          if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar6 + -3),(ulong)*puVar6 << 2)
            ;
          }
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          iVar4 = iVar4 + -1;
          *puVar6 = 0x80000000;
          puVar6 = puVar6 + 0x12;
        } while (iVar4 != 0);
        iVar4 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar4;
    }
  }
  return;
}


