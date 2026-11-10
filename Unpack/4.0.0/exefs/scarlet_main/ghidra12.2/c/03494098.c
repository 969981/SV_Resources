/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03494098; name: FUN_03494098
 */


bool FUN_03494098(long param_1,code *param_2,byte *param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar6 = (*param_2)(param_1 + 8,param_4,param_6), (uVar6 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar4 = PTR_DAT_047e2fd0;
  bVar2 = *param_3;
  if (bVar2 == 0xff) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(byte *)(puVar8 + 5);
        uVar6 = FUN_034943f0(puVar8,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
        if ((uVar6 & 1) == 0) {
          uVar10 = *(uint *)(param_1 + 0x20);
          puVar8 = puVar8 + 6;
        }
        else {
          puVar7 = (undefined8 *)puVar8[3];
          if (*(uint *)(puVar8 + 4) != 0) {
            lVar16 = (ulong)*(uint *)(puVar8 + 4) * 0x30;
            plVar14 = puVar7 + 3;
            do {
              if (*plVar14 != 0) {
                *(undefined4 *)(plVar14 + 1) = 0;
                (**(code **)(puVar4 + 0x30))(0);
                *plVar14 = 0;
                *(undefined4 *)((long)plVar14 + 0xc) = 0;
              }
              lVar16 = lVar16 + -0x30;
              plVar14 = plVar14 + 6;
            } while (lVar16 != 0);
            puVar7 = (undefined8 *)puVar8[3];
          }
          if (puVar7 != (undefined8 *)0x0) {
            if (*(uint *)(puVar8 + 4) != 0) {
              lVar16 = (ulong)*(uint *)(puVar8 + 4) * 0x30;
              do {
                (**(code **)*puVar7)(puVar7);
                lVar16 = lVar16 + -0x30;
                puVar7 = puVar7 + 6;
              } while (lVar16 != 0);
              puVar7 = (undefined8 *)puVar8[3];
            }
            *(undefined4 *)(puVar8 + 4) = 0;
            (**(code **)(puVar4 + 0x30))(0,puVar7);
            puVar8[3] = 0;
            *(undefined4 *)((long)puVar8 + 0x24) = 0;
          }
          puVar7 = (undefined8 *)
                   ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
          if (puVar8 < puVar7) {
            puVar9 = puVar8 + 7;
            do {
              *(undefined1 *)(puVar9 + -2) = *(undefined1 *)(puVar9 + 4);
              puVar9[-6] = *puVar9;
              puVar9[-4] = puVar9[2];
              *(undefined1 *)(puVar9 + -5) = *(undefined1 *)(puVar9 + 1);
              *(undefined4 *)(puVar9 + -3) = *(undefined4 *)(puVar9 + 3);
              *(undefined4 *)((long)puVar9 + -0x14) = *(undefined4 *)((long)puVar9 + 0x1c);
              puVar11 = puVar9 + -1;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9 = puVar9 + 6;
            } while (puVar11 < puVar7);
          }
          (**(code **)*puVar7)();
          uVar10 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar10;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar10 * 0x30) != puVar8);
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x20);
    if (uVar10 != 0) {
      lVar16 = *(long *)(param_1 + 0x18);
      iVar12 = 0;
      do {
        iVar1 = iVar12 + (uVar10 >> 1);
        lVar17 = (long)iVar1;
        bVar3 = *(byte *)(lVar16 + (long)iVar1 * 0x30 + 0x28);
        if (bVar3 == bVar2) {
          *param_5 = bVar2;
          uVar6 = FUN_034943f0(lVar16 + lVar17 * 0x30,param_2,param_3 + 8,param_4,param_5 + 8,
                               param_6);
          puVar4 = PTR_DAT_047e2fd0;
          if ((uVar6 & 1) != 0) {
            lVar13 = lVar16 + lVar17 * 0x30;
            plVar14 = (long *)(lVar13 + 0x18);
            puVar8 = (undefined8 *)*plVar14;
            puVar15 = (uint *)(lVar13 + 0x20);
            if (*puVar15 != 0) {
              lVar13 = (ulong)*puVar15 * 0x30;
              plVar18 = puVar8 + 3;
              do {
                if (*plVar18 != 0) {
                  *(undefined4 *)(plVar18 + 1) = 0;
                  (**(code **)(puVar4 + 0x30))(0);
                  *plVar18 = 0;
                  *(undefined4 *)((long)plVar18 + 0xc) = 0;
                }
                lVar13 = lVar13 + -0x30;
                plVar18 = plVar18 + 6;
              } while (lVar13 != 0);
              puVar8 = (undefined8 *)*plVar14;
            }
            if (puVar8 != (undefined8 *)0x0) {
              if (*puVar15 != 0) {
                lVar13 = (ulong)*puVar15 * 0x30;
                do {
                  (**(code **)*puVar8)(puVar8);
                  lVar13 = lVar13 + -0x30;
                  puVar8 = puVar8 + 6;
                } while (lVar13 != 0);
                puVar8 = (undefined8 *)*plVar14;
              }
              *puVar15 = 0;
              (**(code **)(puVar4 + 0x30))(0,puVar8);
              *plVar14 = 0;
              *(undefined4 *)(lVar16 + lVar17 * 0x30 + 0x24) = 0;
            }
            FUN_034935e0((long *)(param_1 + 0x18),*param_3);
          }
          break;
        }
        if (bVar3 < bVar2) {
          iVar12 = iVar1 + 1;
        }
        uVar10 = uVar10 - (bVar3 < bVar2) >> 1;
      } while (uVar10 != 0);
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


