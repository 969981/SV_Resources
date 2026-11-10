/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c30a0; name: FUN_025c30a0
 */


undefined8 FUN_025c30a0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  char *local_38;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar5 == (undefined8 *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)*puVar5;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar11 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar11;
  if (pcVar10 != (char *)0x0) {
    if ((*pcVar10 == '\x01') && (plVar7 = *(long **)(pcVar10 + 8), plVar7 != (long *)0x0)) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    puVar3 = PTR_DAT_047d38f8;
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar8) {
      uVar12 = nn::os::GetCurrentThread();
LAB_025c31b8:
      if (*(long *)puVar3 == 0) goto code_r0x025c31c0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *(undefined8 *)puVar3 = uVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_025c31c8;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *(undefined8 *)puVar3 = uVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_025c31c8:
      bVar9 = false;
      goto LAB_025c311c;
    }
    bVar9 = true;
LAB_025c311c:
    puVar5 = *(undefined8 **)(lVar11 + 0x30);
    local_38 = pcVar10;
    if (puVar5 < *(undefined8 **)(lVar11 + 0x38)) {
      uVar12 = *(undefined8 *)(lVar11 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        *puVar5 = pcVar10;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar5 = local_38;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      *(undefined8 **)(lVar11 + 0x30) = puVar5 + 1;
    }
    else {
      FUN_01aa8cfc(lVar11 + 0x28,&local_38);
    }
    if (!bVar9) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
  }
  return 0;
code_r0x025c31c0:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar9) {
    *(undefined8 *)puVar3 = uVar12;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_025c31c8;
  goto LAB_025c31b8;
}


