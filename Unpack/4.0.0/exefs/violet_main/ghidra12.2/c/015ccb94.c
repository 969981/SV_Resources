/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ccb94; name: FUN_015ccb94
 */


void FUN_015ccb94(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long *local_40;
  long *local_38;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar8);
  *param_1 = (long)&PTR_FUN_04544778;
  param_1[4] = (long)&PTR_LAB_045447f0;
  *plVar8 = (long)&PTR_LAB_04544840;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar7 = FUN_01060ed0();
  }
  param_1[0xb] = lVar7;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0xfffffffffffffff;
  param_1[0xd] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x15,0,1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  FUN_015cd16c(param_1 + 0x20);
  param_1[0x24] = 0;
  param_1[0x1e] = (long)(param_1 + 0x1f);
  param_1[0x26] = 0;
  FUN_015cd0b4(param_1 + 0x27);
  param_1[0x25] = (long)(param_1 + 0x26);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = -0x100000000;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  FUN_015cd228(param_1 + 0x31);
  param_1[0x2f] = (long)(param_1 + 0x30);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_015cd2e4(param_1 + 0x39);
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x46] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  local_40 = param_1;
  FUN_015cd3a0(&local_38,param_1[1],&local_40);
  plVar8 = (long *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_015cce9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar8 = local_38;
  param_1[0x46] = (long)local_38;
  pcVar10 = (code *)local_38[0x71];
  if (pcVar10 != (code *)0x0) {
    local_38[0x72] = 0;
    local_38[0x73] = 0;
    local_38[0x70] = 0;
    local_38[0x71] = 0;
    (*pcVar10)(local_38 + 0x74);
  }
  plVar8[0x70] = (long)FUN_0190415c;
  plVar8[0x71] = (long)&LAB_00a95f80;
  plVar8[0x72] = (long)&LAB_00a95f84;
  plVar8[0x74] = (long)param_1;
  plVar8[0x73] = (long)&LAB_00a95f90;
  lVar9 = param_1[0x46];
  plVar8 = (long *)(lVar9 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_015ccda4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1d8));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_015ccda4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_015ccda4:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_015ccff4(&local_38);
  FUN_00e220f4(lVar9,local_38,0);
  if (local_38 == (long *)0x0) {
LAB_015cce10:
    *(undefined8 *)(lVar9 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1d8));
    return;
  }
  lVar7 = local_38[6];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*local_38 + 0x50))();
    goto LAB_015cce10;
  }
  if (sVar2 != 0) goto LAB_015cce10;
  goto LAB_015cce9c;
}


