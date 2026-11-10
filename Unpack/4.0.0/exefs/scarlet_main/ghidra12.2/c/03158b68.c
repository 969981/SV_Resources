/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03158b68; name: FUN_03158b68
 */


void FUN_03158b68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x38);
      puVar1 = PTR_PTR_047d1a50;
      iVar3 = *(int *)(param_1 + 1);
      if (0 < iVar3) {
        puVar4 = (undefined4 *)*param_1;
        puVar6 = puVar2;
        puVar7 = puVar4;
        iVar5 = iVar3;
        do {
          *puVar6 = *puVar7;
          FUN_03094dcc(puVar7 + 2,puVar1);
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
          puVar6[4] = puVar7[4];
          puVar6[5] = puVar7[5];
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          FUN_01339774(puVar7 + 6,puVar1);
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar7 + 6);
          puVar6[8] = puVar7[8];
          puVar6[9] = puVar7[9];
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          FUN_03094e44(puVar7 + 10,puVar1);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar7 + 10);
          puVar6[0xc] = puVar7[0xc];
          puVar6[0xd] = puVar7[0xd];
          iVar5 = iVar5 + -1;
          *(undefined8 *)(puVar7 + 10) = 0;
          *(undefined8 *)(puVar7 + 0xc) = 0;
          puVar7 = puVar7 + 0xe;
          puVar6 = puVar6 + 0xe;
        } while (iVar5 != 0);
        puVar4 = puVar4 + 8;
        do {
          puVar4[4] = 0;
          if ((-1 < (int)puVar4[5]) && (*(long *)(puVar4 + 2) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar4 + 2),(ulong)(uint)puVar4[5] << 2);
          }
          *(undefined8 *)(puVar4 + 2) = 0;
          puVar4[5] = 0x80000000;
          *puVar4 = 0;
          if ((-1 < (int)puVar4[1]) && (*(long *)(puVar4 + -2) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar4 + -2),(ulong)(uint)puVar4[1] << 2);
          }
          *(undefined8 *)(puVar4 + -2) = 0;
          puVar4[1] = 0x80000000;
          puVar4[-4] = 0;
          if ((-1 < (int)puVar4[-3]) && (*(long *)(puVar4 + -6) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar4 + -6),(ulong)(uint)puVar4[-3] * 0x14);
          }
          *(undefined8 *)(puVar4 + -6) = 0;
          iVar3 = iVar3 + -1;
          puVar4[-3] = 0x80000000;
          puVar4 = puVar4 + 0xe;
        } while (iVar3 != 0);
        iVar3 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar3;
    }
  }
  return;
}


