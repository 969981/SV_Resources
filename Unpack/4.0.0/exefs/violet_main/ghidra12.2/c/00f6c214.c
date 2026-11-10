/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6c214; name: FUN_00f6c214
 */


/* WARNING: Removing unreachable block (ram,0x00f6c2c0) */
/* WARNING: Removing unreachable block (ram,0x00f6c2c4) */
/* WARNING: Removing unreachable block (ram,0x00f6c2cc) */
/* WARNING: Removing unreachable block (ram,0x00f6c2d4) */
/* WARNING: Removing unreachable block (ram,0x00f6c4f0) */
/* WARNING: Removing unreachable block (ram,0x00f6c2d8) */

void FUN_00f6c214(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_40 = 0;
  local_f8 = (long *)0x0;
  local_f0 = &DAT_cbf29ce484222645;
  local_e8 = &DAT_03c886bc;
  local_e0 = 0;
  local_68 = &DAT_03c886bc;
  local_d8 = (long *)0x0;
  local_d0 = &DAT_cbf29ce484222645;
  local_c8 = &DAT_03c886bc;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_b0 = &DAT_cbf29ce484222645;
  local_a8 = &DAT_03c886bc;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_90 = &DAT_cbf29ce484222645;
  local_88 = &DAT_03c886bc;
  local_80 = 0;
  local_78 = (long *)0x0;
  puStack_70 = &DAT_cbf29ce484222645;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 200);
  if (plVar5 == (long *)0x0) {
    local_f8 = (long *)0x0;
  }
  else {
    plVar6 = plVar5 + 5;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
LAB_00f6c554:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) goto LAB_00f6c554;
    local_f8 = plVar5;
  }
  local_f0 = *(undefined1 **)(param_1 + 0x1b0);
  local_e8 = *(undefined1 **)(param_1 + 0x1b8);
  local_e0 = *(undefined8 *)(param_1 + 0x1c0);
  plVar6 = *(long **)(param_1 + 0x1c8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_d8 != (long *)0x0) {
    lVar4 = *local_d8;
    local_d8 = plVar6;
    (**(code **)(lVar4 + 0x20))();
    plVar6 = local_d8;
  }
  local_d8 = plVar6;
  local_d0 = *(undefined1 **)(param_1 + 0x210);
  local_c8 = *(undefined1 **)(param_1 + 0x218);
  local_c0 = *(undefined8 *)(param_1 + 0x220);
  plVar6 = *(long **)(param_1 + 0x228);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_b8 != (long *)0x0) {
    lVar4 = *local_b8;
    local_b8 = plVar6;
    (**(code **)(lVar4 + 0x20))();
    plVar6 = local_b8;
  }
  local_b8 = plVar6;
  local_b0 = *(undefined1 **)(param_1 + 0x1d0);
  local_a8 = *(undefined1 **)(param_1 + 0x1d8);
  local_a0 = *(undefined8 *)(param_1 + 0x1e0);
  plVar6 = *(long **)(param_1 + 0x1e8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_98 != (long *)0x0) {
    lVar4 = *local_98;
    local_98 = plVar6;
    (**(code **)(lVar4 + 0x20))();
    plVar6 = local_98;
  }
  local_98 = plVar6;
  local_90 = *(undefined1 **)(param_1 + 0x1f0);
  local_88 = *(undefined1 **)(param_1 + 0x1f8);
  local_80 = *(undefined8 *)(param_1 + 0x200);
  plVar6 = *(long **)(param_1 + 0x208);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_78 != (long *)0x0) {
    lVar4 = *local_78;
    local_78 = plVar6;
    (**(code **)(lVar4 + 0x20))();
    plVar6 = local_78;
  }
  local_78 = plVar6;
  local_3c = *(undefined4 *)(param_1 + 0x2a8);
  uStack_38 = 0;
  local_34 = *(undefined4 *)(param_1 + 0x230);
  FUN_00f6c57c(*(undefined8 *)(param_1 + 0x238),&local_f8);
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else if ((int)lVar4 == 0) goto LAB_00f6c52c;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    plVar5 = local_f8 + 5;
    do {
      lVar4 = *plVar5;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_00f6c52c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


