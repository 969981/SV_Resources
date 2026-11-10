/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01142c28; name: FUN_01142c28
 */


void FUN_01142c28(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  short sVar16;
  undefined8 *puVar17;
  
  plVar14 = (long *)(param_1 + 0x3c0);
  lVar12 = *plVar14;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar12) {
    lVar7 = nn::os::GetCurrentThread();
LAB_01142c64:
    if (*plVar14 == 0) goto code_r0x01142c6c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar13) {
              *plVar14 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01142c74;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01142c74:
    bVar13 = false;
    goto LAB_01142c78;
  }
  plVar14 = (long *)0x0;
  bVar13 = true;
LAB_01142c78:
  puVar5 = PTR_DAT_047d6528;
  plVar9 = *(long **)(param_1 + 0x3d8);
  plVar11 = *(long **)(param_1 + 0x3e0);
  if (plVar9 == plVar11) {
LAB_01142c88:
    if (!bVar13) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
    FUN_00f20170(param_1,0);
    return;
  }
  pbVar10 = PTR_DAT_047d6520;
LAB_01142d10:
  lVar7 = *plVar9;
  if ((lVar7 != 0) && (sVar16 = *(short *)(lVar7 + 0x1a), sVar16 != 0)) {
    puVar17 = *(undefined8 **)(lVar7 + 8);
    if (((*pbVar10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
      uVar8 = FUN_0151c130();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    pbVar10 = PTR_DAT_047d6520;
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        if (puVar17 == (undefined8 *)puVar5) goto LAB_01142d90;
        puVar17 = (undefined8 *)*puVar17;
      } while (puVar17 != (undefined8 *)0x0);
    }
  }
  goto LAB_01142d18;
code_r0x01142c6c:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar13) {
    *plVar14 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01142c74;
  goto LAB_01142c64;
  while (sVar16 = sVar2, sVar2 != 0) {
LAB_01142d90:
    sVar2 = *psVar1;
    if (sVar2 == sVar16) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01142db4;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01142db4:
      bVar4 = false;
    }
    pbVar10 = PTR_DAT_047d6520;
    if (bVar4) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 != 0) {
        plVar15 = (long *)(lVar7 + -0x28);
        FUN_00f20170(plVar15,1);
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
          pbVar10 = PTR_DAT_047d6520;
        }
        else {
          pbVar10 = PTR_DAT_047d6520;
          if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      break;
    }
  }
LAB_01142d18:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar11) goto LAB_01142c88;
  goto LAB_01142d10;
}


