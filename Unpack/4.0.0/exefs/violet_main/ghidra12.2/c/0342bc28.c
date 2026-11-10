/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342bc28; name: FUN_0342bc28
 */


undefined8 FUN_0342bc28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  
  lVar12 = *(long *)(param_1 + 0x30);
  if (lVar12 == 0) {
LAB_0342bc7c:
    puVar2 = PTR_DAT_047e2fd0;
    if (param_2 == -1) goto LAB_0342bcfc;
    uVar4 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = (uint)param_2 / uVar4;
      }
      for (plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)((uint)param_2 - uVar14 * uVar4) * 8); plVar13 != (long *)0x0;
          plVar13 = (long *)*plVar13) {
        if (plVar13[1] == param_2) {
          lVar12 = plVar13[2];
          if (lVar12 != 0) {
            plVar13 = *(long **)(lVar12 + 0x40);
            if ((plVar13 == (long *)0x0) &&
               (plVar13 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90),
               puVar1 = PTR_DAT_047e6d58, plVar13 != (long *)0x0)) {
              *plVar13 = (long)(PTR_DAT_047e6d50 + 0x10);
              plVar13[1] = 0;
              lVar20 = *(long *)(puVar1 + 8);
              plVar13[2] = 0;
              plVar13[3] = lVar20;
              plVar17 = (long *)(puVar1 + 0x10);
              if (*(long *)(puVar1 + 0x10) != 0) {
                plVar17 = (long *)(lVar20 + 0x10);
              }
              *plVar17 = (long)plVar13;
              *(long **)(puVar1 + 8) = plVar13;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              puVar1 = PTR_DAT_047e6d60;
              plVar13[6] = 0;
              plVar13[4] = 0;
              plVar13[5] = 0;
              *(undefined4 *)(plVar13 + 7) = 0;
              *(undefined8 *)((long)plVar13 + 0x74) = 0;
              *(undefined8 *)((long)plVar13 + 0x7c) = 0;
              *(undefined8 *)((long)plVar13 + 0x44) = 0;
              *(undefined8 *)((long)plVar13 + 0x54) = 0;
              *(undefined1 *)(plVar13 + 0x11) = 1;
              *(undefined8 *)((long)plVar13 + 100) = 0x3f80000000000000;
              *(undefined8 *)((long)plVar13 + 0x6c) = 0x3f80000000000000;
              *plVar13 = (long)(puVar1 + 0x10);
              *(undefined4 *)((long)plVar13 + 0x84) = 0x3f800000;
              *(undefined8 *)((long)plVar13 + 0x3c) = 0x3f800000;
              *(undefined8 *)((long)plVar13 + 0x4c) = 0x3f800000;
              *(undefined8 *)((long)plVar13 + 0x5c) = 0x3f800000;
              *(long **)(lVar12 + 0x40) = plVar13;
              plVar13[1] = lVar12;
              iVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(lVar12 + 0x78));
              if (iVar8 != 1) {
                (**(code **)*plVar13)(plVar13);
                (**(code **)(puVar2 + 0x30))(4,plVar13);
                plVar13 = (long *)0x0;
                *(undefined8 *)(lVar12 + 0x40) = 0;
              }
            }
            puVar2 = PTR_DAT_047e2fd0;
            plVar17 = *(long **)(lVar12 + 0x68);
            if ((plVar17 == (long *)0x0) &&
               (plVar17 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x98),
               plVar17 != (long *)0x0)) {
              *plVar17 = (long)(PTR_DAT_047e6ea8 + 0x10);
              plVar17[1] = 0;
              puVar1 = PTR_DAT_047e6ce0;
              lVar20 = *(long *)(PTR_DAT_047e6ce0 + 8);
              plVar17[2] = 0;
              plVar17[3] = lVar20;
              plVar9 = (long *)(puVar1 + 0x10);
              if (*(long *)(puVar1 + 0x10) != 0) {
                plVar9 = (long *)(lVar20 + 0x10);
              }
              *plVar9 = (long)plVar17;
              *(long **)(puVar1 + 8) = plVar17;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              *plVar17 = (long)&PTR_FUN_047bf5d8;
              plVar17[10] = 0;
              plVar17[0xb] = 0;
              *(undefined4 *)(plVar17 + 0xf) = 0;
              plVar17[0xd] = 0;
              plVar17[0xe] = 0;
              plVar17[8] = 0;
              plVar17[4] = 0;
              plVar17[5] = 0;
              *(undefined4 *)(plVar17 + 9) = 0;
              plVar17[6] = 0;
              plVar17[7] = 0;
              plVar17[0x12] = 0;
              plVar17[0x10] = 0;
              plVar17[0x11] = 0;
              *(long **)(lVar12 + 0x68) = plVar17;
              plVar17[1] = lVar12;
              iVar8 = (**(code **)(*plVar17 + 0x10))(plVar17,*(undefined8 *)(lVar12 + 0x78));
              if (iVar8 != 1) {
                (**(code **)*plVar17)(plVar17);
                (**(code **)(puVar2 + 0x30))(4,plVar17);
                plVar17 = (long *)0x0;
                *(undefined8 *)(lVar12 + 0x68) = 0;
              }
            }
            puVar2 = PTR_DAT_047e2fd0;
            if (*(long *)(lVar12 + 0x58) == 0) {
              plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xe0);
              if (plVar9 != (long *)0x0) {
                *plVar9 = (long)(PTR_DAT_047e6d70 + 0x10);
                plVar9[1] = 0;
                puVar1 = PTR_DAT_047e6cc8;
                lVar20 = *(long *)(PTR_DAT_047e6cc8 + 8);
                plVar9[2] = 0;
                plVar9[3] = lVar20;
                plVar3 = (long *)(puVar1 + 0x10);
                if (*(long *)(puVar1 + 0x10) != 0) {
                  plVar3 = (long *)(lVar20 + 0x10);
                }
                *plVar3 = (long)plVar9;
                puVar7 = PTR_DAT_047e6d78;
                *(long **)(puVar1 + 8) = plVar9;
                *(int *)puVar1 = *(int *)puVar1 + 1;
                plVar9[4] = 0;
                plVar9[5] = 0;
                plVar9[6] = 0;
                plVar9[7] = 0;
                *plVar9 = (long)(puVar7 + 0x10);
                plVar9[10] = -1;
                plVar9[0xb] = -1;
                plVar9[0xc] = 0x3f80000000000000;
                plVar9[0xd] = -1;
                plVar9[0x10] = -1;
                plVar9[8] = 0;
                plVar9[9] = 0;
                *(undefined4 *)(plVar9 + 0xe) = 0;
                *(undefined8 *)((long)plVar9 + 0x74) = 0x3f80000000000000;
                *(undefined4 *)((long)plVar9 + 0x7c) = 0;
                *(undefined4 *)(plVar9 + 0x11) = 0;
                *(undefined8 *)((long)plVar9 + 0x8c) = 0x3f80000000000000;
                *(undefined8 *)((long)plVar9 + 0x94) = 0;
                plVar9[0x16] = 0;
                plVar9[0x17] = 0;
                *(undefined1 *)(plVar9 + 0x19) = 0;
                plVar9[0x14] = 0;
                plVar9[0x15] = 0;
                plVar9[0x18] = 0x10100000000;
                plVar9[0x1a] = 0;
                plVar9[0x1b] = 0;
                *(long **)(lVar12 + 0x58) = plVar9;
                plVar9[1] = lVar12;
                iVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(lVar12 + 0x78));
                if (iVar8 == 1) goto LAB_0342bce4;
                (**(code **)*plVar9)(plVar9);
                (**(code **)(puVar2 + 0x30))(4,plVar9);
                *(undefined8 *)(lVar12 + 0x58) = 0;
              }
            }
            else {
LAB_0342bce4:
              if ((plVar13 != (long *)0x0) && (plVar17 != (long *)0x0)) {
                *(long **)(param_1 + 0x30) = plVar17;
                *(int *)(plVar17 + 8) = (int)plVar17[8] + 1;
                goto LAB_0342bcfc;
              }
            }
            puVar11 = *(undefined8 **)(lVar12 + 0x68);
            if (puVar11 != (undefined8 *)0x0) {
              (**(code **)*puVar11)(puVar11);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar11);
              *(undefined8 *)(lVar12 + 0x68) = 0;
            }
          }
          break;
        }
      }
    }
