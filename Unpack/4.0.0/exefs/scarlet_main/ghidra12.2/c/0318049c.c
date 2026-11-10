/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318049c; name: FUN_0318049c
 */


void FUN_0318049c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x60);
      iVar7 = *(int *)(param_1 + 1);
      if (0 < iVar7) {
        puVar8 = (undefined8 *)*param_1;
        puVar5 = puVar8;
        puVar10 = puVar3;
        iVar9 = iVar7;
        do {
          FUN_03180638(puVar5);
          *puVar10 = *puVar5;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)((long)puVar10 + 0xc) = *(undefined4 *)((long)puVar5 + 0xc);
          *puVar5 = 0;
          puVar5[1] = 0;
          FUN_031806a8(puVar5 + 2);
          puVar10[2] = puVar5[2];
          *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar5 + 3);
          *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar5 + 0x1c);
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar10[4] = puVar5[4];
          uVar4 = puVar5[9];
          puVar10[7] = puVar5[7];
          puVar10[9] = uVar4;
          uVar4 = puVar5[6];
          puVar10[8] = puVar5[8];
          puVar10[6] = uVar4;
          puVar1 = puVar5 + 10;
          iVar9 = iVar9 + -1;
          puVar5 = puVar5 + 0xc;
          *(undefined1 *)(puVar10 + 10) = *(undefined1 *)puVar1;
          puVar10 = puVar10 + 0xc;
        } while (iVar9 != 0);
        plVar6 = puVar8 + 2;
        do {
          *(undefined4 *)(plVar6 + 1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar6 + 0xc)) && (*plVar6 != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,*plVar6,(ulong)*(uint *)((long)plVar6 + 0xc) * 100);
          }
          *plVar6 = 0;
          *(undefined4 *)((long)plVar6 + 0xc) = 0x80000000;
          *(undefined4 *)(plVar6 + -1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar6 + -4)) && (plVar6[-2] != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,plVar6[-2],(ulong)*(uint *)((long)plVar6 + -4) << 6);
          }
          plVar6[-2] = 0;
          iVar7 = iVar7 + -1;
          *(undefined4 *)((long)plVar6 + -4) = 0x80000000;
          plVar6 = plVar6 + 0xc;
        } while (iVar7 != 0);
        iVar7 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar3;
      *(int *)((long)param_1 + 0xc) = iVar7;
    }
  }
  return;
}


