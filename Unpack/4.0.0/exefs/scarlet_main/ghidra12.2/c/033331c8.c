/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033331c8; name: FUN_033331c8
 */


void FUN_033331c8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  bool bVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  undefined8 *puVar38;
  undefined4 local_350 [2];
  void *local_348;
  ulong *puStack_340;
  ulong local_338;
  int local_330;
  void *local_328;
  ulong *puStack_320;
  ulong local_318;
  void *local_310;
  ulong *puStack_308;
  ulong local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  code *local_258;
  undefined *local_248;
  undefined *local_240;
  undefined1 *local_208;
  undefined *local_1c8;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_180;
  undefined *local_170;
  code *local_168;
  long local_70;
  
  puVar21 = (ulong *)*param_2;
  puVar30 = (ulong *)param_2[1];
  uVar22 = *(uint *)(param_1 + 0x54);
  plVar1 = (long *)(param_1 + 0x48);
  iVar35 = (int)((ulong)puVar21 >> 0x20);
  if (0 < (int)uVar22) {
    uVar5 = (int)puVar21 * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar23 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = iVar35 * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar24 = (ulong)((uVar23 + (uVar23 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) & uVar22);
    puVar31 = *(ulong **)(*plVar1 + uVar24 * 0x10);
    if (puVar31 != (ulong *)0xffffffffffffffff) {
      if (puVar31 != puVar21) {
        do {
          uVar24 = (ulong)((int)uVar24 + 1U & uVar22);
          puVar31 = *(ulong **)(*plVar1 + uVar24 * 0x10);
          if (puVar31 == (ulong *)0xffffffffffffffff) goto LAB_03333280;
        } while (puVar31 != puVar21);
      }
      goto LAB_03333284;
    }
  }
LAB_03333280:
  uVar24 = (ulong)(uVar22 + 1);
LAB_03333284:
  if ((int)uVar22 < (int)uVar24) {
    uVar5 = *(uint *)(param_1 + 0x1e8);
    if ((int)uVar22 < *(int *)(param_1 + 0x50) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar22 * 2 + 2);
      uVar22 = *(uint *)(param_1 + 0x54);
    }
    uVar23 = (int)puVar21 * -0x61c8864f;
    uVar23 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
    uVar6 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar23 = iVar35 * -0x61c8864f;
    uVar23 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
    uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
    lVar32 = *plVar1;
    uVar24 = (ulong)(uVar22 & (uVar6 + (uVar6 >> 2) + uVar23 * 0x40 + 0x9e3779b9 ^ uVar23));
    puVar31 = *(ulong **)(lVar32 + uVar24 * 0x10);
    if (puVar31 == (ulong *)0xffffffffffffffff) {
      iVar35 = 1;
    }
    else {
      do {
        if (puVar31 == puVar21) {
          iVar35 = 0;
          goto LAB_03333368;
        }
        uVar24 = (ulong)((int)uVar24 + 1U & uVar22);
        puVar31 = *(ulong **)(lVar32 + uVar24 * 0x10);
      } while (puVar31 != (ulong *)0xffffffffffffffff);
      iVar35 = 1;
    }
LAB_03333368:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar35;
    *(ulong **)(lVar32 + (-(uVar24 >> 0x1f) & 0xfffffff000000000 | uVar24 << 4)) = puVar21;
    *(long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar24 * 0x10 + 8) = (long)(int)uVar5;
    iVar35 = *(int *)(param_1 + 0x1e8);
    lVar32 = (long)iVar35;
    if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) <= iVar35) {
      FUN_033273cc(param_1 + 0x1e0,lVar32 + 1);
      iVar35 = *(int *)(param_1 + 0x1e8);
    }
    puVar38 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)iVar35 * 0x10);
    *(int *)(param_1 + 0x1e8) = (int)(lVar32 + 1);
    *puVar38 = 0;
    puVar38[1] = 0x8000000000000000;
    if (0 < *(int *)(param_1 + 0x220)) {
      uVar24 = 0;
      plVar1 = (long *)(param_1 + 0x218);
      do {
        plVar18 = (long *)(*(long *)(param_1 + 0x218) + uVar24 * 0x18);
        lVar32 = *plVar18;
        puVar31 = (ulong *)plVar18[1];
        if (puVar31 != (ulong *)0x0) {
          puVar25 = puVar31;
          do {
            uVar29 = *puVar25;
            if (((uint)uVar29 >> 2 & 1) != 0) {
              uVar29 = puVar25[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if ((uVar29 & 1) != 0) {
                piVar33 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                do {
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                  if (bVar10) {
                    *piVar33 = *piVar33 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              goto LAB_0333344c;
            }
            puVar25 = (ulong *)puVar25[1];
          } while (puVar25 != (ulong *)0x0);
        }
        uVar29 = 0;
LAB_0333344c:
        if ((lVar32 != 0) && (puVar30 == puVar31)) {
          puVar31 = puVar21;
          while( true ) {
            uVar22 = (uint)*puVar31;
            if ((uVar22 >> 0x14 & 1) != 0) break;
            if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
            goto LAB_0333349c;
          }
          if (puVar31 != (ulong *)0x0) {
            uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
            puVar38 = (undefined8 *)
                      (ulong)(ushort)puVar31[(ulong)(byte)(POPCOUNT((char)uVar26) +
                                                           POPCOUNT((char)(uVar26 >> 8)) +
                                                          POPCOUNT((char)(uVar26 >> 0x10))) + 2];
            goto LAB_033334a0;
          }
LAB_0333349c:
          puVar38 = (undefined8 *)0x0;
LAB_033334a0:
          local_2f8 = puVar38;
          pvVar11 = (void *)(**(code **)(*(long *)(param_1 + 0x238) + 0x10))
                                      ((long *)(param_1 + 0x238),puVar38,&local_2f8);
          memset(pvVar11,0,(size_t)puVar38);
          if (puVar30 == puVar21) {
            uVar12 = FUN_031fa694(param_1 + 0x2b8,puVar30);
          }
          else {
            uVar12 = FUN_031fa91c(param_1 + 0x2b8,puVar30,puVar21);
          }
          memset(&local_2f8,0,0x288);
          local_258 = FUN_03225a30;
          local_248 = PTR_LAB_047e5f00;
          local_1b8 = FUN_032259b8;
          local_1c8 = PTR_LAB_047e5f08;
          local_208 = &LAB_03225af8;
          local_240 = PTR_LAB_047e5f10;
          local_180 = PTR_FUN_047e5f18;
          local_1b0 = PTR_LAB_047e5f28;
          local_168 = FUN_03225a94;
          local_170 = PTR_FUN_047e5f20;
          puVar31 = puVar30;
          while( true ) {
            uVar22 = (uint)*puVar31;
            if ((uVar22 >> 0x14 & 1) != 0) break;
            if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
            goto LAB_033335c4;
          }
          if (puVar31 != (ulong *)0x0) {
            uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
            uVar15 = (undefined2)
                     puVar31[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8)) +
                                          POPCOUNT((char)(uVar26 >> 0x10))) + 2];
            goto LAB_033335c8;
          }
LAB_033335c4:
          uVar15 = 0;
LAB_033335c8:
          local_70 = param_1;
          FUN_03328288(&local_2f8,uVar12,pvVar11,lVar32,uVar15,puVar38,1);
          if (puVar21 == (ulong *)0x0) {
            uVar26 = 0;
          }
          else {
            puVar31 = puVar21;
            do {
              uVar26 = *puVar31;
              if (((uint)uVar26 >> 2 & 1) != 0) {
                uVar26 = puVar31[(uVar26 >> 1 & 1) + (uVar26 & 1) + 2];
                goto LAB_03333628;
              }
              puVar31 = (ulong *)puVar31[1];
            } while (puVar31 != (ulong *)0x0);
            uVar26 = 0;
          }
LAB_03333628:
          local_310 = pvVar11;
          puStack_308 = puVar21;
          local_300 = uVar26;
          if ((uVar26 & 1) == 0) {
            FUN_03322638(param_1,&local_310,1,0,uVar24 & 0xffffffff,0xffffffff);
          }
          else {
            piVar33 = (int *)((uVar26 & 0xfffffffffffffffe) + 8);
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
              if (bVar10) {
                *piVar33 = *piVar33 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            FUN_03322638(param_1,&local_310,1,0,uVar24 & 0xffffffff,0xffffffff);
            if ((uVar26 & 1) != 0) {
              plVar13 = (long *)(uVar26 & 0xfffffffffffffffe);
              plVar18 = plVar13 + 1;
              do {
                lVar32 = *plVar18;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar10) {
                  *(int *)plVar18 = (int)lVar32 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar32 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
          }
          *(undefined4 *)(*(long *)(param_1 + 0x280) + uVar24 * 4) = 1;
          if (puVar21 != (ulong *)0x0) {
            puVar31 = puVar21;
            do {
              uVar26 = *puVar31;
              if (((uint)uVar26 >> 2 & 1) != 0) {
                uVar26 = puVar31[(uVar26 >> 1 & 1) + (uVar26 & 1) + 2];
                if ((uVar26 & 1) != 0) {
                  piVar33 = (int *)((uVar26 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar7 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                    if (bVar10) {
                      *piVar33 = *piVar33 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                goto LAB_0333371c;
              }
              puVar31 = (ulong *)puVar31[1];
            } while (puVar31 != (ulong *)0x0);
          }
          uVar26 = 0;
LAB_0333371c:
          local_338 = local_338 & 0xffffffffffffff00;
          local_348 = (void *)0x0;
          puStack_340 = (ulong *)0x0;
          uVar23 = *(uint *)(param_1 + 0x220);
          uVar22 = uVar23;
          if ((long)(int)uVar23 <= (long)uVar24) {
            uVar22 = (int)uVar24 + 1;
          }
          if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar22) {
            FUN_033277d4(plVar1,PTR_PTR_047d1a50,(long)(int)uVar22);
            uVar23 = *(uint *)(param_1 + 0x220);
          }
          uVar6 = uVar22 - uVar23;
          if (uVar6 == 0 || (int)uVar22 < (int)uVar23) {
            if ((int)uVar22 < (int)uVar23) {
              *(uint *)(param_1 + 0x220) = uVar22;
            }
          }
          else {
            *(uint *)(param_1 + 0x220) = uVar22;
            puVar38 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)(int)uVar23 * 0x18);
            uVar2 = uVar6 & 3;
            if (2 < uVar22 + ~uVar23) {
              iVar35 = -(uVar6 & 0xfffffffc);
              puVar28 = puVar38;
              do {
                puVar38 = puVar28 + 0xc;
                *puVar28 = local_348;
                puVar28[1] = puStack_340;
                *(undefined4 *)(puVar28 + 2) = (undefined4)local_338;
                *(undefined4 *)((long)puVar28 + 0x14) = 0;
                puVar28[3] = local_348;
                puVar28[4] = puStack_340;
                *(undefined4 *)(puVar28 + 5) = (undefined4)local_338;
                *(undefined4 *)((long)puVar28 + 0x2c) = 0;
                puVar28[6] = local_348;
                puVar28[7] = puStack_340;
                *(undefined4 *)(puVar28 + 8) = (undefined4)local_338;
                *(undefined4 *)((long)puVar28 + 0x44) = 0;
                puVar28[9] = local_348;
                puVar28[10] = puStack_340;
                *(undefined4 *)(puVar28 + 0xb) = (undefined4)local_338;
                *(undefined4 *)((long)puVar28 + 0x5c) = 0;
                iVar35 = iVar35 + 4;
                puVar28 = puVar38;
              } while (iVar35 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar38 = local_348;
              puVar38[1] = puStack_340;
              *(undefined4 *)(puVar38 + 2) = (undefined4)local_338;
              *(undefined4 *)((long)puVar38 + 0x14) = 0;
              puVar38 = puVar38 + 3;
            }
          }
          *(void **)(*plVar1 + uVar24 * 0x18) = pvVar11;
          *(ulong **)(*plVar1 + uVar24 * 0x18 + 8) = puVar21;
          if ((uVar26 & 1) != 0) {
            plVar13 = (long *)(uVar26 & 0xfffffffffffffffe);
            plVar18 = plVar13 + 1;
            do {
              lVar32 = *plVar18;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar10) {
                *(int *)plVar18 = (int)lVar32 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((plVar13 != (long *)0x0) && ((int)lVar32 == 1)) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        if ((uVar29 & 1) != 0) {
          plVar13 = (long *)(uVar29 & 0xfffffffffffffffe);
          plVar18 = plVar13 + 1;
          do {
            lVar32 = *plVar18;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar10) {
              *(int *)plVar18 = (int)lVar32 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        uVar24 = uVar24 + 1;
      } while ((long)uVar24 < (long)*(int *)(param_1 + 0x220));
    }
    if (0 < *(int *)(param_1 + 0x230)) {
      uVar24 = 0;
      do {
        lVar19 = *(long *)(param_1 + 0x228);
        plVar1 = (long *)(lVar19 + uVar24 * 0x20);
        uVar29 = plVar1[2];
        lVar32 = *plVar1;
        puVar31 = (ulong *)plVar1[1];
        if ((uVar29 & 1) == 0) {
          uVar26 = uVar29;
          if ((uVar29 & 1) != 0) goto LAB_033338f4;
LAB_033339a8:
          iVar37 = *(int *)(lVar19 + uVar24 * 0x20 + 0x18);
          iVar35 = -iVar37;
          if (-1 < iVar37) {
            iVar35 = iVar37;
          }
        }
        else {
          plVar18 = (long *)(uVar29 & 0xfffffffffffffffe);
          plVar1 = plVar18 + 1;
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar19 = *plVar1;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar19 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
          lVar19 = *(long *)(param_1 + 0x228);
          uVar26 = *(ulong *)(lVar19 + uVar24 * 0x20 + 0x10);
          if ((uVar26 & 1) == 0) goto LAB_033339a8;
LAB_033338f4:
          plVar18 = (long *)(uVar26 & 0xfffffffffffffffe);
          plVar1 = plVar18 + 1;
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          iVar37 = *(int *)(lVar19 + uVar24 * 0x20 + 0x18);
          iVar35 = -iVar37;
          if (-1 < iVar37) {
            iVar35 = iVar37;
          }
          do {
            lVar19 = *plVar1;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar19 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        if ((lVar32 != 0) && (puVar31 == puVar30)) {
          puVar31 = (ulong *)*param_2;
          do {
            uVar22 = (uint)*puVar31;
            if ((uVar22 >> 0x14 & 1) != 0) {
              uVar23 = 0;
              if (puVar31 != (ulong *)0x0) {
                uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
                uVar23 = (uint)(ushort)puVar31[(ulong)(byte)(POPCOUNT((char)uVar26) +
                                                             POPCOUNT((char)(uVar26 >> 8)) +
                                                            POPCOUNT((char)(uVar26 >> 0x10))) + 2];
              }
              goto LAB_03333a14;
            }
            if ((*puVar31 & 1) != 0) {
              uVar23 = 0;
              goto LAB_03333a14;
            }
            puVar31 = (ulong *)puVar31[1];
          } while (puVar31 != (ulong *)0x0);
          uVar23 = 0;
LAB_03333a14:
          puVar38 = (undefined8 *)(ulong)(uVar23 * iVar35);
          local_2f8 = puVar38;
          pvVar11 = (void *)(**(code **)(*(long *)(param_1 + 0x238) + 0x10))
                                      ((long *)(param_1 + 0x238),puVar38,&local_2f8);
          memset(pvVar11,0,(size_t)puVar38);
          if (puVar30 == puVar21) {
            uVar12 = FUN_031fa694(param_1 + 0x2b8,puVar30);
          }
          else {
            uVar12 = FUN_031fa91c(param_1 + 0x2b8,puVar30,puVar21);
          }
          memset(&local_2f8,0,0x288);
          local_258 = FUN_03225a30;
          local_248 = PTR_LAB_047e5f00;
          local_1b8 = FUN_032259b8;
          local_1c8 = PTR_LAB_047e5f08;
          local_208 = &LAB_03225af8;
          local_240 = PTR_LAB_047e5f10;
          local_180 = PTR_FUN_047e5f18;
          local_1b0 = PTR_LAB_047e5f28;
          local_168 = FUN_03225a94;
          local_170 = PTR_FUN_047e5f20;
          local_70 = param_1;
          if (iVar35 != 0) {
            puVar31 = puVar21;
            while( true ) {
              uVar22 = (uint)*puVar31;
              puVar25 = puVar30;
              if ((uVar22 >> 0x14 & 1) != 0) break;
              if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
              goto LAB_03333b44;
            }
            if (puVar31 != (ulong *)0x0) {
              uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
              uVar15 = (undefined2)
                       puVar31[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8))
                                            + POPCOUNT((char)(uVar26 >> 0x10))) + 2];
              goto LAB_03333b48;
            }
LAB_03333b44:
            uVar15 = 0;
LAB_03333b48:
            uVar22 = (uint)*puVar25;
            if ((uVar22 >> 0x14 & 1) == 0) {
              if (((*puVar25 & 1) != 0) ||
                 (puVar31 = puVar25 + 1, puVar25 = (ulong *)*puVar31,
                 (ulong *)*puVar31 == (ulong *)0x0)) goto LAB_03333b88;
              goto LAB_03333b48;
            }
            if (puVar25 != (ulong *)0x0) {
              uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
              uVar16 = (undefined2)
                       puVar25[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8))
                                            + POPCOUNT((char)(uVar26 >> 0x10))) + 2];
              goto LAB_03333b8c;
            }
LAB_03333b88:
            uVar16 = 0;
LAB_03333b8c:
            FUN_03328288(&local_2f8,uVar12,pvVar11,lVar32,uVar15,uVar16,iVar35);
          }
          if (puVar21 == (ulong *)0x0) {
            local_318 = 0;
          }
          else {
            puVar31 = puVar21;
            do {
              uVar26 = *puVar31;
              if (((uint)uVar26 >> 2 & 1) != 0) {
                local_318 = puVar31[(uVar26 >> 1 & 1) + (uVar26 & 1) + 2];
                goto LAB_03333be0;
              }
              puVar31 = (ulong *)puVar31[1];
            } while (puVar31 != (ulong *)0x0);
            local_318 = 0;
          }
LAB_03333be0:
          if ((local_318 & 1) != 0) {
            piVar33 = (int *)((local_318 & 0xfffffffffffffffe) + 8);
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
              if (bVar10) {
                *piVar33 = *piVar33 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          puVar31 = puVar21;
          while( true ) {
            uVar22 = (uint)*puVar31;
            if ((uVar22 >> 0x14 & 1) != 0) break;
            if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
            goto LAB_03333c44;
          }
          if (puVar31 != (ulong *)0x0) {
            uVar26 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
            uVar15 = (undefined2)
                     puVar31[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8)) +
                                          POPCOUNT((char)(uVar26 >> 0x10))) + 2];
            goto LAB_03333c48;
          }
LAB_03333c44:
          uVar15 = 0;
LAB_03333c48:
          local_328 = pvVar11;
          puStack_320 = puVar21;
          FUN_03322638(param_1,&local_328,iVar35,uVar15,0xffffffff,uVar24 & 0xffffffff);
          if ((local_318 & 1) != 0) {
            plVar18 = (long *)(local_318 & 0xfffffffffffffffe);
            plVar1 = plVar18 + 1;
            do {
              lVar32 = *plVar1;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *(int *)plVar1 = (int)lVar32 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((plVar18 != (long *)0x0) && ((int)lVar32 == 1)) {
              (**(code **)(*plVar18 + 8))();
            }
          }
          *(undefined4 *)(*(long *)(param_1 + 0x290) + uVar24 * 4) = 1;
          if (puVar21 == (ulong *)0x0) {
            local_338 = 0;
          }
          else {
            puVar31 = puVar21;
            do {
              uVar26 = *puVar31;
              if (((uint)uVar26 >> 2 & 1) != 0) {
                local_338 = puVar31[(uVar26 >> 1 & 1) + (uVar26 & 1) + 2];
                goto LAB_03333ce0;
              }
              puVar31 = (ulong *)puVar31[1];
            } while (puVar31 != (ulong *)0x0);
            local_338 = 0;
          }
LAB_03333ce0:
          local_348 = pvVar11;
          puStack_340 = puVar21;
          local_330 = iVar35;
          if ((local_338 & 1) == 0) {
            FUN_03323a58(param_1 + 0x200,uVar24 & 0xffffffff,&local_348);
          }
          else {
            plVar18 = (long *)(local_338 & 0xfffffffffffffffe);
            plVar1 = plVar18 + 1;
            do {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            FUN_03323a58(param_1 + 0x200,uVar24 & 0xffffffff,&local_348);
            do {
              lVar32 = *plVar1;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *(int *)plVar1 = (int)lVar32 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((plVar18 != (long *)0x0) && ((int)lVar32 == 1)) {
              (**(code **)(*plVar18 + 8))(plVar18);
            }
          }
        }
        if ((uVar29 & 1) != 0) {
          plVar18 = (long *)(uVar29 & 0xfffffffffffffffe);
          plVar1 = plVar18 + 1;
          do {
            lVar32 = *plVar1;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)lVar32 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        uVar24 = uVar24 + 1;
      } while ((long)uVar24 < (long)*(int *)(param_1 + 0x230));
    }
  }
  else {
    uVar5 = *(uint *)(*plVar1 + ((long)(uVar24 << 0x20) >> 0x1c) + 8);
  }
  if (-1 < (int)uVar5) {
    plVar1 = (long *)(*(long *)(param_1 + 0x1e0) + (ulong)uVar5 * 0x10);
    puVar27 = (uint *)(plVar1 + 1);
    uVar5 = *puVar27;
    uVar24 = (ulong)uVar5;
    uVar22 = uVar5;
    if (0 < (int)uVar5) {
      if (uVar5 == 1) {
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        piVar33 = (int *)(*plVar1 + 0x20);
        do {
          uVar29 = uVar29 + 2;
          uVar22 = *piVar33 + piVar33[-6] + uVar22;
          piVar33 = piVar33 + 0xc;
        } while ((uVar24 & 0xfffffffe) != uVar29);
      }
      if ((uVar5 & 1) != 0) {
        uVar22 = *(int *)(*plVar1 + uVar29 * 0x18 + 8) + uVar22;
      }
    }
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < (int)uVar22) {
      FUN_03334b98(param_3,(long)(int)uVar22);
      uVar24 = (ulong)*puVar27;
    }
    if (0 < (int)uVar24) {
      lVar32 = 0;
LAB_03333e5c:
      lVar19 = *plVar1;
      iVar35 = *(int *)(lVar19 + lVar32 * 0x18 + 8);
      if (0 < iVar35) {
        plVar18 = (long *)(lVar19 + lVar32 * 0x18);
        iVar4 = *(int *)((long)plVar18 + 0xc);
        lVar36 = *plVar18;
        iVar37 = 0;
        do {
          local_2f8 = (undefined8 *)0x0;
          local_2f0 = 0x8000000000000000;
          local_350[0] = *(undefined4 *)(lVar19 + lVar32 * 0x18 + 0x10);
          lVar14 = FUN_03327360(param_1 + 0x28,local_350);
          lVar19 = lVar36;
          if (lVar14 == 0) {
            iVar34 = 0;
          }
          else {
            puVar38 = (undefined8 *)
                      (*(long *)(param_1 + 0x18) +
                      (long)*(int *)(*(long *)(param_1 + 0x28) + (long)*(int *)(lVar14 + 4) * 8 + 4)
                      * 0x10);
            iVar34 = *(int *)(puVar38 + 1);
            puVar38 = (undefined8 *)*puVar38;
            if (iVar34 < 1) {
              if (iVar34 == 0) {
                local_2f0 = local_2f0 & 0xffffffff00000000;
                goto LAB_0333407c;
              }
              puVar28 = (undefined8 *)0x0;
            }
            else {
              FUN_03334d20(&local_2f8,(long)iVar34);
              puVar28 = local_2f8;
            }
            puVar20 = puVar38 + (long)iVar34 * 6;
            do {
              uVar12 = puVar38[1];
              *puVar28 = *puVar38;
              puVar28[1] = uVar12;
              uVar24 = puVar38[2];
              puVar28[2] = uVar24;
              if ((uVar24 & 1) != 0) {
                piVar33 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
                do {
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                  if (bVar10) {
                    *piVar33 = *piVar33 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              uVar12 = puVar38[4];
              puVar28[3] = puVar38[3];
              puVar28[4] = uVar12;
              uVar24 = puVar38[5];
              puVar28[5] = uVar24;
              if ((uVar24 & 1) != 0) {
                piVar33 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
                do {
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                  if (bVar10) {
                    *piVar33 = *piVar33 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              puVar38 = puVar38 + 6;
              puVar28 = puVar28 + 6;
            } while (puVar38 != puVar20);
            local_2f0 = CONCAT44(local_2f0._4_4_,iVar34);
            if (0 < iVar34) {
              lVar14 = 0;
              do {
                puVar21 = (ulong *)*param_2;
                if (puVar21 != (ulong *)0x0) {
                  puVar30 = puVar21;
                  do {
                    uVar24 = *puVar30;
                    if (((uint)uVar24 >> 2 & 1) != 0) {
                      uVar24 = puVar30[(uVar24 >> 1 & 1) + (uVar24 & 1) + 2];
                      if ((uVar24 & 1) != 0) {
                        piVar33 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
                        do {
                          cVar7 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                          if (bVar10) {
                            *piVar33 = *piVar33 + 1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                      }
                      goto LAB_03333fe8;
                    }
                    puVar30 = (ulong *)puVar30[1];
                  } while (puVar30 != (ulong *)0x0);
                }
                uVar24 = 0;
LAB_03333fe8:
                if (lVar19 == 0 && local_2f8[lVar14 * 6] == 0) {
                  bVar10 = true;
                }
                else if (local_2f8[lVar14 * 6] == lVar19) {
                  bVar10 = (ulong *)local_2f8[lVar14 * 6 + 1] == puVar21;
                }
                else {
                  bVar10 = false;
                }
                if ((uVar24 & 1) != 0) {
                  plVar13 = (long *)(uVar24 & 0xfffffffffffffffe);
                  plVar18 = plVar13 + 1;
                  do {
                    lVar9 = *plVar18;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar8) {
                      *(int *)plVar18 = (int)lVar9 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if ((plVar13 != (long *)0x0) && ((int)lVar9 == 1)) {
                    (**(code **)(*plVar13 + 8))();
                  }
                }
                if (bVar10) {
                  lVar19 = local_2f8[lVar14 * 6 + 3];
                }
                lVar14 = lVar14 + 1;
                iVar34 = (int)local_2f0;
              } while (lVar14 < (int)local_2f0);
            }
          }
LAB_0333407c:
          iVar17 = (int)param_3[1];
          lVar14 = (long)iVar17;
          if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar17) {
            FUN_0332764c(param_3,PTR_PTR_047d1a50 + 0x20,lVar14 + 1);
            iVar17 = (int)param_3[1];
          }
          puVar38 = local_2f8;
          *(int *)(param_3 + 1) = (int)(lVar14 + 1);
          plVar18 = (long *)(*param_3 + (long)iVar17 * 0x18);
          *(undefined4 *)(plVar18 + 2) = 0;
          uVar3 = *(undefined4 *)(*plVar1 + lVar32 * 0x18 + 0x10);
          *plVar18 = lVar19;
          plVar18[1] = 1;
          *(undefined4 *)(plVar18 + 2) = uVar3;
          if (iVar34 != 0) {
            puVar28 = local_2f8 + (long)iVar34 * 6;
            do {
              if ((puVar28[-1] & 1) != 0) {
                plVar13 = (long *)(puVar28[-1] & 0xfffffffffffffffe);
                plVar18 = plVar13 + 1;
                do {
                  lVar19 = *plVar18;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar10) {
                    *(int *)plVar18 = (int)lVar19 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar19 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              puVar21 = puVar28 + -4;
              puVar28 = puVar28 + -6;
              if ((*puVar21 & 1) != 0) {
                plVar13 = (long *)(*puVar21 & 0xfffffffffffffffe);
                plVar18 = plVar13 + 1;
                do {
                  lVar19 = *plVar18;
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar10) {
                    *(int *)plVar18 = (int)lVar19 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar19 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
            } while (puVar28 != puVar38);
          }
          uVar24 = local_2f0;
          uVar29 = (ulong)local_2f0._4_4_;
          local_2f0 = (ulong)local_2f0._4_4_ << 0x20;
          if ((-1 < (long)uVar24) && (local_2f8 != (undefined8 *)0x0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,local_2f8,uVar29 * 0x30);
          }
          iVar37 = iVar37 + 1;
          if (iVar37 == iVar35) goto LAB_033341c4;
          lVar36 = lVar36 + iVar4;
          lVar19 = *plVar1;
        } while( true );
      }
      goto LAB_033341cc;
    }
  }
  return;
LAB_033341c4:
  uVar24 = (ulong)*puVar27;
LAB_033341cc:
  lVar32 = lVar32 + 1;
  if ((int)uVar24 <= lVar32) {
    return;
  }
  goto LAB_03333e5c;
}


