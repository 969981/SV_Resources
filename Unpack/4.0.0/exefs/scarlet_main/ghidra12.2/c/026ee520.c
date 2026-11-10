/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ee520; name: FUN_026ee520
 */


void FUN_026ee520(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  void *__dest;
  long *plVar10;
  ulong __n;
  void *local_108;
  long *local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  long *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *puStack_c8;
  long *local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  void *local_68;
  undefined1 auStack_60 [16];
  
  plVar10 = (long *)(param_2 + 0x158);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_026ee564;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x160));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x160));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_026ee564;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_026ee564:
  FUN_0135d328(auStack_60,param_3,0);
  local_c0 = (long *)0x0;
  local_b0 = 0x400;
  uStack_a8 = 8;
  local_b8 = '\0';
  local_68 = (void *)0x0;
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0x100;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  uVar7 = FUN_029e1070(*(undefined8 *)(param_2 + 0x170),&local_c0,param_3);
  local_d0 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  local_d8 = (undefined4 *)0x0;
  plVar10 = *(long **)(param_2 + 0x178);
  plVar3 = *(long **)(param_2 + 0x180);
  do {
    if (plVar10 == plVar3) {
      uVar9 = FUN_029e12e0(&local_c0,uVar7,&local_d8);
      FUN_01692868(&local_c0,uVar9,0,1);
      pvVar6 = local_90;
      __n = (ulong)(uint)(((int)local_a0 - (int)local_90) + (int)local_98);
      __dest = (void *)(**(code **)(*param_3 + 0x10))(param_3,__n,8);
      local_f0 = 8;
      local_100 = param_3;
      uStack_f8 = __n;
      memcpy(__dest,pvVar6,__n);
      *param_1 = __dest;
      param_1[1] = local_100;
      local_108 = (void *)0x0;
      param_1[4] = __n;
      param_1[2] = uStack_f8;
      param_1[3] = local_f0;
      FUN_029e1338(&local_108);
      if (local_d8 != (undefined4 *)0x0) {
        local_d0 = local_d8;
        operator_delete(local_d8);
      }
      pvVar6 = local_68;
      if (local_68 != (void *)0x0) {
        FUN_01f2d540(local_68,*(undefined8 *)((long)local_68 + 8));
        operator_delete(pvVar6);
      }
      if (local_98 != (void *)0x0) {
        if (local_c0 == (long *)0x0) {
          operator_delete__(local_98);
        }
        else {
          (**(code **)(*local_c0 + 0x18))(local_c0,local_98,local_a0);
        }
      }
      local_98 = (void *)0x0;
      if ((local_b8 != '\0') && (local_c0 != (long *)0x0)) {
        (**(code **)(*local_c0 + 8))();
      }
      FUN_0135d2ec(auStack_60);
      *(undefined8 *)(param_2 + 0x158) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x160));
      return;
    }
    FUN_00f42a08(&local_e0,*plVar10,&local_108);
    FUN_029c1524(&local_108,local_e0,&local_c0,param_3);
    local_e8[0] = FUN_029e13e0(&local_c0,*(undefined8 *)(*plVar10 + 0x1d0),&local_108);
    if (local_d0 < puStack_c8) {
      *local_d0 = local_e8[0];
      local_d0 = local_d0 + 1;
    }
    else {
      FUN_029e1438(&local_d8,local_e8);
    }
    if (local_108 != (void *)0x0) {
      local_100 = local_108;
      operator_delete(local_108);
    }
    if (local_e0 != (long *)0x0) {
      lVar8 = local_e0[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}


