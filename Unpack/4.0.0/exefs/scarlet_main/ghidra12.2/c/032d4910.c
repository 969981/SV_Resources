/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032d4910; name: FUN_032d4910
 */


/* WARNING: Removing unreachable block (ram,0x032d4b44) */
/* WARNING: Removing unreachable block (ram,0x032d52ac) */
/* WARNING: Removing unreachable block (ram,0x032d550c) */
/* WARNING: Removing unreachable block (ram,0x032d5770) */
/* WARNING: Removing unreachable block (ram,0x032d59d4) */

void FUN_032d4910(undefined8 param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar12;
  ulong uVar11;
  undefined8 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  bool bVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  long local_168;
  undefined8 local_150;
  long local_138;
  ulong *local_130;
  ulong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  long local_f8;
  undefined4 local_f0;
  int local_ec;
  ulong *local_e8;
  undefined4 local_e0;
  uint *local_d8;
  byte *local_d0;
  long local_c8;
  long local_c0;
  uint local_b8;
  int local_b4;
  ulong *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [24];
  long local_88;
  byte *pbStack_80;
  undefined8 local_78;
  ulong local_70;
  
  FUN_03325b88(&local_110,param_1,"old_vectorData");
  local_138 = CONCAT44(local_138._4_4_,local_f0);
  FUN_03323c3c(&local_d8,local_110,uStack_108,local_f8,&local_138,0);
  if ((local_100 & 1) != 0) {
    plVar9 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FUN_03325b88(&local_138,param_1,"vectorData");
  local_88 = CONCAT44(local_88._4_4_,local_118);
  FUN_03323c3c(&local_110,local_138,local_130,local_120,&local_88,0);
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  pbVar18 = local_d0;
  if ((*local_d0 & 1) == 0) {
    do {
      pbVar18 = *(byte **)(pbVar18 + 8);
    } while ((*pbVar18 & 1) == 0);
  }
  if ((*(ulong *)(pbVar18 + 0x10) & 0x1f) != 8) {
    local_d0 = (byte *)0x0;
  }
  do {
    if ((*local_d0 & 1) != 0) {
      if ((local_d0 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_d0 + 0x10) >> 8) != 0))
      goto LAB_032d4a90;
      break;
    }
    local_d0 = *(byte **)(local_d0 + 8);
  } while (local_d0 != (byte *)0x0);
  if ((int)*local_d8 < 0) {
LAB_032d4a90:
    puVar12 = PTR_DAT_047e61d0;
  }
  else {
    puVar12 = (undefined *)(*(long *)(local_c8 + 0x228) + (ulong)*local_d8 * 0x20);
  }
  uVar11 = *(ulong *)(puVar12 + 0x10);
  if ((uVar11 & 1) != 0) {
    piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar24) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FUN_03324ed0(&local_110,local_b8 << 2);
  if ((int)local_b8 < 1) {
    return;
  }
  uVar11 = 0;
LAB_032d4b10:
  local_138 = local_c0 + (long)local_b4 * (long)(int)uVar11;
  if (local_b0 != (ulong *)0x0) {
    puVar20 = local_b0;
LAB_032d4b2c:
    uVar21 = *puVar20;
    if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d4b34;
    local_128 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar24 = false;
      goto LAB_032d4bcc;
    }
    goto LAB_032d4b68;
  }
  local_128 = 0;
  goto LAB_032d4b68;
code_r0x032d4b34:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d4b3c;
  goto LAB_032d4b2c;
code_r0x032d4b3c:
  local_128 = 0;
LAB_032d4b68:
  bVar24 = true;
LAB_032d4bcc:
  uVar21 = local_128;
  local_130 = local_b0;
  local_118 = local_a8;
  if (local_138 != 0) {
    puVar20 = local_b0;
    if ((*local_b0 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((local_b0 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar24) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  puVar13 = (undefined8 *)PTR_DAT_047e6240;
  do {
    uVar17 = (uint)*puVar13;
    if ((uVar17 >> 0xb & 1) != 0) {
      uVar21 = CONCAT44(uVar17,uVar17) & 0x7ff000007ff;
      if ((code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))) + 2]
          != (code *)0x0) {
        auVar29 = (*(code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                 POPCOUNT((char)(uVar21 >> 8))) + 2])(local_a0);
        if (auVar29._8_8_ != 0) goto LAB_032d4ce8;
        auVar29 = ZEXT816(0);
        uVar21 = 0;
        goto LAB_032d4de8;
      }
      break;
    }
    puVar13 = (undefined8 *)puVar13[1];
  } while (puVar13 != (undefined8 *)0x0);
  auVar29._8_8_ = PTR_DAT_047e6240;
  auVar29._0_8_ = local_a0;
