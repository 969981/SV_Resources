/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d330e8; name: FUN_00d330e8
 */


void FUN_00d330e8(undefined8 *param_1,ulong param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  puVar7 = PTR_DAT_047d38f8;
  lVar17 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar17) {
    uVar11 = nn::os::GetCurrentThread();
LAB_00d332b0:
    if (*(long *)puVar7 == 0) goto code_r0x00d332b8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
    do {
      if (*(long *)puVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
          while (*(long *)puVar7 == 0) {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar16) {
              *(undefined8 *)puVar7 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d332c0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar16) {
        *(undefined8 *)puVar7 = uVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d332c0:
    bVar16 = false;
    goto LAB_00d33124;
  }
  bVar16 = true;
LAB_00d33124:
  plVar15 = DAT_04859eb0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((plVar15 != (long *)0x0) && (uVar12 = plVar15[1], uVar12 != 0)) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & param_2;
    }
    else if (param_2 < uVar12) {
      uVar14 = param_2;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = param_2 / uVar12;
      }
      uVar14 = param_2 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*plVar15 + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == param_2) {
            if (plVar15[2] == param_2) goto LAB_00d331b8;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == param_2) {
            if (plVar15[2] == param_2) goto LAB_00d331b8;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar6 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00d33214:
  if (!bVar16) {
    *(undefined8 *)puVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
  }
  return;
code_r0x00d332b8:
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar16) {
    *(undefined8 *)puVar7 = uVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d332c0;
  goto LAB_00d332b0;
LAB_00d331b8:
  lVar17 = plVar15[3];
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,lVar17 + 0x30);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  lVar10 = 0;
  if (lVar17 != 0) {
    lVar10 = lVar17 + 0x28;
  }
  if (local_50[2] == lVar10) {
    FUN_00d337d8(&local_60,&local_50);
  }
  puVar8 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00d33280;
  }
  FUN_00d334b4(param_1,&local_60);
  puVar8 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_50 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_50);
      }
    }
    else if (sVar3 == 0) {
LAB_00d33280:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  goto LAB_00d33214;
}


