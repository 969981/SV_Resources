/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2bdf4; name: FUN_01e2bdf4
 */


void FUN_01e2bdf4(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  long *local_190 [4];
  long *local_170;
  long *local_160 [2];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar8 = *param_1;
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar9 = *(short *)(lVar8 + 0x1a);
LAB_01e2be44:
  sVar2 = *psVar1;
  if (sVar2 == sVar9) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01e2be68;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e2be68:
    bVar12 = false;
  }
  if (!bVar12) {
    sVar9 = sVar2;
    if (sVar2 == 0) {
      return;
    }
    goto LAB_01e2be44;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  local_160[0] = (long *)0x3c2e45b;
  FUN_00e52f24(local_190,local_160);
  plVar11 = *(long **)(lVar8 + -0x20);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x340,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_160[0] = (long *)0x0;
  plVar10 = (long *)(lVar8 + -0x28);
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_01e2c200(plVar7,local_190,1,local_160,1);
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar4)(auStack_b0);
  }
  pcVar4 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar4)(auStack_130);
  }
  *(undefined4 *)(plVar7 + 3) = 0x100340;
  plVar7[1] = (long)plVar11;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  plVar11 = plVar7 + 4;
  (**(code **)(*plVar11 + 0xe8))(plVar11,plVar10);
  (**(code **)(*plVar11 + 0x68))(plVar11);
  local_160[0] = plVar7;
  FUN_00df8c30(lVar8 + 0xe0,local_160);
  if (local_160[0] != (long *)0x0) {
    lVar6 = local_160[0][0x13];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_160[0] + 0x50))();
    }
    else if (sVar9 == 0) goto LAB_01e2c048;
  }
  (**(code **)(*(long *)(lVar8 + -0x28) + 0x100))(plVar10,plVar11);
  plVar7 = (long *)(lVar8 + 0x418);
  lVar13 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar13) {
    plVar7 = (long *)0x0;
    bVar12 = true;
LAB_01e2bfec:
    if ((*(byte *)(lVar8 + 0x430) >> 2 & 1) == 0) {
      FUN_00d37964(plVar10,0,0);
    }
    else {
      (**(code **)(*plVar11 + 0xf8))(plVar11);
    }
    if (!bVar12) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    if (local_190[0] != (long *)0x0) {
      (**(code **)(*local_190[0] + 0x20))();
    }
    lVar8 = *(long *)(lVar8 + 8);
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
      return;
    }
    if (sVar9 != 0) {
      return;
    }
LAB_01e2c048:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar12) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e2bfe8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x420));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x420));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar12) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e2bfe8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar12) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e2bfe8:
  bVar12 = false;
  goto LAB_01e2bfec;
}


