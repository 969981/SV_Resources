/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339c900; name: FUN_0339c900
 */


/* WARNING: Removing unreachable block (ram,0x0339d05c) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_0339c900(long param_1,ulong *param_2,int param_3)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  char *__src;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  size_t sVar13;
  void *pvVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined1 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  short *psVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_200 [16];
  undefined1 local_1f0 [8];
  undefined8 local_1e8;
  ulong local_1e0;
  char *local_1d8;
  int local_1d0;
  int local_1cc;
  char local_1c8 [128];
  undefined4 local_148;
  long *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 uStack_128;
  int local_b0;
  void *local_a8;
  void *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  long *local_78;
  long *local_70;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    param_2 = (ulong *)FUN_03371070(*(undefined8 *)(*(long *)(param_1 + 0x218) + 8),param_2,0);
  }
  plVar1 = (long *)(param_1 + 0x200);
  iVar9 = FUN_033a5458(plVar1,param_2);
  lVar18 = *(long *)(param_1 + 0x200);
  lVar27 = *(long *)(*(long *)(lVar18 + 0x40) + (long)iVar9 * 8);
  if (lVar27 != 0) {
    *(undefined8 *)(*(long *)(lVar18 + 0x40) + (long)iVar9 * 8) = 0;
    lVar18 = *plVar1;
    iVar11 = *(int *)(lVar18 + 0x58);
    if (iVar11 <= *(int *)(lVar18 + 100)) {
      iVar10 = 8;
      if (iVar11 != 0) {
        iVar10 = iVar11 << 1;
      }
      FUN_03379490(lVar18 + 0x50,iVar10);
      iVar11 = *(int *)(lVar18 + 0x58);
    }
    iVar10 = *(int *)(lVar18 + 0x60);
    if (iVar10 == iVar11) {
      iVar10 = 0;
      *(undefined4 *)(lVar18 + 0x60) = 0;
    }
    plVar12 = (long *)(*(long *)(lVar18 + 0x50) + (long)iVar10 * 0x10);
    *plVar12 = lVar27;
    *(int *)(plVar12 + 1) = iVar9;
    *(int *)(lVar18 + 0x60) = *(int *)(lVar18 + 0x60) + 1;
    *(int *)(lVar18 + 100) = *(int *)(lVar18 + 100) + 1;
    lVar18 = *plVar1;
  }
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(lVar18 + 100) == 0) goto LAB_0339e0bc;
  lVar18 = *(long *)(param_1 + 0x208);
  local_130 = 0;
  uStack_128 = 0;
  local_140 = (long *)0x0;
  local_138 = 0;
  local_1d8 = &DAT_00000030;
  plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_1d8,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar12,"WriteBufferImpl");
  }
  puVar2 = PTR_DAT_047e5fb0 + 0x10;
  plVar20 = plVar12 + 2;
  *plVar20 = 1;
  *plVar12 = (long)puVar2;
  plVar12[1] = 0xffffffff;
  puVar2 = PTR_PTR_047d1a50;
  plVar12[3] = lVar18 + 0x18;
  plVar12[4] = (long)puVar2;
  plVar12[5] = 0;
  *plVar20 = 0;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_88 = 0;
  local_138 = 0;
  local_80 = 1;
  local_130 = 0;
  uStack_128 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_140 = plVar12;
  FUN_032282d4(&local_a8,&local_140);
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    do {
      lVar18 = *plVar20;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar18 = *plVar1;
  if (*(int *)(lVar18 + 100) == 0) {
    iVar11 = 0;
LAB_0339cb54:
    puVar26 = (ulong *)0x0;
    puVar23 = (undefined1 *)0x0;
  }
  else {
    iVar16 = *(int *)(lVar18 + 0x5c);
    puVar21 = (undefined8 *)(*(long *)(lVar18 + 0x50) + (long)iVar16 * 0x10);
    puVar26 = (ulong *)*puVar21;
    iVar11 = *(int *)(puVar21 + 1);
    iVar10 = 0;
    if (iVar16 + 1 != *(int *)(lVar18 + 0x58)) {
      iVar10 = iVar16 + 1;
    }
    *(int *)(lVar18 + 0x5c) = iVar10;
    *(int *)(lVar18 + 100) = *(int *)(lVar18 + 100) + -1;
    if (puVar26 == (ulong *)0x0) goto LAB_0339cb54;
    puVar23 = &LAB_033a59f4;
  }
  if (puVar23 != (undefined1 *)0x0) {
LAB_0339cb9c:
    iVar10 = FUN_033a5458(plVar1,puVar26[1]);
    lVar18 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar10 * 8);
    if (lVar18 != 0) {
      *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar10 * 8) = 0;
      lVar27 = *plVar1;
      iVar16 = *(int *)(lVar27 + 0x58);
      if (iVar16 <= *(int *)(lVar27 + 100)) {
        iVar22 = 8;
        if (iVar16 != 0) {
          iVar22 = iVar16 << 1;
        }
        FUN_03379490(lVar27 + 0x50,iVar22);
        iVar16 = *(int *)(lVar27 + 0x58);
      }
      iVar22 = *(int *)(lVar27 + 0x60);
      if (iVar22 == iVar16) {
        iVar22 = 0;
        *(undefined4 *)(lVar27 + 0x60) = 0;
      }
      plVar12 = (long *)(*(long *)(lVar27 + 0x50) + (long)iVar22 * 0x10);
      *plVar12 = lVar18;
      *(int *)(plVar12 + 1) = iVar10;
      *(int *)(lVar27 + 0x60) = *(int *)(lVar27 + 0x60) + 1;
      *(int *)(lVar27 + 100) = *(int *)(lVar27 + 100) + 1;
    }
    local_140 = (long *)(long)iVar11;
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
    local_140 = (long *)(long)iVar10;
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
    uVar19 = *puVar26;
    uVar17 = (uint)uVar19;
    if ((uVar17 >> 0x15 & 1) == 0) {
LAB_0339cd4c:
      plVar12 = (long *)0x0;
      uVar29 = uVar19 & 0xffffffffffdfffff;
    }
    else {
      uVar4 = uVar17 & 0x1fffff;
      plVar12 = (long *)(puVar26[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))
                                              + POPCOUNT((char)(uVar4 >> 0x10))) + 2] &
                        0xffffffffffffefff);
      if (plVar12 == (long *)0x0) goto LAB_0339cd4c;
      uVar29 = uVar19;
    }
    if ((((uVar17 >> 5 & 1) != 0) &&
        (plVar20 = (long *)puVar26[(ulong)(byte)POPCOUNT((byte)uVar19 & 0x1f) + 2],
        plVar20 != (long *)0x0)) && (*plVar20 != 0)) {
      lVar18 = *plVar20 << 4;
      do {
        plVar15 = plVar20 + 2;
        uVar19 = FUN_0221d7c0(*plVar15,PTR_DAT_047e5b68);
        if ((uVar19 & 1) != 0) {
          lVar18 = plVar20[1];
          puVar24 = (ulong *)*plVar15;
          goto joined_r0x0339d044;
        }
        lVar18 = lVar18 + -0x10;
        plVar20 = plVar15;
      } while (lVar18 != 0);
    }
    lVar18 = 0;
LAB_0339cdb4:
    uVar19 = uVar29 | 0x2000000;
    if (param_3 != 1 || lVar18 == 0) {
      uVar19 = uVar29;
    }
    uVar29 = uVar19 & 2;
    local_140 = (long *)(uVar29 | (uVar19 & 0x10) >> 2 | (uVar19 & 0x100000) >> 0x11 |
                         (uVar19 & 0x200000) >> 0x11 | (uVar19 & 0x800000) >> 0x12 |
                         (uVar19 & 0x4000) >> 8 | (uVar19 & 0x2000000) >> 0x12 |
                         uVar19 >> 0x14 & 0x100 | uVar19 & 1);
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
        goto joined_r0x0339ce88;
      }
      (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      if ((uVar19 & 1) != 0) goto LAB_0339cea8;
joined_r0x0339cf30:
      if (uVar29 == 0) goto joined_r0x0339d0ec;
LAB_0339cf34:
      puVar24 = puVar26;
      if ((*puVar26 & 1) != 0) {
        if ((puVar26 == (ulong *)0x0) || ((puVar26[2] & 0x1f) != 8)) goto LAB_0339d010;
LAB_0339cfa0:
        do {
          if ((*puVar24 & 1) != 0) {
            if (puVar24 != (ulong *)0x0) {
              puVar25 = puVar26;
              goto LAB_0339cfd4;
            }
            break;
          }
          puVar24 = (ulong *)puVar24[1];
        } while (puVar24 != (ulong *)0x0);
        puVar24 = puVar26;
        do {
          if (((byte)*puVar24 >> 1 & 1) != 0) {
            uVar29 = puVar24[3];
            goto LAB_0339d080;
          }
          puVar24 = (ulong *)puVar24[1];
        } while (puVar24 != (ulong *)0x0);
        uVar29 = 0;
        goto LAB_0339d080;
      }
      puVar25 = puVar26;
      do {
        puVar25 = (ulong *)puVar25[1];
      } while ((*puVar25 & 1) == 0);
      if ((puVar26 != (ulong *)0x0) && ((puVar25[2] & 0x1f) == 8)) goto LAB_0339cfa0;
      if ((*puVar26 & 1) == 0) {
        do {
          puVar24 = (ulong *)puVar24[1];
        } while ((*puVar24 & 1) == 0);
      }
LAB_0339d010:
      if ((puVar26 == (ulong *)0x0) || ((puVar24[2] & 0x1f) != 6)) goto joined_r0x0339d0ec;
      puVar24 = puVar26;
      do {
        if (((byte)*puVar24 >> 1 & 1) != 0) {
          uVar29 = puVar24[3];
          goto LAB_0339d098;
        }
        puVar24 = (ulong *)puVar24[1];
      } while (puVar24 != (ulong *)0x0);
      uVar29 = 0;
LAB_0339d098:
      iVar11 = FUN_033a5458(plVar1,uVar29);
      local_140 = (long *)(long)iVar11;
      goto LAB_0339d0a8;
    }
    memcpy(local_a8,&local_1d8,(long)iVar11);
    local_a8 = pvVar14;
joined_r0x0339ce88:
    if ((uVar19 & 1) == 0) goto joined_r0x0339cf30;
LAB_0339cea8:
    if ((*puVar26 & 1) == 0) {
      local_140 = (long *)0x0;
    }
    else {
      local_140 = (long *)puVar26[2];
    }
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (pvVar14 <= local_a0) {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
      goto joined_r0x0339cf30;
    }
    if (local_78 == (long *)0x0) {
      memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
      local_a8 = local_a0;
      goto joined_r0x0339cf30;
    }
    (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
    if (uVar29 != 0) goto LAB_0339cf34;
    goto joined_r0x0339d0ec;
  }
LAB_0339dfe8:
  if (local_78 == (long *)0x0) {
    if ((local_90 != 0) && (local_70 != (long *)0x0)) {
      *local_70 = (long)local_a8 - local_98;
    }
  }
  else {
    (**(code **)(*local_78 + 0x28))(local_78,&local_a8);
    plVar1 = local_78;
    local_78 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto LAB_0339e0bc;
    if (plVar1[1] != 0) {
      plVar12 = plVar1 + 2;
      do {
        lVar18 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))();
      }
    }
  }
  local_90 = 0;
  if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
    plVar1 = local_78 + 2;
    do {
      lVar18 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
LAB_0339e0bc:
  uVar19 = *param_2;
  if (((uint)uVar19 >> 0x18 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    uVar19 = *param_2;
  }
  puVar26 = param_2;
  if ((uVar19 & 1) == 0) {
    do {
      puVar26 = (ulong *)puVar26[1];
    } while ((*puVar26 & 1) == 0);
  }
  *(uint *)(*(long *)(param_1 + 0xf0) + (long)iVar9 * 0x18 + 4) = (uint)puVar26[2] & 0x1f;
  auVar34._8_4_ = iVar9;
  auVar34._0_8_ = param_2;
  auVar34._12_4_ = 0;
  return auVar34;
joined_r0x0339d044:
  if (puVar24 == (ulong *)0x0) goto LAB_0339cdb4;
  uVar19 = *puVar24;
  if (((uint)uVar19 >> 2 & 1) != 0) {
    uVar19 = puVar24[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
    if ((uVar19 & 1) != 0) {
      piVar3 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar15 = (long *)(uVar19 & 0xfffffffffffffffe);
      plVar20 = plVar15 + 1;
      do {
        lVar27 = *plVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *(int *)plVar20 = (int)lVar27 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((plVar15 != (long *)0x0) && ((int)lVar27 == 1)) {
        (**(code **)(*plVar15 + 8))();
      }
    }
    goto LAB_0339cdb4;
  }
  puVar24 = (ulong *)puVar24[1];
  goto joined_r0x0339d044;
  while (puVar25 = (ulong *)puVar25[1], puVar25 != (ulong *)0x0) {
LAB_0339cfd4:
    if (((byte)*puVar25 >> 1 & 1) != 0) {
      uVar29 = puVar25[3];
      goto joined_r0x0339dee4;
    }
  }
  uVar29 = 0;
joined_r0x0339dee4:
  if ((int)(puVar24[2] >> 8) == 0) {
LAB_0339d080:
    iVar11 = FUN_033a5458(plVar1,uVar29);
    plVar20 = (long *)(long)iVar11;
  }
  else {
    iVar11 = FUN_033a5458(plVar1,uVar29);
    plVar20 = (long *)(long)iVar11;
    lVar27 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar11 * 8);
    if (lVar27 != 0) {
      *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)plVar20 * 8) = 0;
      lVar32 = *plVar1;
      iVar10 = *(int *)(lVar32 + 0x58);
      if (iVar10 <= *(int *)(lVar32 + 100)) {
        iVar16 = 8;
        if (iVar10 != 0) {
          iVar16 = iVar10 << 1;
        }
        FUN_03379490(lVar32 + 0x50,iVar16);
        iVar10 = *(int *)(lVar32 + 0x58);
      }
      iVar16 = *(int *)(lVar32 + 0x60);
      if (iVar16 == iVar10) {
        iVar16 = 0;
        *(undefined4 *)(lVar32 + 0x60) = 0;
      }
      plVar15 = (long *)(*(long *)(lVar32 + 0x50) + (long)iVar16 * 0x10);
      *plVar15 = lVar27;
      *(int *)(plVar15 + 1) = iVar11;
      *(int *)(lVar32 + 0x60) = *(int *)(lVar32 + 0x60) + 1;
      *(int *)(lVar32 + 100) = *(int *)(lVar32 + 100) + 1;
    }
  }
  local_140 = plVar20;
LAB_0339d0a8:
  iVar11 = FUN_03398a74(&local_140,&local_1d8);
  pvVar14 = (void *)((long)local_a8 + (long)iVar11);
  if (local_a0 < pvVar14) {
    if (local_78 == (long *)0x0) {
      memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
      local_a8 = local_a0;
    }
    else {
      (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
    }
  }
  else {
    memcpy(local_a8,&local_1d8,(long)iVar11);
    local_a8 = pvVar14;
  }
joined_r0x0339d0ec:
  if ((uVar19 & 0x10) != 0) {
    if (((uint)*puVar26 >> 4 & 1) == 0) {
      local_140 = (long *)0x0;
    }
    else {
      local_140 = (long *)puVar26[(ulong)(byte)POPCOUNT((byte)*puVar26 & 0xf) + 2];
    }
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
  }
  if ((uVar19 & 0x100000) != 0) {
    uVar17 = (uint)*puVar26;
    if ((uVar17 >> 0x14 & 1) == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
      uVar29 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar29) + POPCOUNT((char)(uVar29 >> 8)) +
                                    POPCOUNT((char)(uVar29 >> 0x10))) + 2];
    }
    local_140 = (long *)(uVar29 & 0xffff);
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
    local_140 = (long *)(uVar29 >> 0x10 & 0xffff);
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
  }
  if ((uVar19 & 0x200000) != 0) {
    local_140 = plVar12;
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
  }
  if ((uVar19 & 0x800000) != 0) {
    uVar17 = (uint)*puVar26;
    if ((uVar17 >> 0x17 & 1) == 0) {
      psVar28 = (short *)0x0;
    }
    else {
      uVar29 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
      psVar28 = (short *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar29) +
                                               POPCOUNT((char)(uVar29 >> 8)) +
                                              POPCOUNT((char)(uVar29 >> 0x10))) + 2];
    }
    sVar5 = *psVar28;
    local_140 = (long *)((long)sVar5 | (long)psVar28[1] << 0x10);
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
    if (0 < sVar5) {
      uVar29 = 0;
      do {
        puVar24 = *(ulong **)(psVar28 + uVar29 * 4 + 4);
        lVar27 = *(long *)(param_1 + 0x208);
        if (puVar24 == (ulong *)0x0) {
LAB_0339d1fc:
          local_140 = (long *)0x0;
        }
        else {
          puVar25 = puVar24;
          do {
            uVar17 = (uint)*puVar25;
            if ((uVar17 >> 0x10 & 1) != 0) {
              uVar17 = uVar17 & 0xffff;
              local_140 = (long *)puVar25[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                       POPCOUNT((char)(uVar17 >> 8))) + 2];
              goto LAB_0339d224;
            }
            if ((*puVar25 & 1) != 0) goto LAB_0339d1fc;
            puVar25 = (ulong *)puVar25[1];
          } while (puVar25 != (ulong *)0x0);
          local_140 = (long *)0x0;
        }
LAB_0339d224:
        lVar32 = FUN_033a53d0(lVar27 + 0x68,&local_140);
        local_140 = (long *)((lVar32 - *(long *)(lVar27 + 0x68)) * 0x20000000 >> 0x20);
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        uVar17 = (uint)*puVar24;
        if ((uVar17 >> 0x11 & 1) == 0) {
          local_140 = (long *)0x0;
          if ((uVar17 >> 0x14 & 1) != 0) goto LAB_0339d2ec;
        }
        else {
          uVar4 = uVar17 & 0x1ffff;
          local_140 = (long *)(ulong)*(ushort *)
                                      ((long)puVar24 +
                                      (ulong)(byte)(POPCOUNT((char)uVar4) +
                                                    POPCOUNT((char)(uVar4 >> 8)) +
                                                   POPCOUNT((char)(uVar4 >> 0x10))) * 8 + 0x12);
          if ((uVar17 >> 0x14 & 1) != 0) {
LAB_0339d2ec:
            uVar31 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
            uVar31 = puVar24[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                          POPCOUNT((char)(uVar31 >> 0x10))) + 2];
            if (uVar31 != 0) {
              local_140 = (long *)((ulong)local_140 | 0x80);
              iVar11 = FUN_03398a74(&local_140,&local_1d8);
              pvVar14 = (void *)((long)local_a8 + (long)iVar11);
              if (local_a0 < pvVar14) {
                if (local_78 == (long *)0x0) {
                  memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
                  local_a8 = local_a0;
                }
                else {
                  (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
                }
              }
              else {
                memcpy(local_a8,&local_1d8,(long)iVar11);
                local_a8 = pvVar14;
              }
              local_140 = (long *)(uVar31 >> 0x1c & 0xf);
            }
          }
        }
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        uVar17 = (uint)*puVar24;
        if ((uVar17 >> 0x11 & 1) == 0) {
          local_140 = (long *)0x0;
        }
        else {
          uVar31 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
          local_140 = (long *)(ulong)(ushort)puVar24[(ulong)(byte)(POPCOUNT((char)uVar31) +
                                                                   POPCOUNT((char)(uVar31 >> 8)) +
                                                                  POPCOUNT((char)(uVar31 >> 0x10)))
                                                     + 2];
        }
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        iVar11 = FUN_033a5458(plVar1,puVar24[1]);
        lVar27 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar11 * 8);
        if (lVar27 != 0) {
          *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar11 * 8) = 0;
          lVar32 = *plVar1;
          iVar10 = *(int *)(lVar32 + 0x58);
          if (iVar10 <= *(int *)(lVar32 + 100)) {
            iVar16 = 8;
            if (iVar10 != 0) {
              iVar16 = iVar10 << 1;
            }
            FUN_03379490(lVar32 + 0x50,iVar16);
            iVar10 = *(int *)(lVar32 + 0x58);
          }
          iVar16 = *(int *)(lVar32 + 0x60);
          if (iVar16 == iVar10) {
            iVar16 = 0;
            *(undefined4 *)(lVar32 + 0x60) = 0;
          }
          plVar12 = (long *)(*(long *)(lVar32 + 0x50) + (long)iVar16 * 0x10);
          *plVar12 = lVar27;
          *(int *)(plVar12 + 1) = iVar11;
          *(int *)(lVar32 + 0x60) = *(int *)(lVar32 + 0x60) + 1;
          *(int *)(lVar32 + 100) = *(int *)(lVar32 + 100) + 1;
        }
        local_140 = (long *)(long)iVar11;
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != (long)sVar5);
    }
  }
  if ((uVar19 & 0x4000) != 0) {
    uVar29 = CONCAT44((int)*puVar26,(int)*puVar26) & 0x3fff00003fff;
    puVar24 = (ulong *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar29) + POPCOUNT((char)(uVar29 >> 8)))
                               + 2];
    uVar29 = *puVar24;
    iVar10 = (int)uVar29;
    local_140 = (long *)(long)iVar10;
    iVar11 = FUN_03398a74(&local_140,&local_1d8);
    pvVar14 = (void *)((long)local_a8 + (long)iVar11);
    if (local_a0 < pvVar14) {
      if (local_78 == (long *)0x0) {
        memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
        local_a8 = local_a0;
      }
      else {
        (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
      }
    }
    else {
      memcpy(local_a8,&local_1d8,(long)iVar11);
      local_a8 = pvVar14;
    }
    if (0 < iVar10) {
      uVar29 = uVar29 & 0xffffffff;
      do {
        iVar11 = FUN_033a5458(plVar1,puVar24[1]);
        lVar27 = *(long *)(*(long *)(*plVar1 + 0x40) + (long)iVar11 * 8);
        if (lVar27 != 0) {
          *(undefined8 *)(*(long *)(*plVar1 + 0x40) + (long)iVar11 * 8) = 0;
          lVar32 = *plVar1;
          iVar10 = *(int *)(lVar32 + 0x58);
          if (iVar10 <= *(int *)(lVar32 + 100)) {
            iVar16 = 8;
            if (iVar10 != 0) {
              iVar16 = iVar10 << 1;
            }
            FUN_03379490(lVar32 + 0x50,iVar16);
            iVar10 = *(int *)(lVar32 + 0x58);
          }
          iVar16 = *(int *)(lVar32 + 0x60);
          if (iVar16 == iVar10) {
            iVar16 = 0;
            *(undefined4 *)(lVar32 + 0x60) = 0;
          }
          plVar12 = (long *)(*(long *)(lVar32 + 0x50) + (long)iVar16 * 0x10);
          *plVar12 = lVar27;
          *(int *)(plVar12 + 1) = iVar11;
          *(int *)(lVar32 + 0x60) = *(int *)(lVar32 + 0x60) + 1;
          *(int *)(lVar32 + 100) = *(int *)(lVar32 + 100) + 1;
        }
        local_140 = (long *)(long)iVar11;
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        local_140 = (long *)puVar24[2];
        iVar11 = FUN_03398a74(&local_140,&local_1d8);
        pvVar14 = (void *)((long)local_a8 + (long)iVar11);
        if (local_a0 < pvVar14) {
          if (local_78 == (long *)0x0) {
            memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
            local_a8 = local_a0;
          }
          else {
            (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
          }
        }
        else {
          memcpy(local_a8,&local_1d8,(long)iVar11);
          local_a8 = pvVar14;
        }
        uVar29 = uVar29 - 1;
        puVar24 = puVar24 + 2;
      } while (uVar29 != 0);
    }
  }
  if ((uVar19 & 0x2000000) != 0) {
    uVar17 = (uint)*puVar26;
    if ((uVar17 >> 0x19 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = CONCAT44(uVar17,uVar17) & 0x1ffffff01ffffff;
      uVar19 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10)) +
                                    POPCOUNT((char)(uVar19 >> 0x18))) + 2];
    }
    local_138 = 0x8000008000000000;
    local_b0 = 1;
    local_140 = &local_130;
    FUN_031c6afc(&local_140,uVar19,0xffffffff);
    auVar33._8_8_ = PTR_DAT_047e5b68;
    auVar33._0_8_ = lVar18;
    if (param_3 == 1 && lVar18 != 0) {
      local_1cc = -0x7fffff80;
      local_1d0 = 1;
      local_148 = 1;
      local_1c8[0] = '\0';
      local_1e8 = (undefined *)0x0;
      local_1e0 = 0;
      puVar21 = (undefined8 *)PTR_DAT_047e5b68;
      do {
        uVar17 = (uint)*puVar21;
        local_1d8 = local_1c8;
        if ((uVar17 >> 0xb & 1) != 0) {
          uVar19 = CONCAT44(uVar17,uVar17) & 0x7ff000007ff;
          if ((code *)puVar21[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)))
                              + 2] != (code *)0x0) {
            auVar33 = (*(code *)puVar21[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                     POPCOUNT((char)(uVar19 >> 8))) + 2])();
            local_1e8 = auVar33._8_8_;
            if (local_1e8 != (undefined *)0x0) goto LAB_0339db6c;
            uVar19 = 0;
            goto LAB_0339dbf4;
          }
          break;
        }
        puVar21 = (undefined8 *)puVar21[1];
      } while (puVar21 != (undefined8 *)0x0);
      local_1e8 = PTR_DAT_047e5b68;
LAB_0339db6c:
      puVar26 = auVar33._8_8_;
      local_1f0 = auVar33._0_8_;
      auVar33._8_8_ = local_1e8;
      auVar33._0_8_ = local_1f0;
      auVar8._8_8_ = local_1e8;
      auVar8._0_8_ = local_1f0;
      uVar19 = *puVar26;
      if (((uint)uVar19 >> 2 & 1) == 0) goto code_r0x0339db74;
      uVar19 = puVar26[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
      if ((uVar19 & 1) != 0) {
        piVar3 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((local_1e0 & 1) != 0) {
          plVar20 = (long *)(local_1e0 & 0xfffffffffffffffe);
          plVar12 = plVar20 + 1;
          do {
            lVar18 = *plVar12;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *(int *)plVar12 = (int)lVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar18 == 1)) {
            local_1e0 = uVar19;
            (**(code **)(*plVar20 + 8))();
            auVar33._8_8_ = local_1e8;
            auVar33._0_8_ = local_1f0;
            uVar19 = local_1e0;
          }
        }
        goto LAB_0339dbf8;
      }
      goto LAB_0339dbf4;
    }
    goto LAB_0339dd1c;
  }
LAB_0339de70:
  lVar18 = *plVar1;
  if (*(int *)(lVar18 + 100) == 0) {
    iVar11 = 0;
  }
  else {
    iVar16 = *(int *)(lVar18 + 0x5c);
    puVar21 = (undefined8 *)(*(long *)(lVar18 + 0x50) + (long)iVar16 * 0x10);
    puVar26 = (ulong *)*puVar21;
    iVar11 = *(int *)(puVar21 + 1);
    iVar10 = 0;
    if (iVar16 + 1 != *(int *)(lVar18 + 0x58)) {
      iVar10 = iVar16 + 1;
    }
    *(int *)(lVar18 + 0x5c) = iVar10;
    *(int *)(lVar18 + 100) = *(int *)(lVar18 + 100) + -1;
    if (puVar26 != (ulong *)0x0) {
      puVar23 = &LAB_033a59f4;
      goto LAB_0339ded0;
    }
  }
  puVar26 = (ulong *)0x0;
  puVar23 = (undefined1 *)0x0;
LAB_0339ded0:
  if (puVar23 == (undefined1 *)0x0) goto LAB_0339dfe8;
  goto LAB_0339cb9c;
code_r0x0339db74:
  auVar33._8_8_ = puVar26[1];
  if (puVar26[1] == 0) goto code_r0x0339db7c;
  goto LAB_0339db6c;
code_r0x0339db7c:
  uVar19 = 0;
  auVar33 = auVar8;
LAB_0339dbf4:
LAB_0339dbf8:
  local_1e0 = uVar19;
  _local_1f0 = auVar33;
  FUN_031d6fac(local_1f0,&local_1d8,auStack_200);
  if ((local_1e0 & 1) != 0) {
    plVar20 = (long *)(local_1e0 & 0xfffffffffffffffe);
    plVar12 = plVar20 + 1;
    do {
      lVar18 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = (int)lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  __src = local_1d8;
  if (local_1d8 != (char *)0x0) {
    if (local_1d0 < 1) {
      sVar13 = strlen(local_1d8);
      iVar11 = (int)sVar13;
    }
    else {
      iVar11 = local_1d0 + -1;
    }
    iVar22 = (int)local_138;
    lVar18 = (long)(int)local_138;
    iVar11 = (int)(lVar18 + -1) + iVar11;
    iVar16 = (local_138._4_4_ & 0x7fffffff) - 1;
    iVar10 = iVar11;
    if (iVar16 <= iVar11) {
      iVar10 = iVar16;
    }
    if (local_b0 != 0) {
      iVar10 = iVar11;
    }
    iVar11 = iVar10 + 1;
    if ((int)(local_138._4_4_ & 0x7fffffff) <= iVar10) {
      FUN_030b4a20(&local_140,PTR_PTR_047d1a50 + 0x20,(long)iVar11);
    }
    if (((int)local_138 <= iVar10) || (iVar11 < (int)local_138)) {
      local_138 = CONCAT44(local_138._4_4_,iVar11);
    }
    *(undefined1 *)((long)local_140 + (long)iVar10) = 0;
    memmove((void *)((long)local_140 + lVar18 + -1),__src,(long)((int)local_138 - iVar22));
  }
  local_1d0 = 0;
  if ((-1 < local_1cc) && (local_1d8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
LAB_0339dd1c:
  plVar12 = local_140;
  lVar27 = *(long *)(param_1 + 0x208);
  iVar11 = *(int *)(lVar27 + 0xd0);
  lVar32 = (long)iVar11;
  lVar18 = lVar32 + 1;
  if ((int)(*(uint *)(lVar27 + 0xd4) & 0x7fffffff) <= iVar11) {
    FUN_033a59f8((long *)(lVar27 + 200),lVar18);
    iVar11 = *(int *)(lVar27 + 0xd0);
  }
  lVar30 = *(long *)(lVar27 + 200);
  *(undefined8 *)(lVar30 + (long)iVar11 * 8) = 0;
  if (plVar12 != (long *)0x0) {
    sVar13 = strlen((char *)plVar12);
    sVar13 = (size_t)((int)sVar13 + 1);
    pvVar14 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar13);
    memcpy(pvVar14,plVar12,sVar13);
    *(ulong *)(lVar30 + (long)iVar11 * 8) = (ulong)pvVar14 | 1;
  }
  *(int *)(lVar27 + 0xd0) = (int)lVar18;
  local_1d8 = (char *)(*(ulong *)(*(long *)(lVar27 + 200) + lVar32 * 8) & 0xfffffffffffffffe);
  lVar18 = FUN_033a53d0(lVar27 + 0xa0,&local_1d8);
  local_1f0 = (undefined1  [8])((lVar18 - *(long *)(lVar27 + 0xa0)) * 0x20000000 >> 0x20);
  iVar11 = FUN_03398a74(local_1f0,&local_1d8);
  pvVar14 = (void *)((long)local_a8 + (long)iVar11);
  if (local_a0 < pvVar14) {
    if (local_78 == (long *)0x0) {
      memcpy(local_a8,&local_1d8,(long)local_a0 - (long)local_a8);
      local_a8 = local_a0;
    }
    else {
      (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_1d8);
    }
  }
  else {
    memcpy(local_a8,&local_1d8,(long)iVar11);
    local_a8 = pvVar14;
  }
  uVar19 = local_138;
  local_138 = local_138 & 0xffffffff00000000;
  if ((-1 < (long)uVar19) && (local_140 != (long *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  goto LAB_0339de70;
}


