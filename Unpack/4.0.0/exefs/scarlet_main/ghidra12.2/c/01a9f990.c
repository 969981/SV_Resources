/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a9f990; name: FUN_01a9f990
 */


undefined8 FUN_01a9f990(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  char *local_38;
  
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar6 == (undefined8 *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)*puVar6;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar12 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar12;
  if (pcVar11 != (char *)0x0) {
    cVar3 = *pcVar11;
    if (cVar3 == '\x01') {
      plVar7 = *(long **)(pcVar11 + 8);
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
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
    else if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
      FUN_01994124(pcVar11 + 8);
    }
    puVar4 = PTR_DAT_047d38f8;
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar9) {
      uVar13 = nn::os::GetCurrentThread();
LAB_01a9facc:
      if (*(long *)puVar4 == 0) goto code_r0x01a9fad4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
      do {
        if (*(long *)puVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
            while (*(long *)puVar4 == 0) {
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar10) {
                *(undefined8 *)puVar4 = uVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01a9fadc;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *(undefined8 *)puVar4 = uVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01a9fadc:
      bVar10 = false;
      goto LAB_01a9fa38;
    }
    bVar10 = true;
LAB_01a9fa38:
    puVar6 = *(undefined8 **)(lVar12 + 0x30);
    local_38 = pcVar11;
    if (puVar6 < *(undefined8 **)(lVar12 + 0x38)) {
      uVar13 = *(undefined8 *)(lVar12 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar6 = pcVar11;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar13;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar6 = local_38;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *(undefined8 **)(lVar12 + 0x30) = puVar6 + 1;
    }
    else {
      FUN_01a9fc40(lVar12 + 0x28,&local_38);
    }
    if (!bVar10) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
  }
  return 0;
code_r0x01a9fad4:
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar10) {
    *(undefined8 *)puVar4 = uVar13;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01a9fadc;
  goto LAB_01a9facc;
}


