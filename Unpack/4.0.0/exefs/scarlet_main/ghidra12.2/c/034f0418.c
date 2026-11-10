/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f0418; name: FUN_034f0418
 */


void FUN_034f0418(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  puVar7 = PTR_DAT_047e6cb8;
  puVar6 = PTR_DAT_047e2fd0;
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    if ((*(byte *)(lVar9 + 0x110) >> 3 & 1) == 0) {
      puVar17 = *(undefined8 **)(param_1 + 0x28);
      if (puVar17 != (undefined8 *)0x0) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x78);
        puVar18 = (undefined8 *)0x0;
        do {
          if ((*(int *)((long)puVar17 + 0x1d4) == 0) && (puVar17[0x36] != lVar9)) {
            if (*(long *)(param_1 + 8) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
            }
            if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
              DAT_048b084c = 1;
            }
            lVar10 = puVar17[0x33];
            puVar12 = (undefined8 *)0x0;
            puVar19 = (undefined8 *)(lVar10 + 0x20);
            do {
              puVar13 = puVar12;
              puVar12 = (undefined8 *)*puVar19;
              puVar19 = puVar12 + 3;
            } while (puVar12 != (undefined8 *)0x0 && puVar17 != puVar12);
            if (puVar12 != (undefined8 *)0x0) {
              puVar19 = (undefined8 *)(lVar10 + 0x20);
              if (*(undefined8 **)(lVar10 + 0x20) != puVar12) {
                puVar19 = puVar13 + 3;
              }
              *puVar19 = puVar12[3];
              if (*(undefined8 **)(lVar10 + 0x18) == puVar12) {
                *(undefined8 **)(lVar10 + 0x18) = puVar13;
              }
            }
            puVar19 = (undefined8 *)puVar17[4];
            plVar16 = (long *)(param_1 + 0x28);
            if (*(undefined8 **)(param_1 + 0x28) != puVar17) {
              plVar16 = puVar18 + 4;
            }
            *plVar16 = (long)puVar19;
            (**(code **)*puVar17)(puVar17);
            (**(code **)(puVar6 + 0x30))(5,puVar17);
            puVar17 = puVar19;
          }
          else {
            puVar18 = puVar17;
            puVar17 = (undefined8 *)puVar17[4];
          }
        } while (puVar17 != (undefined8 *)0x0);
      }
    }
    else {
      plVar16 = *(long **)(*(long *)(lVar9 + 0x10) + 0x30);
      if ((plVar16 == (long *)0x0) && (plVar16 = *(long **)PTR_DAT_047e6cb8, plVar16 == (long *)0x0)
         ) {
        plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
        *plVar16 = (long)(PTR_DAT_047e6e40 + 0x10);
        plVar16[1] = 0;
        puVar1 = PTR_DAT_047e6958;
        lVar9 = *(long *)(PTR_DAT_047e6958 + 8);
        plVar16[2] = 0;
        plVar16[3] = lVar9;
        plVar5 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar5 = (long *)(lVar9 + 0x10);
        }
        *plVar5 = (long)plVar16;
        *(long **)(puVar1 + 8) = plVar16;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_047e6e48 + 0x10;
        plVar16[8] = 0;
        plVar16[9] = 0;
        plVar16[0xc] = 0;
        plVar16[0xd] = 0;
        *plVar16 = (long)puVar1;
        plVar16[0x12] = 0;
        plVar16[0x13] = 0;
        plVar16[0x16] = 0;
        plVar16[0x17] = 0;
        plVar16[0x1a] = 0;
        plVar16[0x1b] = 0;
        *(long **)puVar7 = plVar16;
        *(undefined2 *)(plVar16 + 0x1c) = 0x101;
      }
      puVar1 = PTR_DAT_047e6cb8;
      puVar7 = PTR_DAT_047e6958;
      if ((char)plVar16[0x1c] == '\0') {
        puVar2 = PTR_DAT_047e6e40 + 0x10;
        plVar16 = *(long **)PTR_DAT_047e6cb8;
        puVar3 = PTR_DAT_047e6e48 + 0x10;
        do {
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)(**(code **)(puVar6 + 0x10))(4,0xf0);
            *plVar16 = (long)puVar2;
            plVar16[1] = 0;
            lVar9 = *(long *)(puVar7 + 8);
            plVar16[2] = 0;
            plVar16[3] = lVar9;
            plVar5 = (long *)(puVar7 + 0x10);
            if (*(long *)(puVar7 + 0x10) != 0) {
              plVar5 = (long *)(lVar9 + 0x10);
            }
            *plVar5 = (long)plVar16;
            *(long **)(puVar7 + 8) = plVar16;
            *(int *)puVar7 = *(int *)puVar7 + 1;
            *plVar16 = (long)puVar3;
            plVar16[8] = 0;
            plVar16[9] = 0;
            plVar16[0xc] = 0;
            plVar16[0xd] = 0;
            plVar16[0x12] = 0;
            plVar16[0x13] = 0;
            plVar16[0x16] = 0;
            plVar16[0x17] = 0;
            plVar16[0x1a] = 0;
            plVar16[0x1b] = 0;
            *(long **)puVar1 = plVar16;
            *(undefined2 *)(plVar16 + 0x1c) = 0x101;
          }
        } while ((char)plVar16[0x1c] == '\0');
      }
      puVar17 = *(undefined8 **)(param_1 + 0x28);
      if (puVar17 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
        do {
          if (*(int *)((long)puVar17 + 0x1d4) == 0) {
            uVar8 = *(uint *)(plVar16 + 0xd);
            if (uVar8 != 0) {
              uVar14 = puVar17[0x36];
              iVar11 = 0;
              do {
                iVar4 = iVar11 + (uVar8 >> 1);
                uVar15 = *(ulong *)(plVar16[0xc] + (long)iVar4 * 8);
                if (uVar15 == uVar14) goto LAB_034f06c4;
                if (uVar15 < uVar14) {
                  iVar11 = iVar4 + 1;
                }
                uVar8 = uVar8 - (uVar15 < uVar14) >> 1;
              } while (uVar8 != 0);
            }
            if (*(long *)(param_1 + 8) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
            }
            if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
              DAT_048b084c = 1;
            }
            lVar9 = puVar17[0x33];
            puVar12 = (undefined8 *)0x0;
            puVar19 = (undefined8 *)(lVar9 + 0x20);
            do {
              puVar13 = puVar12;
              puVar12 = (undefined8 *)*puVar19;
              puVar19 = puVar12 + 3;
            } while (puVar12 != (undefined8 *)0x0 && puVar17 != puVar12);
            if (puVar12 != (undefined8 *)0x0) {
              puVar19 = (undefined8 *)(lVar9 + 0x20);
              if (*(undefined8 **)(lVar9 + 0x20) != puVar12) {
                puVar19 = puVar13 + 3;
              }
              *puVar19 = puVar12[3];
              if (*(undefined8 **)(lVar9 + 0x18) == puVar12) {
                *(undefined8 **)(lVar9 + 0x18) = puVar13;
              }
            }
            puVar19 = (undefined8 *)puVar17[4];
            plVar5 = (long *)(param_1 + 0x28);
            if (*(undefined8 **)(param_1 + 0x28) != puVar17) {
              plVar5 = puVar18 + 4;
            }
            *plVar5 = (long)puVar19;
            (**(code **)*puVar17)(puVar17);
            (**(code **)(puVar6 + 0x30))(5,puVar17);
            puVar17 = puVar19;
          }
          else {
LAB_034f06c4:
            puVar18 = puVar17;
            puVar17 = (undefined8 *)puVar17[4];
          }
        } while (puVar17 != (undefined8 *)0x0);
      }
    }
  }
  return;
}


