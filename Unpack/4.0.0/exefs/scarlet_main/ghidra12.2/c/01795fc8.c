/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01795fc8; name: FUN_01795fc8
 */


void FUN_01795fc8(long param_1,char *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  char *local_38;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') && (plVar7 = *(long **)(param_2 + 8), plVar7 != (long *)0x0)) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar4 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    bVar9 = true;
LAB_017960a0:
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    local_38 = param_2;
    if (puVar2 < *(undefined8 **)(param_1 + 0x38)) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        *puVar2 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar2 = local_38;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
    else {
      FUN_00e926a0(param_1 + 0x28,&local_38);
    }
    if (bVar9) {
      return;
    }
    *(undefined8 *)puVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    return;
  }
  uVar10 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar9) {
      *(undefined8 *)puVar4 = uVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01796140;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
  do {
    if (*(long *)puVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
        while (*(long *)puVar4 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar9) {
            *(undefined8 *)puVar4 = uVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01796140;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar9) {
      *(undefined8 *)puVar4 = uVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01796140:
  bVar9 = false;
  goto LAB_017960a0;
}


