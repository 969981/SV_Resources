/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0332bc98; name: FUN_0332bc98
 */


/* WARNING: Removing unreachable block (ram,0x0332e36c) */
/* WARNING: Removing unreachable block (ram,0x0332e880) */
/* WARNING: Type propagation algorithm not settling */

long FUN_0332bc98(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined **ppuVar8;
  short sVar9;
  short sVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined2 *puVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  size_t sVar28;
  undefined8 uVar29;
  long *plVar30;
  char *pcVar31;
  ushort uVar32;
  int iVar33;
  undefined *puVar34;
  long lVar35;
  long *plVar36;
  undefined8 *puVar37;
  ulong *puVar38;
  char *pcVar39;
  byte *pbVar40;
  long lVar41;
  undefined8 *puVar42;
  long lVar43;
  byte *pbVar44;
  uint uVar45;
  undefined4 uVar46;
  uint uVar47;
  ulong *puVar48;
  ulong uVar49;
  ulong *puVar50;
  short *psVar51;
  ulong *puVar52;
  byte *pbVar53;
  byte *pbVar54;
  undefined8 *puVar55;
  ulong *puVar56;
  long lVar57;
  short *psVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  undefined1 *puVar63;
  long lVar64;
  long lVar65;
  size_t sVar66;
  code *pcVar67;
  undefined2 uVar68;
  undefined **ppuVar69;
  undefined8 *puVar70;
  long *plVar71;
  char *pcVar72;
  undefined2 uVar73;
  uint uVar74;
  undefined *puVar75;
  int *piVar76;
  undefined1 auVar77 [16];
  long *local_3f8;
  long *local_3f0;
  ulong local_3d0;
  undefined4 local_3c8 [2];
  undefined8 local_3c0;
  ulong *puStack_3b8;
  ulong local_3b0;
  undefined **local_3a8;
  undefined8 local_3a0;
  ulong local_398;
  long local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350 [2];
  undefined *local_348;
  ulong *puStack_340;
  ulong local_338;
  undefined1 *local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined4 local_318;
  undefined8 *local_310;
  long local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 local_2f0;
  undefined *local_2e8;
  int local_2e0;
  int local_268;
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
  
  *(uint *)(param_1 + 0x250) = -(uint)(*(int *)(param_1 + 0x268) < 1);
  iVar17 = *(int *)(param_1 + 0x278);
  *(long **)(param_1 + 0x1f8) = param_2;
  *(undefined8 *)(param_1 + 600) = 0;
  if (0 < iVar17) {
    lVar62 = 0;
    lVar64 = 0;
    do {
      puVar37 = (undefined8 *)(*(long *)(param_1 + 0x270) + lVar62);
      (**(code **)(**(long **)(param_1 + 0x240) + 0x20))
                (*(long **)(param_1 + 0x240),*puVar37,puVar37[1]);
      iVar17 = *(int *)(param_1 + 0x278);
      lVar64 = lVar64 + 1;
      lVar62 = lVar62 + 0x10;
    } while (lVar64 < iVar17);
  }
  if (iVar17 != 0) {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  auVar77 = FUN_03347020(param_3,0);
  iVar17 = (int)param_2[2];
  if (0 < iVar17) {
    lVar64 = 0;
    do {
      puVar52 = *(ulong **)(param_2[1] + lVar64 * 8);
      if (puVar52 != (ulong *)0x0) {
        puVar56 = puVar52;
        if ((*puVar52 & 1) == 0) {
          puVar48 = puVar52;
          do {
            puVar48 = (ulong *)puVar48[1];
          } while ((*puVar48 & 1) == 0);
          if ((puVar48[2] & 0x1f) == 7) {
            do {
              puVar56 = (ulong *)puVar56[1];
            } while ((*puVar56 & 1) == 0);
            goto LAB_0332bdb0;
          }
        }
        else if ((puVar52[2] & 0x1f) == 7) {
LAB_0332bdb0:
          if ((puVar56[2] & 0x1f) != 7) {
            puVar52 = (ulong *)0x0;
          }
          uVar49 = 0;
          do {
            uVar45 = (uint)*puVar52;
            if ((uVar45 >> 0x15 & 1) == 0) {
              uVar60 = 0;
            }
            else {
              uVar60 = CONCAT44(uVar45,uVar45) & 0x1fffff001fffff;
              uVar60 = puVar52[(ulong)(byte)(POPCOUNT((char)uVar60) + POPCOUNT((char)(uVar60 >> 8))
                                            + POPCOUNT((char)(uVar60 >> 0x10))) + 2];
            }
            uVar49 = uVar60 | uVar49;
          } while (((*puVar52 & 1) == 0) && (puVar52 = (ulong *)puVar52[1], puVar52 != (ulong *)0x0)
                  );
          if (((uint)uVar49 >> 5 & 1) == 0) {
            local_2f8 = (undefined **)(param_1 + 0x120);
            local_2f0 = (undefined **)(param_1 + 0x180);
            FUN_0333f354(&local_2f8);
            iVar17 = (int)param_2[2];
          }
        }
      }
      lVar64 = lVar64 + 1;
    } while (lVar64 < iVar17);
  }
  local_2f8 = (undefined **)0x0;
  local_2f0 = (undefined **)0x8000000000000000;
  (**(code **)(*param_2 + 0x18))(param_2,&local_2f8);
  ppuVar22 = local_2f8;
  puVar75 = PTR_DAT_047e61d0;
  uVar45 = (uint)local_2f0;
  uVar25 = *(undefined8 *)PTR_DAT_047e61d0;
  uVar6 = *(undefined8 *)(PTR_DAT_047e61d0 + 8);
  uVar49 = *(ulong *)(PTR_DAT_047e61d0 + 0x10);
  if ((uVar49 & 1) != 0) {
    piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
    do {
      cVar12 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
      if (bVar16) {
        *piVar76 = *piVar76 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  iVar17 = *(int *)(param_1 + 0x230);
  lVar64 = (long)iVar17;
  uVar46 = *(undefined4 *)(puVar75 + 0x18);
  if ((int)(*(uint *)(param_1 + 0x234) & 0x7fffffff) <= iVar17) {
    FUN_0321abfc(param_1 + 0x228,PTR_PTR_047d1a50,lVar64 + 1);
    iVar17 = *(int *)(param_1 + 0x230);
  }
  puVar37 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)iVar17 * 0x20);
  *puVar37 = uVar25;
  puVar37[1] = uVar6;
  puVar37[2] = uVar49;
  *(undefined4 *)(puVar37 + 3) = uVar46;
  lVar62 = (long)(int)uVar45;
  plVar1 = (long *)(param_1 + 0x218);
  *(int *)(param_1 + 0x230) = (int)(lVar64 + 1);
  if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar45) {
    FUN_033277d4(plVar1,PTR_PTR_047d1a50,lVar62);
  }
  iVar17 = *(int *)(param_1 + 0x220);
  puVar2 = (uint *)(param_1 + 0x220);
  if (iVar17 < (int)uVar45) {
    puVar37 = (undefined8 *)(*plVar1 + (long)iVar17 * 0x18);
    lVar64 = lVar62 * 0x18 + (long)iVar17 * -0x18;
    *puVar2 = uVar45;
    do {
      *(undefined4 *)((long)puVar37 + 0x14) = 0;
      lVar64 = lVar64 + -0x18;
      *(undefined1 *)(puVar37 + 2) = 0;
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = puVar37 + 3;
    } while (lVar64 != 0);
  }
  else if ((int)uVar45 < iVar17) {
    *puVar2 = uVar45;
  }
  if ((int)uVar45 < 1) {
    uVar45 = 0;
    iVar17 = -1;
  }
  else {
    lVar64 = 0;
    iVar17 = -1;
    do {
      ppuVar21 = ppuVar22 + lVar64 * 3;
      ppuVar69 = ppuVar21 + 2;
      if (*(char *)ppuVar69 == '\x01') {
        puVar75 = *ppuVar21;
        puVar52 = (ulong *)ppuVar22[lVar64 * 3 + 1];
        uVar46 = *(undefined4 *)((long)ppuVar22 + lVar64 * 0x18 + 0x14);
        if (puVar52 != (ulong *)0x0) {
          puVar56 = puVar52;
          do {
            uVar49 = *puVar56;
            if (((uint)uVar49 >> 2 & 1) != 0) {
              uVar49 = puVar56[(uVar49 >> 1 & 1) + (uVar49 & 1) + 2];
              if ((uVar49 & 1) != 0) {
                piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
                do {
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                  if (bVar16) {
                    *piVar76 = *piVar76 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
              }
              goto LAB_0332c070;
            }
            puVar56 = (ulong *)puVar56[1];
          } while (puVar56 != (ulong *)0x0);
        }
        uVar49 = 0;
LAB_0332c070:
        iVar33 = *(int *)(param_1 + 0x230);
        lVar35 = (long)iVar33;
        if ((int)(*(uint *)(param_1 + 0x234) & 0x7fffffff) <= iVar33) {
          FUN_0321abfc(param_1 + 0x228,PTR_PTR_047d1a50,lVar35 + 1);
          iVar33 = *(int *)(param_1 + 0x230);
        }
        puVar37 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)iVar33 * 0x20);
        *puVar37 = puVar75;
        puVar37[1] = puVar52;
        puVar37[2] = uVar49;
        *(undefined4 *)(puVar37 + 3) = uVar46;
        *(int *)(param_1 + 0x230) = (int)(lVar35 + 1);
      }
      else {
        puVar37 = (undefined8 *)(*plVar1 + lVar64 * 0x18);
        puVar75 = *ppuVar21;
        puVar34 = ppuVar21[2];
        puVar37[1] = ppuVar21[1];
        puVar37[2] = puVar34;
        *puVar37 = puVar75;
        if (iVar17 <= lVar64) {
          iVar17 = (int)lVar64;
        }
        if (*(char *)ppuVar69 == '\x02') {
          piVar76 = (int *)((long)ppuVar22 + lVar64 * 0x18 + 0x14);
          ppuVar21 = ppuVar22 + (long)*piVar76 * 3;
          puVar75 = *ppuVar21;
          do {
            ppuVar21 = (undefined **)ppuVar21[1];
            puVar34 = (undefined *)0x0;
            if (ppuVar21 == (undefined **)0x0) goto LAB_0332c034;
            puVar34 = *ppuVar21;
          } while (((uint)puVar34 >> 2 & 1) == 0);
          puVar34 = ppuVar21[((ulong)puVar34 >> 1 & 1) + ((ulong)puVar34 & 1) + 2];
LAB_0332c034:
          if (((ulong)puVar34 & 1) == 0) {
            if (puVar75 == (undefined *)0x0) {
LAB_0332c12c:
              iVar33 = *piVar76;
              goto LAB_0332c138;
            }
          }
          else {
            plVar36 = (long *)((ulong)puVar34 & 0xfffffffffffffffe);
            plVar30 = plVar36 + 1;
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar16) {
                *(int *)plVar30 = (int)*plVar30 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            do {
              lVar35 = *plVar30;
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar16) {
                *(int *)plVar30 = (int)lVar35 + -1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if ((plVar36 != (long *)0x0) && ((int)lVar35 == 1)) {
              (**(code **)(*plVar36 + 8))();
            }
            if (puVar75 == (undefined *)0x0) {
              if (*(char *)ppuVar69 == '\x02') goto LAB_0332c12c;
              iVar33 = 0;
LAB_0332c138:
              if (iVar17 <= iVar33) {
                iVar17 = iVar33;
              }
              *(int *)(*plVar1 + (long)iVar33 * 0x18 + 0x14) = (int)lVar64;
            }
          }
        }
      }
      lVar64 = lVar64 + 1;
    } while (lVar64 != lVar62);
    uVar45 = iVar17 + 1;
    if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) <= iVar17) {
      FUN_033277d4(plVar1,PTR_PTR_047d1a50,(long)(int)uVar45);
    }
  }
  uVar47 = *puVar2;
  if (iVar17 < (int)uVar47) {
    if ((int)uVar45 < (int)uVar47) {
      *puVar2 = uVar45;
      uVar47 = uVar45;
    }
  }
  else {
    puVar37 = (undefined8 *)(*plVar1 + (long)(int)uVar47 * 0x18);
    lVar64 = (long)(int)uVar45 * 0x18 + (long)(int)uVar47 * -0x18;
    *puVar2 = uVar45;
    do {
      *(undefined4 *)((long)puVar37 + 0x14) = 0;
      lVar64 = lVar64 + -0x18;
      *(undefined1 *)(puVar37 + 2) = 0;
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = puVar37 + 3;
    } while (lVar64 != 0);
    uVar47 = *puVar2;
  }
  if ((int)uVar47 < 2) {
    uVar47 = 1;
  }
  plVar30 = (long *)(param_1 + 0x280);
  if ((int)(*(uint *)(param_1 + 0x28c) & 0x7fffffff) < (int)uVar47) {
    FUN_02e9b320(plVar30,PTR_PTR_047d1a50,uVar47);
  }
  uVar45 = *(uint *)(param_1 + 0x288);
  if ((int)uVar45 < (int)uVar47) {
    *(uint *)(param_1 + 0x288) = uVar47;
    memset((void *)(*(long *)(param_1 + 0x280) + (long)(int)uVar45 * 4),0,
           (ulong)(uVar47 + ~uVar45) * 4 + 4);
  }
  else if ((int)uVar47 < (int)uVar45) {
    *(uint *)(param_1 + 0x288) = uVar47;
  }
  iVar17 = *(int *)(param_1 + 0x230);
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) < iVar17) {
    FUN_02e9b320((long *)(param_1 + 0x290),PTR_PTR_047d1a50,iVar17);
  }
  uVar45 = *(uint *)(param_1 + 0x298);
  if ((int)uVar45 < iVar17) {
    *(int *)(param_1 + 0x298) = iVar17;
    memset((void *)(*(long *)(param_1 + 0x290) + (long)(int)uVar45 * 4),0,
           (ulong)(iVar17 + ~uVar45) * 4 + 4);
  }
  else if (iVar17 < (int)uVar45) {
    *(int *)(param_1 + 0x298) = iVar17;
  }
  **(undefined4 **)(param_1 + 0x280) = 1;
  **(undefined4 **)(param_1 + 0x290) = 1;
  *(undefined1 *)(param_1 + 0x378) = 0;
  iVar17 = (int)param_2[2];
  if (0 < iVar17) {
    lVar64 = 0;
    do {
      puVar52 = *(ulong **)(param_2[1] + lVar64 * 8);
      if (puVar52 != (ulong *)0x0) {
        puVar56 = puVar52;
        if ((*puVar52 & 1) == 0) {
          puVar48 = puVar52;
          do {
            puVar48 = (ulong *)puVar48[1];
          } while ((*puVar48 & 1) == 0);
          if ((puVar48[2] & 0x1f) == 7) {
            do {
              puVar56 = (ulong *)puVar56[1];
            } while ((*puVar56 & 1) == 0);
            goto LAB_0332c378;
          }
        }
        else if ((puVar52[2] & 0x1f) == 7) {
LAB_0332c378:
          if ((puVar56[2] & 0x1f) != 7) {
            puVar52 = (ulong *)0x0;
          }
          uVar49 = 0;
          do {
            uVar45 = (uint)*puVar52;
            if ((uVar45 >> 0x15 & 1) == 0) {
              uVar60 = 0;
            }
            else {
              uVar60 = CONCAT44(uVar45,uVar45) & 0x1fffff001fffff;
              uVar60 = puVar52[(ulong)(byte)(POPCOUNT((char)uVar60) + POPCOUNT((char)(uVar60 >> 8))
                                            + POPCOUNT((char)(uVar60 >> 0x10))) + 2];
            }
            uVar49 = uVar60 | uVar49;
          } while (((*puVar52 & 1) == 0) && (puVar52 = (ulong *)puVar52[1], puVar52 != (ulong *)0x0)
                  );
          if (((uint)uVar49 >> 5 & 1) == 0) {
            local_330 = &DAT_03c886bc;
            local_328 = &DAT_03c886bc;
            FUN_033364d4(param_1 + 0x68,&local_330,0);
            iVar17 = (int)param_2[2];
          }
        }
      }
      lVar64 = lVar64 + 1;
    } while (lVar64 < iVar17);
  }
  puVar75 = PTR_PTR_047d1a50;
  if (0 < (int)*puVar2) {
    lVar64 = 0;
    do {
      plVar36 = (long *)(*(long *)(param_1 + 0x218) + lVar64 * 0x18);
      lVar62 = *plVar36;
      puVar52 = (ulong *)plVar36[1];
      if (puVar52 != (ulong *)0x0) {
        puVar56 = puVar52;
        do {
          uVar49 = *puVar56;
          if (((uint)uVar49 >> 2 & 1) != 0) {
            uVar49 = puVar56[(uVar49 >> 1 & 1) + (uVar49 & 1) + 2];
            if ((uVar49 & 1) != 0) {
              piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                if (bVar16) {
                  *piVar76 = *piVar76 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            goto LAB_0332c484;
          }
          puVar56 = (ulong *)puVar56[1];
        } while (puVar56 != (ulong *)0x0);
      }
      uVar49 = 0;
LAB_0332c484:
      if (puVar52 != (ulong *)0x0) {
        uVar45 = *(uint *)(param_1 + 0x2b4);
        if ((int)uVar45 < *(int *)(param_1 + 0x2b0) * 2) {
          FUN_02ef5fd4((long *)(param_1 + 0x2a8),puVar75,uVar45 * 2 + 2);
          uVar45 = *(uint *)(param_1 + 0x2b4);
        }
        uVar47 = (int)lVar62 * -0x61c8864f;
        uVar47 = (uVar47 & 0xff00ff00) >> 8 | (uVar47 & 0xff00ff) << 8;
        uVar74 = uVar47 >> 0x10 | uVar47 << 0x10;
        uVar47 = (int)((ulong)lVar62 >> 0x20) * -0x61c8864f;
        uVar47 = (uVar47 & 0xff00ff00) >> 8 | (uVar47 & 0xff00ff) << 8;
        uVar47 = uVar47 >> 0x10 | uVar47 << 0x10;
        uVar47 = uVar74 + (uVar74 >> 2) + uVar47 * 0x40 + 0x9e3779b9 ^ uVar47;
        lVar35 = *(long *)(param_1 + 0x2a8);
        while( true ) {
          uVar47 = uVar45 & uVar47;
          lVar57 = *(long *)(lVar35 + (ulong)uVar47 * 0x10);
          if (lVar57 == -1) break;
          if (lVar57 == lVar62) {
            iVar17 = 0;
            goto LAB_0332c518;
          }
          uVar47 = uVar47 + 1;
        }
        iVar17 = 1;
LAB_0332c518:
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + iVar17;
        *(long *)(lVar35 + (-(ulong)(uVar47 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar47 << 4)) =
             lVar62;
        *(long *)(*(long *)(param_1 + 0x2a8) + (long)(int)uVar47 * 0x10 + 8) = lVar64;
      }
      if ((uVar49 & 1) != 0) {
        plVar18 = (long *)(uVar49 & 0xfffffffffffffffe);
        plVar36 = plVar18 + 1;
        do {
          lVar62 = *plVar36;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar16) {
            *(int *)plVar36 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      lVar64 = lVar64 + 1;
    } while (lVar64 < (int)*puVar2);
  }
  puVar75 = PTR_PTR_047d1a50;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar64 = 0;
    do {
      plVar36 = (long *)(*(long *)(param_1 + 0x228) + lVar64 * 0x20);
      uVar49 = plVar36[2];
      lVar62 = *plVar36;
      lVar35 = plVar36[1];
      if ((uVar49 & 1) != 0) {
        piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
          if (bVar16) {
            *piVar76 = *piVar76 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      if (lVar35 != 0) {
        uVar45 = *(uint *)(param_1 + 0x2b4);
        if ((int)uVar45 < *(int *)(param_1 + 0x2b0) * 2) {
          FUN_02ef5fd4((long *)(param_1 + 0x2a8),puVar75,uVar45 * 2 + 2);
          uVar45 = *(uint *)(param_1 + 0x2b4);
        }
        uVar47 = (int)lVar62 * -0x61c8864f;
        uVar47 = (uVar47 & 0xff00ff00) >> 8 | (uVar47 & 0xff00ff) << 8;
        uVar74 = uVar47 >> 0x10 | uVar47 << 0x10;
        uVar47 = (int)((ulong)lVar62 >> 0x20) * -0x61c8864f;
        uVar47 = (uVar47 & 0xff00ff00) >> 8 | (uVar47 & 0xff00ff) << 8;
        uVar47 = uVar47 >> 0x10 | uVar47 << 0x10;
        uVar47 = uVar74 + (uVar74 >> 2) + uVar47 * 0x40 + 0x9e3779b9 ^ uVar47;
        lVar35 = *(long *)(param_1 + 0x2a8);
        while( true ) {
          uVar47 = uVar45 & uVar47;
          lVar57 = *(long *)(lVar35 + (ulong)uVar47 * 0x10);
          if (lVar57 == -1) break;
          if (lVar57 == lVar62) {
            iVar17 = 0;
            goto LAB_0332c65c;
          }
          uVar47 = uVar47 + 1;
        }
        iVar17 = 1;
LAB_0332c65c:
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + iVar17;
        *(long *)(lVar35 + (-(ulong)(uVar47 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar47 << 4)) =
             lVar62;
        *(long *)(*(long *)(param_1 + 0x2a8) + (long)(int)uVar47 * 0x10 + 8) = lVar64;
      }
      if ((uVar49 & 1) != 0) {
        plVar18 = (long *)(uVar49 & 0xfffffffffffffffe);
        plVar36 = plVar18 + 1;
        do {
          lVar62 = *plVar36;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar16) {
            *(int *)plVar36 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      lVar64 = lVar64 + 1;
    } while (lVar64 < *(int *)(param_1 + 0x230));
  }
  lVar64 = (long)local_2f0;
  uVar49 = (ulong)local_2f0._4_4_;
  local_2f0 = (undefined **)((ulong)local_2f0._4_4_ << 0x20);
  if ((-1 < lVar64) && (local_2f8 != (undefined **)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2f8,uVar49 * 0x18);
  }
  lVar64 = param_1 + 0x200;
  plVar36 = (long *)(param_1 + 0x68);
  FUN_03339ea8(plVar36,1);
  puVar75 = PTR_DAT_047e5c40;
  if (0 < *(int *)(param_1 + 0x220)) {
    uVar49 = 0;
    do {
      plVar18 = (long *)(*(long *)(param_1 + 0x218) + uVar49 * 0x18);
      lVar62 = *plVar18;
      puVar52 = (ulong *)plVar18[1];
      if (puVar52 != (ulong *)0x0) {
        puVar56 = puVar52;
        do {
          uVar60 = *puVar56;
          if (((uint)uVar60 >> 2 & 1) != 0) {
            uVar60 = puVar56[(uVar60 >> 1 & 1) + (uVar60 & 1) + 2];
            if ((uVar60 & 1) != 0) {
              piVar76 = (int *)((uVar60 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                if (bVar16) {
                  *piVar76 = *piVar76 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            goto LAB_0332c790;
          }
          puVar56 = (ulong *)puVar56[1];
        } while (puVar56 != (ulong *)0x0);
      }
      uVar60 = 0;
LAB_0332c790:
      if (puVar52 != (ulong *)0x0) {
        if ((lVar62 == 0) || (uVar19 = FUN_031dd260(puVar52,puVar75), (uVar19 & 1) == 0)) {
          puVar56 = puVar52;
          if ((*puVar52 & 1) == 0) {
            do {
              puVar56 = (ulong *)puVar56[1];
            } while ((*puVar56 & 1) == 0);
          }
          if ((puVar56[2] & 0x1f) == 7) {
            uVar19 = FUN_0333faf4(plVar36,puVar52);
            uVar59 = 0;
            puVar56 = puVar52;
            do {
              uVar45 = (uint)*puVar56;
              if ((uVar45 >> 0x15 & 1) == 0) {
                uVar61 = 0;
              }
              else {
                uVar61 = CONCAT44(uVar45,uVar45) & 0x1fffff001fffff;
                uVar61 = puVar56[(ulong)(byte)(POPCOUNT((char)uVar61) +
                                               POPCOUNT((char)(uVar61 >> 8)) +
                                              POPCOUNT((char)(uVar61 >> 0x10))) + 2];
              }
              uVar59 = uVar61 | uVar59;
            } while (((*puVar56 & 1) == 0) &&
                    (puVar56 = (ulong *)puVar56[1], puVar56 != (ulong *)0x0));
            if (((uint)uVar59 >> 5 & 1) == 0) {
              local_2f8 = (undefined **)&DAT_03c886bc;
              local_2f0 = (undefined **)&DAT_03c886bc;
              lVar35 = FUN_033364d4(plVar36,&local_2f8,0,puVar52);
              if (lVar35 == 0) goto LAB_0332ca60;
            }
            if ((uVar19 & 1) == 0) {
              puVar52 = (ulong *)FUN_03331b38(param_1,puVar52);
              if (puVar52 != (ulong *)0x0) {
                puVar56 = puVar52;
                do {
                  uVar19 = *puVar56;
                  if (((uint)uVar19 >> 2 & 1) != 0) {
                    uVar19 = puVar56[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                    if ((uVar19 & 1) != 0) {
                      piVar76 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                        if (bVar16) {
                          *piVar76 = *piVar76 + 1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                    }
                    goto LAB_0332caac;
                  }
                  puVar56 = (ulong *)puVar56[1];
                } while (puVar56 != (ulong *)0x0);
              }
              uVar19 = 0;
LAB_0332caac:
              local_320 = (undefined *)((ulong)local_320 & 0xffffffffffffff00);
              local_330 = (undefined1 *)0x0;
              local_328 = (undefined1 *)0x0;
              uVar47 = *(uint *)(param_1 + 0x220);
              uVar45 = uVar47;
              if ((long)(int)uVar47 <= (long)uVar49) {
                uVar45 = (int)uVar49 + 1;
              }
              if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar45) {
                FUN_033277d4(plVar1,PTR_PTR_047d1a50,(long)(int)uVar45);
                uVar47 = *puVar2;
              }
              uVar74 = uVar45 - uVar47;
              if (uVar74 == 0 || (int)uVar45 < (int)uVar47) {
                if ((int)uVar45 < (int)uVar47) {
                  *puVar2 = uVar45;
                }
              }
              else {
                puVar37 = (undefined8 *)(*plVar1 + (long)(int)uVar47 * 0x18);
                *puVar2 = uVar45;
                uVar3 = uVar74 & 3;
                if (2 < uVar45 + ~uVar47) {
                  iVar17 = -(uVar74 & 0xfffffffc);
                  puVar70 = puVar37;
                  do {
                    puVar37 = puVar70 + 0xc;
                    *puVar70 = local_330;
                    puVar70[1] = local_328;
                    *(undefined4 *)(puVar70 + 2) = local_320._0_4_;
                    *(undefined4 *)((long)puVar70 + 0x14) = 0;
                    puVar70[3] = local_330;
                    puVar70[4] = local_328;
                    *(undefined4 *)(puVar70 + 5) = local_320._0_4_;
                    *(undefined4 *)((long)puVar70 + 0x2c) = 0;
                    puVar70[6] = local_330;
                    puVar70[7] = local_328;
                    *(undefined4 *)(puVar70 + 8) = local_320._0_4_;
                    *(undefined4 *)((long)puVar70 + 0x44) = 0;
                    puVar70[9] = local_330;
                    puVar70[10] = local_328;
                    *(undefined4 *)(puVar70 + 0xb) = local_320._0_4_;
                    *(undefined4 *)((long)puVar70 + 0x5c) = 0;
                    iVar17 = iVar17 + 4;
                    puVar70 = puVar37;
                  } while (iVar17 != 0);
                }
                for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                  *puVar37 = local_330;
                  puVar37[1] = local_328;
                  *(undefined4 *)(puVar37 + 2) = local_320._0_4_;
                  *(undefined4 *)((long)puVar37 + 0x14) = 0;
                  puVar37 = puVar37 + 3;
                }
              }
              *(long *)(*plVar1 + uVar49 * 0x18) = lVar62;
              *(ulong **)(*plVar1 + uVar49 * 0x18 + 8) = puVar52;
              if ((uVar19 & 1) != 0) {
                plVar20 = (long *)(uVar19 & 0xfffffffffffffffe);
                plVar18 = plVar20 + 1;
                do {
                  lVar62 = *plVar18;
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar16) {
                    *(int *)plVar18 = (int)lVar62 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
                  (**(code **)(*plVar20 + 8))();
                }
              }
            }
            else {
              FUN_0333141c(param_1,uVar49 & 0xffffffff);
            }
          }
        }
        else {
          lVar62 = FUN_03330fb0(param_1,lVar62);
          if (lVar62 == 0) {
LAB_0332ca60:
            FUN_0333124c(param_1,uVar49 & 0xffffffff);
          }
          else {
            puVar56 = puVar52;
            do {
              uVar19 = *puVar56;
              if (((uint)uVar19 >> 2 & 1) != 0) {
                uVar19 = puVar56[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                if ((uVar19 & 1) != 0) {
                  piVar76 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                    if (bVar16) {
                      *piVar76 = *piVar76 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                goto LAB_0332c904;
              }
              puVar56 = (ulong *)puVar56[1];
            } while (puVar56 != (ulong *)0x0);
            uVar19 = 0;
LAB_0332c904:
            local_320 = (undefined *)((ulong)local_320 & 0xffffffffffffff00);
            local_330 = (undefined1 *)0x0;
            local_328 = (undefined1 *)0x0;
            uVar47 = *(uint *)(param_1 + 0x220);
            uVar45 = uVar47;
            if ((long)(int)uVar47 <= (long)uVar49) {
              uVar45 = (int)uVar49 + 1;
            }
            if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar45) {
              FUN_033277d4(plVar1,PTR_PTR_047d1a50,(long)(int)uVar45);
              uVar47 = *puVar2;
            }
            uVar74 = uVar45 - uVar47;
            if (uVar74 == 0 || (int)uVar45 < (int)uVar47) {
              if ((int)uVar45 < (int)uVar47) {
                *puVar2 = uVar45;
              }
            }
            else {
              puVar37 = (undefined8 *)(*plVar1 + (long)(int)uVar47 * 0x18);
              *puVar2 = uVar45;
              uVar3 = uVar74 & 3;
              if (2 < uVar45 + ~uVar47) {
                iVar17 = -(uVar74 & 0xfffffffc);
                puVar70 = puVar37;
                do {
                  puVar37 = puVar70 + 0xc;
                  *puVar70 = local_330;
                  puVar70[1] = local_328;
                  *(undefined4 *)(puVar70 + 2) = local_320._0_4_;
                  *(undefined4 *)((long)puVar70 + 0x14) = 0;
                  puVar70[3] = local_330;
                  puVar70[4] = local_328;
                  *(undefined4 *)(puVar70 + 5) = local_320._0_4_;
                  *(undefined4 *)((long)puVar70 + 0x2c) = 0;
                  puVar70[6] = local_330;
                  puVar70[7] = local_328;
                  *(undefined4 *)(puVar70 + 8) = local_320._0_4_;
                  *(undefined4 *)((long)puVar70 + 0x44) = 0;
                  puVar70[9] = local_330;
                  puVar70[10] = local_328;
                  *(undefined4 *)(puVar70 + 0xb) = local_320._0_4_;
                  *(undefined4 *)((long)puVar70 + 0x5c) = 0;
                  iVar17 = iVar17 + 4;
                  puVar70 = puVar37;
                } while (iVar17 != 0);
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar37 = local_330;
                puVar37[1] = local_328;
                *(undefined4 *)(puVar37 + 2) = local_320._0_4_;
                *(undefined4 *)((long)puVar37 + 0x14) = 0;
                puVar37 = puVar37 + 3;
              }
            }
            *(long *)(*plVar1 + uVar49 * 0x18) = lVar62;
            *(ulong **)(*plVar1 + uVar49 * 0x18 + 8) = puVar52;
            if ((uVar19 & 1) != 0) {
              plVar20 = (long *)(uVar19 & 0xfffffffffffffffe);
              plVar18 = plVar20 + 1;
              do {
                lVar62 = *plVar18;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *(int *)plVar18 = (int)lVar62 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            *(undefined4 *)(*plVar30 + uVar49 * 4) = 1;
          }
        }
      }
      if ((uVar60 & 1) != 0) {
        plVar20 = (long *)(uVar60 & 0xfffffffffffffffe);
        plVar18 = plVar20 + 1;
        do {
          lVar62 = *plVar18;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar16) {
            *(int *)plVar18 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar20 + 8))();
        }
      }
      uVar49 = uVar49 + 1;
    } while ((long)uVar49 < (long)(int)*puVar2);
  }
  if (0 < *(int *)(param_1 + 0x230)) {
    uVar49 = 0;
    do {
      lVar62 = *(long *)(param_1 + 0x228) + uVar49 * 0x20;
      lVar35 = *(long *)(lVar62 + 8);
      uVar60 = *(ulong *)(lVar62 + 0x10);
      if ((uVar60 & 1) != 0) {
        piVar76 = (int *)((uVar60 & 0xfffffffffffffffe) + 8);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
          if (bVar16) {
            *piVar76 = *piVar76 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      if (lVar35 == 0) {
        bVar16 = false;
      }
      else {
        lVar62 = *(long *)(param_1 + 0x228) + uVar49 * 0x20;
        pbVar40 = *(byte **)(lVar62 + 8);
        uVar19 = *(ulong *)(lVar62 + 0x10);
        if ((uVar19 & 1) != 0) {
          piVar76 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
            if (bVar16) {
              *piVar76 = *piVar76 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
        }
        pbVar53 = pbVar40;
        if ((*pbVar40 & 1) == 0) {
          do {
            pbVar53 = *(byte **)(pbVar53 + 8);
          } while ((*pbVar53 & 1) == 0);
        }
        bVar16 = pbVar40 == (byte *)0x0 || (*(ulong *)(pbVar53 + 0x10) & 0x1f) != 3;
        if ((uVar19 & 1) != 0) {
          plVar20 = (long *)(uVar19 & 0xfffffffffffffffe);
          plVar18 = plVar20 + 1;
          do {
            lVar62 = *plVar18;
            cVar12 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *(int *)plVar18 = (int)lVar62 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      if ((uVar60 & 1) != 0) {
        plVar20 = (long *)(uVar60 & 0xfffffffffffffffe);
        plVar18 = plVar20 + 1;
        do {
          lVar62 = *plVar18;
          cVar12 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *(int *)plVar18 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar20 + 8))();
        }
      }
      if (bVar16) {
        lVar62 = *(long *)(param_1 + 0x228);
        puVar37 = (undefined8 *)(lVar62 + uVar49 * 0x20);
        uVar60 = puVar37[2];
        ppuVar22 = (undefined **)*puVar37;
        puVar52 = (ulong *)puVar37[1];
        if ((uVar60 & 1) == 0) {
          uVar19 = uVar60;
          if ((uVar60 & 1) == 0) goto LAB_0332ce28;
LAB_0332cd70:
          plVar20 = (long *)(uVar19 & 0xfffffffffffffffe);
          plVar18 = plVar20 + 1;
          do {
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)*plVar18 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          iVar33 = *(int *)(lVar62 + uVar49 * 0x20 + 0x18);
          iVar17 = -iVar33;
          if (-1 < iVar33) {
            iVar17 = iVar33;
          }
          do {
            lVar62 = *plVar18;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)lVar62 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        else {
          plVar20 = (long *)(uVar60 & 0xfffffffffffffffe);
          plVar18 = plVar20 + 1;
          do {
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)*plVar18 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          do {
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)*plVar18 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          do {
            lVar62 = *plVar18;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)lVar62 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
          lVar62 = *(long *)(param_1 + 0x228);
          uVar19 = *(ulong *)(lVar62 + uVar49 * 0x20 + 0x10);
          if ((uVar19 & 1) != 0) goto LAB_0332cd70;
LAB_0332ce28:
          iVar33 = *(int *)(lVar62 + uVar49 * 0x20 + 0x18);
          iVar17 = -iVar33;
          if (-1 < iVar33) {
            iVar17 = iVar33;
          }
        }
        if (puVar52 != (ulong *)0x0) {
          uVar19 = *puVar52;
          puVar56 = puVar52;
          if ((uVar19 & 1) == 0) {
            puVar48 = puVar52;
            do {
              puVar48 = (ulong *)puVar48[1];
            } while ((*puVar48 & 1) == 0);
            if ((puVar48[2] & 0x1f) == 7) goto LAB_0332ce8c;
            do {
              puVar56 = (ulong *)puVar56[1];
            } while ((*puVar56 & 1) == 0);
          }
          else if ((puVar52[2] & 0x1f) == 7) {
LAB_0332ce8c:
            uVar59 = 0;
            if (((uint)uVar19 >> 0x15 & 1) == 0) goto LAB_0332cebc;
            do {
              uVar61 = CONCAT44((int)uVar19,(int)uVar19) & 0x1fffff001fffff;
              uVar61 = puVar56[(ulong)(byte)(POPCOUNT((char)uVar61) + POPCOUNT((char)(uVar61 >> 8))
                                            + POPCOUNT((char)(uVar61 >> 0x10))) + 2];
              while( true ) {
                uVar59 = uVar61 | uVar59;
                if (((uVar19 & 1) != 0) || (puVar56 = (ulong *)puVar56[1], puVar56 == (ulong *)0x0))
                {
                  if (((uint)uVar59 >> 5 & 1) != 0) goto LAB_0332cf34;
                  uVar19 = FUN_0333faf4(plVar36,puVar52);
                  if ((uVar19 & 1) != 0) goto LAB_0332cf04;
                  local_2f8 = (undefined **)&DAT_03c886bc;
                  local_2f0 = (undefined **)&DAT_03c886bc;
                  lVar62 = FUN_033364d4(plVar36,&local_2f8,0,puVar52);
                  if (lVar62 != 0) goto LAB_0332cf34;
                  FUN_03328194(param_1,uVar49 & 0xffffffff);
                  goto joined_r0x0332d044;
                }
                uVar19 = *puVar56;
                if (((uint)uVar19 >> 0x15 & 1) != 0) break;
LAB_0332cebc:
                uVar61 = 0;
              }
            } while( true );
          }
          if ((puVar56[2] & 0x1f) == 6) {
LAB_0332cf04:
            FUN_033240e8(param_1,uVar49 & 0xffffffff);
          }
          else {
LAB_0332cf34:
            local_2f0 = (undefined **)FUN_03331b38(param_1,puVar52);
            for (ppuVar21 = local_2f0; ppuVar21 != (undefined **)0x0;
                ppuVar21 = (undefined **)ppuVar21[1]) {
              puVar75 = *ppuVar21;
              if (((uint)puVar75 >> 2 & 1) != 0) {
                local_2e8 = ppuVar21[((ulong)puVar75 >> 1 & 1) + ((ulong)puVar75 & 1) + 2];
                goto LAB_0332cf74;
              }
            }
            local_2e8 = (undefined *)0x0;
LAB_0332cf74:
            local_2f8 = ppuVar22;
            local_2e0 = iVar17;
            if (((ulong)local_2e8 & 1) == 0) {
              FUN_03323a58(lVar64,uVar49 & 0xffffffff,&local_2f8);
            }
            else {
              plVar20 = (long *)((ulong)local_2e8 & 0xfffffffffffffffe);
              plVar18 = plVar20 + 1;
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *(int *)plVar18 = (int)*plVar18 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              FUN_03323a58(lVar64,uVar49 & 0xffffffff,&local_2f8);
              do {
                lVar62 = *plVar18;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *(int *)plVar18 = (int)lVar62 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar20 + 8))(plVar20);
              }
            }
          }
        }
joined_r0x0332d044:
        if ((uVar60 & 1) != 0) {
          plVar20 = (long *)(uVar60 & 0xfffffffffffffffe);
          plVar18 = plVar20 + 1;
          do {
            lVar62 = *plVar18;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *(int *)plVar18 = (int)lVar62 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
      }
      uVar49 = uVar49 + 1;
    } while ((long)uVar49 < (long)*(int *)(param_1 + 0x230));
  }
  iVar17 = *(int *)(param_1 + 0xb8);
  if (0 < iVar17) {
    lVar62 = 0;
    do {
      puVar37 = *(undefined8 **)(*(long *)(param_1 + 0xb0) + lVar62 * 8);
      if (puVar37 != (undefined8 *)0x0) {
        *(long *)((undefined4 *)*puVar37 +
                 (ulong)(byte)POPCOUNT((byte)*(undefined4 *)*puVar37 & 0xf) * 2 + 4) =
             (long)*(int *)(puVar37 + 2);
        iVar17 = *(int *)(param_1 + 0xb8);
      }
      lVar62 = lVar62 + 1;
    } while (lVar62 < iVar17);
  }
  uVar49 = auVar77._8_8_ - auVar77._0_8_;
  if (0 < (int)(uVar49 >> 3)) {
    uVar60 = 0;
    do {
      puVar37 = *(undefined8 **)(auVar77._0_8_ + uVar60 * 8);
      if ((*(int *)(puVar37 + 6) < 1) || (*(char *)((long)puVar37 + 0x34) == '\0')) {
        local_308 = 0;
        local_300 = -0x8000000000000000;
        local_2f8 = (undefined **)*puVar37;
        local_2f0 = (undefined **)puVar37[1];
        FUN_03335e18(plVar36,&local_2f8,*(undefined4 *)(puVar37 + 4),&local_308);
        if (0 < (int)local_300) {
          lVar62 = 0;
          local_3f8 = (long *)0x0;
          local_3f0 = (long *)0x0;
          do {
            plVar18 = *(long **)(local_308 + lVar62 * 8);
            puVar52 = (ulong *)*plVar18;
            puVar56 = puVar52;
            if ((*puVar52 & 1) == 0) {
              do {
                puVar56 = (ulong *)puVar56[1];
              } while ((*puVar56 & 1) == 0);
            }
            local_318 = 0;
            if ((puVar56[2] & 0x1f) != 7) {
              puVar52 = (ulong *)0x0;
            }
            local_330 = (undefined1 *)0x0;
            local_328 = (undefined1 *)0x8000000000000000;
            local_320 = &DAT_03d7702c;
            local_310 = puVar37;
            FUN_0334026c(&local_330,puVar37);
            if (0 < *(int *)(puVar37 + 6)) {
              lVar35 = 0;
LAB_0332d1b4:
              lVar57 = puVar37[5];
              switch(*(undefined1 *)(lVar57 + lVar35 * 0x10)) {
              case 1:
                lVar57 = *(long *)(lVar57 + lVar35 * 0x10 + 8);
                if (lVar57 != 0) {
                  if (*(int *)(lVar57 + 0x10) == 0xb) {
                    iVar17 = 0;
                  }
                  else {
                    iVar17 = FUN_0333d8d0(&local_330,lVar57 + 0x18);
                  }
                  if ((-1 < iVar17) || (*(long *)(lVar57 + 0x18) == *(long *)(lVar57 + 0x20))) {
                    FUN_0333242c(param_1,plVar18,puVar52,lVar57,*(undefined4 *)(lVar57 + 0x10),
                                 (long *)(lVar57 + 0x18),*(undefined4 *)(lVar57 + 0x28),
                                 *(undefined8 *)(lVar57 + 0x30),iVar17);
                  }
                }
                break;
              case 2:
                if (*(long *)(lVar57 + lVar35 * 0x10 + 8) != 0) {
                  FUN_03332e54(param_1,plVar18,puVar52);
                }
                break;
              case 3:
                lVar57 = *(long *)(lVar57 + lVar35 * 0x10 + 8);
                if (lVar57 != 0) {
                  puVar24 = (undefined2 *)FUN_03325d70(puVar52,lVar57);
                  uVar25 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,
                                        *(undefined8 *)(lVar57 + 0x10),
                                        *(int *)(lVar57 + 0x18) -
                                        (int)*(undefined8 *)(lVar57 + 0x10),1);
                  *(undefined8 *)
                   (puVar24 +
                   (ulong)(byte)(POPCOUNT((char)*puVar24) + POPCOUNT((char)((ushort)*puVar24 >> 8)))
                   * 4 + 8) = uVar25;
                }
                break;
              case 4:
                puVar70 = *(undefined8 **)(lVar57 + lVar35 * 0x10 + 8);
                if (puVar70 == (undefined8 *)0x0) break;
                lVar57 = tpidr_el0;
                lVar65 = *(long *)(lVar57 + 0x1000b8);
                if (lVar65 == 0) {
                  lVar65 = FUN_00e5d3b4();
                  *(long *)(lVar57 + 0x1000b8) = lVar65;
                }
                plVar20 = *(long **)(lVar65 + 0x3e0);
                if (plVar20 != (long *)0x0) {
                  lVar57 = *plVar20;
                  if (*(code **)(lVar57 + 0x18) != (code *)0x0) {
                    (**(code **)(lVar57 + 0x18))
                              ("PATCH_MEMBER_DEFAULT_SET",0x18,*(undefined8 *)(lVar57 + 0x28));
                  }
                  puVar42 = (undefined8 *)plVar20[2];
                  uVar19 = (long)puVar42 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar19 <= (ulong)plVar20[3]) &&
                     (plVar20[2] = uVar19, puVar42 != (undefined8 *)0x0)) {
                    *puVar42 = "TtPATCH_MEMBER_DEFAULT_SET";
                    uVar25 = nn::os::GetSystemTick();
                    puVar42[1] = uVar25;
                  }
                  if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                    puVar42 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar42 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar42 != (undefined8 *)0x0)) {
                      *puVar42 = &DAT_03c4e575;
                      puVar42[1] = *(undefined8 *)(plVar20[6] + 8);
                    }
                  }
                }
                puVar56 = (ulong *)FUN_03325d70(puVar52,puVar70);
                uVar61 = *puVar56 | 0x1000;
                uVar19 = uVar61 - ((*puVar56 & 0xaaaaaaaaaaaaaaaa) >> 1);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar59 = puVar70[2];
                puVar48 = (ulong *)(**(code **)(*plVar36 + 0x18))
                                             (plVar36,((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f)
                                                       * 0x101010101010101 >> 0x35 & 0x7f8) + 0x10);
                uVar19 = puVar56[1];
                uVar45 = 0;
                *puVar48 = uVar61;
                puVar48[1] = uVar19;
                do {
                  uVar47 = 1 << (ulong)(uVar45 & 0x1f);
                  uVar74 = (uint)uVar61;
                  if ((*puVar56 & (ulong)uVar47) != 0) {
                    uVar47 = uVar47 - 1;
                    uVar3 = uVar47 & (uint)*puVar56;
                    uVar47 = uVar47 & uVar74;
                    puVar48[(ulong)(byte)(POPCOUNT((char)uVar47) + POPCOUNT((char)(uVar47 >> 8)) +
                                         POPCOUNT((char)(uVar47 >> 0x10)) +
                                         POPCOUNT((char)(uVar47 >> 0x18))) + 2] =
                         puVar56[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))
                                              + POPCOUNT((char)(uVar3 >> 0x10)) +
                                                POPCOUNT((char)(uVar3 >> 0x18))) + 2];
                  }
                  uVar45 = uVar45 + 1;
                } while (uVar45 != 0x20);
                uVar19 = CONCAT44(uVar74,uVar74) & 0xfff00000fff;
                puVar48[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2] =
                     uVar59;
                pcVar72 = (char *)FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar70,
                                               *(int *)(puVar70 + 1) - (int)*puVar70,1);
                if (puVar52 != (ulong *)0x0) {
                  puVar56 = puVar52;
                  do {
                    puVar38 = puVar56;
                    do {
                      uVar45 = (uint)*puVar38;
                      if ((uVar45 >> 0x17 & 1) != 0) {
                        uVar19 = CONCAT44(uVar45,uVar45) & 0x7fffff007fffff;
                        psVar51 = (short *)puVar38[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                                 POPCOUNT((char)(uVar19 >> 8)) +
                                                                POPCOUNT((char)(uVar19 >> 0x10))) +
                                                   2];
                        goto LAB_0332d4bc;
                      }
                    } while (((*puVar38 & 1) == 0) &&
                            (puVar38 = (ulong *)puVar38[1], puVar38 != (ulong *)0x0));
                    psVar51 = (short *)0x0;
LAB_0332d4bc:
                    sVar9 = *psVar51;
                    sVar10 = psVar51[1];
                    if (0 < (int)sVar10 + (int)sVar9) {
                      uVar19 = 0;
LAB_0332d4d4:
                      puVar38 = *(ulong **)(psVar51 + uVar19 * 4 + 4);
                      if (puVar38 != (ulong *)0x0) {
                        puVar50 = puVar38;
                        while( true ) {
                          uVar45 = (uint)*puVar50;
                          if ((uVar45 >> 0x10 & 1) != 0) break;
                          if (((*puVar50 & 1) != 0) ||
                             (puVar50 = (ulong *)puVar50[1], puVar50 == (ulong *)0x0))
                          goto LAB_0332d568;
                        }
                        uVar59 = CONCAT44(uVar45,uVar45) & 0xffff0000ffff;
                        if (puVar50[(ulong)(byte)(POPCOUNT((char)uVar59) +
                                                 POPCOUNT((char)(uVar59 >> 8))) + 2] != 0)
                        goto LAB_0332d520;
                      }
                      goto LAB_0332d568;
                    }
LAB_0332d574:
                    puVar56 = (ulong *)puVar56[1];
                  } while (puVar56 != (ulong *)0x0);
                }
LAB_0332e238:
                if (plVar20 == (long *)0x0) break;
                lVar57 = *plVar20;
                if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                  puVar70 = (undefined8 *)plVar20[2];
                  uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar19 <= (ulong)plVar20[3]) &&
                     (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                    *puVar70 = &DAT_03c4e575;
                    puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
                  }
                }
                puVar70 = (undefined8 *)plVar20[2];
                uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                if (uVar19 <= (ulong)plVar20[3]) {
                  plVar20[2] = uVar19;
                  goto joined_r0x0332eaec;
                }
                goto LAB_0332eb04;
              case 5:
                lVar57 = *(long *)(lVar57 + lVar35 * 0x10 + 8);
                if (lVar57 != 0) {
                  lVar65 = tpidr_el0;
                  lVar41 = *(long *)(lVar65 + 0x1000b8);
                  if (lVar41 == 0) {
                    lVar41 = FUN_00e5d3b4();
                    *(long *)(lVar65 + 0x1000b8) = lVar41;
                  }
                  plVar20 = *(long **)(lVar41 + 0x3e0);
                  if (plVar20 != (long *)0x0) {
                    lVar65 = *plVar20;
                    if (*(code **)(lVar65 + 0x18) != (code *)0x0) {
                      (**(code **)(lVar65 + 0x18))
                                ("PATCH_DATAOBJECT_FUNCTION",0x19,*(undefined8 *)(lVar65 + 0x28));
                    }
                    puVar70 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                      *puVar70 = "TtPATCH_DATAOBJECT_FUNCTION";
                      uVar25 = nn::os::GetSystemTick();
                      puVar70[1] = uVar25;
                    }
                    if (((*(byte *)(lVar65 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                      puVar70 = (undefined8 *)plVar20[2];
                      uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar19 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                        *puVar70 = &DAT_03c4e575;
                        puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
                      }
                    }
                  }
                  local_3a8 = (undefined **)0x0;
                  local_3a0 = (undefined **)0x8000000000000000;
                  FUN_033331c8(param_1,plVar18,&local_3a8);
                  if (*(int *)(param_1 + 0x3a8) != 0) {
                    lVar65 = (long)*(int *)(param_1 + 0x3a8) << 4;
                    lVar41 = *(long *)(param_1 + 0x3a0);
                    do {
                      uVar19 = *(ulong *)(lVar41 + -0x10 + lVar65);
                      if ((uVar19 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar19 - 1,0);
                      }
                      lVar65 = lVar65 + -0x10;
                    } while (lVar65 != 0);
                    lVar65 = *(long *)(param_1 + 0x3b0);
                    *(undefined4 *)(param_1 + 0x3a8) = 0;
                    if ((((lVar65 != 0) && (*(int *)(lVar65 + 4) != -2)) &&
                        (-1 < *(int *)(param_1 + 0x3b8))) &&
                       (*(undefined4 *)(lVar65 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x3b8))) {
                      lVar65 = 0;
                      lVar41 = 0xc;
                      do {
                        *(undefined4 *)(*(long *)(param_1 + 0x3b0) + lVar41) = 0xffffffff;
                        lVar65 = lVar65 + 1;
                        lVar41 = lVar41 + 8;
                      } while (lVar65 < *(int *)(param_1 + 0x3b8));
                    }
                  }
                  FUN_0334026c((long *)(param_1 + 0x3a0),puVar37);
                  if (0 < (int)local_3a0) {
                    lVar65 = 0;
                    do {
                      local_348 = local_3a8[lVar65 * 3];
                      puStack_340 = (ulong *)*plVar18;
                      local_338 = 0;
                      puVar56 = puStack_340;
                      if (puStack_340 != (ulong *)0x0) {
                        do {
                          uVar19 = *puVar56;
                          if (((uint)uVar19 >> 2 & 1) != 0) {
                            local_338 = puVar56[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                            goto LAB_0332d758;
                          }
                          puVar56 = (ulong *)puVar56[1];
                        } while (puVar56 != (ulong *)0x0);
                        local_338 = 0;
                      }
LAB_0332d758:
                      if ((local_338 & 1) == 0) {
                        local_350[0] = *(undefined4 *)(local_3a8 + lVar65 * 3 + 2);
                        FUN_03326184(&local_2f8,&local_348,param_1,local_350);
                      }
                      else {
                        plVar23 = (long *)(local_338 & 0xfffffffffffffffe);
                        plVar26 = plVar23 + 1;
                        do {
                          cVar12 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                          if (bVar16) {
                            *(int *)plVar26 = (int)*plVar26 + 1;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                        local_350[0] = *(undefined4 *)(local_3a8 + lVar65 * 3 + 2);
                        FUN_03326184(&local_2f8,&local_348,param_1,local_350);
                        do {
                          lVar41 = *plVar26;
                          cVar12 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                          if (bVar16) {
                            *(int *)plVar26 = (int)lVar41 + -1;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                        if ((plVar23 != (long *)0x0) && ((int)lVar41 == 1)) {
                          (**(code **)(*plVar23 + 8))(plVar23);
                        }
                      }
                      (**(code **)(lVar57 + 0x10))(&local_2f8);
                      if (((ulong)local_2e8 & 1) != 0) {
                        plVar23 = (long *)((ulong)local_2e8 & 0xfffffffffffffffe);
                        plVar26 = plVar23 + 1;
                        do {
                          lVar41 = *plVar26;
                          cVar12 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                          if (bVar16) {
                            *(int *)plVar26 = (int)lVar41 + -1;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                        if ((plVar23 != (long *)0x0) && ((int)lVar41 == 1)) {
                          (**(code **)(*plVar23 + 8))();
                        }
                      }
                      lVar65 = lVar65 + 1;
                    } while (lVar65 < (int)local_3a0);
                  }
                  lVar57 = (long)local_3a0;
                  uVar19 = (ulong)local_3a0._4_4_;
                  local_3a0 = (undefined **)((ulong)local_3a0._4_4_ << 0x20);
                  if ((-1 < lVar57) && (local_3a8 != (undefined **)0x0)) {
                    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                              (PTR_PTR_047d1a50 + 0x20,local_3a8,uVar19 * 0x18);
                  }
                  if (plVar20 != (long *)0x0) {
                    lVar57 = *plVar20;
                    if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                      puVar70 = (undefined8 *)plVar20[2];
                      uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar19 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                        *puVar70 = &DAT_03c4e575;
                        puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
                      }
                    }
                    puVar70 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                      *puVar70 = &DAT_03c2d363;
                      uVar25 = nn::os::GetSystemTick();
                      puVar70[1] = uVar25;
                    }
LAB_0332de04:
                    if (*(code **)(lVar57 + 0x20) != (code *)0x0) {
                      (**(code **)(lVar57 + 0x20))(*(undefined8 *)(lVar57 + 0x28));
                    }
                  }
                }
                break;
              case 8:
                puVar70 = *(undefined8 **)(lVar57 + lVar35 * 0x10 + 8);
                if (puVar70 == (undefined8 *)0x0) break;
                lVar57 = tpidr_el0;
                lVar65 = *(long *)(lVar57 + 0x1000b8);
                if (lVar65 == 0) {
                  lVar65 = FUN_00e5d3b4();
                  *(long *)(lVar57 + 0x1000b8) = lVar65;
                }
                plVar20 = *(long **)(lVar65 + 0x3e0);
                if (plVar20 != (long *)0x0) {
                  lVar57 = *plVar20;
                  if (*(code **)(lVar57 + 0x18) != (code *)0x0) {
                    (**(code **)(lVar57 + 0x18))
                              ("PATCH_PARENT_SET",0x10,*(undefined8 *)(lVar57 + 0x28));
                  }
                  puVar42 = (undefined8 *)plVar20[2];
                  uVar19 = (long)puVar42 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar19 <= (ulong)plVar20[3]) &&
                     (plVar20[2] = uVar19, puVar42 != (undefined8 *)0x0)) {
                    *puVar42 = "TtPATCH_PARENT_SET";
                    uVar25 = nn::os::GetSystemTick();
                    puVar42[1] = uVar25;
                  }
                  if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                    puVar42 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar42 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar42 != (undefined8 *)0x0)) {
                      *puVar42 = &DAT_03c4e575;
                      puVar42[1] = *(undefined8 *)(plVar20[6] + 8);
                    }
                  }
                }
                pvVar5 = (void *)*puVar70;
                if (pvVar5 != (void *)puVar70[1]) {
                  if (local_3f8 == (long *)0x0) {
                    lVar41 = plVar18[6];
                    lVar57 = 0;
                    sVar66 = (long)puVar70[1] - (long)pvVar5;
                    lVar65 = plVar18[7];
                    local_3f8 = (long *)0x0;
                    do {
                      plVar26 = *(long **)(lVar41 + lVar57 * 8);
                      if (plVar26 != (long *)0x0) {
                        puVar56 = (ulong *)*plVar26;
                        do {
                          uVar19 = *puVar56;
                          if (((uint)uVar19 >> 3 & 1) != 0) {
                            if (puVar56 != (ulong *)0x0) {
                              pcVar31 = (char *)puVar56[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2]
                              ;
                              pcVar72 = pcVar31;
                              if (pcVar31 == (char *)0x0) {
LAB_0332da54:
                                pcVar31 = (char *)0x0;
                                pcVar39 = (char *)0x0;
                              }
                              else {
                                sVar28 = strlen(pcVar31);
                                pcVar39 = pcVar31 + sVar28;
                              }
                              goto LAB_0332da5c;
                            }
                            break;
                          }
                          if ((uVar19 & 1) != 0) {
                            pcVar72 = (char *)0x0;
                            goto LAB_0332da54;
                          }
                          puVar56 = (ulong *)puVar56[1];
                        } while (puVar56 != (ulong *)0x0);
                        pcVar39 = (char *)0x0;
                        pcVar31 = (char *)0x0;
                        pcVar72 = (char *)0x0;
LAB_0332da5c:
                        if (sVar66 == (long)pcVar39 - (long)pcVar72) {
                          iVar17 = memcmp(pvVar5,pcVar31,sVar66);
                          if (iVar17 != 0) {
                            plVar26 = local_3f8;
                          }
                          local_3f8 = plVar26;
                        }
                      }
                      lVar57 = lVar57 + 1;
                    } while (lVar57 < (int)lVar65);
                  }
                  pbVar40 = (byte *)*local_3f8;
                  pbVar53 = pbVar40;
                  if ((*pbVar40 & 1) == 0) {
                    do {
                      pbVar53 = *(byte **)(pbVar53 + 8);
                    } while ((*pbVar53 & 1) == 0);
                  }
                  plVar23 = (long *)0x0;
                  plVar26 = (long *)0x0;
                  pbVar44 = (byte *)0x0;
                  if ((*(ulong *)(pbVar53 + 0x10) & 0x1f) != 7) {
                    pbVar40 = (byte *)0x0;
                  }
LAB_0332e2d0:
                  plVar26 = plVar26 + 1;
                  pbVar53 = pbVar44;
                  if (plVar23 <= plVar26) {
                    if (pbVar40 == pbVar44) goto LAB_0332e46c;
                    psVar51 = (short *)0x0;
                    pbVar53 = (byte *)0x0;
                    pbVar54 = pbVar40;
                    do {
                      uVar45 = (uint)*(undefined8 *)pbVar54;
                      if ((uVar45 >> 0x17 & 1) != 0) {
                        uVar19 = CONCAT44(uVar45,uVar45) & 0x7fffff007fffff;
                        psVar58 = *(short **)
                                   (pbVar54 +
                                   (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                 POPCOUNT((char)(uVar19 >> 8)) +
                                                POPCOUNT((char)(uVar19 >> 0x10))) * 8 + 0x10);
                        if (psVar58 != (short *)0x0) {
                          if ((int)psVar58[1] + (int)*psVar58 != 0) {
                            psVar51 = psVar58;
                            pbVar53 = pbVar54;
                          }
                        }
                      }
                      pbVar54 = *(byte **)(pbVar54 + 8);
                    } while (pbVar54 != pbVar44);
                    if (pbVar53 == (byte *)0x0) goto LAB_0332e46c;
                    plVar26 = (long *)(psVar51 + 4);
                    plVar23 = plVar26 + (long)psVar51[1] + (long)*psVar51;
                  }
                  uVar45 = (uint)*(undefined8 *)*plVar26;
                  pbVar44 = pbVar53;
                  if (((uVar45 >> 0x11 & 1) != 0) &&
                     (uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff,
                     (*(ushort *)
                       (*plVar26 +
                       (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
                    puVar56 = (ulong *)*plVar26;
                    if (puVar56 != (ulong *)0x0) {
                      puVar48 = puVar56;
                      do {
                        uVar45 = (uint)*puVar48;
                        if ((uVar45 >> 0x10 & 1) != 0) {
                          uVar19 = CONCAT44(uVar45,uVar45) & 0xffff0000ffff;
                          ppuVar22 = (undefined **)
                                     puVar48[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                          POPCOUNT((char)(uVar19 >> 8))) + 2];
                          goto LAB_0332e3dc;
                        }
                      } while (((*puVar48 & 1) == 0) &&
                              (puVar48 = (ulong *)puVar48[1], puVar48 != (ulong *)0x0));
                    }
                    ppuVar22 = (undefined **)0x0;
LAB_0332e3dc:
                    uVar45 = (uint)*puVar56;
                    if ((uVar45 >> 0x11 & 1) == 0) {
                      uVar32 = 0;
                    }
                    else {
                      uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff;
                      uVar32 = *(ushort *)
                                ((long)puVar56 +
                                (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))
                                             + POPCOUNT((char)(uVar19 >> 0x10))) * 8 + 0x12);
                    }
                    if ((ppuVar22 != (undefined **)0x0 && (uVar32 & 1) == 0) &&
                       (*(char *)ppuVar22 != '#')) {
                      local_2f8 = ppuVar22;
                      sVar66 = strlen((char *)ppuVar22);
                      local_2f0 = (undefined **)((long)ppuVar22 + sVar66);
                      puVar24 = (undefined2 *)FUN_03325d70(puVar52,&local_2f8);
                      *(undefined8 *)
                       (puVar24 +
                       (ulong)(byte)(POPCOUNT((char)*puVar24) +
                                    POPCOUNT((char)((ushort)*puVar24 >> 8))) * 4 + 8) = 0;
                    }
                  }
                  goto LAB_0332e2d0;
                }
                goto LAB_0332e60c;
              case 10:
                lVar57 = *(long *)(lVar57 + lVar35 * 0x10 + 8);
                if (lVar57 != 0) {
                  lVar65 = tpidr_el0;
                  lVar41 = *(long *)(lVar65 + 0x1000b8);
                  if (lVar41 == 0) {
                    lVar41 = FUN_00e5d3b4();
                    *(long *)(lVar65 + 0x1000b8) = lVar41;
                  }
                  plVar20 = *(long **)(lVar41 + 0x3e0);
                  if (plVar20 != (long *)0x0) {
                    lVar65 = *plVar20;
                    if (*(code **)(lVar65 + 0x18) != (code *)0x0) {
                      (**(code **)(lVar65 + 0x18))
                                ("PATCH_TYPED_MEMBER_ADDED",0x18,*(undefined8 *)(lVar65 + 0x28));
                    }
                    puVar70 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                      *puVar70 = "TtPATCH_TYPED_MEMBER_ADDED";
                      uVar25 = nn::os::GetSystemTick();
                      puVar70[1] = uVar25;
                    }
                    if (((*(byte *)(lVar65 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                      puVar70 = (undefined8 *)plVar20[2];
                      uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar19 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                        *puVar70 = &DAT_03c4e575;
                        puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
                      }
                    }
                  }
                  ppuVar22 = (undefined **)FUN_03325d70(puVar52,lVar57);
                  local_3a8 = (undefined **)0x0;
                  local_3a0 = (undefined **)0x8000000000000000;
                  FUN_033331c8(param_1,plVar18,&local_3a8);
                  if (0 < (int)local_3a0) {
                    lVar57 = 0;
                    if (ppuVar22 == (undefined **)0x0) {
                      do {
                        uVar45 = (uint)uRam0000000000000000;
                        if ((uVar45 >> 0x11 & 1) == 0) {
                          uVar19 = 0;
                        }
                        else {
                          uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff;
                          uVar19 = (ulong)*(ushort *)
                                           ((ulong)(byte)(POPCOUNT((char)uVar19) +
                                                          POPCOUNT((char)(uVar19 >> 8)) +
                                                         POPCOUNT((char)(uVar19 >> 0x10))) * 8 +
                                           0x10);
                        }
                        local_2f8 = (undefined **)(local_3a8[lVar57 * 3] + uVar19);
                        local_2e8 = (undefined *)0x0;
                        local_2f0 = ppuVar22;
                        FUN_031e66c8(&local_360,&local_2f8,1);
                        if (((ulong)local_2e8 & 1) != 0) {
                          plVar23 = (long *)((ulong)local_2e8 & 0xfffffffffffffffe);
                          plVar26 = plVar23 + 1;
                          do {
                            lVar65 = *plVar26;
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                            if (bVar16) {
                              *(int *)plVar26 = (int)lVar65 + -1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar65 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        lVar57 = lVar57 + 1;
                      } while (lVar57 < (int)local_3a0);
                    }
                    else {
                      do {
                        uVar45 = (uint)*ppuVar22;
                        if ((uVar45 >> 0x11 & 1) == 0) {
                          uVar19 = 0;
                        }
                        else {
                          uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff;
                          uVar19 = (ulong)*(ushort *)
                                           (ppuVar22 +
                                           (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                         POPCOUNT((char)(uVar19 >> 8)) +
                                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2);
                        }
                        local_2f8 = (undefined **)(local_3a8[lVar57 * 3] + uVar19);
                        ppuVar21 = ppuVar22;
                        do {
                          puVar75 = *ppuVar21;
                          if (((uint)puVar75 >> 2 & 1) != 0) {
                            local_2e8 = ppuVar21[((ulong)puVar75 >> 1 & 1) + ((ulong)puVar75 & 1) +
                                                 2];
                            goto LAB_0332dc30;
                          }
                          ppuVar21 = (undefined **)ppuVar21[1];
                        } while (ppuVar21 != (undefined **)0x0);
                        local_2e8 = (undefined *)0x0;
LAB_0332dc30:
                        if (((ulong)local_2e8 & 1) != 0) {
                          piVar76 = (int *)(((ulong)local_2e8 & 0xfffffffffffffffe) + 8);
                          do {
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                            if (bVar16) {
                              *piVar76 = *piVar76 + 1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                        }
                        local_2f0 = ppuVar22;
                        FUN_031e66c8(&local_360,&local_2f8,1);
                        if (((ulong)local_2e8 & 1) != 0) {
                          plVar23 = (long *)((ulong)local_2e8 & 0xfffffffffffffffe);
                          plVar26 = plVar23 + 1;
                          do {
                            lVar65 = *plVar26;
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                            if (bVar16) {
                              *(int *)plVar26 = (int)lVar65 + -1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar65 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        lVar57 = lVar57 + 1;
                      } while (lVar57 < (int)local_3a0);
                    }
                  }
                  lVar57 = (long)local_3a0;
                  uVar19 = (ulong)local_3a0._4_4_;
                  local_3a0 = (undefined **)((ulong)local_3a0._4_4_ << 0x20);
                  if ((-1 < lVar57) && (local_3a8 != (undefined **)0x0)) {
                    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                              (PTR_PTR_047d1a50 + 0x20,local_3a8,uVar19 * 0x18);
                  }
                  if (plVar20 != (long *)0x0) {
                    lVar57 = *plVar20;
                    if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
                      puVar70 = (undefined8 *)plVar20[2];
                      uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar19 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                        *puVar70 = &DAT_03c4e575;
                        puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
                      }
                    }
                    puVar70 = (undefined8 *)plVar20[2];
                    uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= (ulong)plVar20[3]) &&
                       (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
                      *puVar70 = &DAT_03c2d363;
                      uVar25 = nn::os::GetSystemTick();
                      puVar70[1] = uVar25;
                    }
                    goto LAB_0332de04;
                  }
                }
                break;
              case 0xb:
                if (*(long *)(lVar57 + lVar35 * 0x10 + 8) != 0) {
                  puVar24 = (undefined2 *)FUN_03325d70(puVar52);
                  *(undefined8 *)
                   (puVar24 +
                   (ulong)(byte)(POPCOUNT((char)*puVar24) + POPCOUNT((char)((ushort)*puVar24 >> 8)))
                   * 4 + 8) = 0;
                }
                break;
              case 0xc:
                puVar70 = *(undefined8 **)(lVar57 + lVar35 * 0x10 + 8);
                if (puVar70 != (undefined8 *)0x0) {
                  local_360 = *puVar70;
                  uStack_358 = puVar70[1];
                  local_370 = puVar70[6];
                  uStack_368 = puVar70[7];
                  iVar17 = FUN_0333d8d0(&local_330,&local_370);
                  if (-1 < iVar17) {
                    local_2f0 = (undefined **)0x8000008000000000;
                    local_268 = 1;
                    local_2f8 = &local_2e8;
                    FUN_031c6afc(&local_2f8,*puVar70,*(int *)(puVar70 + 1) - (int)*puVar70);
                    iVar15 = (uint)local_2f0;
                    lVar57 = (long)(int)(uint)local_2f0;
                    iVar33 = (uint)local_2f0 + 3;
                    iVar13 = (local_2f0._4_4_ & 0x7fffffff) - 1;
                    iVar4 = iVar33;
                    if (iVar13 <= iVar33) {
                      iVar4 = iVar13;
                    }
                    if (local_268 != 0) {
                      iVar4 = iVar33;
                    }
                    iVar33 = iVar4 + 1;
                    if ((int)(local_2f0._4_4_ & 0x7fffffff) <= iVar4) {
                      FUN_030b4a20(&local_2f8,PTR_PTR_047d1a50 + 0x20,(long)iVar33);
                    }
                    if (((int)(uint)local_2f0 <= iVar4) || (iVar33 < (int)(uint)local_2f0)) {
                      local_2f0 = (undefined **)CONCAT44(local_2f0._4_4_,iVar33);
                    }
                    *(undefined1 *)((long)local_2f8 + (long)iVar4) = 0;
                    memcpy((undefined1 *)((long)local_2f8 + lVar57 + -1),&DAT_03c60765,
                           (long)(int)((uint)local_2f0 - iVar15));
                    ppuVar22 = local_2f8;
                    uVar45 = (uint)local_2f8;
                    iVar33 = uVar45 + (uint)local_2f0;
                    puVar24 = (undefined2 *)FUN_03325d70(puVar52,&local_360);
                    uVar25 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,ppuVar22,~uVar45 + iVar33,
                                          1);
                    *(undefined8 *)
                     (puVar24 +
                     (ulong)(byte)(POPCOUNT((char)*puVar24) +
                                  POPCOUNT((char)((ushort)*puVar24 >> 8))) * 4 + 8) = uVar25;
                    FUN_0333242c(param_1,plVar18,puVar52,&local_360,
                                 *(undefined4 *)((long)puVar70 + 0x2c),&local_370,
                                 *(undefined4 *)(puVar70 + 8),0,iVar17);
                    local_380 = 0;
                    local_378 = -0x8000000000000000;
                    FUN_033331c8(param_1,plVar18,&local_380);
                    if (0 < (int)local_378) {
                      lVar57 = 0;
                      do {
                        local_3c0 = *(undefined8 *)(local_380 + lVar57 * 0x18);
                        puStack_3b8 = (ulong *)*plVar18;
                        local_3b0 = 0;
                        puVar56 = puStack_3b8;
                        if (puStack_3b8 != (ulong *)0x0) {
                          do {
                            uVar19 = *puVar56;
                            if (((uint)uVar19 >> 2 & 1) != 0) {
                              local_3b0 = puVar56[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                              goto LAB_0332e034;
                            }
                            puVar56 = (ulong *)puVar56[1];
                          } while (puVar56 != (ulong *)0x0);
                          local_3b0 = 0;
                        }
LAB_0332e034:
                        if ((local_3b0 & 1) == 0) {
                          local_3c8[0] = *(undefined4 *)(local_380 + lVar57 * 0x18 + 0x10);
                          FUN_03326184(&local_3a8,&local_3c0,param_1,local_3c8);
                        }
                        else {
                          plVar26 = (long *)(local_3b0 & 0xfffffffffffffffe);
                          plVar20 = plVar26 + 1;
                          do {
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                            if (bVar16) {
                              *(int *)plVar20 = (int)*plVar20 + 1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                          local_3c8[0] = *(undefined4 *)(local_380 + lVar57 * 0x18 + 0x10);
                          FUN_03326184(&local_3a8,&local_3c0,param_1,local_3c8);
                          do {
                            lVar65 = *plVar20;
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                            if (bVar16) {
                              *(int *)plVar20 = (int)lVar65 + -1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                          if ((plVar26 != (long *)0x0) && ((int)lVar65 == 1)) {
                            (**(code **)(*plVar26 + 8))(plVar26);
                          }
                        }
                        ppuVar22 = local_2f8;
                        pcVar67 = (code *)puVar70[9];
                        FUN_031ca554(&local_3d0,local_360,uStack_358);
                        uVar19 = local_3d0;
                        (*pcVar67)(&local_3a8,ppuVar22,local_3d0 & 0xfffffffffffffffe);
                        if ((uVar19 & 1) != 0) {
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar19 - 1,0);
                        }
                        if ((local_398 & 1) != 0) {
                          plVar26 = (long *)(local_398 & 0xfffffffffffffffe);
                          plVar20 = plVar26 + 1;
                          do {
                            lVar65 = *plVar20;
                            cVar12 = '\x01';
                            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                            if (bVar16) {
                              *(int *)plVar20 = (int)lVar65 + -1;
                              cVar12 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar12 != '\0');
                          if ((plVar26 != (long *)0x0) && ((int)lVar65 == 1)) {
                            (**(code **)(*plVar26 + 8))();
                          }
                        }
                        lVar57 = lVar57 + 1;
                      } while (lVar57 < (int)local_378);
                    }
                    local_3a0 = (undefined **)((long)local_2f8 + (long)(int)(uint)local_2f0 + -1);
                    local_3a8 = local_2f8;
                    FUN_03332e54(param_1,plVar18,puVar52,&local_3a8);
                    lVar57 = local_378;
                    uVar19 = (ulong)local_378._4_4_;
                    local_378 = (ulong)local_378._4_4_ << 0x20;
                    if ((-1 < lVar57) && (local_380 != 0)) {
                      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                                (PTR_PTR_047d1a50 + 0x20,local_380,uVar19 * 0x18);
                    }
                    uVar19 = (ulong)local_2f0;
                    local_2f0 = (undefined **)((ulong)local_2f0 & 0xffffffff00000000);
                    if ((-1 < (long)uVar19) && (local_2f8 != (undefined **)0x0)) {
                      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                    }
                  }
                }
              }
              goto switchD_0332d1e0_caseD_6;
            }
LAB_0332eba8:
            pvVar5 = (void *)*puVar37;
            pvVar7 = (void *)puVar37[1];
            if (pvVar5 != pvVar7) {
              puVar56 = (ulong *)*plVar18;
              puVar52 = puVar56;
              while (uVar19 = *puVar52, ((uint)uVar19 >> 3 & 1) == 0) {
                if (((uVar19 & 1) != 0) || (puVar52 = (ulong *)puVar52[1], puVar52 == (ulong *)0x0))
                goto LAB_0332ec28;
              }
              if (puVar52 != (ulong *)0x0) {
                pcVar72 = (char *)puVar52[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
                sVar66 = (long)pvVar7 - (long)pvVar5;
                if (pcVar72 == (char *)0x0) goto LAB_0332ec2c;
                sVar28 = strlen(pcVar72);
                if ((sVar28 != sVar66) || (iVar17 = memcmp(pvVar5,pcVar72,sVar66), iVar17 != 0))
                goto LAB_0332ec5c;
                goto LAB_0332ec30;
              }
LAB_0332ec28:
              sVar66 = (long)pvVar7 - (long)pvVar5;
LAB_0332ec2c:
              if (sVar66 == 0) {
LAB_0332ec30:
                puVar56[(ulong)(byte)POPCOUNT((byte)*puVar56 & 0xf) + 2] =
                     (long)*(int *)((long)puVar37 + 0x24);
              }
            }
LAB_0332ec5c:
            ppuVar22 = (undefined **)puVar37[2];
            ppuVar21 = (undefined **)puVar37[3];
            if (ppuVar22 != ppuVar21) {
              ppuVar69 = (undefined **)*puVar37;
              ppuVar8 = (undefined **)puVar37[1];
              if ((ppuVar69 != ppuVar8) &&
                 ((sVar66 = (long)ppuVar8 - (long)ppuVar69,
                  sVar66 != (long)ppuVar21 - (long)ppuVar22 ||
                  (iVar17 = memcmp(ppuVar69,ppuVar22,sVar66), iVar17 != 0)))) {
                puVar52 = (ulong *)*plVar18;
                while (uVar19 = *puVar52, ((uint)uVar19 >> 3 & 1) == 0) {
                  if (((uVar19 & 1) != 0) ||
                     (puVar52 = (ulong *)puVar52[1], puVar52 == (ulong *)0x0)) goto LAB_0332ed0c;
                }
                if ((puVar52 != (ulong *)0x0) &&
                   (pcVar72 = (char *)puVar52[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2],
                   pcVar72 != (char *)0x0)) {
                  sVar28 = strlen(pcVar72);
                  if ((sVar28 != sVar66) || (iVar17 = memcmp(ppuVar69,pcVar72,sVar66), iVar17 != 0))
                  goto LAB_0332ed28;
                  goto LAB_0332ed10;
                }
LAB_0332ed0c:
                if (sVar66 == 0) {
LAB_0332ed10:
                  local_3a8 = ppuVar22;
                  local_3a0 = ppuVar21;
                  local_2f8 = ppuVar69;
                  local_2f0 = ppuVar8;
                  FUN_0333f848(plVar18,&local_2f8,&local_3a8);
                }
              }
            }
LAB_0332ed28:
            if ((local_320 != (undefined *)0x0) && (*(int *)(local_320 + 4) != -2)) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_320,0);
              local_320 = &DAT_03d7702c;
              local_318 = 0;
            }
            puVar14 = local_330;
            if ((int)local_328 != 0) {
              lVar35 = (long)(int)local_328 << 4;
              do {
                if ((*(ulong *)(puVar14 + lVar35 + -0x10) & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(puVar14 + lVar35 + -0x10) - 1,0);
                }
                lVar35 = lVar35 + -0x10;
              } while (lVar35 != 0);
            }
            lVar35 = (long)local_328;
            uVar19 = (ulong)local_328._4_4_;
            local_328 = (undefined1 *)((ulong)local_328._4_4_ << 0x20);
            if ((-1 < lVar35) && (local_330 != (undefined1 *)0x0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_330,uVar19 << 4);
            }
            lVar62 = lVar62 + 1;
          } while (lVar62 < (int)local_300);
        }
        lVar62 = local_300;
        uVar19 = (ulong)local_300._4_4_;
        local_300 = (ulong)local_300._4_4_ << 0x20;
        if ((-1 < lVar62) && (local_308 != 0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_308,uVar19 << 3);
        }
      }
      uVar60 = uVar60 + 1;
    } while (uVar60 != (uVar49 >> 3 & 0xffffffff));
  }
  *(undefined1 *)(param_1 + 0x378) = 1;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x8000000000000000;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar62 = 0;
    uVar45 = 0;
    uVar47 = 0;
    while( true ) {
      puVar37 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar62 * 0x10);
      iVar17 = *(int *)(puVar37 + 1);
      puVar37 = (undefined8 *)*puVar37;
      uVar74 = iVar17 + uVar45;
      if ((int)(uVar47 & 0x7fffffff) < (int)uVar74) {
        FUN_03334d20(&local_330,(long)(int)uVar74);
      }
      if (iVar17 != 0) {
        puVar42 = puVar37 + (long)iVar17 * 6;
        puVar70 = (undefined8 *)(local_330 + (long)(int)uVar45 * 0x30);
        do {
          uVar25 = puVar37[1];
          *puVar70 = *puVar37;
          puVar70[1] = uVar25;
          uVar49 = puVar37[2];
          puVar70[2] = uVar49;
          if ((uVar49 & 1) != 0) {
            piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
              if (bVar16) {
                *piVar76 = *piVar76 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          uVar25 = puVar37[4];
          puVar70[3] = puVar37[3];
          puVar70[4] = uVar25;
          uVar49 = puVar37[5];
          puVar70[5] = uVar49;
          if ((uVar49 & 1) != 0) {
            piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
              if (bVar16) {
                *piVar76 = *piVar76 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          puVar37 = puVar37 + 6;
          puVar70 = puVar70 + 6;
        } while (puVar37 != puVar42);
      }
      local_328 = (undefined1 *)CONCAT44(local_328._4_4_,uVar74);
      lVar62 = lVar62 + 1;
      if (*(int *)(param_1 + 0x20) <= lVar62) break;
      uVar45 = uVar74;
      uVar47 = local_328._4_4_;
    }
    if ((int)uVar74 < 1) {
      if (uVar74 == 0) goto LAB_0332f4c8;
      bVar16 = false;
      puVar56 = (ulong *)0x0;
      uVar49 = 0;
      puVar52 = (ulong *)(-(ulong)(uVar74 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar74 << 6);
      uVar45 = 0x80000000;
    }
    else {
      puVar56 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                   (PTR_PTR_047d1a50,(ulong)uVar74 << 6);
      bVar16 = true;
      puVar52 = puVar56 + (ulong)uVar74 * 8;
      uVar49 = (ulong)uVar74;
      uVar45 = uVar74;
    }
    puVar48 = puVar56;
    do {
      puVar48[2] = 0;
      puVar48[3] = 0x8000000000000000;
      puVar48[4] = 0;
      puVar48[5] = 0;
      puVar48[6] = 0;
      puVar48[7] = 0x8000000000000000;
      puVar48 = puVar48 + 8;
    } while (puVar52 != puVar48);
    if (bVar16) {
      lVar62 = 0;
      do {
        uVar60 = *(ulong *)(local_330 + lVar62 * 0x30 + 0x18);
        puVar56[lVar62 * 8] = uVar60;
        puVar52 = *(ulong **)(local_330 + lVar62 * 0x30 + 0x20);
        do {
          uVar47 = (uint)*puVar52;
          if ((uVar47 >> 0x14 & 1) != 0) {
            uVar19 = 0;
            if (puVar52 != (ulong *)0x0) {
              uVar19 = CONCAT44(uVar47,uVar47) & 0xfffff000fffff;
              uVar19 = (ulong)(ushort)puVar52[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                            POPCOUNT((char)(uVar19 >> 8)) +
                                                           POPCOUNT((char)(uVar19 >> 0x10))) + 2];
            }
            goto LAB_0332f010;
          }
          if ((*puVar52 & 1) != 0) {
            uVar19 = 0;
            goto LAB_0332f010;
          }
          puVar52 = (ulong *)puVar52[1];
        } while (puVar52 != (ulong *)0x0);
        uVar19 = 0;
LAB_0332f010:
        lVar35 = lVar62 + 1;
        puVar56[lVar62 * 8 + 1] = (uVar60 + uVar19) - 1;
        lVar62 = lVar35;
      } while (lVar35 != (int)uVar74);
    }
    iVar17 = (int)uVar49;
    if (1 < iVar17) {
      uVar60 = 1;
      do {
        puVar52 = puVar56 + uVar60 * 8;
        puVar48 = puVar56;
        do {
          while (puVar38 = puVar48, *puVar38 <= puVar52[1]) {
            if (*puVar52 <= puVar38[1]) {
              iVar33 = (int)puVar38[7];
              lVar62 = (long)iVar33;
              if ((int)(*(uint *)((long)puVar38 + 0x3c) & 0x7fffffff) <= iVar33) {
                FUN_03334f34(puVar38 + 6,lVar62 + 1);
                iVar33 = (int)puVar38[7];
              }
              *(ulong **)(puVar38[6] + (long)iVar33 * 8) = puVar52;
              *(int *)(puVar38 + 7) = (int)(lVar62 + 1);
              goto LAB_0332f0c0;
            }
            puVar48 = (ulong *)puVar38[5];
            if ((ulong *)puVar38[5] == (ulong *)0x0) {
              puVar38[5] = (ulong)puVar52;
              goto LAB_0332f0c0;
            }
          }
          puVar48 = (ulong *)puVar38[4];
        } while ((ulong *)puVar38[4] != (ulong *)0x0);
        puVar38[4] = (ulong)puVar52;
LAB_0332f0c0:
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar49);
    }
    puVar14 = local_330;
    puVar75 = PTR_PTR_047d1a50;
    if (0 < iVar17) {
      uVar60 = 0;
      do {
        uVar19 = *(ulong *)(puVar14 + uVar60 * 0x30);
        puVar52 = puVar56;
        do {
          while (*puVar52 <= uVar19) {
            if (uVar19 <= puVar52[1]) {
              iVar33 = (int)puVar52[3];
              lVar62 = (long)iVar33;
              if ((int)(*(uint *)((long)puVar52 + 0x1c) & 0x7fffffff) <= iVar33) {
                FUN_0133bb88(puVar52 + 2,puVar75,lVar62 + 1);
                iVar33 = (int)puVar52[3];
              }
              *(int *)(puVar52[2] + (long)iVar33 * 4) = (int)uVar60;
              iVar33 = (int)puVar52[7];
              *(int *)(puVar52 + 3) = (int)(lVar62 + 1);
              if (0 < iVar33) {
                lVar62 = 0;
                do {
                  puVar48 = *(ulong **)(puVar52[6] + lVar62 * 8);
                  if ((*puVar48 <= uVar19) && (uVar19 <= puVar48[1])) {
                    iVar33 = (int)puVar48[3];
                    lVar35 = (long)iVar33;
                    if ((int)(*(uint *)((long)puVar48 + 0x1c) & 0x7fffffff) <= iVar33) {
                      FUN_0133bb88(puVar48 + 2,puVar75,lVar35 + 1);
                      iVar33 = (int)puVar48[3];
                    }
                    *(int *)(puVar48[2] + (long)iVar33 * 4) = (int)uVar60;
                    *(int *)(puVar48 + 3) = (int)(lVar35 + 1);
                    iVar33 = (int)puVar52[7];
                  }
                  lVar62 = lVar62 + 1;
                } while (lVar62 < iVar33);
              }
              goto LAB_0332f1e0;
            }
            puVar52 = (ulong *)puVar52[5];
            if (puVar52 == (ulong *)0x0) goto LAB_0332f1e0;
          }
          puVar52 = (ulong *)puVar52[4];
        } while (puVar52 != (ulong *)0x0);
LAB_0332f1e0:
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar49);
      iVar33 = 0;
      do {
        puVar52 = puVar56 + (long)iVar33 * 8;
        if ((*puVar52 != 0) && ((int)puVar52[3] == 0)) {
          puVar37 = (undefined8 *)(puVar14 + (long)iVar33 * 0x30);
          uVar25 = puVar37[3];
          uVar6 = *puVar37;
          puVar48 = (ulong *)puVar37[4];
          while( true ) {
            uVar47 = (uint)*puVar48;
            if ((uVar47 >> 0x14 & 1) != 0) break;
            if (((*puVar48 & 1) != 0) || (puVar48 = (ulong *)puVar48[1], puVar48 == (ulong *)0x0))
            goto LAB_0332f274;
          }
          if (puVar48 != (ulong *)0x0) {
            uVar60 = CONCAT44(uVar47,uVar47) & 0xfffff000fffff;
            uVar68 = (undefined2)
                     puVar48[(ulong)(byte)(POPCOUNT((char)uVar60) + POPCOUNT((char)(uVar60 >> 8)) +
                                          POPCOUNT((char)(uVar60 >> 0x10))) + 2];
            goto LAB_0332f278;
          }
LAB_0332f274:
          uVar68 = 0;
LAB_0332f278:
          puVar48 = (ulong *)puVar37[1];
          while( true ) {
            uVar47 = (uint)*puVar48;
            if ((uVar47 >> 0x14 & 1) != 0) break;
            if (((*puVar48 & 1) != 0) || (puVar48 = (ulong *)puVar48[1], puVar48 == (ulong *)0x0))
            goto LAB_0332f2bc;
          }
          if (puVar48 != (ulong *)0x0) {
            uVar60 = CONCAT44(uVar47,uVar47) & 0xfffff000fffff;
            uVar73 = (undefined2)
                     puVar48[(ulong)(byte)(POPCOUNT((char)uVar60) + POPCOUNT((char)(uVar60 >> 8)) +
                                          POPCOUNT((char)(uVar60 >> 0x10))) + 2];
            goto LAB_0332f2c0;
          }
LAB_0332f2bc:
          uVar73 = 0;
LAB_0332f2c0:
          if ((ulong *)puVar37[4] == (ulong *)puVar37[1]) {
            uVar29 = FUN_031fa694(param_1 + 0x2b8);
          }
          else {
            uVar29 = FUN_031fa91c(param_1 + 0x2b8);
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
          FUN_03328288(&local_2f8,uVar29,uVar6,uVar25,uVar68,uVar73,1);
          uVar60 = 0;
          *puVar52 = 0;
          do {
            puVar52 = puVar56 + uVar60 * 8 + 3;
            uVar19 = (ulong)(uint)*puVar52;
            if (0 < (int)(uint)*puVar52) {
              uVar59 = 0;
              do {
                uVar61 = puVar56[uVar60 * 8 + 2];
                if (*(int *)(uVar61 + uVar59 * 4) == iVar33) {
                  uVar47 = (int)uVar19 - 1;
                  uVar19 = (ulong)uVar47;
                  *(uint *)puVar52 = uVar47;
                  if (uVar59 != uVar19) {
                    *(undefined4 *)(uVar61 + uVar59 * 4) =
                         *(undefined4 *)(uVar61 + (long)(int)uVar47 * 4);
                    uVar19 = (ulong)(uint)*puVar52;
                  }
                }
                uVar59 = uVar59 + 1;
              } while ((long)uVar59 < (long)(int)uVar19);
            }
            uVar60 = uVar60 + 1;
          } while (uVar60 != uVar49);
          iVar33 = 0;
        }
        iVar33 = iVar33 + 1;
      } while (iVar33 < iVar17);
    }
    if (iVar17 != 0) {
      uVar60 = 0;
      uVar49 = -(uVar49 >> 0x1f) & 0xffffffc000000000 | uVar49 << 6;
      puVar52 = puVar56;
      do {
        uVar47 = *(uint *)((long)puVar52 + (uVar49 - 4));
        *(undefined4 *)((long)puVar52 + (uVar49 - 8)) = 0;
        if ((-1 < (int)uVar47) && (lVar62 = *(long *)((long)puVar52 + (uVar49 - 0x10)), lVar62 != 0)
           ) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,lVar62,(ulong)uVar47 << 3);
        }
        uVar47 = *(uint *)((long)puVar52 + (uVar49 - 0x24));
        *(undefined8 *)((long)puVar52 + (uVar49 - 0x10)) = 0;
        *(undefined4 *)((long)puVar52 + (uVar49 - 4)) = 0x80000000;
        *(undefined4 *)((long)puVar52 + (uVar49 - 0x28)) = 0;
        if ((-1 < (int)uVar47) && (lVar62 = *(long *)((long)puVar52 + (uVar49 - 0x30)), lVar62 != 0)
           ) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,lVar62,(ulong)uVar47 << 2);
        }
        uVar60 = uVar60 + 0x40;
        *(undefined8 *)((long)puVar52 + (uVar49 - 0x30)) = 0;
        *(undefined4 *)((long)puVar52 + (uVar49 - 0x24)) = 0x80000000;
        puVar52 = puVar52 + -8;
      } while (uVar49 != uVar60);
    }
    if ((puVar56 != (ulong *)0x0) && (-1 < (int)uVar45)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,puVar56,(ulong)uVar45 << 6);
    }
  }
LAB_0332f4c8:
  puVar14 = local_330;
  if ((int)local_328 != 0) {
    puVar63 = local_330 + (long)(int)local_328 * 0x30;
    do {
      if ((*(ulong *)(puVar63 + -8) & 1) != 0) {
        plVar18 = (long *)(*(ulong *)(puVar63 + -8) & 0xfffffffffffffffe);
        plVar36 = plVar18 + 1;
        do {
          lVar62 = *plVar36;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar16) {
            *(int *)plVar36 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      puVar52 = (ulong *)(puVar63 + -0x20);
      puVar63 = puVar63 + -0x30;
      if ((*puVar52 & 1) != 0) {
        plVar18 = (long *)(*puVar52 & 0xfffffffffffffffe);
        plVar36 = plVar18 + 1;
        do {
          lVar62 = *plVar36;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar16) {
            *(int *)plVar36 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
    } while (puVar63 != puVar14);
  }
  lVar62 = (long)local_328;
  uVar49 = (ulong)local_328._4_4_;
  local_328 = (undefined1 *)((ulong)local_328._4_4_ << 0x20);
  if ((-1 < lVar62) && (local_330 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_330,uVar49 * 0x30);
  }
  local_2f8 = (undefined **)0x0;
  local_2f0 = (undefined **)0x8000000000000000;
  local_2e8 = &DAT_03d7702c;
  local_2e0 = 0;
  if (*(int *)(param_1 + 0x210) < 1) {
    if ((*(uint *)(param_1 + 0x214) & 0x7fffffff) == 0) {
      FUN_031d93e4((undefined8 *)(param_1 + 0x208),PTR_PTR_047d1a50,1);
      if ((0 < *(int *)(param_1 + 0x210)) && (*(int *)(param_1 + 0x210) == 1)) goto LAB_0332f5c8;
    }
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
LAB_0332f5c8:
  **(undefined8 **)(param_1 + 0x208) = 0;
  local_330 = (undefined1 *)0x0;
  local_3a8 = (undefined **)((ulong)local_3a8 & 0xffffffff00000000);
  FUN_033341f8(&local_2f8,&local_330,&local_3a8);
  puVar75 = PTR_PTR_047d1a50;
  uVar49 = (ulong)*puVar2;
  if (0 < (int)*puVar2) {
    lVar62 = 0;
    do {
      uVar45 = *(uint *)(*plVar30 + lVar62 * 4);
      if ((int)uVar45 < 0) {
        uVar45 = ~uVar45;
        lVar35 = *(long *)(param_1 + 0x380);
        local_320 = (undefined *)((ulong)local_320 & 0xffffffffffffff00);
        local_330 = (undefined1 *)0x0;
        local_328 = (undefined1 *)0x0;
        uVar47 = (uint)uVar49;
        if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar47) {
          FUN_033277d4(plVar1,puVar75,(long)(int)uVar47);
          uVar74 = *puVar2;
          if ((int)uVar74 < (int)uVar47) {
            *puVar2 = uVar47;
            puVar37 = (undefined8 *)(*plVar1 + (long)(int)uVar74 * 0x18);
            uVar3 = uVar47 - uVar74 & 3;
            if (2 < uVar47 + ~uVar74) {
              iVar17 = -(uVar47 - uVar74 & 0xfffffffc);
              puVar70 = puVar37;
              do {
                puVar37 = puVar70 + 0xc;
                *puVar70 = local_330;
                puVar70[1] = local_328;
                *(undefined4 *)(puVar70 + 2) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x14) = 0;
                puVar70[3] = local_330;
                puVar70[4] = local_328;
                *(undefined4 *)(puVar70 + 5) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x2c) = 0;
                puVar70[6] = local_330;
                puVar70[7] = local_328;
                *(undefined4 *)(puVar70 + 8) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x44) = 0;
                puVar70[9] = local_330;
                puVar70[10] = local_328;
                *(undefined4 *)(puVar70 + 0xb) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x5c) = 0;
                iVar17 = iVar17 + 4;
                puVar70 = puVar37;
              } while (iVar17 != 0);
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar37 = local_330;
              puVar37[1] = local_328;
              *(undefined4 *)(puVar37 + 2) = local_320._0_4_;
              *(undefined4 *)((long)puVar37 + 0x14) = 0;
              puVar37 = puVar37 + 3;
            }
          }
          else if ((int)uVar47 < (int)uVar74) {
            *puVar2 = uVar47;
          }
        }
        *(undefined8 *)(*plVar1 + lVar62 * 0x18) =
             *(undefined8 *)(lVar35 + (long)(int)uVar45 * 0x18);
        *(undefined8 *)(*plVar1 + lVar62 * 0x18 + 8) =
             *(undefined8 *)(lVar35 + (long)(int)uVar45 * 0x18 + 8);
      }
      puVar52 = *(ulong **)(*(long *)(param_1 + 0x218) + lVar62 * 0x18 + 8);
      if (puVar52 != (ulong *)0x0) {
        puVar56 = puVar52;
        do {
          uVar49 = *puVar56;
          if (((uint)uVar49 >> 2 & 1) != 0) {
            uVar49 = puVar56[(uVar49 >> 1 & 1) + (uVar49 & 1) + 2];
            if ((uVar49 & 1) != 0) {
              piVar76 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
                if (bVar16) {
                  *piVar76 = *piVar76 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            goto LAB_0332f7b4;
          }
          puVar56 = (ulong *)puVar56[1];
        } while (puVar56 != (ulong *)0x0);
      }
      uVar49 = 0;
LAB_0332f7b4:
      if (puVar52 != (ulong *)0x0) {
LAB_0332f7bc:
        uVar60 = *puVar52;
        if (((uint)uVar60 >> 4 & 1) == 0) goto code_r0x0332f7c4;
        if ((int)puVar52[(ulong)(byte)POPCOUNT((byte)uVar60 & 0xf) + 2] == -1) {
          local_320 = (undefined *)((ulong)local_320 & 0xffffffffffffff00);
          local_330 = (undefined1 *)0x0;
          local_328 = (undefined1 *)0x0;
          uVar47 = *(uint *)(param_1 + 0x220);
          uVar45 = uVar47;
          if ((int)uVar47 <= lVar62) {
            uVar45 = (int)lVar62 + 1;
          }
          if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < (int)uVar45) {
            FUN_033277d4(plVar1,puVar75,(long)(int)uVar45);
            uVar47 = *puVar2;
          }
          uVar74 = uVar45 - uVar47;
          if (uVar74 == 0 || (int)uVar45 < (int)uVar47) {
            if ((int)uVar45 < (int)uVar47) {
              *puVar2 = uVar45;
            }
          }
          else {
            *puVar2 = uVar45;
            puVar37 = (undefined8 *)(*plVar1 + (long)(int)uVar47 * 0x18);
            uVar3 = uVar74 & 3;
            if (2 < uVar45 + ~uVar47) {
              iVar17 = -(uVar74 & 0xfffffffc);
              puVar70 = puVar37;
              do {
                puVar37 = puVar70 + 0xc;
                *puVar70 = local_330;
                puVar70[1] = local_328;
                *(undefined4 *)(puVar70 + 2) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x14) = 0;
                puVar70[3] = local_330;
                puVar70[4] = local_328;
                *(undefined4 *)(puVar70 + 5) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x2c) = 0;
                puVar70[6] = local_330;
                puVar70[7] = local_328;
                *(undefined4 *)(puVar70 + 8) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x44) = 0;
                puVar70[9] = local_330;
                puVar70[10] = local_328;
                *(undefined4 *)(puVar70 + 0xb) = local_320._0_4_;
                *(undefined4 *)((long)puVar70 + 0x5c) = 0;
                iVar17 = iVar17 + 4;
                puVar70 = puVar37;
              } while (iVar17 != 0);
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar37 = local_330;
              puVar37[1] = local_328;
              *(undefined4 *)(puVar37 + 2) = local_320._0_4_;
              *(undefined4 *)((long)puVar37 + 0x14) = 0;
              puVar37 = puVar37 + 3;
            }
          }
          *(undefined8 *)(*plVar1 + lVar62 * 0x18) = 0;
          *(undefined8 *)(*plVar1 + lVar62 * 0x18 + 8) = 0;
          goto joined_r0x0332f954;
        }
      }
LAB_0332f800:
      FUN_033342a0(param_1,&local_2f8);
joined_r0x0332f954:
      if ((uVar49 & 1) != 0) {
        plVar18 = (long *)(uVar49 & 0xfffffffffffffffe);
        plVar36 = plVar18 + 1;
        do {
          lVar35 = *plVar36;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar16) {
            *(int *)plVar36 = (int)lVar35 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar35 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      uVar49 = (ulong)(int)*puVar2;
      lVar62 = lVar62 + 1;
    } while (lVar62 < (long)uVar49);
  }
  puVar75 = PTR_DAT_047e61d0;
  if (0 < *(int *)(param_1 + 0x230)) {
    uVar49 = 0;
    do {
      uVar45 = *(uint *)(*(long *)(param_1 + 0x290) + uVar49 * 4);
      if ((int)uVar45 < 0) {
        FUN_03323a58(lVar64,uVar49 & 0xffffffff,
                     *(long *)(param_1 + 0x390) + (long)(int)~uVar45 * 0x20);
      }
      lVar62 = *(long *)(param_1 + 0x228) + uVar49 * 0x20;
      puVar52 = *(ulong **)(lVar62 + 8);
      uVar60 = *(ulong *)(lVar62 + 0x10);
      if ((uVar60 & 1) != 0) {
        piVar76 = (int *)((uVar60 & 0xfffffffffffffffe) + 8);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
          if (bVar16) {
            *piVar76 = *piVar76 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      if (puVar52 != (ulong *)0x0) {
        while (uVar19 = *puVar52, ((uint)uVar19 >> 4 & 1) == 0) {
          if (((uVar19 & 9) != 0) || (puVar52 = (ulong *)puVar52[1], puVar52 == (ulong *)0x0))
          goto LAB_0332fa1c;
        }
        if ((int)puVar52[(ulong)(byte)POPCOUNT((byte)uVar19 & 0xf) + 2] == -1) {
          local_330 = *(undefined1 **)puVar75;
          local_328 = *(undefined1 **)(puVar75 + 8);
          local_320 = *(undefined **)(puVar75 + 0x10);
          if (((ulong)local_320 & 1) == 0) {
            local_318 = *(undefined4 *)(puVar75 + 0x18);
            FUN_03323a58(lVar64,uVar49 & 0xffffffff,&local_330);
          }
          else {
            plVar30 = (long *)((ulong)local_320 & 0xfffffffffffffffe);
            plVar1 = plVar30 + 1;
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar16) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            local_318 = *(undefined4 *)(puVar75 + 0x18);
            FUN_03323a58(lVar64,uVar49 & 0xffffffff,&local_330);
            do {
              lVar62 = *plVar1;
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar16) {
                *(int *)plVar1 = (int)lVar62 + -1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if ((plVar30 != (long *)0x0) && ((int)lVar62 == 1)) {
              (**(code **)(*plVar30 + 8))(plVar30);
            }
          }
          goto joined_r0x0332fb00;
        }
      }
LAB_0332fa1c:
      FUN_033342a0(param_1,&local_2f8);
joined_r0x0332fb00:
      if ((uVar60 & 1) != 0) {
        plVar30 = (long *)(uVar60 & 0xfffffffffffffffe);
        plVar1 = plVar30 + 1;
        do {
          lVar62 = *plVar1;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *(int *)plVar1 = (int)lVar62 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((plVar30 != (long *)0x0) && ((int)lVar62 == 1)) {
          (**(code **)(*plVar30 + 8))();
        }
      }
      uVar49 = uVar49 + 1;
    } while ((long)uVar49 < (long)*(int *)(param_1 + 0x230));
  }
  if ((local_2e8 != (undefined *)0x0) && (*(int *)(local_2e8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_2e8,0);
    local_2e8 = &DAT_03d7702c;
    local_2e0 = 0;
  }
  lVar62 = (long)local_2f0;
  uVar49 = (ulong)local_2f0._4_4_;
  local_2f0 = (undefined **)((ulong)local_2f0._4_4_ << 0x20);
  if ((-1 < lVar62) && (local_2f8 != (undefined **)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2f8,uVar49 << 4);
  }
  return lVar64;
LAB_0332e46c:
  iVar17 = (int)local_3f8[9];
  if (iVar17 < 1) {
    uVar46 = 0;
  }
  else {
    uVar19 = 0;
    uVar59 = 0;
    do {
      plVar26 = *(long **)(local_3f8[8] + uVar19 * 8);
      if (plVar26 != plVar18) {
        iVar33 = (int)uVar59;
        if ((uVar19 != uVar59) && (uVar19 != (long)iVar33)) {
          *(long **)(local_3f8[8] + (long)iVar33 * 8) = plVar26;
          iVar17 = (int)local_3f8[9];
        }
        uVar59 = (ulong)(iVar33 + 1);
      }
      uVar46 = (undefined4)uVar59;
      uVar19 = uVar19 + 1;
    } while ((long)uVar19 < (long)iVar17);
  }
  *(undefined4 *)(local_3f8 + 9) = uVar46;
  uVar45 = *(uint *)(plVar18 + 7);
  if (0 < (int)uVar45) {
    puVar42 = (undefined8 *)plVar18[6];
    iVar17 = 0;
    uVar19 = 0;
    puVar55 = puVar42 + 4;
    do {
      if ((long *)*puVar42 == local_3f8) {
        uVar47 = (uint)uVar19;
        if (-1 < (int)uVar47) {
          uVar45 = uVar45 - 1;
          *(uint *)(plVar18 + 7) = uVar45;
          if (uVar45 != uVar47) {
            uVar19 = (long)(int)(uVar45 - uVar47) * 8;
            if (uVar19 < 9) {
              uVar19 = 8;
            }
            if (uVar19 - 1 < 0x38) {
              uVar61 = 0;
            }
            else {
              uVar59 = (-(ulong)(uVar45 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar45 << 3) +
                       (long)iVar17 * -8;
              if (uVar59 < 9) {
                uVar59 = 8;
              }
              uVar61 = 0;
              do {
                uVar61 = uVar61 + 8;
                puVar55[-4] = puVar55[-3];
                puVar55[-3] = puVar55[-2];
                uVar25 = *puVar55;
                *puVar55 = puVar55[1];
                puVar55[-2] = puVar55[-1];
                puVar55[-1] = uVar25;
                puVar55[1] = puVar55[2];
                puVar55[2] = puVar55[3];
                puVar55[3] = puVar55[4];
                puVar55 = puVar55 + 8;
              } while (((uVar59 - 1 >> 3) + 1 & 0x3ffffffffffffff8) != uVar61);
            }
            if ((((uint)(uVar19 - 1 >> 3) & 0x1fffffff) + 1 & 7) != 0) {
              uVar19 = (-(ulong)(uVar45 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar45 << 3) +
                       (long)iVar17 * -8;
              iVar17 = (int)uVar19;
              if (uVar19 < 9) {
                iVar17 = 8;
              }
              lVar57 = uVar61 << 3;
              lVar65 = -((ulong)((iVar17 - 1U >> 3) + 1) & 7);
              do {
                puVar55 = (undefined8 *)((long)puVar42 + lVar57);
                lVar57 = lVar57 + 8;
                bVar16 = lVar65 != -1;
                lVar65 = lVar65 + 1;
                *puVar55 = puVar55[1];
              } while (bVar16);
            }
          }
        }
        break;
      }
      uVar19 = uVar19 + 1;
      puVar42 = puVar42 + 1;
      iVar17 = iVar17 + 1;
      puVar55 = puVar55 + 1;
    } while (uVar45 != uVar19);
  }
LAB_0332e60c:
  pvVar5 = (void *)puVar70[2];
  if (pvVar5 != (void *)puVar70[3]) {
    if (local_3f0 == (long *)0x0) {
      lVar41 = plVar18[6];
      sVar66 = (long)puVar70[3] - (long)pvVar5;
      lVar65 = plVar18[7];
      lVar57 = 0;
      local_3f0 = (long *)0x0;
      do {
        plVar26 = *(long **)(lVar41 + lVar57 * 8);
        if (plVar26 != (long *)0x0) {
          puVar56 = (ulong *)*plVar26;
          do {
            uVar19 = *puVar56;
            if (((uint)uVar19 >> 3 & 1) != 0) {
              if (puVar56 != (ulong *)0x0) {
                plVar23 = (long *)puVar56[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
                if (plVar23 == (long *)0x0) {
LAB_0332e6b0:
                  lVar43 = 0;
                  plVar71 = (long *)0x0;
                }
                else {
                  sVar28 = strlen((char *)plVar23);
                  lVar43 = (long)plVar23 + sVar28;
                  plVar71 = plVar23;
                }
                goto LAB_0332e6b8;
              }
              break;
            }
            if ((uVar19 & 1) != 0) {
              plVar23 = (long *)0x0;
              goto LAB_0332e6b0;
            }
            puVar56 = (ulong *)puVar56[1];
          } while (puVar56 != (ulong *)0x0);
          lVar43 = 0;
          plVar23 = (long *)0x0;
          plVar71 = (long *)0x0;
LAB_0332e6b8:
          if (sVar66 == lVar43 - (long)plVar23) {
            iVar17 = memcmp(pvVar5,plVar71,sVar66);
            plVar27 = plVar26;
            if (iVar17 != 0) {
              plVar27 = local_3f0;
            }
            if (iVar17 != 0 && sVar66 == 0x49) goto LAB_0332e6fc;
LAB_0332e75c:
            local_3f0 = plVar27;
          }
          else if (sVar66 == 0x49) {
LAB_0332e6fc:
            iVar17 = memcmp(pvVar5,
                            "hkBitFieldBasehkBitFieldStoragehkArrayunsignedinthkContainerHeapAllocator"
                            ,0x49);
            if ((lVar43 - (long)plVar23 == 0xe) && (iVar17 == 0)) {
              plVar27 = plVar26;
              if (*plVar71 != 0x6569467469426b68 ||
                  *(long *)((long)plVar71 + 6) != 0x65736142646c6569) {
                plVar27 = local_3f0;
              }
              goto LAB_0332e75c;
            }
          }
        }
        lVar57 = lVar57 + 1;
      } while (lVar57 < (int)lVar65);
    }
    pbVar40 = (byte *)*local_3f0;
    pbVar53 = pbVar40;
    if ((*pbVar40 & 1) == 0) {
      do {
        pbVar53 = *(byte **)(pbVar53 + 8);
      } while ((*pbVar53 & 1) == 0);
    }
    uVar19 = *(ulong *)(pbVar53 + 0x10);
    local_3a8 = (undefined **)0x0;
    local_3a0 = (undefined **)0x8000000000000000;
    FUN_033331c8(param_1,plVar18,&local_3a8);
    if (0 < (int)local_3a0) {
      lVar57 = 0;
      if ((uVar19 & 0x1f) != 7) {
        pbVar40 = (byte *)0x0;
      }
LAB_0332e7d8:
      plVar26 = (long *)0x0;
      plVar23 = (long *)0x0;
      pbVar53 = (byte *)0x0;
LAB_0332e7e4:
      plVar26 = plVar26 + 1;
      pbVar44 = pbVar53;
      if (plVar23 <= plVar26) {
        if (pbVar40 == pbVar53) goto LAB_0332ea40;
        psVar51 = (short *)0x0;
        pbVar44 = (byte *)0x0;
        pbVar54 = pbVar40;
        do {
          uVar45 = (uint)*(undefined8 *)pbVar54;
          if ((uVar45 >> 0x17 & 1) != 0) {
            uVar19 = CONCAT44(uVar45,uVar45) & 0x7fffff007fffff;
            psVar58 = *(short **)
                       (pbVar54 +
                       (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10))) * 8 + 0x10);
            if (psVar58 != (short *)0x0) {
              if ((int)psVar58[1] + (int)*psVar58 != 0) {
                psVar51 = psVar58;
                pbVar44 = pbVar54;
              }
            }
          }
          pbVar54 = *(byte **)(pbVar54 + 8);
        } while (pbVar54 != pbVar53);
        if (pbVar44 == (byte *)0x0) goto LAB_0332ea40;
        plVar26 = (long *)(psVar51 + 4);
        plVar23 = plVar26 + (long)psVar51[1] + (long)*psVar51;
      }
      uVar45 = (uint)*(undefined8 *)*plVar26;
      pbVar53 = pbVar44;
      if ((((uVar45 >> 0x11 & 1) != 0) &&
          (uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff,
          (*(ushort *)
            (*plVar26 +
            (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                         POPCOUNT((char)(uVar19 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) &&
         (puVar56 = (ulong *)*plVar26, puVar56 != (ulong *)0x0)) {
        puVar48 = puVar56;
        while( true ) {
          uVar45 = (uint)*puVar48;
          if ((uVar45 >> 0x10 & 1) != 0) break;
          if (((*puVar48 & 1) != 0) || (puVar48 = (ulong *)puVar48[1], puVar48 == (ulong *)0x0))
          goto LAB_0332e7e4;
        }
        uVar19 = CONCAT44(uVar45,uVar45) & 0xffff0000ffff;
        if (puVar48[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2] != 0)
        goto LAB_0332e8f0;
      }
      goto LAB_0332e7e4;
    }
LAB_0332ea50:
    lVar57 = (long)local_3a0;
    uVar19 = (ulong)local_3a0._4_4_;
    local_3a0 = (undefined **)((ulong)local_3a0._4_4_ << 0x20);
    if ((-1 < lVar57) && (local_3a8 != (undefined **)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_3a8,uVar19 * 0x18);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar57 = *plVar20;
    if (((*(byte *)(lVar57 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar70 = (undefined8 *)plVar20[2];
      uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar20[3]) && (plVar20[2] = uVar19, puVar70 != (undefined8 *)0x0)) {
        *puVar70 = &DAT_03c4e575;
        puVar70[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
    puVar70 = (undefined8 *)plVar20[2];
    uVar19 = (long)puVar70 + 0x17U & 0xfffffffffffffff8;
    if (uVar19 <= (ulong)plVar20[3]) {
      plVar20[2] = uVar19;
joined_r0x0332eaec:
      if (puVar70 != (undefined8 *)0x0) {
        *puVar70 = &DAT_03c2d363;
        uVar25 = nn::os::GetSystemTick();
        puVar70[1] = uVar25;
      }
    }
LAB_0332eb04:
    if (*(code **)(lVar57 + 0x20) != (code *)0x0) {
      (**(code **)(lVar57 + 0x20))(*(undefined8 *)(lVar57 + 0x28));
    }
  }
switchD_0332d1e0_caseD_6:
  lVar35 = lVar35 + 1;
  if (*(int *)(puVar37 + 6) <= lVar35) goto LAB_0332eba8;
  goto LAB_0332d1b4;
LAB_0332ea40:
  lVar57 = lVar57 + 1;
  if ((int)local_3a0 <= lVar57) goto LAB_0332ea50;
  goto LAB_0332e7d8;
  while (((*puVar56 & 1) == 0 && (puVar56 = (ulong *)puVar56[1], puVar56 != (ulong *)0x0))) {
LAB_0332e8f0:
    uVar45 = (uint)*puVar56;
    if ((uVar45 >> 0x10 & 1) != 0) {
      uVar45 = uVar45 & 0xffff;
      ppuVar22 = (undefined **)
                 puVar56[(ulong)(byte)(POPCOUNT((char)uVar45) + POPCOUNT((char)(uVar45 >> 8))) + 2];
      local_2f8 = ppuVar22;
      if (ppuVar22 == (undefined **)0x0) {
        local_2f0 = (undefined **)0x0;
      }
      else {
        sVar66 = strlen((char *)ppuVar22);
        local_2f0 = (undefined **)((long)ppuVar22 + sVar66);
      }
      goto LAB_0332e94c;
    }
  }
  local_2f0 = (undefined **)0x0;
  local_2f8 = (undefined **)0x0;
LAB_0332e94c:
  puVar70 = (undefined8 *)FUN_03325d70(puVar52,&local_2f8);
  uVar45 = (uint)*puVar70;
  if ((uVar45 >> 0x11 & 1) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = CONCAT44(uVar45,uVar45) & 0x1ffff0001ffff;
    uVar19 = (ulong)*(ushort *)
                     (puVar70 +
                     (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                  POPCOUNT((char)(uVar19 >> 0x10))) + 2);
  }
  local_2f8 = (undefined **)(local_3a8[lVar57 * 3] + uVar19);
  local_2f0 = (undefined **)*plVar26;
  local_2e8 = (undefined *)0x0;
  ppuVar22 = local_2f0;
  if (local_2f0 != (undefined **)0x0) {
    do {
      puVar75 = *ppuVar22;
      if (((uint)puVar75 >> 2 & 1) != 0) {
        local_2e8 = ppuVar22[((ulong)puVar75 >> 1 & 1) + ((ulong)puVar75 & 1) + 2];
        goto LAB_0332e9d4;
      }
      ppuVar22 = (undefined **)ppuVar22[1];
    } while (ppuVar22 != (undefined **)0x0);
    local_2e8 = (undefined *)0x0;
  }
LAB_0332e9d4:
  if (((ulong)local_2e8 & 1) != 0) {
    piVar76 = (int *)(((ulong)local_2e8 & 0xfffffffffffffffe) + 8);
    do {
      cVar12 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar76,0x10);
      if (bVar16) {
        *piVar76 = *piVar76 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  FUN_031e66c8(&local_360,&local_2f8,1);
  if (((ulong)local_2e8 & 1) != 0) {
    plVar27 = (long *)((ulong)local_2e8 & 0xfffffffffffffffe);
    plVar71 = plVar27 + 1;
    do {
      lVar65 = *plVar71;
      cVar12 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar71,0x10);
      if (bVar16) {
        *(int *)plVar71 = (int)lVar65 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if ((plVar27 != (long *)0x0) && ((int)lVar65 == 1)) {
      (**(code **)(*plVar27 + 8))();
    }
  }
  goto LAB_0332e7e4;
  while (((*puVar38 & 1) == 0 && (puVar38 = (ulong *)puVar38[1], puVar38 != (ulong *)0x0))) {
LAB_0332d520:
    uVar45 = (uint)*puVar38;
    if ((uVar45 >> 0x10 & 1) != 0) {
      uVar45 = uVar45 & 0xffff;
      pcVar31 = (char *)puVar38[(ulong)(byte)(POPCOUNT((char)uVar45) + POPCOUNT((char)(uVar45 >> 8))
                                             ) + 2];
      goto LAB_0332d55c;
    }
  }
  pcVar31 = (char *)0x0;
LAB_0332d55c:
  iVar17 = strcmp(pcVar31,pcVar72);
  if (iVar17 == 0) {
    *(ulong **)(psVar51 + (uVar19 & 0xffffffff) * 4 + 4) = puVar48;
    goto LAB_0332e238;
  }
LAB_0332d568:
  uVar19 = uVar19 + 1;
  if (uVar19 == (uint)((int)sVar10 + (int)sVar9)) goto LAB_0332d574;
  goto LAB_0332d4d4;
code_r0x0332f7c4:
  if (((uVar60 & 9) != 0) || (puVar52 = (ulong *)puVar52[1], puVar52 == (ulong *)0x0))
  goto LAB_0332f800;
  goto LAB_0332f7bc;
}


