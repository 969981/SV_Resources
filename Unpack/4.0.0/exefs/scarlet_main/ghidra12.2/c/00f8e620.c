/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f8e620; name: FUN_00f8e620
 */


void FUN_00f8e620(long *param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  float fVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte local_80 [8];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  char local_58;
  undefined8 local_48;
  
  puVar7 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar9 = PTR_DAT_047d88e0;
  puVar8 = PTR_DAT_047d88d8;
  uVar12 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar12;
  uVar13 = FUN_00f8f1d4(uVar12,param_1[8],param_2 & 1);
  if ((uVar13 & 1) == 0) {
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    lVar15 = *(long *)puVar8;
    *(long *)puVar9 = lVar15;
    local_80[0] = param_2 & 1;
    (**(code **)(*param_1 + 0x18))(&local_68,param_1);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    if ((long *)local_68[2] == param_1 + 5) {
      FUN_01001f40(&local_78,&local_68);
    }
    puVar10 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_48 = *puVar10;
          FUN_00c44438(lVar14 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) goto LAB_00f8e798;
    }
    FUN_00f338dc(&local_68,lVar15);
    fVar3 = *(float *)(lVar15 + 0x520);
    FUN_00f8e970(fVar3,local_68,local_80);
    *(float *)(lVar15 + 0x520) = fVar3 + 0.01;
    if (local_58 != '\0') {
      *local_60 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
    }
    puVar10 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_68 = (undefined8 *)*puVar10;
          FUN_00c44438(lVar15 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
LAB_00f8e798:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


