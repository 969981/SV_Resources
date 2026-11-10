/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01635c8c; name: FUN_01635c8c
 */


void FUN_01635c8c(long param_1,char *param_2,long *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  byte bVar19;
  uint uVar20;
  long *plVar21;
  undefined2 *puVar22;
  int *piVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  uint uVar27;
  byte *pbVar28;
  long *plVar29;
  uint uVar30;
  undefined8 uVar31;
  ushort *puVar32;
  uint local_138;
  char local_118 [4];
  ushort local_114 [2];
  undefined4 local_110 [2];
  undefined4 *local_108;
  undefined2 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_ac;
  int local_a4;
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_6f;
  
  local_118[0] = '\0';
  plVar21 = (long *)*param_3;
  puVar22 = (undefined2 *)param_3[2];
  piVar23 = (int *)param_3[3];
  param_2[0] = '\0';
  param_2[1] = '\0';
  *(undefined1 *)(param_3[1] + 0xa8) = 0;
  lVar24 = param_3[1];
  bVar4 = *(byte *)(lVar24 + 0xa8);
  if (bVar4 < *(byte *)(lVar24 + 0xa6)) {
    *(byte *)(lVar24 + 0xa8) = bVar4 + 1;
    plVar29 = *(long **)(lVar24 + (ulong)bVar4 * 8);
    if (plVar29 != (long *)0x0) {
      local_138 = 0;
      do {
        uVar12 = (**(code **)(*plVar29 + 0x588))(plVar29);
        if ((uVar12 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = FUN_01482688(*(undefined8 *)(param_1 + 0x38),plVar21,plVar29,*puVar22);
          bVar4 = bVar4 ^ 1;
        }
        iVar9 = (**(code **)(*plVar29 + 0x98))(plVar29);
        uVar12 = (ulong)local_138;
        *(int *)(param_2 + (ulong)local_138 * 0xc + 8) = iVar9;
        uVar2 = *puVar22;
        uVar30 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
        if ((uVar30 >> 8 & 1) == 0) {
joined_r0x016364f8:
          if (((uVar30 >> 0xb & 1) != 0) &&
             (uVar13 = (**(code **)(*plVar29 + 0x78))(plVar29), (uVar13 & 1) == 0)) {
            uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
            piVar14 = (int *)FUN_011e2dd4(*(undefined8 *)
                                           (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) +
                                                     8) + 0x50),uVar10);
            if (piVar14 == (int *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *piVar14;
              if (4 < iVar9) {
                iVar9 = 0;
              }
            }
            FUN_0124e498(param_1,iVar9);
            cVar8 = FUN_0294404c();
            if (cVar8 == '\0') goto LAB_0163655c;
          }
          bVar5 = FUN_0292df44(*(undefined8 *)(param_1 + 0x38),plVar21,plVar29,uVar2,local_118);
        }
        else {
          uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
          uVar10 = FUN_0154e784(param_1,uVar10);
          uVar13 = FUN_0210b8a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar10);
          if ((uVar13 & 1) == 0) {
            uVar30 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
            goto joined_r0x016364f8;
          }
LAB_0163655c:
          bVar5 = 0;
        }
        pbVar28 = (byte *)(param_2 + uVar12 * 0xc + 0xe);
        *pbVar28 = *pbVar28 & 0xfc | bVar5 & 1 | local_118[0] << 1;
        iVar9 = *(int *)(param_2 + (ulong)local_138 * 0xc + 8);
        piVar14 = piVar23;
        if (((((((*piVar23 == iVar9) || (piVar14 = piVar23 + 2, piVar23[2] == iVar9)) ||
               (piVar14 = piVar23 + 4, piVar23[4] == iVar9)) ||
              ((piVar14 = piVar23 + 6, piVar23[6] == iVar9 ||
               (piVar14 = piVar23 + 8, piVar23[8] == iVar9)))) ||
             ((piVar14 = piVar23 + 10, piVar23[10] == iVar9 ||
              ((piVar14 = piVar23 + 0xc, piVar23[0xc] == iVar9 ||
               (piVar14 = piVar23 + 0xe, piVar23[0xe] == iVar9)))))) ||
            (piVar14 = piVar23 + 0x10, piVar23[0x10] == iVar9)) ||
           (piVar14 = piVar23 + 0x12, piVar23[0x12] == iVar9)) {
          cVar8 = (char)piVar14[1];
        }
        else {
          cVar8 = '\a';
        }
        pcVar25 = param_2 + uVar12 * 0xc + 0xc;
        *pcVar25 = cVar8;
        lVar24 = param_3[4];
        iVar9 = (**(code **)(*plVar29 + 0x98))(plVar29);
        lVar26 = *(long *)(*(long *)(param_1 + 0x78) + 0xc80);
        uVar6 = FUN_0126ec0c(*(undefined8 *)(lVar26 + 0x38));
        if (iVar9 != 0) {
          uVar6 = FUN_0126ee6c(*(undefined8 *)(lVar26 + 0x38),iVar9);
        }
        uVar13 = FUN_0107c344(*(undefined8 *)(param_1 + 0x38),plVar21,plVar29,puVar22,cVar8,
                              (int)lVar24,bVar5 & 1,0,bVar4 & 1,uVar6,local_114);
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
          lVar24 = *(long *)(param_1 + 0x10);
          uVar10 = (**(code **)(*plVar21 + 0x98))();
          piVar14 = (int *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar24 + 0x290) + 8) + 0x50),uVar10);
          if ((piVar14 != (int *)0x0) && (*piVar14 == 1)) {
            lVar24 = *(long *)(param_1 + 0x10);
            uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
            piVar14 = (int *)FUN_011e2dd4(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar24 + 0x290) + 8) + 0x50),uVar10)
            ;
            if (((piVar14 == (int *)0x0) || (*piVar14 != 1)) &&
               (uVar15 = (**(code **)(*plVar21 + 0x510))(plVar21,0x1b), (uVar15 & 1) != 0)) {
              local_114[0] = 9999;
            }
          }
        }
        if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
           (uVar15 = (**(code **)(*plVar21 + 0x4d0))(plVar21,0x1b), (uVar15 & 1) != 0)) {
          uVar30 = (uint)local_114[0] * 0x96;
          local_114[0] = (ushort)(uVar30 / 100);
          if (0x31 < uVar30 % 100) {
            local_114[0] = (short)(uVar30 / 100) + 1;
          }
          uVar10 = (**(code **)(*plVar21 + 0x98))();
          lVar24 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar10);
          if (lVar24 != 0) {
            FUN_01240198(*(undefined8 *)(param_1 + 0x20),lVar24,0x1b);
          }
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01636098:
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
            lVar24 = *(long *)(param_1 + 0x10);
            uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
            piVar14 = (int *)FUN_011e2dd4(*(undefined8 *)
                                           (*(long *)(*(long *)(lVar24 + 0x290) + 8) + 0x50),uVar10)
            ;
            if ((piVar14 != (int *)0x0) && (*piVar14 == 1)) {
              lVar24 = *(long *)(*(long *)(param_1 + 8) + 0x38);
              lVar26 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 0x28);
              uVar3 = *(ushort *)(lVar24 + lVar26 * 10 + 0x6b4);
              uVar30 = (uint)uVar3;
              if (uVar3 != 0) {
                puVar16 = (undefined8 *)(**(code **)plVar21[5])();
                if (((*PTR_DAT_047d3f00 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
                  uVar17 = FUN_01b07aa4();
                  *(undefined8 *)PTR_DAT_047d3f08 = uVar17;
                  __cxa_guard_release(PTR_DAT_047d3f00);
                }
                for (; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
                  if (puVar16 == (undefined8 *)PTR_DAT_047d3f08) {
                    if (*(char *)((long)plVar21 + 0x714) != '\0') {
                      cVar8 = *(char *)(puVar22 + 4);
                      cVar7 = FUN_02b71f50(*(undefined1 *)((long)plVar21 + 0x715));
                      lVar24 = lVar24 + lVar26 * 10;
                      if (cVar8 == cVar7) {
                        uVar20 = (uint)*(ushort *)(lVar24 + 0x6b6);
                      }
                      else {
                        uVar20 = (uint)*(ushort *)(lVar24 + 0x6b8);
                      }
                      goto LAB_016361b8;
                    }
                    break;
                  }
                }
                goto LAB_016361c0;
              }
            }
          }
        }
        else {
          lVar24 = *(long *)(param_1 + 0x10);
          iVar9 = (**(code **)(*plVar29 + 0x98))(plVar29);
          lVar24 = *(long *)(lVar24 + 0x310);
          if (((*(byte *)(*(long *)(*(long *)(lVar24 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
             (*(int *)(lVar24 + 0x18) == 0)) {
            uVar17 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar24 + 0x10) + 0x30),1);
            plVar18 = (long *)FUN_0124c614(uVar17,0);
            if (plVar18 != (long *)0x0) {
              uVar10 = (**(code **)(*plVar18 + 0x98))();
              *(undefined4 *)(lVar24 + 0x18) = uVar10;
            }
          }
          if ((*(int *)(lVar24 + 0x18) != iVar9) ||
             (lVar24 = *(long *)(*(long *)(param_1 + 0x10) + 0x310), *(int *)(lVar24 + 0x70) != 1))
          goto LAB_01636098;
          uVar30 = (uint)*(ushort *)(lVar24 + 0x2a);
          if (*(ushort *)(lVar24 + 0x2a) != 0) {
            puVar16 = (undefined8 *)(**(code **)plVar21[5])();
            if (((*PTR_DAT_047d3f00 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
              uVar17 = FUN_01b07aa4();
              *(undefined8 *)PTR_DAT_047d3f08 = uVar17;
              __cxa_guard_release(PTR_DAT_047d3f00);
            }
            for (; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
              if (puVar16 == (undefined8 *)PTR_DAT_047d3f08) {
                if (*(char *)((long)plVar21 + 0x714) != '\0') {
                  cVar8 = *(char *)(puVar22 + 4);
                  cVar7 = FUN_02b71f50(*(undefined1 *)((long)plVar21 + 0x715));
                  if (cVar8 == cVar7) {
                    uVar20 = (uint)*(ushort *)(lVar24 + 0x2c);
                  }
                  else {
                    uVar20 = (uint)*(ushort *)(lVar24 + 0x2e);
                  }
LAB_016361b8:
                  if (uVar20 != 0) {
                    uVar30 = uVar20;
                  }
                }
                break;
              }
            }
LAB_016361c0:
            uVar30 = uVar30 * local_114[0];
            local_114[0] = (ushort)(uVar30 / 100);
            if (0x31 < uVar30 % 100) {
              local_114[0] = (short)(uVar30 / 100) + 1;
            }
          }
        }
        bVar1 = *pbVar28;
        bVar5 = 4;
        if ((uVar13 & 1) == 0) {
          bVar5 = 0;
        }
        bVar19 = bVar1 & 0xfb | bVar5;
        *pbVar28 = bVar19;
        uVar30 = (uint)local_114[0];
        puVar32 = (ushort *)(param_2 + uVar12 * 0xc + 4);
        *puVar32 = local_114[0];
        if ((uVar13 & 1) != 0) {
          bVar19 = bVar1 & 0xf8 | bVar5;
          *pbVar28 = bVar19;
          *pcVar25 = '\a';
        }
        bVar5 = 8;
        if ((bVar4 & 1) == 0) {
          bVar5 = 0;
        }
        *pbVar28 = bVar19 & 0xf7 | bVar5;
        uVar20 = (uint)local_114[0];
        if ((bVar4 & 1) == 0) {
          uVar11 = (**(code **)(*plVar29 + 0x108))(plVar29);
          uVar11 = uVar11 & 0xffff;
          uVar27 = uVar11;
          if (uVar30 <= uVar11) {
            uVar27 = uVar20;
          }
          iVar9 = (**(code **)(*plVar29 + 0x560))(plVar29,6);
          if ((iVar9 != 0) &&
             (uVar13 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                                    plVar29), (uVar13 & 1) == 0)) {
            uVar13 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
            uVar30 = (uint)uVar13;
            if ((uVar30 >> 0xc & 1) == 0) {
              if ((uVar30 >> 0x11 & 1) == 0) {
                if (((uVar13 >> 0x21 & 1) != 0) &&
                   (*(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 0x28) < 4))
                goto LAB_01636364;
              }
              else {
                puVar16 = (undefined8 *)(**(code **)plVar29[5])(plVar29 + 5);
                if (((*PTR_DAT_047d3f00 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
                  uVar17 = FUN_01b07aa4();
                  *(undefined8 *)PTR_DAT_047d3f08 = uVar17;
                  __cxa_guard_release(PTR_DAT_047d3f00);
                }
                for (; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
                  if (puVar16 == (undefined8 *)PTR_DAT_047d3f08) {
                    uVar13 = FUN_01242e68(*(undefined8 *)(param_1 + 8),
                                          *(undefined8 *)(param_1 + 0x10),plVar29);
                    if (((uVar13 & 1) == 0) && (*(char *)((long)plVar29 + 0x714) != '\0'))
                    goto LAB_01636364;
                    break;
                  }
                }
              }
            }
            else {
LAB_01636364:
              iVar9 = (**(code **)(*plVar29 + 0x560))(plVar29,6);
              uVar30 = (**(code **)(*plVar29 + 0x110))(plVar29);
              uVar20 = iVar9 * (uVar30 & 0xffff);
              uVar30 = uVar20 / 100;
              if (0x31 < uVar20 % 100) {
                uVar30 = uVar20 / 100 + 1;
              }
              if (uVar11 - uVar27 <= uVar30) {
                uVar27 = uVar11 - uVar30;
                uVar31 = *(undefined8 *)(param_1 + 0x20);
                uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
                uVar17 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar10);
                FUN_01248470(uVar31,uVar17,0x19);
                if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 1 & 1) != 0) {
                  uVar17 = *(undefined8 *)(param_1 + 0x48);
                  uVar10 = (**(code **)(*plVar29 + 0x98))(plVar29);
                  FUN_01248894(uVar17,uVar10);
                }
              }
            }
          }
          local_f8 = CONCAT22(local_f8._2_2_,(short)uVar27);
          cVar8 = FUN_0293355c(*(undefined8 *)(param_1 + 0x38),plVar21,plVar29,1,&local_f8);
          param_2[uVar12 * 0xc + 0xd] = cVar8;
          *puVar32 = (ushort)local_f8;
          *param_2 = *param_2 + '\x01';
        }
        else {
          uVar30 = (**(code **)(*plVar29 + 0x590))(plVar29);
          if (uVar20 <= uVar30) {
            uVar30 = uVar20;
          }
          *puVar32 = (ushort)uVar30;
          param_2[uVar12 * 0xc + 0xd] = '\0';
          param_2[1] = param_2[1] + '\x01';
        }
        if (param_3[5] != 0) {
          FUN_0297b2d4(param_3[5],*(undefined8 *)(param_1 + 0x10),plVar21,plVar29,*pcVar25);
        }
        lVar24 = param_3[1];
        bVar4 = *(byte *)(lVar24 + 0xa8);
        if (*(byte *)(lVar24 + 0xa6) <= bVar4) break;
        local_138 = local_138 + 1;
        *(byte *)(lVar24 + 0xa8) = bVar4 + 1;
        plVar29 = *(long **)(lVar24 + (ulong)bVar4 * 8);
      } while (plVar29 != (long *)0x0);
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    plVar21 = (long *)FUN_010a0028(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x330) + 8) +
                                    0x30),1,0);
    uVar12 = (**(code **)(*plVar21 + 0x510))(plVar21,0x19);
    if (((uVar12 & 1) != 0) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0)) {
      uVar12 = (ulong)*(byte *)(*(long *)(param_1 + 0x48) + 0x2420);
      if (uVar12 != 0) {
        piVar23 = (int *)(*(long *)(param_1 + 0x48) + 0xc);
        do {
          if (*piVar23 == 0xf) {
            return;
          }
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 0x23;
        } while (uVar12 != 0);
      }
      plVar21 = (long *)FUN_010a0028(*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x330) + 8) +
                                      0x30),1,0);
      memset(&local_f8,0,0x8c);
      local_70 = 5;
      local_74 = 0x5400000;
      local_f4 = 0xf;
      local_ac = 2;
      local_f8 = (**(code **)(*plVar21 + 0x98))(plVar21);
      uVar10 = (**(code **)(*plVar21 + 0x98))(plVar21);
      piVar23 = (int *)FUN_011e2dd4(*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                     0x50),uVar10);
      if (piVar23 == (int *)0x0) {
        local_70 = 0;
      }
      else {
        iVar9 = *piVar23;
        if (4 < iVar9) {
          iVar9 = 0;
        }
        local_70 = (undefined1)iVar9;
      }
      local_6f = 0;
      local_100 = 0x103;
      local_108 = &local_f8;
      FUN_0123ecdc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x120),local_110,&local_108);
      local_74 = local_110[0];
      lVar24 = *(long *)(*(long *)(param_1 + 0x10) + 400);
      local_a4 = *(int *)(lVar24 + 8);
      if (local_a4 == 0) {
        local_a4 = 1;
        *(undefined4 *)(lVar24 + 8) = 1;
      }
      *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
      FUN_01920eb8(*(undefined8 *)(param_1 + 0x48),&local_f8);
    }
  }
  return;
}


