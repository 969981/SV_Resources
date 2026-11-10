/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033af270; name: FUN_033af270
 */


undefined1  [16] FUN_033af270(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong *puVar12;
  long *plVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 *local_360;
  undefined4 local_358;
  int local_354;
  undefined1 local_350 [128];
  undefined4 local_2d0;
  undefined1 *local_2c8;
  undefined4 local_2c0;
  int local_2bc;
  undefined1 local_2b8 [128];
  undefined4 local_238;
  undefined1 *local_230;
  undefined4 local_228;
  int local_224;
  undefined1 local_220 [128];
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  int local_18c;
  undefined1 local_188 [128];
  undefined4 local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0 [128];
  undefined4 local_70;
  
  plVar1 = (long *)(param_1 + 0x18);
  iVar2 = FUN_03376354(plVar1);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar17 = *(long *)(*(long *)(lVar11 + 0x40) + (long)iVar2 * 8);
  if (lVar17 != 0) {
    *(undefined8 *)(*(long *)(lVar11 + 0x40) + (long)iVar2 * 8) = 0;
    lVar11 = *plVar1;
    iVar3 = *(int *)(lVar11 + 0x58);
    if (iVar3 <= *(int *)(lVar11 + 100)) {
      iVar15 = 8;
      if (iVar3 != 0) {
        iVar15 = iVar3 << 1;
      }
      FUN_03379490(lVar11 + 0x50,iVar15);
      iVar3 = *(int *)(lVar11 + 0x58);
    }
    iVar15 = *(int *)(lVar11 + 0x60);
    if (iVar15 == iVar3) {
      iVar15 = 0;
      *(undefined4 *)(lVar11 + 0x60) = 0;
    }
    plVar23 = (long *)(*(long *)(lVar11 + 0x50) + (long)iVar15 * 0x10);
    *plVar23 = lVar17;
    *(int *)(plVar23 + 1) = iVar2;
    *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + 1;
    *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    lVar11 = *plVar1;
  }
  if (*(int *)(lVar11 + 100) != 0) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    iVar15 = *(int *)(lVar11 + 0x5c);
    puVar18 = *(ulong **)(*(long *)(lVar11 + 0x50) + (long)iVar15 * 0x10);
    iVar3 = 0;
    if (iVar15 + 1 != *(int *)(lVar11 + 0x58)) {
      iVar3 = iVar15 + 1;
    }
    *(int *)(lVar11 + 0x5c) = iVar3;
    *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + -1;
    if (puVar18 != (ulong *)0x0) {
      do {
        iVar3 = FUN_03376354(plVar1,puVar18);
        if (*(int *)(param_1 + 0x28) < iVar3) {
          *(int *)(param_1 + 0x28) = iVar3;
        }
        uVar9 = (uint)*puVar18;
        local_224 = -0x7fffff80;
        local_228 = 1;
        local_1a0 = 1;
        local_220[0] = 0;
        local_230 = local_220;
        FUN_031c6c18(&local_230,"<type id=\"type%d\">");
        FUN_033adeb8(lVar17,local_230);
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        puVar21 = PTR_PTR_047d1a50;
        if ((uVar9 >> 3 & 1) != 0) {
          if (((uint)*puVar18 >> 3 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = puVar18[(ulong)(byte)POPCOUNT((byte)*puVar18 & 7) + 2];
          }
          local_f8 = 0;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_100 = local_f0;
          FUN_031c6afc(&local_100,uVar6,0xffffffff);
          FUN_031c7de4(&local_100,&DAT_03c8299e,"&amp;",1);
          FUN_031c7de4(&local_100,&DAT_03bd47a0,&DAT_03c81fb3,1);
          FUN_031c7de4(&local_100,&DAT_03c32803,&DAT_03c31de0,1);
          FUN_031c7de4(&local_100,&DAT_03c246d6,"&quot;",1);
          FUN_031c7de4(&local_100,&DAT_03c24414,"&apos;",1);
          local_18c = -0x7fffff80;
          local_190 = 1;
          local_108 = 1;
          local_188[0] = 0;
          local_198 = local_188;
          FUN_031c6c18(&local_198,"<name value=\"%s\"/>",local_100);
          FUN_033adeb8(lVar17,local_198);
          local_190 = 0;
          if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        uVar6 = puVar18[1];
        if (uVar6 != 0) {
          iVar3 = FUN_03376354(plVar1,uVar6);
          lVar11 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8);
          if (lVar11 != 0) {
            *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8) = 0;
            lVar19 = *plVar1;
            iVar15 = *(int *)(lVar19 + 0x58);
            if (iVar15 <= *(int *)(lVar19 + 100)) {
              iVar16 = 8;
              if (iVar15 != 0) {
                iVar16 = iVar15 << 1;
              }
              FUN_03379490(lVar19 + 0x50,iVar16);
              iVar15 = *(int *)(lVar19 + 0x58);
            }
            iVar16 = *(int *)(lVar19 + 0x60);
            if (iVar16 == iVar15) {
              iVar16 = 0;
              *(undefined4 *)(lVar19 + 0x60) = 0;
            }
            plVar23 = (long *)(*(long *)(lVar19 + 0x50) + (long)iVar16 * 0x10);
            *plVar23 = lVar11;
            *(int *)(plVar23 + 1) = iVar3;
            *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + 1;
            *(int *)(lVar19 + 100) = *(int *)(lVar19 + 100) + 1;
          }
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_f0[0] = 0;
          local_100 = local_f0;
          uVar5 = FUN_031e12d8(uVar6,&local_100,0,0);
          local_18c = -0x7fffff80;
          local_190 = 1;
          local_108 = 1;
          local_188[0] = 0;
          local_198 = local_188;
          FUN_031c6c18(&local_198,"<%s id=\"type%u\" /> <!-- %s -->","parent",iVar3,uVar5);
          FUN_033adeb8(lVar17,local_198);
          local_190 = 0;
          if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        if ((uVar9 & 1) != 0) {
          if ((*puVar18 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (uint)puVar18[2];
          }
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_f0[0] = 0;
          local_100 = local_f0;
          FUN_033b034c(puVar18,uVar4,&local_100);
          local_18c = -0x7fffff80;
          local_190 = 1;
          local_108 = 1;
          local_188[0] = 0;
          local_198 = local_188;
          FUN_031c6c18(&local_198,"<format value=\"%u\"/> <!-- %s -->",uVar4,local_100);
          FUN_033adeb8(lVar17,local_198);
          if ((uVar4 & 0x1f) == 3) {
            iVar3 = FUN_03376354(plVar1,PTR_DAT_047e6888);
            lVar11 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8);
            if (lVar11 != 0) {
              *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8) = 0;
              lVar19 = *plVar1;
              iVar15 = *(int *)(lVar19 + 0x58);
              if (iVar15 <= *(int *)(lVar19 + 100)) {
                iVar16 = 8;
                if (iVar15 != 0) {
                  iVar16 = iVar15 << 1;
                }
                FUN_03379490(lVar19 + 0x50,iVar16);
                iVar15 = *(int *)(lVar19 + 0x58);
              }
              iVar16 = *(int *)(lVar19 + 0x60);
              if (iVar16 == iVar15) {
                iVar16 = 0;
                *(undefined4 *)(lVar19 + 0x60) = 0;
              }
              plVar23 = (long *)(*(long *)(lVar19 + 0x50) + (long)iVar16 * 0x10);
              *plVar23 = lVar11;
              *(int *)(plVar23 + 1) = iVar3;
              *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + 1;
              *(int *)(lVar19 + 100) = *(int *)(lVar19 + 100) + 1;
            }
          }
          local_190 = 0;
          if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        if ((uVar9 >> 1 & 1) != 0) {
          if ((*puVar18 & 1) == 0) {
            puVar12 = puVar18;
            do {
              puVar12 = (ulong *)puVar12[1];
            } while ((*puVar12 & 1) == 0);
            if ((puVar12[2] & 0x1f) != 8) {
              puVar12 = puVar18;
              do {
                puVar12 = (ulong *)puVar12[1];
              } while ((*puVar12 & 1) == 0);
              uVar6 = puVar12[2];
              goto LAB_033af8b8;
            }
LAB_033af89c:
            puVar12 = puVar18;
            do {
              if (((byte)*puVar12 >> 1 & 1) != 0) {
                uVar6 = puVar12[3];
                goto LAB_033af8e4;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar6 = 0;
LAB_033af8e4:
            uVar4 = FUN_03376354(plVar1,uVar6);
            lVar11 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)(int)uVar4 * 8);
            if (lVar11 != 0) {
              *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)(int)uVar4 * 8) = 0;
              lVar19 = *plVar1;
              iVar3 = *(int *)(lVar19 + 0x58);
              if (iVar3 <= *(int *)(lVar19 + 100)) {
                iVar15 = 8;
                if (iVar3 != 0) {
                  iVar15 = iVar3 << 1;
                }
                FUN_03379490(lVar19 + 0x50,iVar15);
                iVar3 = *(int *)(lVar19 + 0x58);
              }
              iVar15 = *(int *)(lVar19 + 0x60);
              if (iVar15 == iVar3) {
                iVar15 = 0;
                *(undefined4 *)(lVar19 + 0x60) = 0;
              }
              plVar23 = (long *)(*(long *)(lVar19 + 0x50) + (long)iVar15 * 0x10);
              *plVar23 = lVar11;
              *(uint *)(plVar23 + 1) = uVar4;
              *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + 1;
              *(int *)(lVar19 + 100) = *(int *)(lVar19 + 100) + 1;
            }
            puVar12 = puVar18;
            do {
              if (((byte)*puVar12 >> 1 & 1) != 0) {
                uVar6 = puVar12[3];
                goto LAB_033af9cc;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar6 = 0;
          }
          else {
            uVar6 = puVar18[2];
            if ((uVar6 & 0x1f) == 8) goto LAB_033af89c;
LAB_033af8b8:
            if ((uVar6 & 0x1f) != 6) goto LAB_033af9dc;
            puVar12 = puVar18;
            do {
              if (((byte)*puVar12 >> 1 & 1) != 0) {
                uVar6 = puVar12[3];
                goto LAB_033af9a0;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar6 = 0;
LAB_033af9a0:
            uVar4 = FUN_03376354(plVar1,uVar6);
            puVar12 = puVar18;
            do {
              if (((byte)*puVar12 >> 1 & 1) != 0) {
                uVar6 = puVar12[3];
                goto LAB_033af9cc;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar6 = 0;
          }
LAB_033af9cc:
          FUN_033b0234(lVar17,"subtype",uVar6,uVar4 & 0xffff);
        }
LAB_033af9dc:
        if ((uVar9 >> 4 & 1) != 0) {
          if (((uint)*puVar18 >> 4 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = puVar18[(ulong)(byte)POPCOUNT((byte)*puVar18 & 0xf) + 2];
          }
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_f0[0] = 0;
          local_100 = local_f0;
          FUN_031c6c18(&local_100,"<version value=\"%u\"/>",uVar6);
          FUN_033adeb8(lVar17,local_100);
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        if ((uVar9 >> 0xf & 1) != 0) {
          uVar4 = (uint)*puVar18;
          puVar12 = puVar18;
          if ((uVar4 >> 0xf & 1) == 0) {
            do {
              puVar12 = (ulong *)puVar12[1];
              uVar4 = (uint)*puVar12;
            } while ((uVar4 >> 0xf & 1) == 0);
          }
          uVar6 = CONCAT44(uVar4,uVar4) & 0x7fff00007fff;
          puVar20 = (undefined8 *)
                    puVar12[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2]
          ;
          uVar8 = *(ushort *)(puVar20 + 1);
          uVar6 = (ulong)uVar8;
          local_f0[0] = 0;
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_100 = local_f0;
          FUN_031c6c18(&local_100,"<parameters count=\"%d\">",uVar6);
          FUN_033adeb8(lVar17,local_100);
          iVar3 = *(int *)(lVar17 + 8) + 1;
          *(int *)(lVar17 + 8) = iVar3;
          if (uVar8 != 0) {
            do {
              puVar22 = puVar20 + 2;
              if (*(char *)puVar20[3] == 't') {
                iVar3 = FUN_03376354(plVar1,*puVar22);
                lVar11 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8);
                if (lVar11 != 0) {
                  *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8) = 0;
                  lVar19 = *plVar1;
                  iVar15 = *(int *)(lVar19 + 0x58);
                  if (iVar15 <= *(int *)(lVar19 + 100)) {
                    iVar16 = 8;
                    if (iVar15 != 0) {
                      iVar16 = iVar15 << 1;
                    }
                    FUN_03379490(lVar19 + 0x50,iVar16);
                    iVar15 = *(int *)(lVar19 + 0x58);
                  }
                  iVar16 = *(int *)(lVar19 + 0x60);
                  if (iVar16 == iVar15) {
                    iVar16 = 0;
                    *(undefined4 *)(lVar19 + 0x60) = 0;
                  }
                  plVar23 = (long *)(*(long *)(lVar19 + 0x50) + (long)iVar16 * 0x10);
                  *plVar23 = lVar11;
                  *(int *)(plVar23 + 1) = iVar3;
                  *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + 1;
                  *(int *)(lVar19 + 100) = *(int *)(lVar19 + 100) + 1;
                }
                FUN_033b0234(lVar17,"typeparam",*puVar22,iVar3);
              }
              else {
                local_18c = -0x7fffff80;
                local_190 = 1;
                local_108 = 1;
                local_188[0] = 0;
                local_198 = local_188;
                FUN_031c6c18(&local_198,"<valueparam value=\"%u\"/>",*(undefined4 *)puVar22);
                FUN_033adeb8(lVar17,local_198);
                local_190 = 0;
                if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
                  (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
                }
              }
              uVar6 = uVar6 - 1;
              puVar20 = puVar22;
            } while (uVar6 != 0);
            iVar3 = *(int *)(lVar17 + 8);
          }
          *(int *)(lVar17 + 8) = iVar3 + -1;
          FUN_033adeb8(lVar17,"</parameters>");
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        if ((uVar9 >> 0x15 & 1) != 0) {
          uVar4 = (uint)*puVar18;
          if ((uVar4 >> 0x15 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
            uVar6 = puVar18[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                         POPCOUNT((char)(uVar6 >> 0x10))) + 2];
          }
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_f0[0] = 0;
          local_100 = local_f0;
          FUN_031c6c18(&local_100,"<flags value=\"%u\"/>",uVar6);
          FUN_033adeb8(lVar17,local_100);
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        if ((uVar9 >> 0x17 & 1) != 0) {
          uVar9 = (uint)*puVar18;
          if ((uVar9 >> 0x17 & 1) == 0) {
            plVar23 = (long *)0x0;
          }
          else {
            uVar6 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
            plVar23 = (long *)puVar18[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                    POPCOUNT((char)(uVar6 >> 8)) +
                                                   POPCOUNT((char)(uVar6 >> 0x10))) + 2];
          }
          uVar9 = (int)*(short *)((long)plVar23 + 2) + (int)(short)*plVar23;
          if ((int)uVar9 < 1) {
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
            uVar6 = (ulong)uVar9;
            plVar13 = plVar23;
            do {
              plVar13 = plVar13 + 1;
              uVar4 = (uint)*(undefined8 *)*plVar13;
              if ((uVar4 >> 0x11 & 1) == 0) {
                uVar4 = 0;
              }
              else {
                uVar7 = CONCAT44(uVar4,uVar4) & 0x1ffff0001ffff;
                uVar4 = (uint)*(ushort *)
                               (*plVar13 +
                               (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                            POPCOUNT((char)(uVar7 >> 0x10))) * 8 + 0x12);
              }
              iVar3 = (~uVar4 & 1) + iVar3;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          local_f8 = 1;
          local_f4 = -0x7fffff80;
          local_70 = 1;
          local_f0[0] = 0;
          local_100 = local_f0;
          FUN_031c6c18(&local_100,"<fields count=\"%d\">",iVar3);
          FUN_033adeb8(lVar17,local_100);
          iVar3 = *(int *)(lVar17 + 8) + 1;
          *(int *)(lVar17 + 8) = iVar3;
          if (0 < (int)uVar9) {
            uVar6 = 0;
            do {
              puVar12 = (ulong *)plVar23[uVar6 + 1];
              uVar4 = (uint)*puVar12;
              if (((uVar4 >> 0x11 & 1) == 0) ||
                 (uVar7 = CONCAT44(uVar4,uVar4) & 0x1ffff0001ffff,
                 ((uint)puVar12[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                             POPCOUNT((char)(uVar7 >> 0x10))) + 2] >> 0x10 & 1) == 0
                 )) {
                iVar3 = FUN_03376354(plVar1,puVar12[1]);
                lVar11 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8);
                if (lVar11 != 0) {
                  *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar3 * 8) = 0;
                  lVar19 = *plVar1;
                  iVar15 = *(int *)(lVar19 + 0x58);
                  if (iVar15 <= *(int *)(lVar19 + 100)) {
                    iVar16 = 8;
                    if (iVar15 != 0) {
                      iVar16 = iVar15 << 1;
                    }
                    FUN_03379490(lVar19 + 0x50,iVar16);
                    iVar15 = *(int *)(lVar19 + 0x58);
                  }
                  iVar16 = *(int *)(lVar19 + 0x60);
                  if (iVar16 == iVar15) {
                    iVar16 = 0;
                    *(undefined4 *)(lVar19 + 0x60) = 0;
                  }
                  plVar13 = (long *)(*(long *)(lVar19 + 0x50) + (long)iVar16 * 0x10);
                  *plVar13 = lVar11;
                  *(int *)(plVar13 + 1) = iVar3;
                  *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + 1;
                  *(int *)(lVar19 + 100) = *(int *)(lVar19 + 100) + 1;
                  puVar21 = PTR_PTR_047d1a50;
                }
                puVar14 = puVar12;
                do {
                  uVar4 = (uint)*puVar14;
                  if ((uVar4 >> 0x10 & 1) != 0) {
                    uVar7 = CONCAT44(uVar4,uVar4) & 0xffff0000ffff;
                    uVar7 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar7) +
                                                 POPCOUNT((char)(uVar7 >> 8))) + 2];
                    goto LAB_033aff0c;
                  }
                } while (((*puVar14 & 1) == 0) &&
                        (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
                uVar7 = 0;
LAB_033aff0c:
                local_190 = 0;
                local_18c = -0x7fffff80;
                local_108 = 1;
                local_198 = local_188;
                FUN_031c6afc(&local_198,uVar7,0xffffffff);
                FUN_031c7de4(&local_198,&DAT_03c8299e,"&amp;",1);
                FUN_031c7de4(&local_198,&DAT_03bd47a0,&DAT_03c81fb3,1);
                FUN_031c7de4(&local_198,&DAT_03c32803,&DAT_03c31de0,1);
                FUN_031c7de4(&local_198,&DAT_03c246d6,"&quot;",1);
                FUN_031c7de4(&local_198,&DAT_03c24414,"&apos;",1);
                local_2bc = -0x7fffff80;
                local_2c0 = 1;
                local_238 = 1;
                local_2b8[0] = 0;
                local_2c8 = local_2b8;
                uVar5 = FUN_031e12d8(puVar12,&local_2c8,0,0);
                uVar8 = 0;
                uVar4 = (uint)*puVar12;
                if ((uVar4 >> 0x11 & 1) != 0) {
                  uVar7 = CONCAT44(uVar4,uVar4) & 0x1ffff0001ffff;
                  uVar8 = *(ushort *)
                           ((long)puVar12 +
                           (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                        POPCOUNT((char)(uVar7 >> 0x10))) * 8 + 0x12);
                }
                local_358 = 1;
                local_354 = -0x7fffff80;
                local_2d0 = 1;
                local_350[0] = 0;
                local_360 = local_350;
                FUN_031c6c18(&local_360,
                             "<field name=\"%s\" typeid=\"type%d\" flags=\"%d\" /> <!-- %s -->",
                             local_198,iVar3,uVar8 & 0xffcf | 0x20,uVar5);
                FUN_033adeb8(lVar17,local_360);
                local_358 = 0;
                if ((-1 < local_354) && (local_360 != (undefined1 *)0x0)) {
                  (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
                }
                local_2c0 = 0;
                if ((-1 < local_2bc) && (local_2c8 != (undefined1 *)0x0)) {
                  (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
                }
                local_190 = 0;
                if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
                  (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar9);
            iVar3 = *(int *)(lVar17 + 8);
          }
          *(int *)(lVar17 + 8) = iVar3 + -1;
          FUN_033adeb8(lVar17,"</fields>");
          local_f8 = 0;
          if ((-1 < local_f4) && (local_100 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))();
          }
        }
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + -1;
        FUN_033adeb8(lVar17,"</type>");
        uVar6 = FUN_033ae0a4(puVar18,0);
        if ((uVar6 & 1) != 0) {
          while( true ) {
            uVar9 = (uint)*puVar18;
            if ((uVar9 >> 0xd & 1) != 0) break;
            if (((*puVar18 & 1) != 0) || (puVar18 = (ulong *)puVar18[1], puVar18 == (ulong *)0x0))
            goto LAB_033b0190;
          }
          if (puVar18 != (ulong *)0x0) {
            uVar6 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            uVar10 = (undefined4)
                     puVar18[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2
                            ];
            goto LAB_033b0194;
          }
LAB_033b0190:
          uVar10 = 0;
LAB_033b0194:
          local_100 = (undefined1 *)CONCAT44(local_100._4_4_,uVar10);
          FUN_03001450(*(long *)(param_1 + 0x20) + 0x28,&local_100);
        }
        local_228 = 0;
        if ((-1 < local_224) && (local_230 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
        lVar11 = *plVar1;
        if (*(int *)(lVar11 + 100) == 0) break;
        iVar15 = *(int *)(lVar11 + 0x5c);
        puVar18 = *(ulong **)(*(long *)(lVar11 + 0x50) + (long)iVar15 * 0x10);
        iVar3 = 0;
        if (iVar15 + 1 != *(int *)(lVar11 + 0x58)) {
          iVar3 = iVar15 + 1;
        }
        *(int *)(lVar11 + 0x5c) = iVar3;
        *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + -1;
      } while (puVar18 != (ulong *)0x0);
    }
  }
  auVar24._8_4_ = iVar2;
  auVar24._0_8_ = param_2;
  auVar24._12_4_ = 0;
  return auVar24;
}


