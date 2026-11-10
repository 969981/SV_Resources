/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d38a8; name: FUN_017d38a8
 */


void FUN_017d38a8(long param_1,char *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  char *local_38;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') && (plVar6 = *(long **)(param_2 + 8), plVar6 != (long *)0x0)) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar4 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar8) {
    bVar9 = true;
LAB_017d3984:
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    local_38 = param_2;
    if (puVar2 < *(undefined8 **)(param_1 + 0x38)) {
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        *puVar2 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *puVar2 = local_38;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
    else {
      FUN_01a9fc40(param_1 + 0x28,&local_38);
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
    if (cVar3 == '\0') goto LAB_017d3a24;
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
          if (cVar3 == '\0') goto LAB_017d3a24;
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
LAB_017d3a24:
  bVar9 = false;
  goto LAB_017d3984;
}


