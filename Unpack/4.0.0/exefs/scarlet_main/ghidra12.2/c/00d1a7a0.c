/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1a7a0; name: FUN_00d1a7a0
 */


int FUN_00d1a7a0(int *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 local_48;
  
  plVar3 = (long *)(param_1 + 0x34);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar3 == 0 && *(long *)(param_1 + 0x36) == 0) {
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar10) {
      *plVar3 = lVar9;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00d1a7dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar3 != 0 || *(long *)(param_1 + 0x36) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar3 == 0 && *(long *)(param_1 + 0x36) == 0) {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar10) {
            *plVar3 = lVar9;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00d1a7dc;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar10) {
      *plVar3 = lVar9;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d1a7dc:
  if (*(long *)(param_1 + 0x16) == 0) {
    iVar12 = param_1[1];
    param_1[1] = iVar12 + 1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x16) + -1;
    uVar11 = *(long *)(param_1 + 0x14) + lVar9;
    iVar12 = *(int *)(*(long *)(*(long *)(param_1 + 6) + (uVar11 >> 7 & 0x1fffffffffffff8)) +
                     (uVar11 & 0x3ff) * 4);
    *(long *)(param_1 + 0x16) = lVar9;
    lVar8 = *(long *)(param_1 + 8) - *(long *)(param_1 + 6);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 * 0x80 + -1;
    }
    if (0x7ff < lVar9 - uVar11) {
      plVar14 = *(long **)(param_1 + 0x18);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar13,0x1000,4);
      }
      else {
        FUN_00c48fe8(plVar14,uVar13,0x1000,4);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -8;
    }
  }
  uVar7 = iVar12 - *param_1;
  if (*(ulong *)(param_1 + 0x30) <= (ulong)uVar7) {
    uVar2 = uVar7 + 1;
    uVar11 = (ulong)(uVar2 >> 6);
    if ((uVar2 & 0x3f) != 0) {
      uVar11 = uVar11 + 1;
    }
    uVar1 = *(long *)(param_1 + 0x24) - *(long *)(param_1 + 0x22) >> 3;
    local_48 = 0;
    if (uVar11 != uVar1) {
      if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
        if (uVar11 < uVar1) {
          *(ulong *)(param_1 + 0x24) = *(long *)(param_1 + 0x22) + uVar11 * 8;
        }
      }
      else {
        FUN_00d1aa80(param_1 + 0x22,uVar11 - uVar1,&local_48);
      }
    }
    *(ulong *)(param_1 + 0x30) = (ulong)uVar2;
    if ((uVar2 & 0x3f) != 0) {
      *(ulong *)(*(long *)(param_1 + 0x24) + -8) =
           *(ulong *)(*(long *)(param_1 + 0x24) + -8) &
           (-1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU);
    }
  }
  uVar11 = (ulong)(uVar7 >> 3) & 0x1ffffff8;
  *(ulong *)(*(long *)(param_1 + 0x22) + uVar11) =
       *(ulong *)(*(long *)(param_1 + 0x22) + uVar11) | 1L << ((ulong)uVar7 & 0x3f);
  param_1[2] = param_1[2] + 1;
  do {
    lVar9 = *plVar3;
    lVar8 = *(long *)(param_1 + 0x36);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar10) {
      *plVar3 = lVar9;
      *(long *)(param_1 + 0x36) = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar4 = *plVar3;
    lVar5 = *(long *)(param_1 + 0x36);
    if (lVar4 != lVar9 || lVar5 != lVar8) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d1a8f0;
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar10) {
      *plVar3 = 0;
      *(long *)(param_1 + 0x35) = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar10 = true;
LAB_00d1a8f0:
  if (!bVar10) {
    do {
      lVar9 = *plVar3;
      lVar8 = *(long *)(param_1 + 0x36);
      if (lVar9 != lVar4 || lVar8 != lVar5) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d1aa40;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = 0;
        *(long *)(param_1 + 0x35) = lVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x00d1aa40:
    if (!bVar10) {
      do {
        lVar4 = *plVar3;
        lVar5 = *(long *)(param_1 + 0x36);
        if (lVar4 != lVar9 || lVar5 != lVar8) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar4;
          lVar8 = lVar5;
          goto joined_r0x00d1aa40;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar10) {
          *plVar3 = 0;
          *(long *)(param_1 + 0x35) = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar4;
      lVar8 = lVar5;
      goto joined_r0x00d1aa40;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return iVar12;
}


