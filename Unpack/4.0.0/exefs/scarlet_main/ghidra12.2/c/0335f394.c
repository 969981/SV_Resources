/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0335f394; name: FUN_0335f394
 */


/* WARNING: Removing unreachable block (ram,0x0335f92c) */

void FUN_0335f394(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong extraout_x1;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  short *psVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  short *psVar19;
  ulong *puVar20;
  long *plVar21;
  char *pcVar22;
  long *plVar23;
  undefined8 *puVar24;
  char *pcVar25;
  long lVar26;
  char *local_138;
  char *local_130;
  char *local_128;
  char *pcStack_120;
  char *local_118;
  ulong local_110;
  char local_108 [128];
  undefined4 local_88;
  ulong *local_80;
  char *local_78;
  char *local_70;
  ulong local_68;
  
  if (param_3 == (ulong *)0x0) {
    return;
  }
  uVar12 = *param_3;
  local_80 = param_3;
  while ((uVar12 & 9) == 0) {
    local_80 = (ulong *)local_80[1];
    uVar12 = *local_80;
  }
  uVar10 = (uint)uVar12;
  puVar14 = local_80;
  uVar6 = uVar10;
  if ((uVar10 >> 3 & 1) == 0) {
    uVar16 = uVar12;
    do {
      if ((uVar16 & 1) != 0) {
        return;
      }
      puVar14 = (ulong *)puVar14[1];
      if (puVar14 == (ulong *)0x0) {
        return;
      }
      uVar16 = *puVar14;
      uVar6 = (uint)uVar16;
    } while ((uVar6 >> 3 & 1) == 0);
  }
  if (puVar14 == (ulong *)0x0) {
    return;
  }
  if (puVar14[(ulong)(byte)POPCOUNT((byte)uVar6 & 7) + 2] == 0) {
    return;
  }
  puVar14 = local_80;
  if ((uVar12 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if (local_80 == (ulong *)0x0) {
    return;
  }
  if ((puVar14[2] & 0x1f) != 7) {
    return;
  }
  uVar16 = 0;
  puVar14 = local_80;
  if ((uVar10 >> 0x15 & 1) != 0) goto LAB_0335f478;
  do {
    uVar17 = 0;
    while( true ) {
      uVar16 = uVar17 | uVar16;
      if (((uVar12 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0)) {
        if (((uint)uVar16 >> 5 & 1) != 0) {
          return;
        }
        FUN_031f93a4(param_2,&local_80);
        if ((extraout_x1 & 1) == 0) {
          return;
        }
        local_118 = local_108;
        local_108[0] = '\0';
        local_110 = 0x8000008000000001;
        local_88 = 1;
        FUN_031e12d8(local_80,&local_118,0,0);
        pcStack_120 = local_118 + (long)(int)local_110 + -1;
        local_128 = local_118;
        puVar14 = local_80;
        goto LAB_0335f518;
      }
      uVar12 = *puVar14;
      if (((uint)uVar12 >> 0x15 & 1) == 0) break;
LAB_0335f478:
      uVar17 = CONCAT44((int)uVar12,(int)uVar12) & 0x1fffff001fffff;
      uVar17 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
    }
  } while( true );
  while (((uVar12 & 9) == 0 && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0))) {
LAB_0335f518:
    uVar12 = *puVar14;
    if (((uint)uVar12 >> 4 & 1) != 0) {
      uVar9 = (undefined4)puVar14[(ulong)(byte)POPCOUNT((byte)uVar12 & 0xf) + 2];
      goto LAB_0335f558;
    }
  }
  uVar9 = 0;
LAB_0335f558:
  local_130 = (char *)FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),&local_128,
                                   uVar9);
  uVar12 = 0;
  puVar14 = local_80;
  do {
    uVar6 = (uint)*puVar14;
    if ((uVar6 >> 0x15 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = CONCAT44(uVar6,uVar6) & 0x1fffff001fffff;
      uVar16 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                                    POPCOUNT((char)(uVar16 >> 0x10))) + 2];
    }
    uVar12 = uVar16 | uVar12;
  } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
  if (((uint)uVar12 >> 0xb & 1) != 0) {
    FUN_031bcb28(param_1 + 0x80,&local_130);
  }
  uVar12 = 0;
  puVar14 = local_80;
  do {
    uVar6 = (uint)*puVar14;
    if ((uVar6 >> 0x15 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = CONCAT44(uVar6,uVar6) & 0x1fffff001fffff;
      uVar16 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                                    POPCOUNT((char)(uVar16 >> 0x10))) + 2];
    }
    uVar12 = uVar16 | uVar12;
  } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
  puVar14 = local_80;
  if (((uint)uVar12 >> 5 & 1) != 0) {
    FUN_031bcb28(param_1 + 0xa0,&local_130);
    puVar14 = local_80;
  }
  while( true ) {
    pcVar25 = local_130;
    if (((uint)*puVar14 >> 0x1c & 1) != 0) break;
    if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
    goto LAB_0335f710;
  }
  if (puVar14 != (ulong *)0x0) {
    iVar11 = *(int *)(param_1 + 200);
    if (iVar11 <= *(int *)(param_1 + 0xd0) * 2) {
      FUN_0335fdec((long *)(param_1 + 0xc0),iVar11 << 1);
      iVar11 = *(int *)(param_1 + 200);
    }
    uVar6 = (int)pcVar25 * -0x61c8864f;
    uVar10 = (int)((ulong)pcVar25 >> 0x20) * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar6 = iVar11 - 1U & (uVar6 + (uVar6 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10);
    lVar26 = *(long *)(param_1 + 0xc0);
    puVar24 = (undefined8 *)(lVar26 + (long)(int)uVar6 * 8);
    if ((char *)*puVar24 == (char *)0xffffffffffffffff) {
      iVar11 = 1;
    }
    else {
      if ((char *)*puVar24 != pcVar25) goto LAB_0335f6c8;
      iVar11 = 0;
    }
    goto LAB_0335f700;
  }
  goto LAB_0335f710;
  while (pcVar22 != pcVar25) {
LAB_0335f6c8:
    uVar6 = uVar6 + 1 & iVar11 - 1U;
    pcVar22 = *(char **)(lVar26 + (long)(int)uVar6 * 8);
    if (pcVar22 == (char *)0xffffffffffffffff) {
      iVar11 = 1;
      goto LAB_0335f6f8;
    }
  }
  iVar11 = 0;
LAB_0335f6f8:
  puVar24 = (undefined8 *)(lVar26 + (long)(int)uVar6 * 8);
LAB_0335f700:
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + iVar11;
  *puVar24 = pcVar25;
LAB_0335f710:
  plVar2 = (long *)(param_1 + 0x20);
  uVar6 = FUN_0324c8a8(plVar2,&local_130);
  if (*(uint *)(param_1 + 0x28) == uVar6) {
    iVar11 = uVar6 + 1;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= (int)uVar6) {
      FUN_0324c9c4(plVar2,PTR_PTR_047d1a50,(long)iVar11);
      uVar6 = *(uint *)(param_1 + 0x28);
    }
    puVar24 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 0x10);
    *puVar24 = local_130;
    puVar24[1] = local_80;
    *(int *)(param_1 + 0x28) = iVar11;
  }
  else {
    *(ulong **)(*plVar2 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_80;
  }
  puVar14 = (ulong *)local_80[1];
  if (puVar14 != (ulong *)0x0) {
    FUN_031e12d8(puVar14,&local_118,0,0);
    local_70 = local_118 + (long)(int)local_110 + -1;
    local_78 = local_118;
    do {
      uVar12 = *puVar14;
      if (((uint)uVar12 >> 4 & 1) != 0) {
        uVar9 = (undefined4)puVar14[(ulong)(byte)POPCOUNT((byte)uVar12 & 0xf) + 2];
        goto LAB_0335f804;
      }
    } while (((uVar12 & 9) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
    uVar9 = 0;
LAB_0335f804:
    uVar7 = FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),&local_78,uVar9);
    plVar21 = (long *)(param_1 + 0x40);
    uVar6 = FUN_03360190(plVar21,&local_130);
    if (*(uint *)(param_1 + 0x48) == uVar6) {
      iVar11 = uVar6 + 1;
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) <= (int)uVar6) {
        FUN_033602ac(plVar21,(long)iVar11);
        uVar6 = *(uint *)(param_1 + 0x48);
      }
      puVar24 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar6 * 0x10);
      *puVar24 = local_130;
      puVar24[1] = uVar7;
      *(int *)(param_1 + 0x48) = iVar11;
    }
    else {
      *(undefined8 *)(*plVar21 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = uVar7;
    }
  }
  puVar14 = local_80;
  plVar23 = (long *)0x0;
  plVar21 = (long *)0x0;
  puVar20 = (ulong *)0x0;
