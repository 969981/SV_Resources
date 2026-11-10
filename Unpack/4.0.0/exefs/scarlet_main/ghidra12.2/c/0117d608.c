/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117d608; name: FUN_0117d608
 */


void FUN_0117d608(undefined4 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  undefined8 local_18;
  
  local_68 = *(undefined8 *)(param_2 + 0x110);
  uStack_60 = *(undefined8 *)(param_2 + 0x118);
  local_58 = *(undefined8 *)(param_2 + 0x120);
  plVar9 = *(long **)(param_2 + 0x128);
  local_50 = plVar9;
  local_34 = param_1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_48,param_2 + 0x30,&local_68);
    plVar9 = local_50;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((local_48 == (undefined8 *)0x0) || (*(short *)((long)local_48 + 0x1a) == 0)) {
    local_b8 = 0x1d9ff716c615e238;
    pcStack_b0 = "outdoor_env.lightapplier";
    local_a8 = 0x18;
    local_a0 = (long *)0x0;
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_98,param_2 + 0x30,&local_b8);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
    }
    if (local_98 != (undefined8 *)0x0) {
      if (*(short *)((long)local_98 + 0x1a) != 0) {
        local_d8 = *param_3;
        uStack_d0 = param_3[1];
        local_c8 = param_3[2];
        plVar9 = (long *)param_3[3];
        plStack_c0 = plVar9;
        if (plVar9 == (long *)0x0) {
          FUN_0117d99c(local_98,&local_34,&local_d8);
        }
        else {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_0117d99c(local_98,&local_34,&local_d8);
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      puVar6 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_98 + 3);
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
          piVar2 = (int *)((long)local_98 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_18 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_18);
          }
        }
        else if (sVar3 == 0) goto LAB_0117d774;
      }
    }
  }
  else {
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_78 = param_3[2];
    plVar9 = (long *)param_3[3];
    plStack_70 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_0117d99c(local_48,&local_34,&local_88);
    }
    else {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      FUN_0117d99c(local_48,&local_34,&local_88);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  puVar6 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_98 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) {
LAB_0117d774:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


