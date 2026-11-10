/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03533abc; name: FUN_03533abc
 */


void FUN_03533abc(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined4 local_68;
  uint local_64;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  iVar8 = FUN_03531af4(*(undefined8 *)(param_1 + 0x10));
  puVar6 = PTR_DAT_047e2fd0;
  lVar15 = *(long *)(param_2 + 0x10);
  lVar19 = *(long *)(lVar15 + 0x140);
  bVar1 = *(byte *)(lVar19 + 0x20) & 0x1f;
  if (bVar1 == 8) {
    return;
  }
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x70);
    if (puVar14 != (undefined8 *)0x0) {
      do {
        if (puVar14[1] == 0) {
          *(undefined8 *)(param_1 + 0x68) = 0;
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x70) = puVar14[1];
        }
        (**(code **)*puVar14)(puVar14);
        (**(code **)(puVar6 + 0x30))(0,puVar14);
        puVar14 = *(undefined8 **)(param_1 + 0x70);
      } while (puVar14 != (undefined8 *)0x0);
    }
    FUN_035333c4(param_1);
    return;
  }
  auVar5 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)*(int *)(lVar19 + 0x28))) *
           SEXT816(-0x20c49ba5e353f7cf);
  iVar3 = *(int *)(lVar19 + 0x3c);
  uVar21 = *(int *)(lVar19 + 0x30) + ((int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f));
  uVar2 = uVar21 & (int)uVar21 >> 0x1f;
  local_64 = iVar8 - uVar2;
  if (iVar3 <= (int)uVar2) {
    local_64 = iVar8 - iVar3;
  }
  local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
  local_68 = *(undefined4 *)(lVar19 + 0x24);
  iVar9 = FUN_03524478(*(undefined8 *)(param_1 + 0x78),local_64,bVar1,&local_68,0,&local_64);
  if (iVar9 != 1) {
    return;
  }
  while( true ) {
    uVar7 = local_64;
    lVar16 = *(long *)(param_1 + 0x78);
    lVar22 = *(long *)(lVar16 + 0x130);
    iVar9 = *(int *)(lVar22 + 4);
    iVar10 = FUN_0352cdd4(lVar15,iVar9 + local_64);
    uVar2 = iVar10 + (iVar8 - iVar3);
    if ((int)uVar2 <= (int)uVar7) break;
    local_68 = *(undefined4 *)(lVar19 + 0x24);
    local_64 = uVar2;
    iVar9 = FUN_03524478(lVar16,uVar2,*(byte *)(lVar19 + 0x20) & 0x1f,&local_68,0,&local_64);
    if (iVar9 != 1) {
      return;
    }
  }
  if (*(int *)(lVar22 + (ulong)*(uint *)(lVar16 + 0x138) * 0x10 + -0xc) - iVar9 <= (int)uVar7) {
    return;
  }
  iVar8 = uVar7 + uVar21;
  iVar10 = (uVar7 + iVar3) - iVar10;
  plVar25 = (long *)(param_1 + 0x70);
  iVar9 = iVar8;
  if (iVar10 <= iVar8) {
    iVar9 = iVar10;
  }
  if ((long *)*plVar25 != (long *)0x0) {
    plVar23 = (long *)*plVar25;
    plVar18 = (long *)0x0;
    do {
      plVar17 = plVar23;
      iVar11 = (**(code **)(*plVar17 + 0x10))(plVar17);
      if (iVar11 == 1) {
        if (((iVar9 <= (int)plVar17[2]) &&
            (*(long *)(plVar17[3] + 0x80) == *(long *)(param_2 + 0x10))) &&
           (*(uint *)(param_2 + 0x20) != 0)) {
          lVar16 = (ulong)*(uint *)(param_2 + 0x20) << 1;
          puVar20 = *(ushort **)(param_2 + 0x18);
          do {
            if ((uint)*puVar20 == (*(uint *)(plVar17[3] + 0x88) & 0xffff)) goto LAB_03533d24;
            lVar16 = lVar16 + -2;
            puVar20 = puVar20 + 1;
          } while (lVar16 != 0);
        }
LAB_03533d9c:
        plVar23 = (long *)plVar17[1];
      }
      else {
        if (((iVar11 != 0) || ((int)plVar17[2] < iVar9)) ||
           (plVar17[3] != *(long *)(param_2 + 0x10))) goto LAB_03533d9c;
        if (*(uint *)(param_2 + 0x20) != 0) {
          lVar16 = (ulong)*(uint *)(param_2 + 0x20) << 1;
          puVar20 = *(ushort **)(param_2 + 0x18);
          do {
            if ((uint)*puVar20 == (*(uint *)(plVar17 + 4) & 0xffff)) goto LAB_03533d9c;
            lVar16 = lVar16 + -2;
            puVar20 = puVar20 + 1;
          } while (lVar16 != 0);
        }
LAB_03533d24:
        plVar23 = (long *)plVar17[1];
        plVar24 = plVar25;
        if (*(long **)(param_1 + 0x70) != plVar17) {
          plVar24 = plVar18 + 1;
        }
        *plVar24 = (long)plVar23;
        if (*(long **)(param_1 + 0x68) == plVar17) {
          *(long **)(param_1 + 0x68) = plVar18;
        }
        (**(code **)*plVar17)(plVar17);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar17);
        plVar17 = plVar18;
      }
      plVar18 = plVar17;
    } while (plVar23 != (long *)0x0);
  }
  lVar16 = *(long *)(param_1 + 0x30);
