/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03180ec0; name: FUN_03180ec0
 */


void FUN_03180ec0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x18);
      puVar1 = PTR_PTR_047d1a50;
      iVar3 = *(int *)(param_1 + 1);
      if (0 < iVar3) {
        puVar4 = (undefined4 *)*param_1;
        puVar7 = puVar2;
        puVar8 = puVar4;
        iVar6 = iVar3;
        do {
          *puVar7 = *puVar8;
          FUN_01339774(puVar8 + 2,puVar1);
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
          puVar7[4] = puVar8[4];
          puVar7[5] = puVar8[5];
          iVar6 = iVar6 + -1;
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          puVar8 = puVar8 + 6;
          puVar7 = puVar7 + 6;
        } while (iVar6 != 0);
        puVar5 = puVar4 + 5;
        do {
          puVar5[-1] = 0;
          if ((-1 < (int)*puVar5) && (*(long *)(puVar5 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar5 + -3),(ulong)*puVar5 << 2)
            ;
          }
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          iVar3 = iVar3 + -1;
          *puVar5 = 0x80000000;
          puVar5 = puVar5 + 6;
        } while (iVar3 != 0);
        iVar3 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar3;
    }
  }
  return;
}


