/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352ba5c; name: FUN_0352ba5c
 */


undefined8 FUN_0352ba5c(long *param_1,uint *param_2,int param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int *piVar13;
  ushort uVar14;
  long lVar15;
  int *piVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  undefined4 *puVar24;
  long *plVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  double *pdVar31;
  undefined *puVar32;
  uint *puVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  int local_84;
  uint *local_78;
  
  local_84 = param_3;
  local_78 = param_2;
  iVar10 = (**(code **)(*param_1 + 0x88))();
  if (iVar10 != 6) {
    (**(code **)(*param_1 + 0x88))(param_1);
    return 0x5b;
  }
  bVar6 = (byte)param_2[1];
  local_78 = (uint *)((long)param_2 + 9);
  *(byte *)(param_1 + 0x29) =
       bVar6 & 2 | bVar6 >> 2 & 1 | bVar6 >> 1 & 4 | *(byte *)(param_1 + 0x29) & 0xf8;
  puVar32 = PTR_DAT_047e2fd0;
  iVar10 = *(int *)((long)param_2 + 5);
  puVar17 = local_78;
  if (iVar10 != 0) {
    iVar23 = 0;
    do {
      uVar27 = *local_78;
      puVar17 = (uint *)((long)local_78 + 0xe);
      uVar19 = (uint)(byte)local_78[1];
      iVar4 = *(int *)((long)local_78 + 5);
      uVar5 = *(undefined4 *)((long)local_78 + 9);
      uVar30 = *(byte *)((long)local_78 + 0xd) & 1 | (uint)(uVar19 == 1) << 1 |
               (*(byte *)((long)local_78 + 0xd) >> 3 & 1) << 10;
      uVar28 = uVar27 & 0xf;
      if (uVar28 == 0) {
LAB_0352bbcc:
        piVar13 = (int *)param_1[0x1f];
        uVar28 = *(uint *)(param_1 + 0x20);
        uVar29 = (ulong)uVar28;
        piVar16 = piVar13;
        local_78 = puVar17;
        if ((uVar28 != 0) && (*piVar13 != iVar4)) {
          lVar20 = uVar29 * 0x10;
          piVar22 = piVar13;
          do {
            lVar20 = lVar20 + -0x10;
            if (lVar20 == 0) goto LAB_0352bc24;
            piVar16 = piVar22 + 4;
            piVar1 = piVar22 + 4;
            piVar22 = piVar16;
          } while (*piVar1 != iVar4);
        }
        if (piVar16 == piVar13 + uVar29 * 4) {
LAB_0352bc24:
          piVar16 = piVar13;
          if ((uVar28 != 0) && (*piVar13 != iVar4)) {
            lVar20 = uVar29 * 0x10;
            piVar22 = piVar13;
            do {
              lVar20 = lVar20 + -0x10;
              if (lVar20 == 0) goto LAB_0352bdcc;
              piVar16 = piVar22 + 4;
              piVar1 = piVar22 + 4;
              piVar22 = piVar16;
            } while (*piVar1 != iVar4);
          }
          if (piVar16 == piVar13 + uVar29 * 4) {
LAB_0352bdcc:
            uVar19 = *(uint *)((long)param_1 + 0x104);
            if (uVar19 <= uVar28) {
              iVar2 = uVar19 + (uVar19 >> 1);
              if (uVar19 == 0) {
                iVar2 = 1;
              }
              uVar19 = iVar2 + uVar19;
              piVar13 = (int *)(**(code **)(puVar32 + 0x20))(0,piVar13,(ulong)uVar19 << 4);
              if (piVar13 == (int *)0x0) {
                return 2;
              }
              param_1[0x1f] = (long)piVar13;
              *(uint *)((long)param_1 + 0x104) = uVar19;
            }
            if (uVar19 <= uVar28) {
              return 2;
            }
            uVar28 = *(uint *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = uVar28 + 1;
            if (piVar13 == (int *)0x0) {
              return 2;
            }
            piVar16 = piVar13 + (ulong)uVar28 * 4;
            *piVar16 = iVar4;
          }
          plVar25 = (long *)(piVar16 + 2);
          puVar11 = (undefined8 *)(**(code **)(puVar32 + 0x10))(2,0x28);
          if (puVar11 == (undefined8 *)0x0) {
            *plVar25 = 0;
            piVar13 = (int *)param_1[0x1f];
            uVar28 = *(uint *)(param_1 + 0x20);
            piVar16 = piVar13 + (ulong)uVar28 * 4;
            if ((uVar28 != 0) && (*piVar13 != iVar4)) {
              lVar20 = (ulong)uVar28 * 0x10;
              do {
                lVar20 = lVar20 + -0x10;
                if (lVar20 == 0) {
                  piVar13 = piVar16;
                  break;
                }
                piVar1 = piVar13 + 4;
                piVar22 = piVar13 + 4;
                piVar13 = piVar1;
              } while (*piVar22 != iVar4);
            }
            if (piVar16 != piVar13) {
              if (piVar13 < piVar16 + -4) {
                do {
                  piVar22 = piVar13 + 4;
                  *(undefined8 *)piVar13 = *(undefined8 *)piVar22;
                  *(undefined8 *)(piVar13 + 2) = *(undefined8 *)(piVar13 + 6);
                  piVar13 = piVar22;
                } while (piVar22 < piVar16 + -4);
                uVar28 = *(uint *)(param_1 + 0x20);
              }
              *(uint *)(param_1 + 0x20) = uVar28 - 1;
            }
          }
          else {
            *(undefined4 *)(puVar11 + 3) = 0xffffffff;
            *puVar11 = 0xffffffff00000000;
            puVar11[2] = 0;
            *(undefined4 *)(puVar11 + 1) = 0;
            *(ushort *)((long)puVar11 + 0xc) = *(ushort *)((long)puVar11 + 0xc) & 0xf800;
            *(undefined4 *)(puVar11 + 4) = 0;
            *plVar25 = (long)puVar11;
            if (((*(ushort *)((long)puVar11 + 0xc) & 0x7c) == 4) && (puVar11[2] != 0)) {
              (**(code **)(puVar32 + 0x30))(0);
              puVar11[2] = 0;
            }
            puVar11[1] = CONCAT44(uVar30,uVar5);
            puVar11[2] = 0;
            *(uint *)(puVar11 + 3) = uVar27;
            *puVar11 = CONCAT44(iVar4,iVar4);
            *(ushort *)((long)puVar11 + 0xc) = (ushort)uVar30 | 0x80;
            lVar20 = *plVar25;
            if (*(short *)(lVar20 + 0x1a) == 0x10) goto LAB_0352bfa8;
            *(int *)(lVar20 + 0x20) = (int)param_1[0x26];
          }
          lVar20 = *plVar25;
          goto LAB_0352bfa8;
        }
      }
      else {
        if (uVar28 != 2) {
          if (uVar28 != 1) {
            return 2;
          }
          if (uVar19 == 0) {
            uVar30 = uVar30 | 0xc;
          }
          else {
            if (1 < uVar19 - 1) {
              return 2;
            }
            uVar30 = uVar30 | 4;
          }
          goto LAB_0352bbcc;
        }
        puVar17 = (uint *)((long)local_78 + 0xe);
        local_78 = (uint *)((long)local_78 + (ulong)*puVar17 + 0x12);
        local_84 = local_84 - *puVar17;
        piVar13 = (int *)param_1[0x1f];
        uVar28 = *(uint *)(param_1 + 0x20);
        piVar16 = piVar13;
        if ((uVar28 != 0) && (*piVar13 != iVar4)) {
          lVar20 = (ulong)uVar28 * 0x10;
          piVar22 = piVar13;
          do {
            lVar20 = lVar20 + -0x10;
            if (lVar20 == 0) goto LAB_0352bc7c;
            piVar16 = piVar22 + 4;
            piVar1 = piVar22 + 4;
            piVar22 = piVar16;
          } while (*piVar1 != iVar4);
        }
        if (piVar16 == piVar13 + (ulong)uVar28 * 4) {
LAB_0352bc7c:
          uVar30 = *(uint *)((long)param_1 + 0x104);
          if (uVar30 <= uVar28) {
            iVar2 = uVar30 + (uVar30 >> 1);
            if (uVar30 == 0) {
              iVar2 = 1;
            }
            uVar30 = iVar2 + uVar30;
            piVar13 = (int *)(**(code **)(puVar32 + 0x20))(0,piVar13,(ulong)uVar30 << 4);
            if (piVar13 == (int *)0x0) {
              return 2;
            }
            param_1[0x1f] = (long)piVar13;
            *(uint *)((long)param_1 + 0x104) = uVar30;
          }
          if (uVar30 <= uVar28) {
            return 2;
          }
          uVar28 = *(uint *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = uVar28 + 1;
          if (piVar13 == (int *)0x0) {
            return 2;
          }
          piVar16 = piVar13 + (ulong)uVar28 * 4;
          *piVar16 = iVar4;
        }
        plVar25 = (long *)(piVar16 + 2);
        piVar16 = (int *)(**(code **)(puVar32 + 0x10))(2,0x28);
        if (piVar16 == (int *)0x0) {
          *plVar25 = 0;
          piVar13 = (int *)param_1[0x1f];
          uVar28 = *(uint *)(param_1 + 0x20);
          piVar16 = piVar13 + (ulong)uVar28 * 4;
          if ((uVar28 != 0) && (*piVar13 != iVar4)) {
            lVar20 = (ulong)uVar28 * 0x10;
            do {
              lVar20 = lVar20 + -0x10;
              if (lVar20 == 0) {
                piVar13 = piVar16;
                break;
              }
              piVar1 = piVar13 + 4;
              piVar22 = piVar13 + 4;
              piVar13 = piVar1;
            } while (*piVar22 != iVar4);
          }
          if (piVar16 != piVar13) {
            if (piVar13 < piVar16 + -4) {
              do {
                piVar22 = piVar13 + 4;
                *(undefined8 *)piVar13 = *(undefined8 *)piVar22;
                *(undefined8 *)(piVar13 + 2) = *(undefined8 *)(piVar13 + 6);
                piVar13 = piVar22;
              } while (piVar22 < piVar16 + -4);
              uVar28 = *(uint *)(param_1 + 0x20);
            }
            *(uint *)(param_1 + 0x20) = uVar28 - 1;
          }
        }
        else {
          piVar16[6] = -1;
          piVar16[0] = 0;
          piVar16[1] = -1;
          piVar16[4] = 0;
          piVar16[5] = 0;
          piVar16[2] = 0;
          *(ushort *)(piVar16 + 3) = *(ushort *)(piVar16 + 3) & 0xf800;
          piVar16[8] = 0;
          *plVar25 = (long)piVar16;
          uVar14 = *(ushort *)(piVar16 + 3);
          if (((uVar14 & 0x7c) == 4) && (*(long *)(piVar16 + 4) != 0)) {
            (**(code **)(puVar32 + 0x30))(0);
            uVar14 = *(ushort *)(piVar16 + 3);
            piVar16[4] = 0;
            piVar16[5] = 0;
          }
          piVar16[4] = 0;
          piVar16[5] = 0;
          piVar16[6] = -1;
          *piVar16 = iVar4;
          piVar16[1] = -1;
          piVar16[2] = 0;
          *(ushort *)(piVar16 + 3) = uVar14 & 0xf800 | 8;
        }
        lVar20 = *plVar25;
LAB_0352bfa8:
        if (lVar20 == 0) {
          return 2;
        }
      }
      iVar23 = iVar23 + 1;
      puVar17 = local_78;
    } while (iVar23 != iVar10);
  }
  puVar32 = PTR_DAT_047e2fd0;
  local_78 = puVar17 + 1;
  uVar28 = *puVar17;
  uVar29 = (ulong)uVar28;
  if (uVar28 != 0) {
    lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar29 * 0x30);
    if (lVar20 == 0) {
      return 0x34;
    }
    uVar30 = puVar17[1];
    lVar15 = 0;
    local_78 = puVar17 + 2;
    do {
      puVar17 = (uint *)(lVar20 + lVar15);
      lVar15 = lVar15 + 0x30;
      *puVar17 = uVar30;
      puVar17[1] = *local_78;
      puVar17[2] = local_78[1];
      *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(local_78 + 2);
      *(undefined8 *)(puVar17 + 6) = *(undefined8 *)(local_78 + 4);
      *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(local_78 + 6);
      puVar18 = local_78 + 10;
      *(undefined8 *)(puVar17 + 10) = *(undefined8 *)(local_78 + 8);
      local_78 = local_78 + 0xb;
      uVar30 = *puVar18;
    } while (uVar29 * 0x30 != lVar15);
    if (param_1[0x24] != 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
      (**(code **)(puVar32 + 0x30))(0);
      param_1[0x24] = 0;
      *(undefined4 *)((long)param_1 + 300) = 0;
    }
    *(uint *)(param_1 + 0x23) = uVar30;
    lVar15 = (**(code **)(puVar32 + 0x10))(0,uVar29 * 0x1c);
    param_1[0x24] = lVar15;
    if (lVar15 == 0) {
      (**(code **)(puVar32 + 0x30))(0,lVar20);
      return 2;
    }
    *(uint *)((long)param_1 + 300) = uVar28;
    puVar8 = PTR_DAT_047e6fa0;
    pdVar31 = (double *)(lVar20 + 0x18);
    do {
      dVar38 = (pdVar31[1] + pdVar31[2]) - *pdVar31;
      if (((0.0 < pdVar31[2]) && (0.0 < dVar38)) || (*(int *)(pdVar31 + -2) != 0)) {
        uVar30 = *(uint *)(param_1 + 0x25);
        uVar28 = *(uint *)((long)param_1 + 300);
        if (uVar28 <= uVar30) {
          iVar10 = uVar28 + (uVar28 >> 1);
          if (uVar28 == 0) {
            iVar10 = 1;
          }
          uVar28 = iVar10 + uVar28;
          lVar15 = (**(code **)(puVar32 + 0x20))(0,param_1[0x24],(ulong)uVar28 * 0x1c);
          if (lVar15 == 0) goto LAB_0352c234;
          param_1[0x24] = lVar15;
          *(uint *)((long)param_1 + 300) = uVar28;
        }
        if (uVar30 < uVar28) {
          uVar21 = (ulong)*(uint *)(param_1 + 0x25);
          lVar15 = param_1[0x24];
          *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) + 1;
          if (lVar15 != 0) {
            puVar24 = (undefined4 *)(lVar15 + uVar21 * 0x1c);
            *puVar24 = *(undefined4 *)(pdVar31 + -3);
            puVar24[1] = *(undefined4 *)((long)pdVar31 + -0x14);
            puVar24[2] = *(undefined4 *)(pdVar31 + -2);
            dVar34 = (double)NEON_ucvtf((ulong)*(uint *)puVar8);
            dVar34 = dVar34 * 0.001;
            dVar35 = dVar34 * (*pdVar31 + pdVar31[-1]);
            dVar36 = 0.5;
            if (dVar35 <= 0.0) {
              dVar36 = -0.5;
            }
            dVar38 = dVar34 * dVar38;
            dVar37 = 0.5;
            if (dVar38 <= 0.0) {
              dVar37 = -0.5;
            }
            puVar24[3] = (int)(dVar36 + dVar35);
            puVar24[4] = (int)(dVar37 + dVar38);
            dVar38 = 0.5;
            if (pdVar31[2] * dVar34 <= 0.0) {
              dVar38 = -0.5;
            }
            iVar10 = (int)(dVar38 + pdVar31[2] * dVar34);
            puVar24[5] = iVar10;
            if (iVar10 == 0) {
              *(undefined4 *)(lVar15 + uVar21 * 0x1c + 0x18) = 0;
            }
            else {
              dVar38 = 0.5;
              if (*pdVar31 * dVar34 <= 0.0) {
                dVar38 = -0.5;
              }
              iVar23 = (int)(dVar38 + *pdVar31 * dVar34);
              iVar4 = 0;
              if (iVar10 != 0) {
                iVar4 = iVar23 / iVar10;
              }
              iVar23 = iVar23 - iVar4 * iVar10;
              piVar16 = (int *)(lVar15 + uVar21 * 0x1c + 0x18);
              *piVar16 = iVar23;
              if (iVar23 < 0) {
                *piVar16 = iVar23 + iVar10;
              }
            }
          }
        }
      }
LAB_0352c234:
      pdVar31 = pdVar31 + 6;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
    (**(code **)(puVar32 + 0x30))(0,lVar20);
  }
  puVar32 = PTR_DAT_047e2fd0;
  lVar20 = param_1[0x21];
  plVar25 = param_1 + 0x21;
  if (lVar20 != 0) {
    if (*(uint *)(param_1 + 0x22) != 0) {
      lVar15 = (ulong)*(uint *)(param_1 + 0x22) << 5;
      puVar11 = (undefined8 *)(lVar20 + 0x10);
      do {
        if (puVar11[-1] != 0) {
          (**(code **)(puVar32 + 0x30))(0);
          puVar11[-1] = 0;
        }
        lVar15 = lVar15 + -0x20;
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
      } while (lVar15 != 0);
      lVar20 = *plVar25;
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar20);
    *plVar25 = 0;
    param_1[0x22] = 0;
  }
  puVar32 = PTR_DAT_047e2fd0;
  puVar17 = local_78 + 1;
  uVar28 = *local_78;
  uVar29 = (ulong)uVar28;
  local_78 = puVar17;
  if (uVar28 != 0) {
    lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar29 << 5);
    *plVar25 = lVar20;
    if (lVar20 == 0) {
      return 2;
    }
    *(uint *)((long)param_1 + 0x114) = uVar28;
    puVar9 = PTR_DAT_047e6fa0;
    puVar8 = PTR_DAT_047e2fd0;
    uVar30 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x22);
      uVar27 = (uint)uVar29;
      if (uVar19 < uVar27) {
LAB_0352c350:
        if (uVar27 <= uVar19) goto LAB_0352c384;
        puVar18 = (uint *)(param_1[0x21] + (ulong)*(uint *)(param_1 + 0x22) * 0x20);
        *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) + 1;
        if (param_1[0x21] != 0) {
          puVar18[2] = 0;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[5] = 0;
          puVar18[6] = 1;
          puVar17 = local_78;
        }
      }
      else {
        iVar10 = uVar27 + (uVar27 >> 1);
        if (uVar27 == 0) {
          iVar10 = 1;
        }
        uVar27 = iVar10 + uVar27;
        lVar20 = (**(code **)(puVar32 + 0x20))(0,*plVar25,(ulong)uVar27 << 5);
        if (lVar20 != 0) {
          param_1[0x21] = lVar20;
          *(uint *)((long)param_1 + 0x114) = uVar27;
          goto LAB_0352c350;
        }
LAB_0352c384:
        puVar18 = (uint *)0x0;
      }
      uVar3 = *puVar17;
      uVar27 = puVar17[1];
      uVar19 = puVar17[2];
      puVar17 = puVar17 + 3;
      local_78 = puVar17;
      if (uVar19 == 0) {
        puVar32 = PTR_DAT_047e2fd0;
      }
      else {
        if (*(long *)(puVar18 + 2) != 0) {
          (**(code **)(puVar8 + 0x30))(0);
          puVar18[2] = 0;
          puVar18[3] = 0;
        }
        *puVar18 = uVar3;
        puVar18[1] = uVar27;
        puVar18[6] = 1;
        puVar18[4] = uVar19 + 2;
        puVar18[5] = 0;
        lVar20 = (**(code **)(puVar8 + 0x10))(0,(uVar19 + 2) * 0x14);
        puVar33 = puVar18 + 2;
        *(long *)puVar33 = lVar20;
        if (lVar20 == 0) {
          puVar18[4] = 0;
          return 2;
        }
        puVar18[5] = 0;
        memcpy((void *)(lVar20 + 0xc),puVar17,(ulong)(uVar19 * 0xc));
        *(undefined4 *)(*(long *)(puVar18 + 2) + 8) = 9;
        **(undefined4 **)(puVar18 + 2) = 0xff7fffff;
        *(undefined4 *)(*(long *)(puVar18 + 2) + 4) = *(undefined4 *)(*(long *)(puVar18 + 2) + 0x10)
        ;
        *(undefined4 *)(*(long *)(puVar18 + 2) + (ulong)(puVar18[4] - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*(long *)(puVar18 + 2) + (ulong)(puVar18[4] - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*(long *)(puVar18 + 2) + (ulong)(puVar18[4] - 1) * 0xc + 4) =
             *(undefined4 *)(*(long *)(puVar18 + 2) + (ulong)(puVar18[4] - 2) * 0xc + 4);
        FUN_0346cdac(puVar33);
        if ((puVar18[4] & 0xfffffffd) != 0) {
          uVar29 = 0;
          lVar20 = 0xc;
          do {
            uVar29 = uVar29 + 1;
            dVar38 = (double)NEON_ucvtf((ulong)*(uint *)puVar9);
            dVar38 = dVar38 * (double)*(float *)(*(long *)(puVar18 + 2) + lVar20);
            dVar34 = 0.5;
            if (dVar38 <= 0.0) {
              dVar34 = -0.5;
            }
            *(float *)(*(long *)(puVar18 + 2) + lVar20) = (float)(int)(dVar34 + dVar38);
            uVar27 = 0;
            if (puVar18[4] != 0) {
              uVar27 = puVar18[4] - 2;
            }
            lVar20 = lVar20 + 0xc;
          } while (uVar29 < uVar27);
        }
        FUN_0346cdac(puVar33);
        puVar32 = puVar8;
        local_78 = local_78 + (ulong)uVar19 * 3;
      }
      uVar30 = uVar30 + 1;
      if (uVar30 == uVar28) break;
      uVar29 = (ulong)*(uint *)((long)param_1 + 0x114);
      puVar17 = local_78;
    } while( true );
  }
  uVar12 = FUN_034ae500(param_1,&local_78,&local_84,param_5 & 1);
  if ((int)uVar12 != 1) {
    return uVar12;
  }
  if ((param_5 & 1) != 0) {
    return uVar12;
  }
  puVar17 = (uint *)((long)local_78 + 1);
  bVar6 = (byte)*local_78;
  uVar28 = (uint)bVar6;
  local_78 = puVar17;
  if (*(uint *)((long)param_1 + 0x134) != (uint)bVar6) {
    lVar20 = param_1[0x28];
    if (lVar20 != 0) {
      if (*(long *)(lVar20 + 0x10) != 0) {
        *(undefined4 *)(lVar20 + 0x18) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *(undefined8 *)(lVar20 + 0x10) = 0;
        *(undefined4 *)(lVar20 + 0x1c) = 0;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,lVar20);
      param_1[0x28] = 0;
    }
    if (bVar6 == 3) {
      puVar11 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x40);
      if (puVar11 == (undefined8 *)0x0) {
        param_1[0x28] = 0;
        *(uint *)((long)param_1 + 0x134) = uVar28;
        return 0x34;
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(byte *)(puVar11 + 4) = *(byte *)(puVar11 + 4) & 0xe0 | 8;
      puVar11[2] = 0;
      puVar11[3] = 0;
      param_1[0x28] = (long)puVar11;
    }
    *(uint *)((long)param_1 + 0x134) = uVar28;
  }
  if (uVar28 == 3) {
    puVar26 = (undefined4 *)param_1[0x28];
    puVar26[2] = (uint)(byte)*local_78;
    puVar24 = (undefined4 *)((long)local_78 + 5);
    *puVar26 = *(undefined4 *)((long)local_78 + 1);
    local_78 = (uint *)((long)local_78 + 9);
    puVar26[1] = *puVar24;
    if (*(long *)(puVar26 + 4) != 0) {
      puVar26[6] = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *(undefined8 *)(puVar26 + 4) = 0;
      puVar26[7] = 0;
    }
    puVar32 = PTR_DAT_047e2fd0;
    puVar17 = local_78 + 1;
    uVar28 = *local_78;
    uVar29 = (ulong)uVar28;
    if (uVar28 != 0) {
      local_78 = puVar17;
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar29 << 2);
      *(long *)(puVar26 + 4) = lVar20;
      if (lVar20 == 0) {
        return 2;
      }
      puVar26[7] = uVar28;
      do {
        uVar28 = uVar28 - 1;
        uVar27 = puVar26[6];
        uVar30 = (uint)uVar29;
        if (uVar27 < uVar30) {
LAB_0352c6e8:
          if (uVar30 <= uVar27) goto LAB_0352c708;
          puVar18 = (uint *)(*(long *)(puVar26 + 4) + (ulong)(uint)puVar26[6] * 4);
          puVar26[6] = puVar26[6] + 1;
        }
        else {
          iVar10 = uVar30 + (uVar30 >> 1);
          if (uVar30 == 0) {
            iVar10 = 1;
          }
          uVar30 = iVar10 + uVar30;
          lVar20 = (**(code **)(puVar32 + 0x20))(0,*(undefined8 *)(puVar26 + 4),(ulong)uVar30 << 2);
          if (lVar20 != 0) {
            *(long *)(puVar26 + 4) = lVar20;
            puVar26[7] = uVar30;
            goto LAB_0352c6e8;
          }
LAB_0352c708:
          puVar18 = (uint *)0x0;
        }
        puVar17 = local_78 + 1;
        *puVar18 = *local_78;
        if (uVar28 == 0) break;
        uVar29 = (ulong)(uint)puVar26[7];
        local_78 = puVar17;
      } while( true );
    }
    lVar20 = param_1[0x28];
    *(uint *)(lVar20 + 0x28) = *puVar17;
    *(uint *)(lVar20 + 0x2c) = puVar17[1];
    uVar29 = (ulong)*(uint *)PTR_DAT_047e6fa0;
    auVar7 = SEXT816((long)(uVar29 * (long)(int)puVar17[2])) * SEXT816(0x20c49ba5e353f7cf);
    *(int *)(lVar20 + 0x30) = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
    *(byte *)(lVar20 + 0x20) = *(byte *)(lVar20 + 0x20) & 0xe0 | (byte)puVar17[3] & 0x1f;
    *(uint *)(lVar20 + 0x24) = puVar17[4];
    *(uint *)(lVar20 + 0x34) = puVar17[5];
    *(uint *)(lVar20 + 0x38) = puVar17[6];
    local_78 = puVar17 + 8;
    auVar7 = SEXT816((long)((long)(int)puVar17[7] * uVar29)) * SEXT816(0x20c49ba5e353f7cf);
    *(int *)(lVar20 + 0x3c) = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
  }
  else {
    uVar29 = (ulong)*(uint *)PTR_DAT_047e6fa0;
  }
  dVar38 = (double)uVar29 * 0.001 * (double)(*(float *)PTR_DAT_047e7530 * (float)(int)*local_78);
  dVar34 = 0.5;
  if (dVar38 <= 0.0) {
    dVar34 = -0.5;
  }
  *(int *)(param_1 + 0x26) = (int)(dVar34 + dVar38);
  uVar28 = *(uint *)(param_1 + 0x20);
  if (uVar28 != 0) {
    lVar15 = param_1[0x1f];
    lVar20 = lVar15;
    do {
      if (*(short *)(*(long *)(lVar20 + 8) + 0x1a) != 0x10) {
        *(int *)(*(long *)(lVar20 + 8) + 0x20) = (int)param_1[0x26];
        lVar15 = param_1[0x1f];
        uVar28 = *(uint *)(param_1 + 0x20);
      }
      lVar20 = lVar20 + 0x10;
    } while (lVar20 != lVar15 + (ulong)uVar28 * 0x10);
  }
  return 1;
}


