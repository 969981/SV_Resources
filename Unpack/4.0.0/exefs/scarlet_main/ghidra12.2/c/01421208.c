/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01421208; name: FUN_01421208
 */


void FUN_01421208(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *param3;
  long *plVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong param4;
  undefined8 *puVar17;
  long *local_110;
  long *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_014218d0(param_2,*(undefined8 *)(param_1 + 8));
  pcVar14 = *(code **)(param_1 + 0x3a8);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    (*pcVar14)(param_1 + 0x3c0);
  }
  *(undefined1 **)(param_1 + 0x3a0) = &LAB_02734aa8;
  *(undefined1 **)(param_1 + 0x3a8) = &LAB_02bc3858;
  *(undefined1 **)(param_1 + 0x3b0) = &LAB_02bc3878;
  *(long *)(param_1 + 0x3c0) = param_1;
  *(undefined1 **)(param_1 + 0x3b8) = &LAB_02bc3884;
  if (((*PTR_DAT_047dd2e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd9c8,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047dd2f0;
  *(undefined8 *)PTR_DAT_047dd2f8 = uVar10;
  FUN_014dd4a8(uVar10,3,param_1 + 0x390);
  FUN_00efa800(param_1);
  local_70 = 0;
  uStack_68 = 0;
  plVar15 = *(long **)(*param_2 + 0xb0);
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 5;
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar13 == -1) goto LAB_0142178c;
  }
  FUN_0167119c(plVar15,&uStack_68,&local_70,0);
  local_a0 = 1;
  uStack_98 = 2;
  local_90 = 0x20000003f;
  uStack_88 = 0x400000003;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = uStack_68;
  uStack_b8 = local_70;
  local_80 = 5;
  uStack_78 = 0x200000008;
  local_e0 = *param_2;
  lVar11 = FUN_00cf3764(&local_100,*(undefined8 *)(local_e0 + 8),&local_e0);
  lVar13 = 0;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == -1) goto LAB_0142178c;
    lVar13 = lVar11;
  }
  FUN_0117e220(lVar13,&local_c0,1,1,0);
  plVar12 = *(long **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar13 = *plVar4;
      iVar9 = (int)lVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_01421764;
  }
  *(long *)(param_1 + 0x448) = lVar11;
  local_e0 = *param_2;
  lVar13 = FUN_00cf3764(&local_100,*(undefined8 *)(local_e0 + 8),&local_e0);
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == -1) {
LAB_0142178c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0117e220(lVar13,&local_c0,1,1,0);
  plVar12 = *(long **)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x450) = 0;
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar9 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01421764;
  }
  *(long *)(param_1 + 0x450) = lVar13;
  puVar17 = *(undefined8 **)(param_1 + 0x40);
  for (puVar16 = *(undefined8 **)(param_1 + 0x38); puVar16 != puVar17; puVar16 = puVar16 + 1) {
    (**(code **)(*(long *)*puVar16 + 0xa0))((long *)*puVar16,param_2);
  }
  puVar16 = *(undefined8 **)(param_1 + 0x358);
  puVar17 = *(undefined8 **)(param_1 + 0x360);
  if (((puVar16 != puVar17) &&
      ((**(code **)(*(long *)*puVar16 + 0x30))((long *)*puVar16,&DAT_0485a0a0),
      puVar16 + 1 != puVar17)) &&
     ((**(code **)(*(long *)puVar16[1] + 0x30))((long *)puVar16[1],&DAT_0485a0a0),
     puVar16 + 2 != puVar17)) {
    (**(code **)(*(long *)puVar16[2] + 0x30))((long *)puVar16[2],&DAT_0485a0a0);
    for (puVar16 = puVar16 + 3; puVar16 != puVar17; puVar16 = puVar16 + 1) {
      (**(code **)(*(long *)*puVar16 + 0x30))((long *)*puVar16,&DAT_0485a0a0);
    }
  }
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 800) + 0x38))();
  param3 = PTR_s_CB_Screen_047e11d8;
  puVar6 = PTR_DAT_047d8b70;
  puVar5 = PTR_PTR_047d4508;
  if (*(long *)(param_1 + 0x328) != *(long *)(param_1 + 800)) {
    param4 = 0;
    do {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      snprintf((char *)&local_e0,0x20,"%s%zd",param3,param4);
      FUN_014217b4(&local_108,&local_e0);
      plVar7 = local_108;
      plVar12 = (long *)puVar5;
      plVar4 = (long *)puVar6;
      if (local_108 != (long *)0x0) {
        plVar12 = local_108 + 7;
        plVar4 = local_108 + 6;
      }
      local_100 = *plVar4;
      lStack_f8 = *plVar12;
      if (local_108 == (long *)0x0) {
        local_f0 = 0;
      }
      else {
        local_f0 = local_108[8];
        local_e8 = (long *)0x0;
        (**(code **)(*local_108 + 0x18))(local_108);
      }
      local_e8 = plVar7;
      (**(code **)(**(long **)(*(long *)(param_1 + 800) + param4 * 8) + 0x28))(&local_110);
      uVar8 = (**(code **)(**(long **)(*(long *)(param_1 + 800) + param4 * 8) + 0x30))();
      FUN_00e31eac(param_1 + 0x70,&local_100,&local_110,uVar8);
      if (local_110 != (long *)0x0) {
        plVar12 = local_110 + 5;
        do {
          lVar13 = *plVar12;
          iVar9 = (int)lVar13 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_110 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_01421764;
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      param4 = param4 + 1;
    } while (param4 < (ulong)(*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3));
  }
  plVar12 = (long *)FUN_01887998();
  *(undefined1 *)(*(long *)(*plVar12 + 0x30) + 0x20) = 1;
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 5;
    do {
      lVar13 = *plVar12;
      iVar9 = (int)lVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar13 == 0) {
LAB_01421764:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


