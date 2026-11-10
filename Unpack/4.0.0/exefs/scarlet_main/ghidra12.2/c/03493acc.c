/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03493acc; name: FUN_03493acc
 */


bool FUN_03493acc(long param_1,code *param_2,uint *param_3,undefined8 param_4,uint *param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar6 = (*param_2)(param_1 + 8,param_4,param_6), (uVar6 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar8 = *param_3;
  if (uVar8 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(uint *)(puVar11 + 5);
        uVar6 = FUN_03493e08(puVar11,param_2,param_3 + 2,param_4,param_5 + 2,param_6);
        if ((uVar6 & 1) == 0) {
          uVar8 = *(uint *)(param_1 + 0x20);
          puVar11 = puVar11 + 6;
        }
        else {
          puVar13 = (undefined8 *)puVar11[3];
          if (*(uint *)(puVar11 + 4) != 0) {
            lVar15 = (ulong)*(uint *)(puVar11 + 4) * 0x30;
            do {
              FUN_034917f0(puVar13);
              puVar13 = puVar13 + 6;
              lVar15 = lVar15 + -0x30;
            } while (lVar15 != 0);
            puVar13 = (undefined8 *)puVar11[3];
          }
          if (puVar13 != (undefined8 *)0x0) {
            if (*(uint *)(puVar11 + 4) != 0) {
              lVar15 = (ulong)*(uint *)(puVar11 + 4) * 0x30;
              do {
                (**(code **)*puVar13)(puVar13);
                lVar15 = lVar15 + -0x30;
                puVar13 = puVar13 + 6;
              } while (lVar15 != 0);
              puVar13 = (undefined8 *)puVar11[3];
            }
            *(undefined4 *)(puVar11 + 4) = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar13);
            puVar11[3] = 0;
            *(undefined4 *)((long)puVar11 + 0x24) = 0;
          }
          puVar7 = (undefined8 *)
                   ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
          for (puVar13 = puVar11; puVar13 < puVar7; puVar13 = puVar13 + 6) {
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar13 + 0xb);
            puVar13[1] = puVar13[7];
            *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(puVar13 + 8);
            uVar2 = puVar13[9];
            uVar3 = puVar13[10];
            puVar13[9] = 0;
            puVar13[10] = 0;
            puVar13[3] = uVar2;
            puVar13[4] = uVar3;
          }
          (**(code **)*puVar7)();
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x30) != puVar11);
    }
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x20);
    if (uVar9 != 0) {
      lVar15 = *(long *)(param_1 + 0x18);
      iVar10 = 0;
      do {
        iVar1 = iVar10 + (uVar9 >> 1);
        lVar16 = (long)iVar1;
        uVar4 = *(uint *)(lVar15 + (long)iVar1 * 0x30 + 0x28);
        if (uVar4 == uVar8) {
          *param_5 = uVar8;
          uVar6 = FUN_03493e08(lVar15 + lVar16 * 0x30,param_2,param_3 + 2,param_4,param_5 + 2,
                               param_6);
          if ((uVar6 & 1) != 0) {
            lVar12 = lVar15 + lVar16 * 0x30;
            puVar13 = (undefined8 *)(lVar12 + 0x18);
            puVar11 = (undefined8 *)*puVar13;
            puVar14 = (uint *)(lVar12 + 0x20);
            if (*puVar14 != 0) {
              lVar12 = (ulong)*puVar14 * 0x30;
              do {
                FUN_034917f0(puVar11);
                puVar11 = puVar11 + 6;
                lVar12 = lVar12 + -0x30;
              } while (lVar12 != 0);
              puVar11 = (undefined8 *)*puVar13;
            }
            if (puVar11 != (undefined8 *)0x0) {
              if (*puVar14 != 0) {
                lVar12 = (ulong)*puVar14 * 0x30;
                do {
                  (**(code **)*puVar11)(puVar11);
                  lVar12 = lVar12 + -0x30;
                  puVar11 = puVar11 + 6;
                } while (lVar12 != 0);
                puVar11 = (undefined8 *)*puVar13;
              }
              *puVar14 = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar11);
              *puVar13 = 0;
              *(undefined4 *)(lVar15 + lVar16 * 0x30 + 0x24) = 0;
            }
            FUN_03493348((long *)(param_1 + 0x18),*param_3);
          }
          break;
        }
        if (uVar4 < uVar8) {
          iVar10 = iVar1 + 1;
        }
        uVar9 = uVar9 - (uVar4 < uVar8) >> 1;
      } while (uVar9 != 0);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar5 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


