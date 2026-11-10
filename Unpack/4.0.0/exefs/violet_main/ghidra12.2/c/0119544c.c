/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119544c; name: FUN_0119544c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119544c(long param_1,undefined4 param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 local_49;
  
  local_5c = param_2;
  lVar11 = FUN_0119579c();
  local_60[0] = 0;
  local_64[0] = 0;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x70);
    if ((*(byte *)(*(long *)(lVar12 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar9 = FUN_00cf44f4();
      if (sVar9 == 0) goto LAB_011954c4;
      lVar12 = *(long *)(lVar11 + 0x70);
    }
    local_60[0] = 1;
    bVar8 = FUN_00cf4cfc(lVar12);
    local_64[0] = (bVar8 | (byte)(*(ushort *)(*(long *)(*(long *)(lVar11 + 0x70) + 0x10) + 4) >> 2))
                  & 1;
  }
LAB_011954c4:
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_01084328(&local_78,param_1 + 0x130);
  if (local_78 != (undefined8 *)0x0) {
    if (*(short *)((long)local_78 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_78 + 0x1a);
      sVar9 = *(short *)((long)local_78 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0119552c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0119552c:
          bVar6 = false;
        }
        if (bVar6) {
          lVar11 = local_78[2];
          if (lVar11 != 0) {
            local_58 = DAT_03d30094;
            uStack_50 = (undefined7)DAT_03d3009c;
            local_49 = ram0x03d300a3;
            if (*(long *)(lVar11 + 0x110) == 0) goto LAB_01195620;
            plVar2 = (long *)(lVar11 + 0x120);
            lVar13 = *plVar2;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 == lVar13) {
              FUN_01dcd59c(*(undefined8 *)(lVar11 + 0x110),&local_58,&local_5c,param_1 + 0x278,
                           local_60,local_64);
              goto LAB_01195620;
            }
            lVar12 = nn::os::GetCurrentThread();
            goto LAB_011955dc;
          }
          break;
        }
        sVar9 = sVar4;
      } while (sVar4 != 0);
    }
LAB_0119553c:
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar9 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_58 = *puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_58);
        }
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_011955dc:
  if (*plVar2 == 0) goto code_r0x011955e4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x128));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x128));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011955ec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011955ec:
  if (*(long *)(lVar11 + 0x110) != 0) {
    FUN_01dcd59c(*(long *)(lVar11 + 0x110),&local_58,&local_5c,param_1 + 0x278,local_60,local_64);
  }
  *(undefined8 *)(lVar11 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x128));
LAB_01195620:
  lVar12 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
  }
  else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_0119553c;
code_r0x011955e4:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar6) {
    *plVar2 = lVar12;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_011955ec;
  goto LAB_011955dc;
}