LAB_0335f890:
  plVar21 = plVar21 + 1;
  puVar13 = puVar20;
  if (plVar23 <= plVar21) {
    if (puVar14 == puVar20) goto LAB_0335f968;
    psVar15 = (short *)0x0;
    puVar13 = (ulong *)0x0;
    puVar18 = puVar14;
    do {
      uVar6 = (uint)*puVar18;
      if ((uVar6 >> 0x17 & 1) != 0) {
        uVar12 = CONCAT44(uVar6,uVar6) & 0x7fffff007fffff;
        psVar19 = (short *)puVar18[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                 POPCOUNT((char)(uVar12 >> 8)) +
                                                POPCOUNT((char)(uVar12 >> 0x10))) + 2];
        if (psVar19 != (short *)0x0) {
          if ((int)psVar19[1] + (int)*psVar19 != 0) {
            psVar15 = psVar19;
            puVar13 = puVar18;
          }
        }
      }
      puVar18 = (ulong *)puVar18[1];
    } while (puVar18 != puVar20);
    if (puVar13 == (ulong *)0x0) goto LAB_0335f968;
    plVar21 = (long *)(psVar15 + 4);
    plVar23 = plVar21 + (long)psVar15[1] + (long)*psVar15;
  }
  uVar6 = (uint)*(undefined8 *)*plVar21;
  puVar20 = puVar13;
  if (((uVar6 >> 0x11 & 1) != 0) &&
     (uVar12 = CONCAT44(uVar6,uVar6) & 0x1ffff0001ffff,
     (*(ushort *)
       (*plVar21 +
       (ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                    POPCOUNT((char)(uVar12 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
    FUN_0335f394(param_1,param_2,*plVar21);
  }
  goto LAB_0335f890;
LAB_0335f968:
  puVar14 = local_80;
  while( true ) {
    uVar6 = (uint)*puVar14;
    puVar20 = local_80;
    puVar5 = PTR_DAT_047e66f0;
    if ((uVar6 >> 0xf & 1) != 0) break;
    if (((*puVar14 & 9) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
    goto LAB_0335fa04;
  }
  uVar12 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
  uVar12 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8))) + 2];
  if ((uVar12 != 0) && (uVar16 = (ulong)*(ushort *)(uVar12 + 8), uVar16 != 0)) {
    uVar17 = 0;
    puVar24 = (undefined8 *)(uVar12 + 0x18);
    do {
      if (*(char *)*puVar24 == 't') {
        FUN_0335f394(param_1,param_2,puVar24[-1]);
        uVar16 = (ulong)*(ushort *)(uVar12 + 8);
      }
      uVar17 = uVar17 + 1;
      puVar24 = puVar24 + 2;
      puVar20 = local_80;
      puVar5 = PTR_DAT_047e66f0;
    } while (uVar17 < uVar16);
  }
LAB_0335fa04:
  do {
    FUN_031dbdbc(&local_78,puVar20,puVar5);
    pcVar25 = local_78;
    if (local_78 != (char *)0x0) {
      if ((local_68 & 1) != 0) {
        plVar23 = (long *)(local_68 & 0xfffffffffffffffe);
        plVar21 = plVar23 + 1;
        do {
          lVar26 = *plVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *(int *)plVar21 = (int)lVar26 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar26 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
      puVar5 = PTR_PTR_047d1a50;
      local_138 = local_130;
      puVar24 = *(undefined8 **)pcVar25;
      if (puVar24 != (undefined8 *)0x0) {
        plVar21 = (long *)(param_1 + 0x40);
        pcVar25 = local_130;
        do {
          pcVar22 = (char *)*puVar24;
          iVar11 = *(int *)(puVar24 + 1);
          if (pcVar22 != (char *)0x0 && iVar11 != -1) {
            lVar26 = *(long *)(param_1 + 0x10);
            local_78 = pcVar22;
            sVar8 = strlen(pcVar22);
            local_70 = pcVar22 + sVar8;
            local_78 = (char *)FUN_03342334(*(undefined8 *)(lVar26 + 0x90),&local_78,iVar11);
            uVar6 = FUN_03360190(plVar21,&local_138);
            if (*(uint *)(param_1 + 0x48) == uVar6) {
              iVar11 = uVar6 + 1;
              if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) <= (int)uVar6) {
                FUN_033602ac(plVar21,(long)iVar11);
                uVar6 = *(uint *)(param_1 + 0x48);
              }
              puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar6 * 0x10);
              *puVar1 = pcVar25;
              puVar1[1] = local_78;
              *(int *)(param_1 + 0x48) = iVar11;
            }
            else {
              *(char **)(*plVar21 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_78;
            }
            pcVar25 = local_78;
            local_138 = local_78;
            uVar6 = FUN_0324c8a8(plVar2,&local_78);
            if (*(uint *)(param_1 + 0x28) == uVar6) {
              iVar11 = uVar6 + 1;
              if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= (int)uVar6) {
                FUN_0324c9c4(plVar2,puVar5,(long)iVar11);
                uVar6 = *(uint *)(param_1 + 0x28);
              }
              puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 0x10);
              *puVar1 = local_78;
              puVar1[1] = local_80;
              *(int *)(param_1 + 0x28) = iVar11;
            }
            else {
              *(ulong **)(*plVar2 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = local_80;
            }
          }
          puVar24 = (undefined8 *)puVar24[2];
        } while (puVar24 != (undefined8 *)0x0);
      }
      goto LAB_0335fc00;
    }
    if ((local_68 & 1) != 0) {
      plVar23 = (long *)(local_68 & 0xfffffffffffffffe);
      plVar21 = plVar23 + 1;
      do {
        lVar26 = *plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = (int)lVar26 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar23 != (long *)0x0) && ((int)lVar26 == 1)) {
        (**(code **)(*plVar23 + 8))();
      }
    }
    if ((*puVar20 & 1) != 0) break;
    puVar14 = puVar20 + 1;
    puVar20 = (ulong *)*puVar14;
  } while ((ulong *)*puVar14 != (ulong *)0x0);
  if (local_80[1] != 0) {
    FUN_0335f394(param_1,param_2);
  }
LAB_0335fc00:
  uVar12 = local_110;
  local_110 = local_110 & 0xffffffff00000000;
  if ((-1 < (long)uVar12) && (local_118 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


