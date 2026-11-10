/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c4a94; name: FUN_019c4a94
 */


void FUN_019c4a94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 uint param_5,uint param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long **pplVar12;
  long lVar13;
  undefined8 *puVar14;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar14 = (undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x3c) = *puVar14;
  *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x30);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x38);
  FUN_0174fbdc(&local_80);
  iVar7 = FUN_0174fcac(local_80,0);
  if (local_80 != (long *)0x0) {
    plVar9 = local_80 + 5;
    do {
      lVar13 = *plVar9;
      iVar8 = (int)lVar13 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_019c4ce8;
  }
  if (iVar7 == 6) {
    *puVar14 = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0xffffffff;
    return;
  }
  FUN_0174fbdc(&local_80);
  plVar9 = (long *)(**(code **)(*local_80 + 0x60))(local_80,iVar7);
  if (local_80 != (long *)0x0) {
    plVar3 = local_80 + 5;
    do {
      lVar13 = *plVar3;
      iVar8 = (int)lVar13 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *(int *)plVar3 = iVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_019c4ce8;
  }
  puVar4 = PTR_DAT_047d8938;
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  puVar6 = PTR_DAT_047d8948;
  puVar5 = PTR_DAT_047d8940;
  uVar10 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar10;
  FUN_011b00ec(&local_80,uVar10,plVar9);
  *(undefined4 *)(param_3 + 0x38) = (undefined4)local_70;
  *puVar14 = local_80;
  *(undefined8 *)(param_3 + 0x30) = uStack_78;
  local_88 = plVar9;
  if (plVar9 != (long *)0x0) {
    plVar9 = plVar9 + 5;
    do {
      lVar13 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = (int)lVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_80 = *(long **)(param_3 + 0x68);
  uStack_78 = *(undefined8 *)(param_3 + 0x70);
  local_70 = *(undefined8 *)(param_3 + 0x78);
  uStack_68 = 0;
  uVar11 = FUN_00d1e340(&local_80);
  if ((uVar11 & 1) == 0) {
    plVar9 = (long *)*param_4;
    local_90 = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
      pplVar12 = &local_90;
      goto LAB_019c4c68;
    }
    pplVar12 = &local_90;
LAB_019c4e34:
    FUN_019c4fa0(param_1,param_2,param_3,pplVar12,&local_88,param_5 & 1,param_6 & 1);
  }
  else {
    FUN_0174fbdc(&local_80);
    FUN_015250b4(local_80,(int)(char)iVar7);
    if (local_80 != (long *)0x0) {
      plVar9 = local_80 + 5;
      do {
        lVar13 = *plVar9;
        iVar7 = (int)lVar13 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *(int *)plVar9 = iVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar13 == 0) goto LAB_019c4ce8;
    }
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
    uVar10 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar10;
    uVar11 = FUN_019c4f10(uVar10,puVar14,(undefined8 *)(param_3 + 0x3c));
    if ((uVar11 & 1) == 0) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar13 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar13;
      plVar9 = *(long **)(lVar13 + 0x1c8);
      plVar3 = *(long **)(lVar13 + 0x1c0);
      do {
        if (plVar3 == plVar9) {
          lVar13 = 0;
          break;
        }
        lVar13 = *plVar3;
        uVar11 = FUN_011b8548(lVar13 + 0x28);
        plVar3 = plVar3 + 1;
      } while ((uVar11 & 1) == 0);
      FUN_01990bcc(lVar13);
      FUN_01990a84(param_3);
      plVar9 = (long *)*param_4;
      local_98 = plVar9;
      if (plVar9 == (long *)0x0) {
        pplVar12 = &local_98;
        goto LAB_019c4e34;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9);
      pplVar12 = &local_98;
LAB_019c4c68:
      FUN_019c4fa0(param_1,param_2,param_3,pplVar12,&local_88,param_5 & 1,param_6 & 1);
      (**(code **)(*plVar9 + 0x60))(plVar9);
    }
  }
  if (local_88 != (long *)0x0) {
    plVar9 = local_88 + 5;
    do {
      lVar13 = *plVar9;
      iVar7 = (int)lVar13 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_019c4ce8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


