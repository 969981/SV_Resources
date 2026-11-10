/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03156c34; name: FUN_03156c34
 */


void FUN_03156c34(undefined8 *param_1)

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
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x68);
      puVar1 = PTR_PTR_047d1a50;
      iVar3 = *(int *)(param_1 + 1);
      if (0 < iVar3) {
        puVar4 = (undefined4 *)*param_1;
        puVar6 = puVar2;
        puVar7 = puVar4;
        iVar5 = iVar3;
        do {
          *puVar6 = *puVar7;
          FUN_030da6d0(puVar7 + 2,puVar1);
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
          puVar6[4] = puVar7[4];
          puVar6[5] = puVar7[5];
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar7 + 6);
          puVar6[8] = puVar7[8];
          *(undefined **)(puVar7 + 6) = &DAT_03d7702c;
          puVar7[8] = 0;
          FUN_030daed4(puVar7 + 10,puVar1);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar7 + 10);
          puVar6[0xc] = puVar7[0xc];
          puVar6[0xd] = puVar7[0xd];
          *(undefined8 *)(puVar7 + 10) = 0;
          *(undefined8 *)(puVar7 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar7 + 0xe);
          puVar6[0x10] = puVar7[0x10];
          *(undefined **)(puVar7 + 0xe) = &DAT_03d7702c;
          puVar7[0x10] = 0;
          FUN_030daf4c(puVar7 + 0x12,puVar1);
          *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar7 + 0x12);
          puVar6[0x14] = puVar7[0x14];
          puVar6[0x15] = puVar7[0x15];
          *(undefined8 *)(puVar7 + 0x12) = 0;
          *(undefined8 *)(puVar7 + 0x14) = 0;
          *(undefined8 *)(puVar6 + 0x16) = *(undefined8 *)(puVar7 + 0x16);
          iVar5 = iVar5 + -1;
          puVar6[0x18] = puVar7[0x18];
          *(undefined **)(puVar7 + 0x16) = &DAT_03d7702c;
          puVar7[0x18] = 0;
          puVar7 = puVar7 + 0x1a;
          puVar6 = puVar6 + 0x1a;
        } while (iVar5 != 0);
        puVar4 = puVar4 + 2;
        do {
          FUN_030d9a14(puVar4);
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 0x1a;
        } while (iVar3 != 0);
        iVar3 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar3;
    }
  }
  return;
}


