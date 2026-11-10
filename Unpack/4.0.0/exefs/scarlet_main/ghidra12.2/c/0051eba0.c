/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051eba0; name: FUN_0051eba0
 */


void FUN_0051eba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar4 = FUN_0051ef00(param_3,param_2[-1],*param_1);
      if ((uVar4 & 1) != 0) {
        uVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar8 = param_1 + 1, puVar8 != param_2)) {
        lVar13 = 0;
        do {
          uVar5 = *puVar8;
          if (puVar8 != param_1) {
            lVar14 = lVar13;
            do {
              uVar4 = FUN_0051ef00(param_3,uVar5,*(undefined8 *)((long)param_1 + lVar14));
              if ((uVar4 & 1) == 0) {
                puVar6 = (undefined8 *)((long)param_1 + lVar14 + 8);
                goto LAB_0051ec20;
              }
              bVar3 = lVar14 != 0;
              ((undefined8 *)((long)param_1 + lVar14))[1] = *(undefined8 *)((long)param_1 + lVar14);
              lVar14 = lVar14 + -8;
            } while (bVar3);
          }
          puVar6 = param_1;
LAB_0051ec20:
          puVar8 = puVar8 + 1;
          lVar13 = lVar13 + 8;
          *puVar6 = uVar5;
        } while (puVar8 != param_2);
      }
    }
    else {
      uVar4 = param_4 >> 1;
      puVar8 = param_1 + uVar4;
      if (param_6 < (long)param_4) {
        FUN_0051eba0();
        FUN_0051eba0(puVar8,param_2,param_3,param_4 - uVar4,param_5,param_6);
        FUN_0051f510(param_1,puVar8,param_2,param_3,uVar4,param_4 - uVar4,param_5,param_6);
        return;
      }
      FUN_0051f1d0(param_1,puVar8,param_3,uVar4);
      puVar6 = param_5 + uVar4;
      FUN_0051f1d0(puVar8,param_2,param_3,param_4 - uVar4,puVar6);
      puVar8 = param_5 + param_4;
      puVar7 = param_1 + 6;
      puVar9 = puVar6;
      while (puVar12 = puVar7, puVar9 != puVar8) {
        uVar4 = FUN_0051ef00(param_3,*puVar9,*param_5);
        if ((uVar4 & 1) == 0) {
          puVar12[-6] = *param_5;
          param_5 = param_5 + 1;
        }
        else {
          puVar12[-6] = *puVar9;
          puVar9 = puVar9 + 1;
        }
        puVar7 = puVar12 + 1;
        if (param_5 == puVar6) {
          if (puVar9 == puVar8) {
            return;
          }
          uVar4 = (long)puVar8 + (-8 - (long)puVar9);
          if ((uVar4 < 0x38) ||
             ((puVar12 + -5 < (undefined8 *)((long)puVar9 + (uVar4 & 0xfffffffffffffff8) + 8) &&
              (puVar9 < (undefined8 *)((long)puVar12 + ((uVar4 & 0xfffffffffffffff8) - 0x20)))))) {
            puVar7 = puVar12 + -5;
            puVar6 = puVar9;
          }
          else {
            uVar4 = (uVar4 >> 3) + 1;
            uVar10 = uVar4 & 0x3ffffffffffffff8;
            puVar6 = puVar9 + uVar10;
            lVar13 = 0;
            puVar7 = (undefined8 *)((long)puVar12 + ((uVar4 * 8 & 0xffffffffffffffc0) - 0x28));
            uVar11 = uVar10;
            do {
              puVar1 = (undefined8 *)((long)puVar9 + lVar13 + 0x30);
              uVar11 = uVar11 - 8;
              uVar5 = puVar1[-6];
              uVar16 = puVar1[-3];
              uVar15 = puVar1[-4];
              uVar18 = puVar1[-1];
              uVar17 = puVar1[-2];
              uVar20 = puVar1[1];
              uVar19 = *puVar1;
              puVar2 = (undefined8 *)((long)puVar12 + lVar13 + 8);
              lVar13 = lVar13 + 0x40;
              puVar2[-5] = puVar1[-5];
              puVar2[-6] = uVar5;
              puVar2[-3] = uVar16;
              puVar2[-4] = uVar15;
              puVar2[-1] = uVar18;
              puVar2[-2] = uVar17;
              puVar2[1] = uVar20;
              *puVar2 = uVar19;
            } while (uVar11 != 0);
            if (uVar4 == uVar10) {
              return;
            }
          }
          do {
            puVar9 = puVar6 + 1;
            *puVar7 = *puVar6;
            puVar7 = puVar7 + 1;
            puVar6 = puVar9;
          } while (puVar8 != puVar9);
          return;
        }
      }
      if (param_5 == puVar6) {
        return;
      }
      uVar4 = (long)puVar6 + (-8 - (long)param_5);
      puVar8 = puVar12 + -6;
      if (uVar4 < 0x38) {
        puVar9 = param_5;
      }
      else if ((puVar8 < (undefined8 *)((long)param_5 + (uVar4 & 0xfffffffffffffff8) + 8)) &&
              (param_5 < (undefined8 *)((long)puVar12 + ((uVar4 & 0xfffffffffffffff8) - 0x28)))) {
        puVar9 = param_5;
      }
      else {
        uVar4 = (uVar4 >> 3) + 1;
        uVar10 = uVar4 & 0x3ffffffffffffff8;
        puVar9 = param_5 + uVar10;
        lVar13 = 0;
        puVar8 = (undefined8 *)((long)puVar12 + ((uVar4 * 8 & 0xffffffffffffffc0) - 0x30));
        uVar11 = uVar10;
        do {
          puVar7 = (undefined8 *)((long)param_5 + lVar13 + 0x30);
          uVar11 = uVar11 - 8;
          uVar5 = puVar7[-6];
          uVar16 = puVar7[-3];
          uVar15 = puVar7[-4];
          uVar18 = puVar7[-1];
          uVar17 = puVar7[-2];
          uVar20 = puVar7[1];
          uVar19 = *puVar7;
          puVar1 = (undefined8 *)((long)puVar12 + lVar13);
          lVar13 = lVar13 + 0x40;
          puVar1[-5] = puVar7[-5];
          puVar1[-6] = uVar5;
          puVar1[-3] = uVar16;
          puVar1[-4] = uVar15;
          puVar1[-1] = uVar18;
          puVar1[-2] = uVar17;
          puVar1[1] = uVar20;
          *puVar1 = uVar19;
        } while (uVar11 != 0);
        if (uVar4 == uVar10) {
          return;
        }
      }
      do {
        puVar7 = puVar9 + 1;
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        puVar9 = puVar7;
      } while (puVar6 != puVar7);
    }
  }
  return;
}


