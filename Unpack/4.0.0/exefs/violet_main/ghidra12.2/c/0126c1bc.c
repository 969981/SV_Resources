/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126c1bc; name: FUN_0126c1bc
 */


void FUN_0126c1bc(undefined8 param_1,long param_2,undefined8 *param_3)

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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined8 local_18;
  
  local_70 = *(undefined8 *)(param_2 + 0x110);
  uStack_68 = *(undefined8 *)(param_2 + 0x118);
  local_60 = *(undefined8 *)(param_2 + 0x120);
  plVar9 = *(long **)(param_2 + 0x128);
  local_58 = plVar9;
  local_40[0] = param_1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_50,param_2 + 0x30,&local_70);
    plVar9 = local_58;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((local_50 == (undefined8 *)0x0) || (*(short *)((long)local_50 + 0x1a) == 0)) {
    local_c0 = 0x1d9ff716c615e238;
    pcStack_b8 = "outdoor_env.lightapplier";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_a0,param_2 + 0x30,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    if (local_a0 != (undefined8 *)0x0) {
      if (*(short *)((long)local_a0 + 0x1a) != 0) {
        local_e0 = *param_3;
        uStack_d8 = param_3[1];
        local_d0 = param_3[2];
        plVar9 = (long *)param_3[3];
        plStack_c8 = plVar9;
        if (plVar9 == (long *)0x0) {
          FUN_0126c54c(local_a0,local_40,&local_e0);
        }
        else {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_0126c54c(local_a0,local_40,&local_e0);
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      puVar6 = local_a0;
      if (local_a0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_a0 + 3);
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
          piVar2 = (int *)((long)local_a0 + 0x1c);
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
        else if (sVar3 == 0) goto LAB_0126c2a0;
      }
    }
  }
  else {
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_80 = param_3[2];
    plVar9 = (long *)param_3[3];
    plStack_78 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_0126c54c(local_50,local_40,&local_90);
    }
    else {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      FUN_0126c54c(local_50,local_40,&local_90);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  puVar6 = local_50;
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
        local_a0 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_a0);
      }
    }
    else if (sVar3 == 0) {
LAB_0126c2a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


