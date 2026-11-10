/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056105c; name: FUN_0056105c
 */


void FUN_0056105c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  long *plStack_68;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_01cf7e20();
  param_1[3] = lVar6;
  puVar5 = PTR_DAT_047cdfd8;
  lVar6 = *param_2;
  lVar4 = param_2[1];
  if (lVar6 != lVar4) {
    lVar11 = 0;
    plVar1 = param_1 + 3;
    do {
      lVar7 = FUN_0056ce2c(lVar6);
      if (*(int *)(lVar7 + 0x1c) == 3) {
        lVar7 = FUN_0056ce2c(lVar6);
        puVar13 = puVar5;
        if (*(int *)(lVar7 + 0x1c) == 3) {
          puVar13 = *(undefined **)(lVar7 + 0x10);
        }
        uVar3 = param_1[1];
        if (uVar3 < (ulong)param_1[2]) {
          FUN_00560c60(uVar3,lVar11,puVar13);
          param_1[1] = uVar3 + 0x48;
        }
        else {
          lVar7 = (long)(uVar3 - *param_1) >> 3;
          uVar3 = lVar7 * -0x71c71c71c71c71c7 + 1;
          if (0x38e38e38e38e38e < uVar3) {
                    /* try { // try from 005612a0 to 005612a7 has its CatchHandler @ 005612a8 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar8 = param_1[2] - *param_1 >> 3;
          local_70 = (undefined8 *)0x0;
          uVar10 = lVar8 * 0x1c71c71c71c71c72;
          if (uVar3 <= uVar10) {
            uVar3 = uVar10;
          }
          if (0x1c71c71c71c71c6 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
            uVar3 = 0x38e38e38e38e38e;
          }
          plStack_68 = plVar1;
          if (uVar3 == 0) {
            local_88 = (undefined8 *)0x0;
          }
          else {
            local_88 = (undefined8 *)
                       (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar3 * 0x48,8);
          }
          puVar12 = local_88 + lVar7;
          puVar14 = local_88 + uVar3 * 9;
          local_80 = puVar12;
          local_70 = puVar14;
          FUN_00560c60(puVar12,lVar11,puVar13);
          local_88 = (undefined8 *)*param_1;
          puVar2 = puVar12 + 9;
          puVar9 = (undefined8 *)param_1[1];
          if ((undefined8 *)param_1[1] == local_88) {
            puStack_78 = local_88;
          }
          else {
            do {
              puVar14 = puVar9 + -9;
              puVar12[-9] = *puVar14;
              uVar15 = puVar9[-8];
              uVar17 = puVar9[-5];
              uVar16 = puVar9[-6];
              puVar12[-7] = puVar9[-7];
              puVar12[-8] = uVar15;
              puVar12[-5] = uVar17;
              puVar12[-6] = uVar16;
              puVar9[-8] = 0;
              puVar9[-7] = 0;
              puVar9[-6] = 0;
              puVar12[-2] = 0;
              puVar12[-4] = 0;
              puVar12[-3] = 0;
              puVar12[-1] = puVar9[-1];
              uVar15 = puVar9[-4];
              puVar12[-3] = puVar9[-3];
              puVar12[-4] = uVar15;
              puVar12[-2] = puVar9[-2];
              puVar9[-4] = 0;
              puVar9[-3] = 0;
              puVar9[-2] = 0;
              puVar12 = local_80 + -9;
              puVar9 = puVar14;
              local_80 = puVar12;
            } while (local_88 != puVar14);
            local_88 = (undefined8 *)*param_1;
            puVar14 = local_70;
            puStack_78 = (undefined8 *)param_1[1];
          }
          local_70 = (undefined8 *)param_1[2];
          param_1[2] = (long)puVar14;
          *param_1 = (long)puVar12;
          param_1[1] = (long)puVar2;
          local_80 = local_88;
          FUN_005612d0(&local_88);
        }
      }
      lVar6 = lVar6 + 8;
      lVar11 = lVar11 + 1;
    } while (lVar6 != lVar4);
  }
  return;
}


