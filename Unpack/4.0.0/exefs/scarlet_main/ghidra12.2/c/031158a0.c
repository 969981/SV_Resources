/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031158a0; name: FUN_031158a0
 */


void FUN_031158a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar3 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x58);
      puVar2 = PTR_PTR_047d1a50;
      iVar5 = *(int *)(param_1 + 1);
      if (0 < iVar5) {
        puVar4 = (undefined4 *)*param_1;
        puVar7 = puVar3;
        puVar8 = puVar4;
        iVar6 = iVar5;
        do {
          uVar1 = *puVar8;
          *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
          *puVar7 = uVar1;
          FUN_030da2d4(puVar8 + 2,puVar2);
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
          puVar7[4] = puVar8[4];
          puVar7[5] = puVar8[5];
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          FUN_01339774(puVar8 + 6,puVar2);
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar8 + 6);
          puVar7[8] = puVar8[8];
          puVar7[9] = puVar8[9];
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          FUN_030da34c(puVar8 + 10,puVar2);
          *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar8 + 10);
          puVar7[0xc] = puVar8[0xc];
          puVar7[0xd] = puVar8[0xd];
          *(undefined8 *)(puVar8 + 10) = 0;
          *(undefined8 *)(puVar8 + 0xc) = 0;
          FUN_030da3bc(puVar8 + 0xe,puVar2);
          *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(puVar8 + 0xe);
          puVar7[0x10] = puVar8[0x10];
          puVar7[0x11] = puVar8[0x11];
          *(undefined8 *)(puVar8 + 0xe) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          FUN_02e9b22c(puVar8 + 0x12,puVar2);
          *(undefined8 *)(puVar7 + 0x12) = *(undefined8 *)(puVar8 + 0x12);
          puVar7[0x14] = puVar8[0x14];
          puVar7[0x15] = puVar8[0x15];
          iVar6 = iVar6 + -1;
          *(undefined8 *)(puVar8 + 0x12) = 0;
          *(undefined8 *)(puVar8 + 0x14) = 0;
          puVar7 = puVar7 + 0x16;
          puVar8 = puVar8 + 0x16;
        } while (iVar6 != 0);
        do {
          FUN_030da1a4(puVar4);
          puVar4 = puVar4 + 0x16;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar3;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
  }
  return;
}


