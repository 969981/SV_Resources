/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03505910; name: FUN_03505910
 */


void FUN_03505910(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong __n;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ushort uVar35;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  
  puVar11 = PTR_DAT_047e7210;
  if ((*(long *)(param_1 + 0x178) == 0) || (*(long *)(*(long *)(param_1 + 0x178) + 0x60) == 0)) {
    uVar16 = *(uint *)(param_2 + 0x188);
    if (uVar16 != 0) {
      fVar31 = *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0x14);
      lVar19 = *(long *)(param_2 + 0x180);
      fVar34 = *(float *)(param_2 + 8) * *(float *)(param_2 + 0x10);
      lVar18 = lVar19;
      do {
        plVar23 = *(long **)(lVar18 + 0x18);
        if ((plVar23 != (long *)0x0) && (*(long *)(lVar18 + 0x128) != 0)) {
          fVar30 = *(float *)(param_2 + 0x1bc);
          if (*(float *)(param_2 + 0x1bc) <= *(float *)(param_2 + 0x1c4)) {
            fVar30 = *(float *)(param_2 + 0x1c4);
          }
          fVar32 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1b8),0x42c80000);
          fVar33 = *(float *)(lVar18 + 0x104);
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar32 != fVar33) {
            *(undefined1 *)(lVar18 + 0x10b) = 1;
            uVar35 = *(ushort *)PTR_DAT_047e7208;
            *(float *)(lVar18 + 0x104) = fVar32;
            fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar18 + 0x108));
            fVar32 = (float)NEON_ucvtf((uint)uVar35);
            *(float *)(lVar18 + 0x100) =
                 ((fVar33 - *(float *)(lVar18 + 0x100)) * fVar10) / fVar32 +
                 *(float *)(lVar18 + 0x100);
          }
          fVar30 = (float)NEON_fminnm(fVar30,0x42c80000);
          fVar32 = *(float *)(lVar18 + 0x114);
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (fVar30 != fVar32) {
            *(undefined1 *)(lVar18 + 0x11b) = 1;
            uVar35 = *(ushort *)PTR_DAT_047e7208;
            *(float *)(lVar18 + 0x114) = fVar30;
            fVar33 = (float)NEON_ucvtf((uint)*(ushort *)(lVar18 + 0x118));
            fVar30 = (float)NEON_ucvtf((uint)uVar35);
            *(float *)(lVar18 + 0x110) =
                 ((fVar32 - *(float *)(lVar18 + 0x110)) * fVar33) / fVar30 +
                 *(float *)(lVar18 + 0x110);
          }
          uVar35 = *(ushort *)((long)plVar23 + 0x12);
          if ((uVar35 != 0) &&
             ((*(int *)((long)plVar23 + 0xc) == 0x2d || (*(int *)((long)plVar23 + 0xc) == 0x11)))) {
            if (*(int *)(param_1 + 0x198) == 4) {
              *(undefined4 *)(param_1 + 0x198) = 1;
              uVar35 = *(ushort *)((long)plVar23 + 0x12);
            }
            uVar15 = *(ushort *)(plVar23 + 2);
            uVar17 = (ulong)uVar15;
            uVar16 = (uint)uVar35;
            if ((uint)uVar15 <= (uint)uVar35) {
              uVar16 = (uint)uVar15;
            }
            uVar25 = (ulong)uVar16;
            if (uVar15 - uVar16 != 0) {
              bVar7 = *(byte *)(plVar23 + 1);
              uVar24 = (ulong)bVar7;
              if (bVar7 != 0) {
                __n = (ulong)((uVar15 - uVar16) * 4);
                uVar28 = uVar24 & 3;
                if (uVar24 - 1 < 3) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  lVar19 = 8;
                  do {
                    memset((void *)(*plVar23 + (lVar19 + -8) * uVar17 + uVar25 * 4),0,__n);
                    memset((void *)(*plVar23 + (lVar19 + -4) * (ulong)*(ushort *)(plVar23 + 2) +
                                   uVar25 * 4),0,__n);
                    memset((void *)(*plVar23 + lVar19 * (ulong)*(ushort *)(plVar23 + 2) + uVar25 * 4
                                   ),0,__n);
                    memset((void *)(*plVar23 + (lVar19 + 4) * (ulong)*(ushort *)(plVar23 + 2) +
                                   uVar25 * 4),0,__n);
                    uVar17 = (ulong)*(ushort *)(plVar23 + 2);
                    uVar29 = uVar29 + 4;
                    lVar19 = lVar19 + 0x10;
                  } while ((uVar24 & 0xfc) != uVar29);
                }
                uVar15 = (ushort)uVar17;
                if ((bVar7 & 3) != 0) {
                  lVar19 = uVar29 << 2;
                  do {
                    memset((void *)(*plVar23 + lVar19 * uVar17 + uVar25 * 4),0,__n);
                    uVar15 = *(ushort *)(plVar23 + 2);
                    uVar17 = (ulong)uVar15;
                    uVar28 = uVar28 - 1;
                    lVar19 = lVar19 + 4;
                  } while (uVar28 != 0);
                }
              }
              *(ushort *)((long)plVar23 + 0x12) = uVar15;
            }
            if ((*(uint *)(param_1 + 0x158) & 0xf00) == 0x300) {
              puVar20 = *(undefined8 **)(param_1 + 0x160);
              uVar16 = *(uint *)(param_1 + 0x168);
              puVar21 = puVar20;
              if ((uVar16 != 0) && (*(long *)puVar20[3] != *(long *)(lVar18 + 8))) {
                lVar19 = (ulong)uVar16 * 0x30;
                puVar12 = puVar20;
                do {
                  lVar19 = lVar19 + -0x30;
                  if (lVar19 == 0) {
                    puVar21 = puVar20 + (ulong)uVar16 * 6;
                    goto LAB_03505e08;
                  }
                  puVar21 = puVar12 + 6;
                  puVar1 = puVar12 + 9;
                  puVar12 = puVar21;
                } while (*(long *)*puVar1 != *(long *)(lVar18 + 8));
              }
LAB_03505e08:
              puVar12 = (undefined8 *)0x0;
              if (puVar20 + (ulong)uVar16 * 6 != puVar21) {
                puVar12 = puVar21;
              }
              if ((puVar12 != (undefined8 *)0x0) ||
                 (puVar12 = (undefined8 *)
                            FUN_03502c98(param_1,*(undefined8 *)(lVar18 + 8),(int)plVar23[1]),
                 puVar12 != (undefined8 *)0x0)) {
                lVar19 = puVar12[3];
                memcpy((void *)(lVar19 + 8),(void *)(lVar18 + 0x28),0x50);
                *(undefined8 *)(lVar19 + 0x58) = *(undefined8 *)(lVar18 + 0x78);
                *(undefined4 *)(lVar19 + 0x70) = 0;
                uVar16 = *(uint *)(lVar18 + 0x90);
                if (*(uint *)(lVar19 + 0x74) < uVar16) {
                  uVar6 = *(uint *)(lVar19 + 0x74) + uVar16;
                  lVar13 = (**(code **)(**(long **)(lVar19 + 0x60) + 0x28))
                                     (*(long **)(lVar19 + 0x60),*(undefined8 *)(lVar19 + 0x68),
                                      (ulong)uVar6 * 0x18,
                                      "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                      ,0xce);
                  if (lVar13 != 0) {
                    *(long *)(lVar19 + 0x68) = lVar13;
                    *(uint *)(lVar19 + 0x74) = uVar6;
                    goto LAB_03505e90;
                  }
                }
                else {
LAB_03505e90:
                  *(uint *)(lVar19 + 0x70) = uVar16;
                  if (*(int *)(lVar18 + 0x90) != 0) {
                    lVar13 = 0;
                    uVar17 = 0;
                    do {
                      puVar21 = (undefined8 *)(*(long *)(lVar18 + 0x88) + lVar13);
                      uVar27 = puVar21[1];
                      uVar22 = puVar21[2];
                      puVar20 = (undefined8 *)(*(long *)(lVar19 + 0x68) + lVar13);
                      lVar13 = lVar13 + 0x18;
                      *puVar20 = *puVar21;
                      puVar20[1] = uVar27;
                      puVar20[2] = uVar22;
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(uint *)(lVar18 + 0x90));
                  }
                }
                *(undefined4 *)(lVar19 + 0x78) = *(undefined4 *)(lVar18 + 0x98);
                uVar27 = *(undefined8 *)(lVar18 + 0xa8);
                if ((*(long *)(lVar19 + 0x88) != 0) && (*(char *)(lVar19 + 0x90) != '\0')) {
                  (**(code **)(**(long **)(lVar19 + 0x80) + 0x18))();
                  *(undefined1 *)(lVar19 + 0x90) = 0;
                }
                *(undefined8 *)(lVar19 + 0x88) = uVar27;
                *(undefined8 *)(lVar19 + 0x80) = *(undefined8 *)(lVar18 + 0xa0);
                uVar35 = *(ushort *)(puVar12 + 2);
                fVar30 = *(float *)(lVar18 + 0x78);
                fVar32 = *(float *)(lVar18 + 0x7c);
                lVar19 = lVar18 + 0xc0;
                iVar4 = *(int *)((long)puVar12 + 0xc);
                if (*(int *)((long)puVar12 + 0xc) <= *(int *)((long)plVar23 + 0xc)) {
                  iVar4 = *(int *)((long)plVar23 + 0xc);
                }
                *(int *)((long)puVar12 + 0xc) = iVar4;
                *(ushort *)((long)puVar12 + 0x12) = uVar35;
                uVar17 = FUN_034fcbd8(lVar19);
                if ((uVar17 & 1) == 0) {
                  if ((*(long *)(lVar18 + 0xc0) != 0) && (*(long *)(lVar18 + 0xd0) != 0))
                  goto LAB_03505fd4;
                  if ((*(long *)(lVar18 + 0xe0) != 0) && (*(long *)(lVar18 + 0xf0) != 0)) {
                    FUN_034fc2c0(plVar23,puVar12,lVar18 + 0x110);
                  }
LAB_03506038:
                  if ((*(char *)(lVar18 + 0x10d) == '\0') &&
                     (*(ushort *)PTR_DAT_047e7208 <= *(ushort *)(lVar18 + 0x108))) {
                    uVar16 = (int)*(char *)(lVar18 + 0x10a) - 1;
                    *(float *)(lVar18 + 0x100) = *(float *)(lVar18 + 0x104);
                    if (*(char *)(lVar18 + 0x10a) < 1) {
                      if (*(float *)(lVar18 + 0x104) <= 0.1) {
                        *(undefined1 *)(lVar18 + 0x10a) = 4;
                      }
                    }
                    else {
                      *(char *)(lVar18 + 0x10a) = (char)uVar16;
                      if ((uVar16 & 0xff) == 0) {
                        *(undefined2 *)(lVar18 + 0x10d) = 1;
                      }
                    }
                  }
                  if ((*(char *)(lVar18 + 0x11d) == '\0') &&
                     (*(ushort *)PTR_DAT_047e7208 <= *(ushort *)(lVar18 + 0x118))) {
                    uVar16 = (int)*(char *)(lVar18 + 0x11a) - 1;
                    *(float *)(lVar18 + 0x110) = *(float *)(lVar18 + 0x114);
                    if (*(char *)(lVar18 + 0x11a) < 1) {
                      if (*(float *)(lVar18 + 0x114) <= 0.1) {
                        *(undefined1 *)(lVar18 + 0x11a) = 4;
                      }
                    }
                    else {
                      *(char *)(lVar18 + 0x11a) = (char)uVar16;
                      if ((uVar16 & 0xff) == 0) {
                        *(undefined2 *)(lVar18 + 0x11d) = 1;
                      }
                    }
                  }
                }
                else {
                  if (((((*(long *)(lVar18 + 0xc0) != 0) && (*(long *)(lVar18 + 0xd0) != 0)) &&
                       (*(long *)(lVar18 + 0xe0) != 0)) && (*(long *)(lVar18 + 0xf0) != 0)) &&
                     ((*(char *)(lVar18 + 0x10e) == '\0' || (*(char *)(lVar18 + 0x11e) == '\0')))) {
LAB_03505fd4:
                    FUN_034fbb30(plVar23,puVar12,lVar18 + 0x100,lVar19);
                    if ((*(long *)(lVar18 + 0xe0) != 0) && (*(long *)(lVar18 + 0xf0) != 0)) {
                      FUN_034fb430(puVar12,lVar18 + 0x110);
                    }
                    goto LAB_03506038;
                  }
                  bVar7 = *(byte *)(plVar23 + 1);
                  if (bVar7 != 0) {
                    uVar16 = 0;
                    do {
                      FUN_034fca48(lVar19,plVar23,uVar16);
                      uVar16 = uVar16 + 1;
                    } while (bVar7 != uVar16);
                  }
                  memcpy((void *)*puVar12,(void *)*plVar23,(ulong)uVar35 * (ulong)bVar7 * 4);
                }
                lVar19 = puVar12[3];
                fVar33 = **(float **)(lVar18 + 0x138);
                *(float *)(lVar19 + 0x58) = fVar30 * fVar34 * **(float **)(lVar18 + 0x140);
                *(float *)(lVar19 + 0x5c) = fVar32 * fVar31 * fVar33;
              }
            }
            else {
              if (*(int *)(param_1 + 0x168) == 0) {
                do {
                  lVar19 = *(long *)puVar11;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar11,0x10);
                  if (bVar9) {
                    *(ulong *)puVar11 = lVar19 + 1U;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                lVar19 = FUN_03502c98(param_1,lVar19 + 1U & 0xffffffffffffff,
                                      *(undefined4 *)(param_1 + 0x158));
                if (lVar19 == 0) goto LAB_03506134;
              }
              lVar19 = *(long *)(param_1 + 0x160);
              local_c0 = (long *)CONCAT44(*(float *)(lVar18 + 0x7c) * fVar31,
                                          *(float *)(lVar18 + 0x78) * fVar34);
              uVar35 = *(ushort *)(lVar19 + 0x10);
              iVar5 = *(int *)((long)plVar23 + 0xc);
              plVar2 = (long *)(lVar18 + 0xc0);
              *(ushort *)(lVar19 + 0x12) = uVar35;
              iVar4 = *(int *)(lVar19 + 0xc);
              if (*(int *)(lVar19 + 0xc) <= iVar5) {
                iVar4 = iVar5;
              }
              *(int *)(lVar19 + 0xc) = iVar4;
              uVar17 = FUN_034fcbd8(plVar2);
              if (((uVar17 & 1) == 0) ||
                 ((((*plVar2 != 0 && (*(long *)(lVar18 + 0xd0) != 0)) &&
                   (*(long *)(lVar18 + 0xe0) != 0)) &&
                  ((*(long *)(lVar18 + 0xf0) != 0 &&
                   ((*(char *)(lVar18 + 0x10e) == '\0' || (*(char *)(lVar18 + 0x11e) == '\0'))))))))
              {
                FUN_034f43b0(1.0 / (float)uVar35,plVar23,lVar19,&local_c0,
                             *(undefined8 *)(lVar18 + 0x140),*(undefined8 *)(lVar18 + 0x138),uVar35,
                             plVar2);
              }
              else {
                uVar27 = *(undefined8 *)(lVar18 + 0x138);
                uVar22 = *(undefined8 *)(lVar18 + 0x140);
                bVar7 = *(byte *)(plVar23 + 1);
                if (bVar7 != 0) {
                  uVar16 = 0;
                  do {
                    FUN_034fca48(plVar2,plVar23,uVar16);
                    uVar16 = uVar16 + 1;
                  } while (bVar7 != uVar16);
                }
                FUN_034f5860(1.0 / (float)uVar35,plVar23,lVar19,&local_c0,uVar22,uVar27,uVar35);
              }
              *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x58) = 0x3f8000003f800000;
            }
          }
