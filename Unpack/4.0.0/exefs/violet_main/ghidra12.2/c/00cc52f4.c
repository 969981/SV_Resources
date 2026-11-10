/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc52f4; name: FUN_00cc52f4
 */


void FUN_00cc52f4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long local_c8;
  long *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  long *local_a8;
  undefined1 auStack_a0 [96];
  
  thunk_FUN_00cc5970();
  uVar12 = *param_1;
  FUN_00cc5afc(&local_c0,uVar12);
  FUN_00cc5df8();
  DAT_0485a0a0 = local_c0;
  FUN_00ccb2e4(local_c0,param_1 + 5);
  thunk_FUN_00cc63b8(uVar12);
  FUN_00cc59b0(&local_c0,uVar12,&DAT_0485a0a0);
  plVar11 = local_c0;
  lVar9 = (long)DAT_0485a0a8;
  local_c0 = (long *)0x0;
  DAT_0485a0a8 = plVar11;
  if (lVar9 == 0) {
    DAT_0485a0b0 = local_b8;
    DAT_0485a0b8 = local_b0;
    DAT_0485a0c0 = local_a8;
    local_c0 = (long *)0x0;
  }
  else {
    FUN_0271ce10(&DAT_0485a0b0);
    plVar11 = local_c0;
    local_c0 = (long *)0x0;
    DAT_0485a0c0 = local_a8;
    DAT_0485a0b0 = local_b8;
    DAT_0485a0b8 = local_b0;
    if (plVar11 != (long *)0x0) {
      FUN_0271ce10(&local_b8);
    }
  }
  FUN_00cc58c4(DAT_0485a0a8);
  local_c0 = (long *)&LAB_02bb7240;
  local_b8 = FUN_02bb72a4;
  local_b0 = &LAB_02bb72a8;
  local_a8 = (long *)&LAB_02bb72ac;
  FUN_00cc5e6c(&local_c0);
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(auStack_a0);
  }
  FUN_00cd4d44();
  FUN_00cc5b70(&local_c0,uVar12);
  FUN_00cc5ee0();
  DAT_0485a0c8 = local_c0;
  FUN_00cc5bdc(&local_c0,uVar12);
  FUN_00cc5f54();
  DAT_0485a0d0 = local_c0;
  FUN_00cc5c48(&local_c0,uVar12);
  FUN_00cc5fc8();
  DAT_0485a0d8 = local_c0;
  FUN_00cc59f8(&local_c0,uVar12,local_c0 + 7);
  plVar11 = local_c0;
  lVar9 = (long)DAT_0485a100;
  local_c0 = (long *)0x0;
  DAT_0485a100 = plVar11;
  if (lVar9 == 0) {
    DAT_0485a108 = local_b8;
    DAT_0485a110 = local_b0;
    DAT_0485a118 = (undefined1 *)local_a8;
    local_c0 = (long *)0x0;
  }
  else {
    FUN_0271d1ec(&DAT_0485a108);
    plVar11 = local_c0;
    local_c0 = (long *)0x0;
    DAT_0485a118 = (undefined1 *)local_a8;
    DAT_0485a108 = local_b8;
    DAT_0485a110 = local_b0;
    if (plVar11 != (long *)0x0) {
      FUN_0271d1ec(&local_b8);
    }
  }
  (**(code **)(*DAT_0485a100 + 0x10))();
  FUN_00cc5cb4(&local_c0,uVar12);
  FUN_00cc603c();
  DAT_0485a0e0 = local_c0;
  FUN_00cc6920();
  FUN_00cc5d20(&local_c0,uVar12,(long)param_1 + 0xa4,DAT_0485a0d8 + 7);
  FUN_00cc60b0();
  DAT_0485a0f0 = local_c0;
  FUN_00cc58bc();
  lVar9 = FUN_00cc6fc4(uVar12);
  local_c8 = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_c0 = DAT_0485a0f8;
  DAT_0485a0f8 = (long *)0x0;
  FUN_00cc5904(&local_c0);
  local_c8 = 0;
  DAT_0485a0f8 = (long *)lVar9;
  FUN_00cc5904(&local_c8);
  FUN_00cc5d8c(&local_c0,uVar12);
  FUN_00cc6124();
  DAT_0485a0e8 = local_c0;
  FUN_00cc6458(uVar12);
  if (((*PTR_DAT_047e0da8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047e0ec8,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0da8);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047e0db0;
  *(undefined8 *)PTR_DAT_047e0db8 = uVar10;
  FUN_00cd58c8(uVar10,&DAT_0485a0d0);
  FUN_00cc64f8(uVar12);
  if (((*PTR_DAT_047e0ea0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0ea0), iVar8 != 0))
  {
    FUN_00100190(&LAB_02bb7238,PTR_DAT_047e0ea8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0ea0);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047e0ea8;
  *(undefined8 *)PTR_DAT_047e0eb0 = uVar10;
  FUN_00cc58d0(uVar10,&DAT_0485a0d0,&DAT_0485a0c8);
  FUN_00cc6598(uVar12);
  puVar4 = PTR_DAT_047d8d80;
  if (((*PTR_DAT_047d8d80 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  puVar6 = PTR_DAT_047d8d90;
  puVar5 = PTR_DAT_047d8d88;
  *(undefined8 *)PTR_DAT_047d8d90 = *(undefined8 *)PTR_DAT_047d8d88;
  FUN_00cc6280();
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_00cc631c();
  FUN_00cc6198(&local_c0,uVar12);
  FUN_00cc620c();
  DAT_0485a098 = local_c0;
  plVar11 = (long *)(**(code **)(local_c0[6] + 0x30))();
  local_c0 = (long *)0xb7f64d13d0327f0f;
  local_b8 = (code *)PTR_s_AvailableShadowCascades_047e0eb8;
  local_b0 = (undefined1 *)0x1f;
  local_a8 = (long *)0x0;
  (**(code **)(*plVar11 + 0x30))(plVar11,&local_c0,*(undefined4 *)(param_1 + 0x14));
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  plVar11 = (long *)(**(code **)(DAT_0485a098[6] + 0x30))();
  local_c0 = (long *)0xd11dc1e0c2a5f6a3;
  local_b8 = (code *)PTR_s_ShadowResolution_047e0ec0;
  local_b0 = (undefined1 *)0x1f;
  local_a8 = (long *)0x0;
  (**(code **)(*plVar11 + 0x30))(plVar11,&local_c0,*(undefined4 *)((long)param_1 + 0x9c));
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  (**(code **)(DAT_0485a098[6] + 0x10))(DAT_0485a098 + 6,&DAT_0485a0a0);
  return;
}


