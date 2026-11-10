/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01109ac8; name: FUN_01109ac8
 */


void FUN_01109ac8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50 [3];
  undefined8 local_38;
  
  local_80 = *(undefined8 *)(param_2 + 0x110);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  local_70 = *(undefined8 *)(param_2 + 0x120);
  plVar9 = *(long **)(param_2 + 0x128);
  local_68 = plVar9;
  local_50[0] = param_1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_60,param_2 + 0x30,&local_80);
    plVar9 = local_68;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((local_60 == (undefined8 *)0x0) || (*(short *)((long)local_60 + 0x1a) == 0)) {
    local_d0 = 0x1d9ff716c615e238;
    pcStack_c8 = "outdoor_env.lightapplier";
    local_c0 = 0x18;
    local_b8 = (long *)0x0;
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_b0,param_2 + 0x30,&local_d0);
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    if (local_b0 != (undefined8 *)0x0) {
      if (*(short *)((long)local_b0 + 0x1a) != 0) {
        local_f0 = *param_4;
        uStack_e8 = param_4[1];
        local_e0 = param_4[2];
        plVar9 = (long *)param_4[3];
        plStack_d8 = plVar9;
        if (plVar9 == (long *)0x0) {
          FUN_01109e6c(local_b0,param_3,local_50,&local_f0);
        }
        else {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          FUN_01109e6c(local_b0,param_3,local_50,&local_f0);
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      puVar6 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
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
          piVar2 = (int *)((long)local_b0 + 0x1c);
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
            local_38 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_01109bb4;
      }
    }
  }
  else {
    local_a0 = *param_4;
    uStack_98 = param_4[1];
    local_90 = param_4[2];
    plVar9 = (long *)param_4[3];
    plStack_88 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_01109e6c(local_60,param_3,local_50,&local_a0);
    }
    else {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      FUN_01109e6c(local_60,param_3,local_50,&local_a0);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  puVar6 = local_60;
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
        local_b0 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) {
LAB_01109bb4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


