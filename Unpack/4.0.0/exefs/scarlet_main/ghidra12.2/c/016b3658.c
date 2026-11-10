/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016b3658; name: FUN_016b3658
 */


void FUN_016b3658(long param_1,undefined8 *param_2,byte param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  long local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  plVar7 = (long *)(param_1 + 200);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_016b36a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd0));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_016b36a0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_016b36a0:
  FUN_010b77f0(param_1);
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(byte *)(param_1 + 0x40) = param_3 & 1;
  if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto LAB_016b3964;
  uVar9 = 0;
  do {
    local_88 = 0x462237f7b07aa897;
    local_80 = "vfx2";
    local_78 = 4;
    local_70 = (long *)0x0;
    iVar5 = (**(code **)(*DAT_0485a020 + 0x60))(DAT_0485a020,&local_88,uVar9 & 0xffffffff);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (iVar5 == 1) {
      local_a8 = 0x462237f7b07aa897;
      puStack_a0 = &DAT_03c91c52;
      local_98 = 4;
      local_90 = (long *)0x0;
      (**(code **)(*(long *)*param_2 + 0x90))(&local_88,(long *)*param_2,&local_a8);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_88 != 0) {
        lVar6 = *(long *)(param_1 + 8);
        if (lVar6 == 0) {
          lVar6 = *(long *)(DAT_0485a0d0 + 8);
        }
        local_a8 = DAT_0485a0d0;
        lVar6 = FUN_00dfee60(auStack_68,lVar6,&local_a8,param_1 + 0xa8);
        if (lVar6 != 0) {
          piVar1 = (int *)(lVar6 + 0x28);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == -1) {
LAB_016b3a00:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (*local_80 != '\0') {
          FUN_00eac828(lVar6,&local_88);
        }
        plVar10 = (long *)(*(long *)(param_1 + 0x48) + uVar9 * 0x50 + 0x38);
        plVar7 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar7 != (long *)0x0) {
          plVar8 = plVar7 + 5;
          do {
            iVar5 = (int)*plVar8;
            iVar4 = iVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_016b3888:
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
LAB_016b3890:
        *plVar10 = lVar6;
      }
LAB_016b3894:
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
LAB_016b389c:
      if (*(long *)(*(long *)(param_1 + 0x48) + uVar9 * 0x50 + 0x38) != 0) {
        plVar10 = (long *)*param_2;
        plVar7 = (long *)(*(long *)(param_1 + 0x48) + uVar9 * 0x50 + 0x40);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        plVar8 = (long *)*plVar7;
        *plVar7 = (long)plVar10;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    else if (iVar5 != 2) {
      if (iVar5 == 0) {
        local_a8 = 0x462237f7b07aa897;
        puStack_a0 = &DAT_03c91c52;
        local_98 = 4;
        local_90 = (long *)0x0;
        (**(code **)(*(long *)*param_2 + 0x88))(&local_88,(long *)*param_2,&local_a8);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_88 != 0) {
          lVar6 = *(long *)(param_1 + 8);
          if (lVar6 == 0) {
            lVar6 = *(long *)(DAT_0485a0d0 + 8);
          }
          local_a8 = DAT_0485a0d0;
          lVar6 = FUN_00dfee60(auStack_68,lVar6,&local_a8,param_1 + 0xa8);
          if (lVar6 != 0) {
            piVar1 = (int *)(lVar6 + 0x28);
            do {
              iVar5 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 == -1) goto LAB_016b3a00;
          }
          if (*local_80 != '\0') {
            FUN_00eac828(lVar6,&local_88);
          }
          plVar10 = (long *)(*(long *)(param_1 + 0x48) + uVar9 * 0x50 + 0x38);
          plVar7 = (long *)*plVar10;
          *plVar10 = 0;
          if (plVar7 != (long *)0x0) {
            plVar8 = plVar7 + 5;
            do {
              iVar5 = (int)*plVar8;
              iVar4 = iVar5 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *(int *)plVar8 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_016b3888;
          }
          goto LAB_016b3890;
        }
        goto LAB_016b3894;
      }
      goto LAB_016b389c;
    }
    uVar9 = uVar9 + 1;
    if ((ulong)((*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4) * -0x3333333333333333)
        <= uVar9) {
LAB_016b3964:
      *(undefined8 *)(param_1 + 200) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd0));
      return;
    }
  } while( true );
}


