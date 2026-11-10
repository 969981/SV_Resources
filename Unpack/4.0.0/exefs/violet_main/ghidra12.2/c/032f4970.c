/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032f4970; name: FUN_032f4970
 */


/* WARNING: Removing unreachable block (ram,0x032f4bac) */

void FUN_032f4970(undefined8 param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined *puVar19;
  uint uVar20;
  byte *pbVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  long local_178;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_128;
  ulong *local_120;
  ulong local_118;
  undefined8 local_110;
  undefined4 local_108;
  uint *local_100;
  byte *local_f8;
  ulong local_f0;
  long local_e8;
  int local_e0;
  int local_dc;
  ulong *local_d8;
  undefined4 local_d0;
  undefined1 auStack_c8 [16];
  ulong local_b8;
  undefined8 local_a0 [3];
  ulong local_88;
  byte *pbStack_80;
  undefined8 local_78;
  ulong local_70;
  
  FUN_03325b88(&local_100,param_1,&DAT_03bf1471);
  FUN_033234d0(auStack_c8,&local_100);
  if ((local_f0 & 1) != 0) {
    plVar12 = (long *)(local_f0 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  FUN_03325b88(&local_128,param_1,"vertices");
  local_88 = CONCAT44(local_88._4_4_,local_108);
  FUN_03323c3c(&local_100,local_128,local_120,local_110,&local_88,0);
  if ((local_118 & 1) != 0) {
    plVar12 = (long *)(local_118 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  iVar28 = local_e0;
  auVar33._8_4_ = 0xff7fffee;
  auVar33._0_8_ = 0xff7fffeeff7fffee;
  auVar33._12_4_ = 0xff7fffee;
  uStack_148 = auVar33._8_8_;
  local_150 = 0xff7fffeeff7fffee;
  uStack_138 = 0x7f7fffee7f7fffee;
  local_140 = 0x7f7fffee7f7fffee;
  pbVar21 = local_f8;
  if ((*local_f8 & 1) == 0) {
    do {
      pbVar21 = *(byte **)(pbVar21 + 8);
    } while ((*pbVar21 & 1) == 0);
  }
  pbVar14 = local_f8;
  if ((*(ulong *)(pbVar21 + 0x10) & 0x1f) != 8) {
    pbVar14 = (byte *)0x0;
  }
  do {
    if ((*pbVar14 & 1) != 0) {
      if ((pbVar14 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar14 + 0x10) >> 8) != 0))
      goto LAB_032f4af8;
      break;
    }
    pbVar14 = *(byte **)(pbVar14 + 8);
  } while (pbVar14 != (byte *)0x0);
  if ((int)*local_100 < 0) {
LAB_032f4af8:
    puVar19 = PTR_DAT_047e61d0;
  }
  else {
    puVar19 = (undefined *)(*(long *)(local_f0 + 0x228) + (ulong)*local_100 * 0x20);
  }
  uVar15 = *(ulong *)(puVar19 + 0x10);
  if ((uVar15 & 1) != 0) {
    piVar1 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar26) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar12 = (long *)(uVar15 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if (iVar28 < 1) {
LAB_032f53e8:
    FUN_03325b88(&local_128,auStack_c8,&DAT_03c3fcda);
    FUN_03286e14(&local_128,&local_140,4);
    if ((local_118 & 1) != 0) {
      plVar12 = (long *)(local_118 & 0xfffffffffffffffe);
      plVar29 = plVar12 + 1;
      do {
        lVar30 = *plVar29;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar26) {
          *(int *)plVar29 = (int)lVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    FUN_03325b88(&local_128,auStack_c8,&DAT_03bd89ed);
    FUN_03286e14(&local_128,&local_150,4);
    if ((local_118 & 1) != 0) {
      plVar12 = (long *)(local_118 & 0xfffffffffffffffe);
      plVar29 = plVar12 + 1;
      do {
        lVar30 = *plVar29;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar26) {
          *(int *)plVar29 = (int)lVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    if ((local_b8 & 1) != 0) {
      plVar12 = (long *)(local_b8 & 0xfffffffffffffffe);
      plVar29 = plVar12 + 1;
      do {
        lVar30 = *plVar29;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar26) {
          *(int *)plVar29 = (int)lVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    return;
  }
  iVar28 = 0;
LAB_032f4b78:
  local_128 = local_e8 + (long)local_dc * (long)iVar28;
  if (local_d8 != (ulong *)0x0) {
    puVar23 = local_d8;
LAB_032f4b94:
    uVar15 = *puVar23;
    if (((uint)uVar15 >> 2 & 1) == 0) goto code_r0x032f4b9c;
    local_118 = puVar23[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
    if ((local_118 & 1) != 0) {
      piVar1 = (int *)((local_118 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar26) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar26 = false;
      goto LAB_032f4c34;
    }
    goto LAB_032f4bd0;
  }
  local_118 = 0;
  goto LAB_032f4bd0;
code_r0x032f4b9c:
  puVar23 = (ulong *)puVar23[1];
  if (puVar23 == (ulong *)0x0) goto code_r0x032f4ba4;
  goto LAB_032f4b94;
code_r0x032f4ba4:
  local_118 = 0;
LAB_032f4bd0:
  bVar26 = true;
LAB_032f4c34:
  uVar15 = local_118;
  local_120 = local_d8;
  local_108 = local_d0;
  if (local_128 != 0) {
    puVar23 = local_d8;
    if ((*local_d8 & 1) == 0) {
      do {
        puVar23 = (ulong *)puVar23[1];
      } while ((*puVar23 & 1) == 0);
    }
    if ((local_d8 != (ulong *)0x0) && ((puVar23[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_128);
    }
  }
  if (!bVar26) {
    plVar12 = (long *)(uVar15 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  puVar16 = (undefined8 *)PTR_DAT_047e6240;
  do {
    uVar20 = (uint)*puVar16;
    if ((uVar20 >> 0xb & 1) != 0) {
      uVar15 = CONCAT44(uVar20,uVar20) & 0x7ff000007ff;
      if ((code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8))) + 2]
          != (code *)0x0) {
        auVar36 = (*(code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) +
                                                 POPCOUNT((char)(uVar15 >> 8))) + 2])(local_a0);
        if (auVar36._8_8_ != 0) goto LAB_032f4d50;
        auVar36 = ZEXT816(0);
        uVar15 = 0;
        goto LAB_032f4e50;
      }
      break;
    }
    puVar16 = (undefined8 *)puVar16[1];
  } while (puVar16 != (undefined8 *)0x0);
  auVar36._8_8_ = PTR_DAT_047e6240;
  auVar36._0_8_ = local_a0;
LAB_032f4d50:
  puVar22 = auVar36._8_8_;
  puVar23 = puVar22;
LAB_032f4d54:
  uVar15 = *puVar23;
  if (((uint)uVar15 >> 2 & 1) == 0) goto code_r0x032f4d5c;
  uVar15 = puVar23[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
  if ((uVar15 & 1) != 0) {
    plVar12 = (long *)(uVar15 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)*plVar29 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*puVar22 & 1) == 0) {
      do {
        puVar22 = (ulong *)puVar22[1];
      } while ((*puVar22 & 1) == 0);
    }
    if ((puVar22[2] & 0x1f) == 8) {
      do {
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar26) {
          *(int *)plVar29 = (int)*plVar29 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      uVar15 = 0;
      auVar36 = ZEXT816(0);
    }
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
    goto LAB_032f4e50;
  }
  goto LAB_032f4ddc;
code_r0x032f4d5c:
  puVar23 = (ulong *)puVar23[1];
  if (puVar23 == (ulong *)0x0) goto code_r0x032f4d64;
  goto LAB_032f4d54;
code_r0x032f4d64:
  uVar15 = 0;
LAB_032f4ddc:
  if ((*puVar22 & 1) == 0) {
    do {
      puVar22 = (ulong *)puVar22[1];
    } while ((*puVar22 & 1) == 0);
  }
  if ((puVar22[2] & 0x1f) != 8) {
    auVar36 = ZEXT816(0);
    uVar15 = 0;
  }
LAB_032f4e50:
  local_160 = auVar36._0_8_;
  if (local_120 != (ulong *)0x0) {
    puVar23 = local_120;
    if ((*local_120 & 1) == 0) {
      do {
        puVar23 = (ulong *)puVar23[1];
      } while ((*puVar23 & 1) == 0);
    }
    if ((puVar23[2] & 0x1f) == 8) {
      local_178 = local_128;
      puVar23 = local_120;
      uVar17 = local_118;
      if ((local_118 & 1) != 0) {
        piVar1 = (int *)((local_118 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_032f4ecc;
    }
    local_120 = (ulong *)0x0;
  }
  local_178 = 0;
  uVar17 = 0;
  puVar23 = local_120;
LAB_032f4ecc:
  iVar27 = 0;
  plVar12 = (long *)(uVar17 & 0xfffffffffffffffe);
  plVar29 = (long *)(uVar15 & 0xfffffffffffffffe);
  do {
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    pbStack_80 = (byte *)0x0;
    (**(code **)(*plVar12 + 0x50))(plVar12,local_178,puVar23,&local_88);
    if (iVar27 < (int)local_78) {
      lVar30 = local_88 + (long)local_78._4_4_ * (long)iVar27;
      uVar24 = local_70;
      pbVar21 = pbStack_80;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar30 = 0;
      uVar24 = 0;
      pbVar21 = (byte *)0x0;
    }
    if ((local_70 & 1) != 0) {
      plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar25 = plVar13 + 1;
      do {
        lVar31 = *plVar25;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *(int *)plVar25 = (int)lVar31 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar31 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    if (pbVar21 == (byte *)0x0) {
LAB_032f4fec:
      lVar30 = 0;
      uVar8 = 0;
    }
    else {
      pbVar14 = pbVar21;
      if ((*pbVar21 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 5) {
        pbVar21 = (byte *)0x0;
        goto LAB_032f4fec;
      }
      uVar8 = uVar24;
      if ((uVar24 & 1) != 0) {
        piVar1 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar24 & 1) != 0) {
      plVar13 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar25 = plVar13 + 1;
      do {
        lVar31 = *plVar25;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *(int *)plVar25 = (int)lVar31 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar31 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    pbStack_80 = (byte *)0x0;
    (**(code **)(*plVar29 + 0x50))(plVar29,local_160,auVar36._8_8_,&local_88);
    if (iVar27 < (int)local_78) {
      lVar31 = local_88 + (long)local_78._4_4_ * (long)iVar27;
      uVar24 = local_70;
      pbVar14 = pbStack_80;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar31 = 0;
      uVar24 = 0;
      pbVar14 = (byte *)0x0;
    }
    if ((local_70 & 1) != 0) {
      plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
      plVar25 = plVar13 + 1;
      do {
        lVar10 = *plVar25;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *(int *)plVar25 = (int)lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar10 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    if (pbVar14 == (byte *)0x0) {
LAB_032f5134:
      lVar31 = 0;
      uVar9 = 0;
    }
    else {
      pbVar18 = pbVar14;
      if ((*pbVar14 & 1) == 0) {
        do {
          pbVar18 = *(byte **)(pbVar18 + 8);
        } while ((*pbVar18 & 1) == 0);
      }
      if ((*(ulong *)(pbVar18 + 0x10) & 0x1f) != 5) {
        pbVar14 = (byte *)0x0;
        goto LAB_032f5134;
      }
      uVar9 = uVar24;
      if ((uVar24 & 1) != 0) {
        piVar1 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar26) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar24 & 1) != 0) {
      plVar13 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar25 = plVar13 + 1;
      do {
        lVar10 = *plVar25;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *(int *)plVar25 = (int)lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar10 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    local_88 = 0;
    plVar25 = (long *)(uVar8 & 0xfffffffffffffffe);
    (**(code **)(*plVar25 + 0x38))(plVar25,lVar30,pbVar21,&local_88);
    plVar13 = (long *)(uVar9 & 0xfffffffffffffffe);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = local_88;
    (**(code **)(*plVar13 + 0x30))(auVar32,plVar13,lVar31,pbVar14);
    if ((uVar9 & 1) != 0) {
      plVar2 = plVar13 + 1;
      do {
        lVar30 = *plVar2;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar26) {
          *(int *)plVar2 = (int)lVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar30 == 1)) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
    if ((uVar8 & 1) != 0) {
      plVar13 = plVar25 + 1;
      do {
        lVar30 = *plVar13;
        cVar3 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar26) {
          *(int *)plVar13 = (int)lVar30 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar25 != (long *)0x0) && ((int)lVar30 == 1)) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
    iVar27 = iVar27 + 1;
  } while (iVar27 != 4);
  if ((uVar17 & 1) != 0) {
    plVar25 = plVar12 + 1;
    do {
      lVar30 = *plVar25;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar26) {
        *(int *)plVar25 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if ((uVar15 & 1) != 0) {
    plVar12 = plVar29 + 1;
    do {
      lVar30 = *plVar12;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar26) {
        *(int *)plVar12 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar29 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar29 + 8))(plVar29);
    }
  }
  uVar11 = local_a0[0];
  uVar34 = (undefined4)local_a0[1];
  uVar35 = (undefined4)((ulong)local_a0[1] >> 0x20);
  if ((local_118 & 1) != 0) {
    plVar12 = (long *)(local_118 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  iVar27 = local_e0;
  auVar7._8_8_ = uStack_138;
  auVar7._0_8_ = local_140;
  auVar4._8_4_ = uVar34;
  auVar4._0_8_ = uVar11;
  auVar4._12_4_ = uVar35;
  auVar36 = NEON_fmin(auVar7,auVar4,4);
  auVar6._8_8_ = uStack_148;
  auVar6._0_8_ = local_150;
  auVar5._8_4_ = uVar34;
  auVar5._0_8_ = uVar11;
  auVar5._12_4_ = uVar35;
  auVar33 = NEON_fmax(auVar6,auVar5,4);
  iVar28 = iVar28 + 1;
  uStack_148 = auVar33._8_8_;
  local_150 = auVar33._0_8_;
  uStack_138 = auVar36._8_8_;
  local_140 = auVar36._0_8_;
  pbVar21 = local_f8;
  if ((*local_f8 & 1) == 0) {
    do {
      pbVar21 = *(byte **)(pbVar21 + 8);
    } while ((*pbVar21 & 1) == 0);
  }
  pbVar14 = local_f8;
  if ((*(ulong *)(pbVar21 + 0x10) & 0x1f) != 8) {
    pbVar14 = (byte *)0x0;
  }
  do {
    if ((*pbVar14 & 1) != 0) {
      if ((pbVar14 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar14 + 0x10) >> 8) != 0))
      goto LAB_032f537c;
      break;
    }
    pbVar14 = *(byte **)(pbVar14 + 8);
  } while (pbVar14 != (byte *)0x0);
  if ((int)*local_100 < 0) {
LAB_032f537c:
    puVar19 = PTR_DAT_047e61d0;
  }
  else {
    puVar19 = (undefined *)(*(long *)(local_f0 + 0x228) + (ulong)*local_100 * 0x20);
  }
  uVar15 = *(ulong *)(puVar19 + 0x10);
  if ((uVar15 & 1) != 0) {
    piVar1 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar26) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar12 = (long *)(uVar15 & 0xfffffffffffffffe);
    plVar29 = plVar12 + 1;
    do {
      lVar30 = *plVar29;
      cVar3 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar26) {
        *(int *)plVar29 = (int)lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar30 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if (iVar27 <= iVar28) goto LAB_032f53e8;
  goto LAB_032f4b78;
}


