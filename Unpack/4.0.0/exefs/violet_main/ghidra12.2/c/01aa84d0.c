/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa84d0; name: FUN_01aa84d0
 */


undefined8 FUN_01aa84d0(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  char *local_38;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar7 == (undefined8 *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)*puVar7;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar12 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar12;
  if (pcVar11 != (char *)0x0) {
    cVar4 = *pcVar11;
    if (cVar4 == '\x02') {
      puVar7 = *(undefined8 **)(pcVar11 + 8);
      if (puVar7 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar7 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar7 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_38 = (char *)*puVar7;
            FUN_00c44438(lVar8 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    else if (cVar4 == '\x03') {
      FUN_00dfe1d0(pcVar11 + 8);
    }
    else if ((cVar4 == '\x01') && (*(long **)(pcVar11 + 8) != (long *)0x0)) {
      (**(code **)(**(long **)(pcVar11 + 8) + 0x60))();
    }
    puVar5 = PTR_DAT_047d38f8;
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar9) {
      uVar13 = nn::os::GetCurrentThread();
LAB_01aa8630:
      if (*(long *)puVar5 == 0) goto code_r0x01aa8638;
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
                *(undefined8 *)puVar5 = uVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01aa8640;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *(undefined8 *)puVar5 = uVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01aa8640:
      bVar10 = false;
      goto LAB_01aa8554;
    }
    bVar10 = true;
LAB_01aa8554:
    puVar7 = *(undefined8 **)(lVar12 + 0x30);
    local_38 = pcVar11;
    if (puVar7 < *(undefined8 **)(lVar12 + 0x38)) {
      uVar13 = *(undefined8 *)(lVar12 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *puVar7 = pcVar11;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar13;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *puVar7 = local_38;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *(undefined8 **)(lVar12 + 0x30) = puVar7 + 1;
    }
    else {
      FUN_01aa881c(lVar12 + 0x28,&local_38);
    }
    if (!bVar10) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
  }
  return 0;
code_r0x01aa8638:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar10) {
    *(undefined8 *)puVar5 = uVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01aa8640;
  goto LAB_01aa8630;
}


