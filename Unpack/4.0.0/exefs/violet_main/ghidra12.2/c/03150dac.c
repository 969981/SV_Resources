/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03150dac; name: FUN_03150dac
 */


void FUN_03150dac(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar4 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x28);
      puVar3 = PTR_PTR_047d1a50;
      iVar5 = *(int *)(param_1 + 1);
      if (0 < iVar5) {
        puVar6 = (undefined4 *)*param_1;
        puVar9 = puVar4;
        puVar10 = puVar6;
        iVar8 = iVar5;
        do {
          *puVar9 = *puVar10;
          uVar2 = puVar10[2];
          *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(puVar10 + 3);
          puVar9[2] = uVar2;
          FUN_02ed67fc(puVar10 + 4,puVar3);
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar10 + 4);
          puVar9[6] = puVar10[6];
          puVar9[7] = puVar10[7];
          puVar1 = puVar10 + 8;
          *(undefined8 *)(puVar10 + 4) = 0;
          *(undefined8 *)(puVar10 + 6) = 0;
          iVar8 = iVar8 + -1;
          puVar10 = puVar10 + 10;
          puVar9[8] = *puVar1;
          puVar9 = puVar9 + 10;
        } while (iVar8 != 0);
        puVar7 = puVar6 + 7;
        do {
          puVar7[-1] = 0;
          if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
            (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar7 + -3),(ulong)*puVar7 << 2)
            ;
          }
          puVar7[-3] = 0;
          puVar7[-2] = 0;
          iVar5 = iVar5 + -1;
          *puVar7 = 0x80000000;
          puVar7 = puVar7 + 10;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar4;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
  }
  return;
}