joined_r0x03533de0:
  do {
    lVar22 = lVar16;
    if (lVar22 == 0) {
      if (*(int *)(param_2 + 0x20) != 0) {
        puVar20 = *(ushort **)(param_2 + 0x18);
        do {
          plVar23 = (long *)*plVar25;
          uVar21 = (uint)*puVar20;
          if (plVar23 != (long *)0x0) {
            plVar18 = (long *)0x0;
            do {
              iVar8 = (**(code **)(*plVar23 + 0x10))(plVar23);
              if (((iVar8 == 0) && (plVar23[3] == *(long *)(param_2 + 0x10))) &&
                 (*(uint *)(plVar23 + 4) == uVar21)) {
                if ((int)plVar23[2] <= iVar10) goto LAB_0353418c;
                plVar24 = (long *)plVar23[1];
                plVar17 = plVar25;
                if (*(long **)(param_1 + 0x70) != plVar23) {
                  plVar17 = plVar18 + 1;
                }
                *plVar17 = (long)plVar24;
                if (*(long **)(param_1 + 0x68) == plVar23) {
                  *(long **)(param_1 + 0x68) = plVar18;
                }
                (**(code **)*plVar23)(plVar23);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar23);
                plVar23 = plVar24;
              }
              else {
                plVar18 = plVar23;
                plVar23 = (long *)plVar23[1];
              }
            } while (plVar23 != (long *)0x0);
          }
          plVar23 = *(long **)(param_2 + 0x10);
          for (lVar16 = *(long *)(param_1 + 0x30); lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
            if ((((*(long **)(lVar16 + 0x80) == plVar23) && (*(uint *)(lVar16 + 0x88) == uVar21)) &&
                ((*(byte *)(lVar16 + 0x5a) & 0xe) == 0)) &&
               ((*(long **)(lVar16 + 0x38) == (long *)0x0 ||
                ((lVar22 = **(long **)(lVar16 + 0x38), lVar22 != 0x4000000 && (lVar22 != 0x2000000))
                )))) goto LAB_0353418c;
          }
          puVar14 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 2) = iVar10;
            *puVar14 = &PTR_LAB_047c9318;
            puVar14[3] = plVar23;
            *(uint *)(puVar14 + 4) = uVar21;
            uVar4 = *(undefined4 *)(lVar19 + 0x3c);
            *(undefined8 *)((long)puVar14 + 0x24) = *(undefined8 *)(lVar19 + 0x34);
            *(undefined4 *)((long)puVar14 + 0x2c) = uVar4;
            *(uint *)(puVar14 + 6) = uVar7 + iVar3;
            (**(code **)(*plVar23 + 0x28))(plVar23);
            lVar16 = *plVar25;
            if (lVar16 == 0) {
LAB_03534168:
              puVar14[1] = 0;
              if (*plVar25 == 0) {
                plVar23 = plVar25;
              }
              else {
                plVar23 = (long *)(*(long *)(param_1 + 0x68) + 8);
              }
              *plVar23 = (long)puVar14;
              *(undefined8 **)(param_1 + 0x68) = puVar14;
            }
            else if (*(int *)(puVar14 + 2) < *(int *)(lVar16 + 0x10)) {
              puVar14[1] = lVar16;
              *plVar25 = (long)puVar14;
            }
            else {
              do {
                lVar22 = lVar16;
                lVar16 = *(long *)(lVar22 + 8);
                if (lVar16 == 0) goto LAB_03534168;
              } while (*(int *)(lVar16 + 0x10) <= *(int *)(puVar14 + 2));
              puVar14[1] = lVar16;
              *(undefined8 **)(lVar22 + 8) = puVar14;
            }
          }
LAB_0353418c:
          puVar20 = puVar20 + 1;
        } while (puVar20 !=
                 (ushort *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2));
      }
      FUN_03533920(param_1,uVar7,lVar15);
      return;
    }
    lVar16 = *(long *)(lVar22 + 8);
    if (((*(byte *)(lVar22 + 0x5a) & 0xe) == 0) &&
       (*(long *)(lVar22 + 0x80) == *(long *)(param_2 + 0x10))) {
      if (*(uint *)(param_2 + 0x20) != 0) {
        lVar13 = (ulong)*(uint *)(param_2 + 0x20) << 1;
        puVar20 = *(ushort **)(param_2 + 0x18);
        do {
          if ((uint)*puVar20 == (*(uint *)(lVar22 + 0x88) & 0xffff)) goto joined_r0x03533de0;
          lVar13 = lVar13 + -2;
          puVar20 = puVar20 + 1;
        } while (lVar13 != 0);
      }
      if ((long *)*plVar25 != (long *)0x0) {
        plVar23 = (long *)*plVar25;
        plVar18 = (long *)0x0;
        do {
          while ((plVar17 = plVar23, iVar9 = (**(code **)(*plVar17 + 0x10))(plVar17), iVar9 == 1 &&
                 (plVar17[3] == lVar22))) {
            if ((int)plVar17[2] <= iVar8) goto joined_r0x03533de0;
            plVar23 = (long *)plVar17[1];
            plVar24 = plVar25;
            if (*(long **)(param_1 + 0x70) != plVar17) {
              plVar24 = plVar18 + 1;
            }
            *plVar24 = (long)plVar23;
            if (*(long **)(param_1 + 0x68) == plVar17) {
              *(long **)(param_1 + 0x68) = plVar18;
            }
            (**(code **)*plVar17)(plVar17);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar17);
            if (plVar23 == (long *)0x0) goto LAB_03533ef0;
          }
          plVar23 = (long *)plVar17[1];
          plVar18 = plVar17;
        } while ((long *)plVar17[1] != (long *)0x0);
      }
