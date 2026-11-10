/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032ebed0; name: FUN_032ebed0
 */


void FUN_032ebed0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined1 local_70 [16];
  ulong local_60;
  undefined8 local_58;
  byte *local_50;
  ulong local_48;
  long local_40;
  char local_38;
  undefined4 local_14;
  
  local_40 = 0;
  local_38 = '\0';
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],&DAT_03c7e3d3,&DAT_03c7e3d7,1), uVar6 < 2)
     ) {
    uVar8 = 0;
    pbVar11 = (byte *)0x0;
    local_58 = 0;
    uVar6 = 0;
    local_50 = (byte *)0x0;
    local_48 = 0;
  }
  else {
    FUN_031e32f0(&local_58,param_1,uVar6);
    pbVar11 = local_50;
    if (local_50 != (byte *)0x0) {
      pbVar12 = local_50;
      if ((*local_50 & 1) == 0) {
        do {
          pbVar12 = *(byte **)(pbVar12 + 8);
        } while ((*pbVar12 & 1) == 0);
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) == 4) {
        uVar8 = local_58;
        uVar6 = local_48;
        if ((local_48 & 1) != 0) {
          piVar1 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_032ebfb4;
      }
      pbVar11 = (byte *)0x0;
    }
    uVar8 = 0;
    uVar6 = 0;
  }
LAB_032ebfb4:
  plVar15 = (long *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar15 + 0x38))(plVar15,uVar8,pbVar11,&local_40);
  if ((uVar6 & 1) != 0) {
    plVar7 = plVar15 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar15 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
  }
  if ((local_48 & 1) != 0) {
    plVar7 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar15 = plVar7 + 1;
    do {
      lVar5 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_38 == '\0') && (local_40 == 0)) {
    return;
  }
  local_14 = 0x80040200;
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],&DAT_03c3e77f,&DAT_03c3e783,1), uVar6 < 2)
     ) {
    local_50 = (byte *)0x0;
    local_48 = 0;
    local_58 = 0;
  }
  else {
    FUN_031e32f0(&local_58,param_1,uVar6);
  }
  local_60 = 0;
  puVar13 = (undefined8 *)PTR_DAT_047e6270;
  do {
    uVar14 = (uint)*puVar13;
    if ((uVar14 >> 0xb & 1) != 0) {
      uVar6 = CONCAT44(uVar14,uVar14) & 0x7ff000007ff;
      if ((code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2]
          != (code *)0x0) {
        auVar16 = (*(code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                 POPCOUNT((char)(uVar6 >> 8))) + 2])(&local_14);
        local_70._8_8_ = auVar16._8_8_;
        auVar4 = auVar16;
        puVar10 = (undefined *)local_70._8_8_;
        goto joined_r0x032ec0ec;
      }
      break;
    }
    puVar13 = (undefined8 *)puVar13[1];
  } while (puVar13 != (undefined8 *)0x0);
  auVar16._8_8_ = PTR_DAT_047e6270;
  auVar16._0_8_ = &local_14;
  local_70._8_8_ = PTR_DAT_047e6270;
  do {
    puVar9 = auVar16._8_8_;
    local_70._0_8_ = auVar16._0_8_;
    auVar4._8_8_ = local_70._8_8_;
    auVar4._0_8_ = local_70._0_8_;
    uVar6 = *puVar9;
    if (((uint)uVar6 >> 2 & 1) != 0) {
      uVar6 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
      if ((uVar6 & 1) != 0) {
        piVar1 = (int *)((uVar6 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((local_60 & 1) != 0) {
          plVar7 = (long *)(local_60 & 0xfffffffffffffffe);
          plVar15 = plVar7 + 1;
          do {
            lVar5 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = (int)lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
            local_60 = uVar6;
            (**(code **)(*plVar7 + 8))();
            auVar4._8_8_ = local_70._8_8_;
            auVar4._0_8_ = local_70._0_8_;
            uVar6 = local_60;
          }
        }
        goto LAB_032ec130;
      }
      goto LAB_032ec12c;
    }
    puVar10 = (undefined *)puVar9[1];
    auVar16._8_8_ = puVar10;
    auVar16._0_8_ = local_70._0_8_;
joined_r0x032ec0ec:
  } while (puVar10 != (undefined *)0x0);
  uVar6 = 0;
LAB_032ec12c:
LAB_032ec130:
  local_60 = uVar6;
  local_70 = auVar4;
  FUN_031e7578(&local_58,local_70);
  if ((local_60 & 1) != 0) {
    plVar7 = (long *)(local_60 & 0xfffffffffffffffe);
    plVar15 = plVar7 + 1;
    do {
      lVar5 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_48 & 1) == 0) {
    return;
  }
  plVar7 = (long *)(local_48 & 0xfffffffffffffffe);
  plVar15 = plVar7 + 1;
  do {
    lVar5 = *plVar15;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *(int *)plVar15 = (int)lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (plVar7 == (long *)0x0) {
    return;
  }
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar7 + 8))();
    return;
  }
  return;
}