LAB_0342c428:
    uVar10 = 2;
  }
  else {
    if ((*(long *)(*(long *)(lVar12 + 8) + 0x78) != param_2) ||
       (*(char *)(*(long *)(lVar12 + 8) + 0x84) == '\0')) {
      *(int *)(lVar12 + 0x40) = *(int *)(lVar12 + 0x40) + -1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_0342bc7c;
    }
LAB_0342bcfc:
    puVar2 = PTR_DAT_047e2fd0;
    uVar6 = *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x38);
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar19 = (ulong)uVar4;
    uVar14 = (uint)uVar6;
    if (uVar6 < uVar4) {
      uVar19 = (ulong)(uVar14 - 1);
      if (uVar14 - 1 < uVar4) {
        do {
          lVar20 = *(long *)(param_1 + 0x20);
          lVar12 = lVar20 + uVar19 * 0x90;
          FUN_0342c91c(lVar12);
          puVar18 = (uint *)(lVar12 + 0x68);
          if (*puVar18 != 0) {
            uVar21 = 0;
            plVar13 = (long *)(lVar20 + uVar19 * 0x90 + 0x60);
            do {
              lVar12 = *plVar13;
              plVar17 = *(long **)(lVar12 + uVar21 * 8);
              if (plVar17 != (long *)0x0) {
                do {
                  plVar17 = (long *)*plVar17;
                  (**(code **)(puVar2 + 0x30))(0xb);
                } while (plVar17 != (long *)0x0);
                lVar12 = *plVar13;
              }
              *(undefined8 *)(lVar12 + uVar21 * 8) = 0;
              uVar21 = uVar21 + 1;
            } while (uVar21 < *puVar18);
          }
          lVar12 = lVar20 + uVar19 * 0x90;
          plVar13 = (long *)(lVar12 + 0x60);
          *(undefined4 *)(lVar12 + 0x70) = 0;
          if (*plVar13 != 0) {
            *puVar18 = 0;
            (**(code **)(puVar2 + 0x30))(0xb);
            *plVar13 = 0;
            *(undefined4 *)(lVar20 + uVar19 * 0x90 + 0x6c) = 0;
          }
          uVar19 = uVar19 + 1;
        } while (uVar4 != (uint)uVar19);
      }
      *(uint *)(param_1 + 0x28) = (uint)uVar6;
    }
    else {
      if (*(uint *)(param_1 + 0x2c) < uVar14) {
        uVar14 = *(uint *)(param_1 + 0x2c) + (uVar14 - uVar4);
        lVar12 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0xb,(ulong)uVar14 * 0x90);
        if (lVar12 == 0) goto LAB_0342c428;
        lVar20 = *(long *)(param_1 + 0x20);
        if ((lVar20 != 0) && (lVar20 != lVar12)) {
          if (uVar4 != 0) {
            uVar21 = 0;
            puVar1 = PTR_DAT_047e6ea0 + 0x10;
            do {
              plVar13 = (long *)(lVar12 + uVar21 * 0x90);
              plVar13[4] = 0;
              plVar13[5] = 0;
              *(undefined4 *)(plVar13 + 3) = 0;
              plVar13[1] = 0;
              plVar13[2] = 0;
              *plVar13 = (long)puVar1;
              plVar13[7] = 0;
              plVar17 = plVar13 + 6;
              *plVar17 = 0;
              plVar13[9] = 0;
              plVar13[10] = 0;
              *(undefined4 *)(plVar13 + 0xe) = 0;
              plVar13[0x11] = 0;
              plVar13[0xc] = 0;
              plVar13[0xd] = 0;
              plVar13[0xf] = 0;
              plVar13[0x10] = 0;
              lVar20 = *(long *)(param_1 + 0x20) + uVar21 * 0x90;
              *(undefined4 *)(plVar13 + 1) = *(undefined4 *)(lVar20 + 8);
              *(undefined4 *)((long)plVar13 + 0xc) = *(undefined4 *)(lVar20 + 0xc);
              *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(lVar20 + 0x10);
              *(undefined8 *)((long)plVar13 + 0x14) = *(undefined8 *)(lVar20 + 0x14);
              plVar13[4] = *(long *)(lVar20 + 0x20);
              *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(lVar20 + 0x28);
              *(undefined4 *)((long)plVar13 + 0x2c) = *(undefined4 *)(lVar20 + 0x2c);
              *(undefined8 *)(lVar20 + 0x20) = 0;
              *(undefined8 *)(lVar20 + 0x28) = 0;
              if (*plVar17 != 0) {
                lVar15 = lVar12 + uVar21 * 0x90;
                *(undefined4 *)(lVar15 + 0x38) = 0;
                (**(code **)(puVar2 + 0x30))(9);
                *plVar17 = 0;
                *(undefined4 *)(lVar15 + 0x3c) = 0;
              }
              *plVar17 = *(long *)(lVar20 + 0x30);
              *(undefined4 *)(plVar13 + 7) = *(undefined4 *)(lVar20 + 0x38);
              *(undefined4 *)((long)plVar13 + 0x3c) = *(undefined4 *)(lVar20 + 0x3c);
              *(long *)(lVar20 + 0x30) = 0;
              *(undefined8 *)(lVar20 + 0x38) = 0;
              plVar17 = plVar13 + 9;
              puVar11 = (undefined8 *)*plVar17;
              *(undefined4 *)(plVar13 + 8) = *(undefined4 *)(lVar20 + 0x40);
              if (puVar11 != (undefined8 *)0x0) {
                puVar18 = (uint *)(lVar12 + uVar21 * 0x90 + 0x50);
                uVar5 = *puVar18;
                if (uVar5 != 0) {
                  lVar15 = (ulong)uVar5 * 0x50;
                  do {
                    (**(code **)*puVar11)(puVar11);
                    lVar15 = lVar15 + -0x50;
                    puVar11 = puVar11 + 10;
                  } while (lVar15 != 0);
                  puVar11 = (undefined8 *)*plVar17;
                }
                *puVar18 = 0;
                (**(code **)(puVar2 + 0x30))(0xb,puVar11);
                *plVar17 = 0;
                *(undefined4 *)(lVar12 + uVar21 * 0x90 + 0x54) = 0;
              }
              *plVar17 = *(long *)(lVar20 + 0x48);
              *(undefined4 *)(plVar13 + 10) = *(undefined4 *)(lVar20 + 0x50);
              *(undefined4 *)((long)plVar13 + 0x54) = *(undefined4 *)(lVar20 + 0x54);
              *(long *)(lVar20 + 0x48) = 0;
              *(undefined8 *)(lVar20 + 0x50) = 0;
              lVar15 = *(long *)(param_1 + 0x20);
              lVar20 = lVar15 + uVar21 * 0x90;
              FUN_0342c91c(lVar20);
              puVar18 = (uint *)(lVar20 + 0x68);
              if (*puVar18 != 0) {
                uVar16 = 0;
                plVar13 = (long *)(lVar15 + uVar21 * 0x90 + 0x60);
                do {
                  lVar20 = *plVar13;
                  plVar17 = *(long **)(lVar20 + uVar16 * 8);
                  if (plVar17 != (long *)0x0) {
                    do {
                      plVar17 = (long *)*plVar17;
                      (**(code **)(puVar2 + 0x30))(0xb);
                    } while (plVar17 != (long *)0x0);
                    lVar20 = *plVar13;
                  }
                  *(undefined8 *)(lVar20 + uVar16 * 8) = 0;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *puVar18);
              }
              lVar20 = lVar15 + uVar21 * 0x90;
              plVar13 = (long *)(lVar20 + 0x60);
              *(undefined4 *)(lVar20 + 0x70) = 0;
              if (*plVar13 != 0) {
                *puVar18 = 0;
                (**(code **)(puVar2 + 0x30))(0xb);
                *plVar13 = 0;
                *(undefined4 *)(lVar15 + uVar21 * 0x90 + 0x6c) = 0;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar19);
            lVar20 = *(long *)(param_1 + 0x20);
          }
          (**(code **)(puVar2 + 0x30))(0xb,lVar20);
        }
        *(long *)(param_1 + 0x20) = lVar12;
        *(uint *)(param_1 + 0x2c) = uVar14;
      }
      if (uVar4 < uVar6) {
        lVar12 = uVar19 * 0x90 + 0x78;
        lVar20 = uVar6 - uVar19;
        puVar2 = PTR_DAT_047e6ea0 + 0x10;
        do {
          if (*(long *)(param_1 + 0x20) != 0) {
            puVar11 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar12);
            puVar11[-0xb] = 0;
            puVar11[-10] = 0;
            *(undefined4 *)(puVar11 + -0xc) = 0;
            puVar11[-0xf] = puVar2;
            *(undefined4 *)(puVar11 + -1) = 0;
            puVar11[2] = 0;
            puVar11[-0xe] = 0;
            puVar11[-0xd] = 0;
            puVar11[-9] = 0;
            puVar11[-8] = 0;
            puVar11[-6] = 0;
            puVar11[-5] = 0;
            puVar11[-3] = 0;
            puVar11[-2] = 0;
            *puVar11 = 0;
            puVar11[1] = 0;
          }
          lVar20 = lVar20 + -1;
          lVar12 = lVar12 + 0x90;
        } while (lVar20 != 0);
      }
      *(uint *)(param_1 + 0x28) = (uint)uVar6;
    }
    uVar10 = 1;
  }
  return uVar10;
}


