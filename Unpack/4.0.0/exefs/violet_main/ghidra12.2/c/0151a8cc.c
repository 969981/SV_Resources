/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0151a8cc; name: FUN_0151a8cc
 */


void FUN_0151a8cc(long *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar13 = *(long **)(param_2 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0151ade8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
  if (plVar9 == (long *)0x0) {
    lVar8 = *plVar13;
LAB_0151ae14:
    (**(code **)(lVar8 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar15 = *(long **)(param_2 + 0x30);
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 5;
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_0151adc0;
  }
  puVar5 = PTR_DAT_047d66f8;
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar12 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  plVar9[1] = lVar12;
  plVar14 = plVar9 + 5;
  *(int *)plVar14 = 0;
  *plVar9 = (long)&PTR_LAB_045d60e0;
  plVar9[4] = (long)&PTR_FUN_045d6130;
  plVar9[6] = (long)&PTR_LAB_045d6160;
  plVar9[7] = 0;
  plVar16 = (long *)plVar15[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0151ade8;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x2a0,8);
  if (puVar11 == (undefined8 *)0x0) {
    lVar8 = *plVar16;
    plVar13 = plVar16;
    goto LAB_0151ae14;
  }
  FUN_00cf38a8(puVar11,plVar15);
  puVar11[2] = puVar11;
  *puVar11 = &DAT_045d6198;
  puVar11[1] = plVar16;
  puVar11[4] = &PTR_LAB_045d61d8;
  *(undefined4 *)(puVar11 + 3) = 0x802a0;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  piVar1 = (int *)(puVar11 + 5);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == -1) {
LAB_0151adc0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  local_68 = 0;
  local_78 = (long *)&DAT_00000220;
  uStack_70 = 0x100;
  FUN_00d560a0(puVar11,&local_78,2,0,0);
  plVar16 = (long *)plVar9[7];
  plVar9[7] = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 5;
    do {
      lVar10 = *plVar2;
      iVar7 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0151ac50;
  }
  plVar16 = plVar15 + 5;
  plVar9[7] = (long)puVar11;
  do {
    lVar10 = *plVar16;
    iVar7 = (int)lVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *(int *)plVar16 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  else if ((int)lVar10 == 0) goto LAB_0151ac50;
  *(undefined4 *)(plVar9 + 3) = 0x80040;
  plVar9[1] = (long)plVar13;
  plVar9[2] = (long)plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *param_1 = (long)plVar9;
  do {
    lVar8 = *plVar14;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *(int *)plVar14 = (int)lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar8 == -1) goto LAB_0151adc0;
  lVar8 = *param_1;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) goto LAB_0151adc0;
  }
  plVar13 = *(long **)(param_2 + 0x210);
  *(long *)(param_2 + 0x210) = lVar8;
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0151ac50;
  }
  *(undefined4 *)(param_2 + 0x218) = param_3;
  plVar13 = *(long **)(param_2 + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 5;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) goto LAB_0151adc0;
  }
  param_1 = (long *)*param_1;
  uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x30))(&local_78,param_1);
  FUN_00c4b998(plVar13,param_3,uVar6,&local_78);
  if (local_78 != (long *)0x0) {
    plVar9 = local_78 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0151ac50;
  }
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar8 == 0) {
LAB_0151ac50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