LAB_032d4ce8:
  puVar19 = auVar29._8_8_;
  puVar20 = puVar19;
LAB_032d4cec:
  uVar21 = *puVar20;
  if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d4cf4;
  uVar21 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
  if ((uVar21 & 1) != 0) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*puVar19 & 1) == 0) {
      do {
        puVar19 = (ulong *)puVar19[1];
      } while ((*puVar19 & 1) == 0);
    }
    if ((puVar19[2] & 0x1f) == 8) {
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar24) {
          *(int *)plVar26 = (int)*plVar26 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      uVar21 = 0;
      auVar29 = ZEXT816(0);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
    goto LAB_032d4de8;
  }
  goto LAB_032d4d74;
code_r0x032d4cf4:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d4cfc;
  goto LAB_032d4cec;
code_r0x032d4cfc:
  uVar21 = 0;
LAB_032d4d74:
  if ((*puVar19 & 1) == 0) {
    do {
      puVar19 = (ulong *)puVar19[1];
    } while ((*puVar19 & 1) == 0);
  }
  if ((puVar19[2] & 0x1f) != 8) {
    auVar29 = ZEXT816(0);
    uVar21 = 0;
  }
LAB_032d4de8:
  local_150 = auVar29._0_8_;
  if (local_130 == (ulong *)0x0) {
LAB_032d4e60:
    local_168 = 0;
    uVar14 = 0;
    puVar20 = local_130;
  }
  else {
    puVar20 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((puVar20[2] & 0x1f) != 8) {
      local_130 = (ulong *)0x0;
      goto LAB_032d4e60;
    }
    local_168 = local_138;
    uVar14 = local_128;
    puVar20 = local_130;
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  iVar25 = 0;
  plVar9 = (long *)(uVar14 & 0xfffffffffffffffe);
  plVar26 = (long *)(uVar21 & 0xfffffffffffffffe);
  do {
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    pbStack_80 = (byte *)0x0;
    (**(code **)(*plVar9 + 0x50))(plVar9,local_168,puVar20,&local_88);
    if (iVar25 < (int)local_78) {
      lVar27 = local_88 + (long)local_78._4_4_ * (long)iVar25;
      uVar22 = local_70;
      pbVar18 = pbStack_80;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar27 = 0;
      uVar22 = 0;
      pbVar18 = (byte *)0x0;
    }
    if ((local_70 & 1) != 0) {
      plVar10 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar28 = *plVar23;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar24) {
          *(int *)plVar23 = (int)lVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar28 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    if (pbVar18 == (byte *)0x0) {
LAB_032d4f88:
      lVar27 = 0;
      uVar4 = 0;
    }
    else {
      pbVar15 = pbVar18;
      if ((*pbVar18 & 1) == 0) {
        do {
          pbVar15 = *(byte **)(pbVar15 + 8);
        } while ((*pbVar15 & 1) == 0);
      }
      if ((*(ulong *)(pbVar15 + 0x10) & 0x1f) != 5) {
        pbVar18 = (byte *)0x0;
        goto LAB_032d4f88;
      }
      uVar4 = uVar22;
      if ((uVar22 & 1) != 0) {
        piVar1 = (int *)((uVar22 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar22 & 1) != 0) {
      plVar10 = (long *)(uVar22 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar28 = *plVar23;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar24) {
          *(int *)plVar23 = (int)lVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar28 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    pbStack_80 = (byte *)0x0;
    (**(code **)(*plVar26 + 0x50))(plVar26,local_150,auVar29._8_8_,&local_88);
    if (iVar25 < (int)local_78) {
      lVar28 = local_88 + (long)local_78._4_4_ * (long)iVar25;
      uVar22 = local_70;
      pbVar15 = pbStack_80;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar28 = 0;
      uVar22 = 0;
      pbVar15 = (byte *)0x0;
    }
    if ((local_70 & 1) != 0) {
      plVar10 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar6 = *plVar23;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar24) {
          *(int *)plVar23 = (int)lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    if (pbVar15 == (byte *)0x0) {
LAB_032d50d0:
      lVar28 = 0;
      uVar5 = 0;
    }
    else {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 5) {
        pbVar15 = (byte *)0x0;
        goto LAB_032d50d0;
      }
      uVar5 = uVar22;
      if ((uVar22 & 1) != 0) {
        piVar1 = (int *)((uVar22 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar22 & 1) != 0) {
      plVar10 = (long *)(uVar22 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar6 = *plVar23;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar24) {
          *(int *)plVar23 = (int)lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    local_88 = 0;
    plVar23 = (long *)(uVar4 & 0xfffffffffffffffe);
    (**(code **)(*plVar23 + 0x38))(plVar23,lVar27,pbVar18,&local_88);
    plVar10 = (long *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar10 + 0x30))(local_88,plVar10,lVar28,pbVar15);
    if ((uVar5 & 1) != 0) {
      plVar2 = plVar10 + 1;
      do {
        lVar27 = *plVar2;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar24) {
          *(int *)plVar2 = (int)lVar27 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar27 == 1)) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
    if ((uVar4 & 1) != 0) {
      plVar10 = plVar23 + 1;
      do {
        lVar27 = *plVar10;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar24) {
          *(int *)plVar10 = (int)lVar27 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar23 != (long *)0x0) && ((int)lVar27 == 1)) {
        (**(code **)(*plVar23 + 8))(plVar23);
      }
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 != 4);
  if ((uVar14 & 1) != 0) {
    plVar23 = plVar9 + 1;
    do {
      lVar27 = *plVar23;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar24) {
        *(int *)plVar23 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if ((uVar21 & 1) != 0) {
    plVar9 = plVar26 + 1;
    do {
      lVar27 = *plVar9;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar24) {
        *(int *)plVar9 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar26 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar26 + 8))(plVar26);
    }
  }
  uVar8 = local_a0._8_8_;
  uVar7 = local_a0._0_8_;
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  local_138 = local_f8 + (long)local_ec * (-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2);
  if (local_e8 != (ulong *)0x0) {
    puVar20 = local_e8;
LAB_032d5294:
    uVar21 = *puVar20;
    if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d529c;
    local_128 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar24 = false;
      goto LAB_032d5334;
    }
    goto LAB_032d52d0;
  }
  local_128 = 0;
LAB_032d52d0:
  bVar24 = true;
LAB_032d5334:
  uVar21 = local_128;
  local_130 = local_e8;
  local_118 = local_e0;
  if (local_138 != 0) {
    puVar20 = local_e8;
    if ((*local_e8 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((local_e8 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar24) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if (local_130 == (ulong *)0x0) {
LAB_032d5444:
    uVar21 = 0;
    lVar27 = 0;
  }
  else {
    puVar20 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((puVar20[2] & 0x1f) != 5) {
      local_130 = (ulong *)0x0;
      goto LAB_032d5444;
    }
    lVar27 = local_138;
    uVar21 = local_128;
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  plVar26 = (long *)(uVar21 & 0xfffffffffffffffe);
  (**(code **)(*plVar26 + 0x30))((double)(float)uVar7,plVar26,lVar27,local_130);
  if ((uVar21 & 1) != 0) {
    plVar9 = plVar26 + 1;
    do {
      lVar27 = *plVar9;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar24) {
        *(int *)plVar9 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar26 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar26 + 8))(plVar26);
    }
  }
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  iVar25 = (int)(uVar11 << 2);
  local_138 = local_f8 + (long)local_ec * ((long)iVar25 | 1U);
  if (local_e8 != (ulong *)0x0) {
    puVar20 = local_e8;
LAB_032d54f4:
    uVar21 = *puVar20;
    if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d54fc;
    local_128 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar24 = false;
      goto LAB_032d5594;
    }
    goto LAB_032d5530;
  }
  local_128 = 0;
LAB_032d5530:
  bVar24 = true;
LAB_032d5594:
  uVar21 = local_128;
  local_130 = local_e8;
  local_118 = local_e0;
  if (local_138 != 0) {
    puVar20 = local_e8;
    if ((*local_e8 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((local_e8 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar24) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if (local_130 == (ulong *)0x0) {
LAB_032d56ac:
    uVar21 = 0;
    lVar27 = 0;
  }
  else {
    puVar20 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((puVar20[2] & 0x1f) != 5) {
      local_130 = (ulong *)0x0;
      goto LAB_032d56ac;
    }
    lVar27 = local_138;
    uVar21 = local_128;
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  plVar26 = (long *)(uVar21 & 0xfffffffffffffffe);
  (**(code **)(*plVar26 + 0x30))((double)SUB84(uVar7,4),plVar26,lVar27,local_130);
  if ((uVar21 & 1) != 0) {
    plVar9 = plVar26 + 1;
    do {
      lVar27 = *plVar9;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar24) {
        *(int *)plVar9 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar26 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar26 + 8))(plVar26);
    }
  }
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  local_138 = local_f8 + (long)local_ec * ((long)iVar25 | 2U);
  if (local_e8 != (ulong *)0x0) {
    puVar20 = local_e8;
LAB_032d5758:
    uVar21 = *puVar20;
    if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d5760;
    local_128 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar24 = false;
      goto LAB_032d57f8;
    }
    goto LAB_032d5794;
  }
  local_128 = 0;
LAB_032d5794:
  bVar24 = true;
LAB_032d57f8:
  uVar21 = local_128;
  local_130 = local_e8;
  local_118 = local_e0;
  if (local_138 != 0) {
    puVar20 = local_e8;
    if ((*local_e8 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((local_e8 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar24) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if (local_130 == (ulong *)0x0) {
LAB_032d5910:
    uVar21 = 0;
    lVar27 = 0;
  }
  else {
    puVar20 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((puVar20[2] & 0x1f) != 5) {
      local_130 = (ulong *)0x0;
      goto LAB_032d5910;
    }
    lVar27 = local_138;
    uVar21 = local_128;
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  plVar26 = (long *)(uVar21 & 0xfffffffffffffffe);
  (**(code **)(*plVar26 + 0x30))((double)(float)uVar8,plVar26,lVar27,local_130);
  if ((uVar21 & 1) != 0) {
    plVar9 = plVar26 + 1;
    do {
      lVar27 = *plVar9;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar24) {
        *(int *)plVar9 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar26 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar26 + 8))(plVar26);
    }
  }
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  local_138 = local_f8 + (long)local_ec * ((long)iVar25 | 3U);
  if (local_e8 != (ulong *)0x0) {
    puVar20 = local_e8;
LAB_032d59bc:
    uVar21 = *puVar20;
    if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032d59c4;
    local_128 = puVar20[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar24) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar24 = false;
      goto LAB_032d5a5c;
    }
    goto LAB_032d59f8;
  }
  local_128 = 0;
LAB_032d59f8:
  bVar24 = true;
LAB_032d5a5c:
  uVar21 = local_128;
  local_130 = local_e8;
  local_118 = local_e0;
  if (local_138 != 0) {
    puVar20 = local_e8;
    if ((*local_e8 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((local_e8 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar24) {
    plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if (local_130 != (ulong *)0x0) {
    puVar20 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar20 = (ulong *)puVar20[1];
      } while ((*puVar20 & 1) == 0);
    }
    if ((puVar20[2] & 0x1f) == 5) {
      lVar27 = local_138;
      uVar21 = local_128;
      if ((local_128 & 1) != 0) {
        piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar24) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_032d5b7c;
    }
    local_130 = (ulong *)0x0;
  }
  uVar21 = 0;
  lVar27 = 0;
LAB_032d5b7c:
  plVar26 = (long *)(uVar21 & 0xfffffffffffffffe);
  (**(code **)(*plVar26 + 0x30))((double)SUB84(uVar8,4),plVar26,lVar27,local_130);
  if ((uVar21 & 1) != 0) {
    plVar9 = plVar26 + 1;
    do {
      lVar27 = *plVar9;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar24) {
        *(int *)plVar9 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar26 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar26 + 8))(plVar26);
    }
  }
  if ((local_128 & 1) != 0) {
    plVar9 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar26 = plVar9 + 1;
    do {
      lVar27 = *plVar26;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar24) {
        *(int *)plVar26 = (int)lVar27 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar27 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  uVar17 = (int)uVar11 + 1;
  uVar11 = (ulong)uVar17;
  if (uVar17 == local_b8) {
    return;
  }
  goto LAB_032d4b10;
code_r0x032d529c:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d52a4;
  goto LAB_032d5294;
code_r0x032d52a4:
  local_128 = 0;
  goto LAB_032d52d0;
code_r0x032d54fc:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d5504;
  goto LAB_032d54f4;
code_r0x032d5504:
  local_128 = 0;
  goto LAB_032d5530;
code_r0x032d5760:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d5768;
  goto LAB_032d5758;
code_r0x032d5768:
  local_128 = 0;
  goto LAB_032d5794;
code_r0x032d59c4:
  puVar20 = (ulong *)puVar20[1];
  if (puVar20 == (ulong *)0x0) goto code_r0x032d59cc;
  goto LAB_032d59bc;
code_r0x032d59cc:
  local_128 = 0;
  goto LAB_032d59f8;
}


