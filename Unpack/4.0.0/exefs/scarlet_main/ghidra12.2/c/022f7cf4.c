/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f7cf4; name: FUN_022f7cf4
 */


void FUN_022f7cf4(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_88 = *param_2;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  FUN_00c43ef0(&local_80,param_2 + 1);
  local_70 = param_2[3];
  uStack_68 = param_2[4];
  local_60 = param_2[5];
  local_58 = (long *)param_2[6];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_50 = param_2[7];
  lVar11 = *param_1;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_022f7e74;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022f7e74:
        bVar5 = false;
      }
      puVar6 = PTR_DAT_047d38f8;
      if (bVar5) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          lVar13 = *(long *)PTR_DAT_047d38f8;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 != lVar13) {
            uVar10 = nn::os::GetCurrentThread();
            goto LAB_022f7f10;
          }
          FUN_00fb0e98(*(undefined8 *)(lVar11 + 0x48),param_1[2],&local_88);
          goto LAB_022f7ebc;
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
LAB_022f7d60:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar7 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_80 + 3);
    do {
      sVar12 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar1 = (int *)((long)local_80 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_022f7f10:
  if (*(long *)puVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *(undefined8 *)puVar6 = uVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_022f7f20;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar5) {
        *(undefined8 *)puVar6 = uVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_022f7f20:
    FUN_00fb0e98(*(undefined8 *)(lVar11 + 0x48),param_1[2],&local_88);
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
LAB_022f7ebc:
    lVar9 = *(long *)(lVar11 + 8);
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_022f7d60;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar5) {
    *(undefined8 *)puVar6 = uVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_022f7f20;
  goto LAB_022f7f10;
}


