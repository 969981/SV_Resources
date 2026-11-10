/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333141c; name: FUN_0333141c
 */


void FUN_0333141c(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  void *__s;
  long *plVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong *puVar18;
  void *pvVar19;
  ulong *puVar20;
  bool bVar21;
  int iVar22;
  undefined1 *__n;
  long lVar23;
  void *local_328;
  ulong *puStack_320;
  ulong local_318;
  undefined1 *local_310;
  undefined1 *puStack_308;
  code *local_270;
  undefined *local_260;
  undefined *local_258;
  undefined1 *local_220;
  undefined *local_1e0;
  code *local_1d0;
  undefined *local_1c8;
  undefined *local_198;
  undefined *local_188;
  code *pcStack_180;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  
  if (*(int *)(*(long *)(param_1 + 0x280) + (long)param_2 * 4) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x378) != '\0') {
    return;
  }
  lVar23 = (long)param_2;
  puVar11 = (undefined8 *)(*(long *)(param_1 + 0x218) + lVar23 * 0x18);
  uVar3 = *puVar11;
  puVar20 = (ulong *)puVar11[1];
  if (puVar20 != (ulong *)0x0) {
    puVar12 = puVar20;
    do {
      uVar14 = *puVar12;
      if (((uint)uVar14 >> 2 & 1) != 0) {
        uVar14 = puVar12[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
        if ((uVar14 & 1) != 0) {
          piVar2 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
          do {
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar21) {
              *piVar2 = *piVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        goto LAB_033314c0;
      }
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
  }
  uVar14 = 0;
LAB_033314c0:
  local_310 = &DAT_03c886bc;
  puStack_308 = &DAT_03c886bc;
  puVar11 = (undefined8 *)FUN_033364d4(param_1 + 0x68,&local_310,0,puVar20);
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = (ulong *)*puVar11;
    plVar1 = (long *)(param_1 + 0x48);
    uVar10 = *(uint *)(param_1 + 0x54);
    iVar22 = (int)((ulong)puVar12 >> 0x20);
    if (0 < (int)uVar10) {
      uVar4 = (int)puVar12 * -0x61c8864f;
      uVar5 = iVar22 * -0x61c8864f;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = uVar6 + (uVar6 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4;
      while( true ) {
        uVar4 = uVar4 & uVar10;
        puVar18 = *(ulong **)(*plVar1 + (ulong)uVar4 * 0x10);
        if (puVar18 == (ulong *)0xffffffffffffffff) break;
        if (puVar18 == puVar12) {
          if ((int)uVar4 <= (int)uVar10) goto LAB_03331648;
          break;
        }
        uVar4 = uVar4 + 1;
      }
    }
    iVar17 = *(int *)(param_1 + 0x1e8);
    if ((int)uVar10 < *(int *)(param_1 + 0x50) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
      uVar10 = *(uint *)(param_1 + 0x54);
    }
    uVar4 = (int)puVar12 * -0x61c8864f;
    uVar5 = iVar22 * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = uVar6 + (uVar6 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4;
    while( true ) {
      uVar4 = uVar10 & uVar4;
      puVar18 = *(ulong **)(*plVar1 + (ulong)uVar4 * 0x10);
      if (puVar18 == (ulong *)0xffffffffffffffff) break;
      if (puVar18 == puVar12) {
        iVar22 = 0;
        goto LAB_033315ec;
      }
      uVar4 = uVar4 + 1;
    }
    iVar22 = 1;
LAB_033315ec:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar22;
    *(ulong **)(*plVar1 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4)) =
         puVar12;
    *(long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar4 * 0x10 + 8) = (long)iVar17;
    iVar22 = *(int *)(param_1 + 0x1e8);
    lVar13 = (long)iVar22;
    if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) <= iVar22) {
      FUN_033273cc(param_1 + 0x1e0,lVar13 + 1);
      iVar22 = *(int *)(param_1 + 0x1e8);
    }
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)iVar22 * 0x10);
    *(int *)(param_1 + 0x1e8) = (int)(lVar13 + 1);
    *puVar11 = 0;
    puVar11[1] = 0x8000000000000000;
LAB_03331648:
    if (puVar12 == puVar20) {
      lVar13 = FUN_031fa694(param_1 + 0x2b8,puVar20);
    }
    else {
      lVar13 = FUN_031fa91c(param_1 + 0x2b8,puVar20,puVar12);
    }
    if (lVar13 != 0) {
      puVar18 = puVar12;
      while( true ) {
        uVar10 = (uint)*puVar18;
        if ((uVar10 >> 0x14 & 1) != 0) break;
        if (((*puVar18 & 1) != 0) || (puVar18 = (ulong *)puVar18[1], puVar18 == (ulong *)0x0))
        goto LAB_033316c8;
      }
      if (puVar18 != (ulong *)0x0) {
        uVar15 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
        __n = (undefined1 *)
              (ulong)(ushort)puVar18[(ulong)(byte)(POPCOUNT((char)uVar15) +
                                                   POPCOUNT((char)(uVar15 >> 8)) +
                                                  POPCOUNT((char)(uVar15 >> 0x10))) + 2];
        goto LAB_033316cc;
      }
LAB_033316c8:
      __n = (undefined1 *)0x0;
LAB_033316cc:
      local_310 = __n;
      __s = (void *)(**(code **)(*(long *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,__n,&local_310)
      ;
      memset(__s,0,(size_t)__n);
      memset(&local_310,0,0x288);
      local_270 = FUN_03225a30;
      local_260 = PTR_LAB_047e5f00;
      local_1d0 = FUN_032259b8;
      local_1e0 = PTR_LAB_047e5f08;
      local_220 = &LAB_03225af8;
      local_258 = PTR_LAB_047e5f10;
      local_198 = PTR_FUN_047e5f18;
      local_1c8 = PTR_LAB_047e5f28;
      local_188 = PTR_FUN_047e5f20;
      pcStack_180 = FUN_03225a94;
      while( true ) {
        uVar10 = (uint)*puVar20;
        if ((uVar10 >> 0x14 & 1) != 0) break;
        if (((*puVar20 & 1) != 0) || (puVar20 = (ulong *)puVar20[1], puVar20 == (ulong *)0x0))
        goto LAB_033317c0;
      }
      if (puVar20 != (ulong *)0x0) {
        uVar15 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
        uVar9 = (undefined2)
                puVar20[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                     POPCOUNT((char)(uVar15 >> 0x10))) + 2];
        goto LAB_033317c4;
      }
LAB_033317c0:
      uVar9 = 0;
LAB_033317c4:
      local_88 = param_1;
      FUN_03328288(&local_310,lVar13,__s,uVar3,uVar9,__n,1);
      if (puVar12 == (ulong *)0x0) {
        uVar15 = 0;
      }
      else {
        puVar20 = puVar12;
        do {
          uVar15 = *puVar20;
          if (((uint)uVar15 >> 2 & 1) != 0) {
            uVar15 = puVar20[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
            goto LAB_0333181c;
          }
          puVar20 = (ulong *)puVar20[1];
        } while (puVar20 != (ulong *)0x0);
        uVar15 = 0;
      }
LAB_0333181c:
      local_328 = __s;
      puStack_320 = puVar12;
      local_318 = uVar15;
      if ((uVar15 & 1) == 0) {
        FUN_03322638(param_1,&local_328,1,0,param_2,0xffffffff);
      }
      else {
        piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
        do {
          cVar7 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar21) {
            *piVar2 = *piVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        FUN_03322638(param_1,&local_328,1,0,param_2,0xffffffff);
        if ((uVar15 & 1) != 0) {
          plVar8 = (long *)(uVar15 & 0xfffffffffffffffe);
          plVar1 = plVar8 + 1;
          do {
            lVar13 = *plVar1;
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar21) {
              *(int *)plVar1 = (int)lVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      bVar21 = true;
      *(undefined4 *)(*(long *)(param_1 + 0x280) + lVar23 * 4) = 1;
      if (puVar12 != (ulong *)0x0) {
        puVar20 = puVar12;
LAB_033318c4:
        uVar15 = *puVar20;
        if (((uint)uVar15 >> 2 & 1) == 0) goto code_r0x033318cc;
        uVar15 = puVar20[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
        if ((uVar15 & 1) != 0) {
          piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
          do {
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar21) {
              *piVar2 = *piVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar21 = false;
          goto LAB_03331920;
        }
        goto LAB_033318fc;
      }
      uVar15 = 0;
      goto LAB_03331920;
    }
  }
  FUN_0333124c(param_1,param_2);
  goto joined_r0x03331ae4;
code_r0x033318cc:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x033318d4;
  goto LAB_033318c4;
code_r0x033318d4:
  uVar15 = 0;
LAB_033318fc:
  bVar21 = true;
LAB_03331920:
  local_70 = local_70 & 0xffffff00;
  plVar1 = (long *)(param_1 + 0x218);
  local_80 = 0;
  uStack_78 = 0;
  iVar17 = *(int *)(param_1 + 0x220);
  iVar22 = iVar17;
  if (iVar17 <= param_2) {
    iVar22 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < iVar22) {
    FUN_033277d4(plVar1,PTR_PTR_047d1a50,(long)iVar22);
    iVar17 = *(int *)(param_1 + 0x220);
  }
  uVar10 = iVar22 - iVar17;
  if (uVar10 == 0 || iVar22 < iVar17) {
    if (iVar22 < iVar17) {
      *(int *)(param_1 + 0x220) = iVar22;
    }
  }
  else {
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)iVar17 * 0x18);
    *(int *)(param_1 + 0x220) = iVar22;
    if (iVar22 != iVar17 + 1) {
      iVar22 = -(uVar10 & 0xfffffffe);
      puVar16 = puVar11;
      do {
        iVar22 = iVar22 + 2;
        *puVar16 = local_80;
        puVar16[1] = uStack_78;
        *(uint *)(puVar16 + 2) = local_70;
        *(undefined4 *)((long)puVar16 + 0x14) = 0;
        puVar16[3] = local_80;
        puVar16[4] = uStack_78;
        puVar11 = puVar16 + 6;
        *(uint *)(puVar16 + 5) = local_70;
        *(undefined4 *)((long)puVar16 + 0x2c) = 0;
        puVar16 = puVar11;
      } while (iVar22 != 0);
    }
    if ((uVar10 & 1) != 0) {
      *puVar11 = local_80;
      puVar11[1] = uStack_78;
      *(uint *)(puVar11 + 2) = local_70;
      *(undefined4 *)((long)puVar11 + 0x14) = 0;
    }
  }
  *(void **)(*plVar1 + lVar23 * 0x18) = __s;
  *(ulong **)(*plVar1 + lVar23 * 0x18 + 8) = puVar12;
  if (!bVar21) {
    plVar8 = (long *)(uVar15 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar13 = *plVar1;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *(int *)plVar1 = (int)lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2b4);
  if ((int)uVar10 < *(int *)(param_1 + 0x2b0) * 2) {
    FUN_02ef5fd4((long *)(param_1 + 0x2a8),PTR_PTR_047d1a50,uVar10 * 2 + 2);
    uVar10 = *(uint *)(param_1 + 0x2b4);
  }
  uVar4 = (int)__s * -0x61c8864f;
  uVar5 = (int)((ulong)__s >> 0x20) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = uVar6 + (uVar6 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4;
  lVar13 = *(long *)(param_1 + 0x2a8);
  while( true ) {
    uVar4 = uVar10 & uVar4;
    pvVar19 = *(void **)(lVar13 + (ulong)uVar4 * 0x10);
    if (pvVar19 == (void *)0xffffffffffffffff) break;
    if (pvVar19 == __s) {
      iVar22 = 0;
      goto LAB_03331ac4;
    }
    uVar4 = uVar4 + 1;
  }
  iVar22 = 1;
LAB_03331ac4:
  *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + iVar22;
  *(void **)(lVar13 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4)) = __s;
  *(long *)(*(long *)(param_1 + 0x2a8) + (long)(int)uVar4 * 0x10 + 8) = lVar23;
joined_r0x03331ae4:
  if ((uVar14 & 1) != 0) {
    plVar8 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar23 = *plVar1;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *(int *)plVar1 = (int)lVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  return;
}


