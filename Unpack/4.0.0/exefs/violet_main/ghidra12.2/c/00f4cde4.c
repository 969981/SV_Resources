/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4cde4; name: FUN_00f4cde4
 */


void FUN_00f4cde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  byte local_e8 [16];
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  undefined1 auStack_c0 [24];
  long local_a8;
  char *pcStack_a0;
  long local_98;
  long *local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_70 = *(undefined8 *)(lVar1 + 0x30);
  local_68 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  local_a8 = 0x68c02b659fd52125;
  pcStack_a0 = "Eraser";
  local_98 = 6;
  local_90 = (long *)0x0;
  FUN_00d996a8(auStack_88,param_2,&local_a8);
  FUN_00f4d284(param_1,auStack_88);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  puVar2 = PTR_DAT_047d3e30;
  iVar4 = 0;
  lVar10 = 0;
  do {
    lVar8 = param_1 + lVar10;
    memset((void *)(lVar8 + 0x70),0,0x4c);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)puVar2;
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(puVar2 + 0x10);
    plVar9 = *(long **)(puVar2 + 0x18);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar6 = *(long **)(lVar8 + 0xd8);
    *(long **)(lVar8 + 0xd8) = plVar9;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    std::to_string(iVar4);
    local_d0 = (ulong)local_e8 | 1;
    if ((local_e8[0] & 1) != 0) {
      local_d0 = local_d8;
    }
    FUN_00f4d204(&local_c8,"Param",&local_d0);
    plVar6 = local_c8;
    plVar9 = (long *)PTR_DAT_047d8b70;
    if (local_c8 != (long *)0x0) {
      plVar9 = local_c8 + 6;
    }
    local_a8 = *plVar9;
    plVar9 = (long *)PTR_PTR_047d4508;
    if (local_c8 != (long *)0x0) {
      plVar9 = local_c8 + 7;
    }
    pcStack_a0 = (char *)*plVar9;
    if (local_c8 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = local_c8[8];
      local_90 = (long *)0x0;
      (**(code **)(*local_c8 + 0x18))(local_c8);
    }
    local_90 = plVar6;
    FUN_00d996a8(auStack_c0,param_2,&local_a8);
    FUN_00f4d284((void *)(lVar8 + 0x70),auStack_c0);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    uVar3 = local_d8;
    if (((local_e8[0] & 1) != 0) && (local_d8 != 0)) {
      plVar9 = *(long **)(lVar1 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar7 & 1) != 0) {
        lVar8 = FUN_00c4e600();
        if (0 < *(int *)(lVar8 + 0x12c8)) {
          FUN_00c48fe8(plVar9,uVar3,0,8);
          goto LAB_00f4cfcc;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar3,0,8);
    }
LAB_00f4cfcc:
    lVar10 = lVar10 + 0x70;
    iVar4 = iVar4 + 1;
    if (lVar10 == 0x8c0) {
      *(undefined8 *)(lVar1 + 0x30) = local_70;
      *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_68;
      return;
    }
  } while( true );
}


