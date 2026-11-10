/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188ea38; name: FUN_0188ea38
 */


void FUN_0188ea38(long param_1,char *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  char *local_38;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  cVar4 = *param_2;
  if (cVar4 == '\x01') {
    plVar7 = *(long **)(param_2 + 8);
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  else if ((cVar4 == '\x02') || (cVar4 == '\x03')) {
    FUN_0181c0dc(param_2 + 8);
  }
  puVar5 = PTR_DAT_047d38f8;
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar9) {
    bVar10 = true;
LAB_0188eb3c:
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    local_38 = param_2;
    if (puVar3 < *(undefined8 **)(param_1 + 0x38)) {
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar3 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar3 = local_38;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar3 + 1;
    }
    else {
      FUN_01a95204(param_1 + 0x28,&local_38);
    }
    if (bVar10) {
      return;
    }
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    return;
  }
  uVar11 = nn::os::GetCurrentThread();
  while (*(long *)puVar5 == 0) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(undefined8 *)puVar5 = uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0188ebdc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
  do {
    if (*(long *)puVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        while (*(long *)puVar5 == 0) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar10) {
            *(undefined8 *)puVar5 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0188ebdc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(undefined8 *)puVar5 = uVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0188ebdc:
  bVar10 = false;
  goto LAB_0188eb3c;
}