LAB_03506134:
          lVar19 = *(long *)(param_2 + 0x180);
          uVar16 = *(uint *)(param_2 + 0x188);
        }
        lVar18 = lVar18 + 0x158;
      } while (lVar18 != lVar19 + (ulong)uVar16 * 0x158);
    }
  }
  else if (*(int *)(param_2 + 0x188) != 0) {
    plVar23 = *(long **)(*(long *)(param_2 + 0x180) + 0x18);
    if (((plVar23 != (long *)0x0) && (*(long *)(*(long *)(param_2 + 0x180) + 0x128) != 0)) &&
       (*(short *)((long)plVar23 + 0x12) != 0)) {
      if (*(int *)(param_1 + 0x168) == 0) {
        do {
          lVar18 = *(long *)puVar11;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar9) {
            *(ulong *)puVar11 = lVar18 + 1U;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar18 = FUN_03502c98(param_1,lVar18 + 1U & 0xffffffffffffff,
                              *(undefined4 *)(param_1 + 0x158));
        if (lVar18 == 0) {
          return;
        }
        plVar23 = *(long **)(*(long *)(param_2 + 0x180) + 0x18);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x160) + 0xc) = 0x2d;
      if (*(int *)(param_1 + 0x198) == 4) {
        *(undefined4 *)(param_1 + 0x198) = 1;
      }
      uVar35 = *(ushort *)(plVar23 + 2);
      uVar17 = (ulong)uVar35;
      uVar16 = (uint)*(ushort *)((long)plVar23 + 0x12);
      if ((uint)uVar35 <= (uint)*(ushort *)((long)plVar23 + 0x12)) {
        uVar16 = (uint)uVar35;
      }
      uVar25 = (ulong)uVar16;
      if (uVar35 - uVar16 != 0) {
        bVar7 = *(byte *)(plVar23 + 1);
        if (bVar7 != 0) {
          uVar24 = (ulong)((uVar35 - uVar16) * 4);
          if (bVar7 == 1) {
            uVar28 = 0;
          }
          else {
            uVar28 = 0;
            lVar18 = 4;
            do {
              memset((void *)(*plVar23 + (lVar18 + -4) * uVar17 + uVar25 * 4),0,uVar24);
              memset((void *)(*plVar23 + lVar18 * (ulong)*(ushort *)(plVar23 + 2) + uVar25 * 4),0,
                     uVar24);
              uVar17 = (ulong)*(ushort *)(plVar23 + 2);
              uVar28 = uVar28 + 2;
              lVar18 = lVar18 + 8;
            } while (((ulong)bVar7 & 0xfe) != uVar28);
          }
          if ((bVar7 & 1) != 0) {
            memset((void *)(*plVar23 + uVar28 * uVar17 * 4 + uVar25 * 4),0,uVar24);
            uVar17 = (ulong)*(ushort *)(plVar23 + 2);
          }
        }
        *(short *)((long)plVar23 + 0x12) = (short)uVar17;
      }
      puVar11 = PTR_DAT_047e7208;
      fVar31 = *(float *)(param_2 + 0x1bc);
      if (*(float *)(param_2 + 0x1bc) <= *(float *)(param_2 + 0x1c4)) {
        fVar31 = *(float *)(param_2 + 0x1c4);
      }
      fVar34 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1b8),0x42c80000);
      lVar18 = *(long *)(param_2 + 0x180);
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar30 = *(float *)(lVar18 + 0x104);
      if (fVar34 != fVar30) {
        *(undefined1 *)(lVar18 + 0x10b) = 1;
        uVar35 = *(ushort *)puVar11;
        fVar32 = (float)NEON_ucvtf((uint)*(ushort *)(lVar18 + 0x108));
        *(float *)(lVar18 + 0x104) = fVar34;
        fVar34 = (float)NEON_ucvtf((uint)uVar35);
        *(float *)(lVar18 + 0x100) =
             ((fVar30 - *(float *)(lVar18 + 0x100)) * fVar32) / fVar34 + *(float *)(lVar18 + 0x100);
      }
      fVar31 = (float)NEON_fminnm(fVar31,0x42c80000);
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      fVar34 = *(float *)(lVar18 + 0x114);
      if (fVar31 != fVar34) {
        *(undefined1 *)(lVar18 + 0x11b) = 1;
        uVar35 = *(ushort *)puVar11;
        fVar30 = (float)NEON_ucvtf((uint)*(ushort *)(lVar18 + 0x118));
        *(float *)(lVar18 + 0x114) = fVar31;
        fVar31 = (float)NEON_ucvtf((uint)uVar35);
        *(float *)(lVar18 + 0x110) =
             ((fVar34 - *(float *)(lVar18 + 0x110)) * fVar30) / fVar31 + *(float *)(lVar18 + 0x110);
      }
      puVar11 = PTR_DAT_047e6d08;
      local_c0 = (long *)0x0;
      local_ac = 0;
      uVar26 = *(uint *)(plVar23 + 1) & 0xff;
      _local_b8 = CONCAT44(0x2b,*(uint *)(plVar23 + 1));
      uVar35 = *(ushort *)(plVar23 + 2);
      uVar16 = (uint)uVar35;
      local_b0 = (uint)uVar35;
      uVar6 = *(uint *)PTR_DAT_047e6d08;
      if (uVar35 <= uVar6 && uVar6 != uVar35) {
        uVar16 = uVar6 & 0xffff;
        local_b0 = uVar6 & 0xffff;
      }
      if ((uVar26 < 9) && (uVar6 == uVar16)) {
        plVar2 = &DAT_048afcf8 + (uVar26 - 1);
        plVar14 = (long *)*plVar2;
        if (plVar14 != (long *)0x0) {
          uVar16 = 0;
          do {
            plVar3 = plVar14 + 1;
            do {
              if ((int)*plVar3 != 0) {
                uVar16 = uVar16 + 1;
                ClearExclusiveLocal();
                if (1000 < uVar16) {
                  nn::os::SleepThread(100000);
                }
                goto LAB_03506390;
              }
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar9) {
                *(int *)plVar3 = 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            lVar18 = *plVar14;
            while ((long *)*plVar2 == plVar14) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_035063d0;
            }
            ClearExclusiveLocal();
            *(int *)plVar3 = 0;
LAB_03506390:
            plVar14 = (long *)*plVar2;
          } while (plVar14 != (long *)0x0);
        }
      }
      plVar14 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))
                                  (5,uVar26 * (local_b0 & 0xffff) * 4 + 0x20,0x10);
      if (plVar14 == (long *)0x0) {
        local_c0 = (long *)*plVar23;
        bVar9 = false;
        local_b0 = CONCAT22((short)plVar23[2],(short)plVar23[2]);
        _local_b8 = CONCAT44(uStack_b4,(int)plVar23[1]);
      }
      else {
        *(undefined4 *)(plVar14 + 1) = 1;
LAB_035063d0:
        local_c0 = plVar14 + 4;
        local_b0 = local_b0 & 0xffff;
        memcpy(local_c0,(void *)*plVar23,
               (ulong)*(ushort *)(plVar23 + 2) * (ulong)*(byte *)(plVar23 + 1) * 4);
        local_b0 = CONCAT22((short)plVar23[2],(undefined2)local_b0);
        lVar18 = *(long *)(param_2 + 0x180);
        if ((*(long *)(lVar18 + 0xc0) != 0) && (*(long *)(lVar18 + 0xd0) != 0)) {
          FUN_034fad30(&local_c0,lVar18 + 0x100);
        }
        if ((*(long *)(lVar18 + 0xe0) != 0) && (*(long *)(lVar18 + 0xf0) != 0)) {
          FUN_034fb430(&local_c0,lVar18 + 0x110);
        }
        bVar9 = true;
      }
      plVar23 = *(long **)(*(long *)(param_1 + 0x178) + 0x60);
      (**(code **)(*plVar23 + 0x50))
                (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x10),(short)*(undefined4 *)(param_2 + 0x14),plVar23,
                 param_2,&local_c0,*(undefined8 *)(param_1 + 0x160));
      if (((bVar9) && (local_c0 != (long *)0x0)) && ((byte)local_b8 != 0)) {
        if (((byte)local_b8 < 9) && (*(uint *)puVar11 == (local_b0 & 0xffff))) {
          plVar23 = &DAT_048afcf8 + ((byte)local_b8 - 1);
          do {
            lVar18 = *plVar23;
            local_c0[-4] = lVar18;
            while (*plVar23 == lVar18) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar9) {
                *plVar23 = (long)(local_c0 + -4);
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                *(undefined4 *)(local_c0 + -3) = 0;
                return;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,local_c0 + -4);
      }
    }
  }
  return;
}


