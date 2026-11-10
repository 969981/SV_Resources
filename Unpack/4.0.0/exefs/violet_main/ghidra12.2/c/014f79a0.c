/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f79a0; name: FUN_014f79a0
 */


void FUN_014f79a0(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  float fVar12;
  long *local_48;
  
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0x18) + 0x30);
  }
  if (*param_2 == *plVar10) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x58);
  if (plVar10 == (long *)0x0) {
    if (*(char *)param_2[1] == '\0') goto LAB_014f7c18;
  }
  else {
    if (*(char *)param_2[1] == '\0') {
      if ((int)plVar10[7] != 0) {
        uVar1 = *(undefined4 *)(param_3 + 0xc);
        if (*(int *)((long)plVar10 + 0x4c) == 0) {
          fVar12 = *(float *)(param_3 + 4);
          uVar2 = *(undefined4 *)(param_3 + 0x14);
          if (((*PTR_DAT_047d8280 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8280);
          }
          lVar9 = *(long *)PTR_DAT_047d8288;
          *(long *)PTR_DAT_047d8290 = lVar9;
          plVar8 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
          (**(code **)(*plVar8 + 0xe8))(plVar8,1,(int)plVar10[7],(int)(fVar12 * 1000.0),uVar2);
          *(undefined4 *)((long)plVar10 + 0x4c) = 1;
          *(float *)(plVar10 + 10) = fVar12;
        }
        else {
          *(undefined4 *)((long)plVar10 + 0x4c) = 2;
        }
        *(undefined4 *)((long)plVar10 + 0x54) = uVar1;
        plVar10 = *(long **)(param_1 + 0x58);
        *(undefined1 *)(param_1 + 0x25) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        if (plVar10 == (long *)0x0) goto LAB_014f7c18;
      }
      if (plVar10[6] == param_1) {
        plVar10[6] = 0;
        plVar10 = *(long **)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = 0;
        if (plVar10 == (long *)0x0) goto LAB_014f7c18;
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      plVar8 = plVar10 + 5;
      do {
        lVar9 = *plVar8;
        iVar6 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar9 == 0) goto LAB_014f7c98;
LAB_014f7c18:
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar6 != 0)) {
        local_48 = (long *)FUN_00d44228();
        puVar5 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_48);
        FUN_00100190(PTR_LAB_047d9240,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      plVar10 = *(long **)PTR_DAT_047d8c30;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar8 = *(long **)(param_1 + 0x18);
      *(long **)(param_1 + 0x18) = plVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x24) = 0;
      return;
    }
    if ((int)plVar10[7] != 0) {
      uVar1 = *(undefined4 *)(param_3 + 0xc);
      if (*(int *)((long)plVar10 + 0x4c) == 0) {
        fVar12 = *(float *)(param_3 + 4);
        uVar2 = *(undefined4 *)(param_3 + 0x14);
        if (((*PTR_DAT_047d8280 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        lVar9 = *(long *)PTR_DAT_047d8288;
        *(long *)PTR_DAT_047d8290 = lVar9;
        plVar8 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
        (**(code **)(*plVar8 + 0xe8))(plVar8,1,(int)plVar10[7],(int)(fVar12 * 1000.0),uVar2);
        *(undefined4 *)((long)plVar10 + 0x4c) = 1;
        *(float *)(plVar10 + 10) = fVar12;
      }
      else {
        *(undefined4 *)((long)plVar10 + 0x4c) = 2;
      }
      *(undefined4 *)((long)plVar10 + 0x54) = uVar1;
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (plVar10 == (long *)0x0) goto LAB_014f7a40;
    }
    if (plVar10[6] == param_1) {
      plVar10[6] = 0;
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar10 == (long *)0x0) goto LAB_014f7a40;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    plVar8 = plVar10 + 5;
    do {
      lVar9 = *plVar8;
      iVar6 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) {
LAB_014f7c98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_014f7a40:
  pcVar11 = (char *)param_2[1];
  if (*pcVar11 == '\0') {
    local_48 = (long *)FUN_00d44228();
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(&local_48,uVar7,pcVar11);
  }
  plVar10 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(long **)(param_1 + 0x18) = local_48;
  return;
}


