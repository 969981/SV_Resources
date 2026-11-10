/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031516bc; name: FUN_031516bc
 */


void FUN_031516bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x30);
      puVar1 = PTR_PTR_047d1a50;
      iVar5 = *(int *)(param_1 + 1);
      if (0 < iVar5) {
        puVar6 = (undefined4 *)*param_1;
        puVar8 = puVar2;
        puVar9 = puVar6;
        iVar7 = iVar5;
        do {
          *puVar8 = *puVar9;
          puVar8[2] = puVar9[2];
          FUN_030dad34(puVar9 + 4,puVar1);
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar9 + 4);
          puVar8[6] = puVar9[6];
          puVar8[7] = puVar9[7];
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
          iVar7 = iVar7 + -1;
          puVar8[10] = puVar9[10];
          *(undefined **)(puVar9 + 8) = &DAT_03d7702c;
          puVar9[10] = 0;
          puVar9 = puVar9 + 0xc;
          puVar8 = puVar8 + 0xc;
        } while (iVar7 != 0);
        iVar7 = 0;
        do {
          lVar3 = *(long *)(puVar6 + 8);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],lVar3,0);
            *(undefined **)(puVar6 + 8) = &DAT_03d7702c;
            puVar6[10] = 0;
          }
          if (puVar6[6] != 0) {
            lVar4 = *(long *)(puVar6 + 4);
            lVar3 = (long)(int)puVar6[6] * 0x68;
            do {
              FUN_030d9a14(lVar4 + -0x60 + lVar3);
              lVar3 = lVar3 + -0x68;
            } while (lVar3 != 0);
          }
          puVar6[6] = 0;
          if ((-1 < (int)puVar6[7]) && (*(long *)(puVar6 + 4) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar6 + 4),(ulong)(uint)puVar6[7] * 0x68);
          }
          iVar7 = iVar7 + 1;
          *(undefined8 *)(puVar6 + 4) = 0;
          puVar6[7] = 0x80000000;
          puVar6 = puVar6 + 0xc;
        } while (iVar7 != iVar5);
        iVar5 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
  }
  return;
}