LAB_03533ef0:
      puVar14 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x30);
      if (puVar14 != (undefined8 *)0x0) {
        *(int *)(puVar14 + 2) = iVar8;
        *puVar14 = &PTR_LAB_047c9340;
        puVar14[3] = lVar22;
        uVar12 = *(undefined8 *)(lVar19 + 0x28);
        *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(lVar19 + 0x30);
        puVar14[4] = uVar12;
        lVar22 = *plVar25;
        if (lVar22 == 0) {
LAB_03533f78:
          puVar14[1] = 0;
          if (*plVar25 == 0) {
            plVar23 = plVar25;
          }
          else {
            plVar23 = (long *)(*(long *)(param_1 + 0x68) + 8);
          }
          *plVar23 = (long)puVar14;
          *(undefined8 **)(param_1 + 0x68) = puVar14;
        }
        else if (iVar8 < *(int *)(lVar22 + 0x10)) {
          puVar14[1] = lVar22;
          *plVar25 = (long)puVar14;
        }
        else {
          do {
            lVar13 = lVar22;
            lVar22 = *(long *)(lVar13 + 8);
            if (lVar22 == 0) goto LAB_03533f78;
          } while (*(int *)(lVar22 + 0x10) <= iVar8);
          puVar14[1] = lVar22;
          *(undefined8 **)(lVar13 + 8) = puVar14;
        }
      }
    }
  } while( true );
}


