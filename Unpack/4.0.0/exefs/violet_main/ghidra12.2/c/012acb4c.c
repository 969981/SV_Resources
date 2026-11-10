/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012acb4c; name: FUN_012acb4c
 */


void FUN_012acb4c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [104];
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  long *local_30;
  long *local_28;
  
  plVar8 = *(long **)(*(long *)PTR_DAT_047d3a88 + 8);
  local_28 = plVar8;
  (**(code **)(*plVar8 + 0xe0))(plVar8,"PokemonEngine");
  FUN_012ad688(*(undefined8 *)PTR_DAT_047d3920,plVar8);
  FUN_012add74(plVar8);
  FUN_012bcc84(param_1);
  FUN_012ade14(plVar8);
  local_30 = (long *)0x0;
  local_38[0] = 1;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar6;
  FUN_00cf9884(&local_60,uVar6,"message/grammar/");
  plVar8 = local_30;
  local_30 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  local_30 = local_60;
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8ca0;
  *(undefined8 *)PTR_DAT_047d8ca8 = uVar6;
  FUN_012ad548(uVar6,local_28,local_38);
  FUN_012adeb4(local_28);
  if (((*PTR_DAT_047dd000 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd000);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047dd008;
  *(undefined8 *)PTR_DAT_047dd010 = uVar6;
  FUN_012b4054(uVar6,local_28);
  FUN_012ae4fc(local_28,&local_28);
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  *(undefined8 *)PTR_DAT_047d8850 = *(undefined8 *)PTR_DAT_047d8848;
  FUN_012b707c();
  local_40[0] = 7;
  uVar6 = FUN_012ae454(local_28);
  FUN_012b3df8(uVar6,local_40);
  FUN_012adf54(local_28);
  if (((*PTR_DAT_047db110 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047db110), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047db118;
  *(undefined8 *)PTR_DAT_047db120 = uVar6;
  FUN_012ba764(uVar6,local_28);
  (**(code **)(*param_1 + 0x78))(param_1);
  FUN_012adff4(local_28);
  if (((*PTR_DAT_047dda18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dda18), iVar5 != 0))
  {
    FUN_00100190(&LAB_02b6ed80,PTR_DAT_047dda20,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dda18);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047dda20;
  *(undefined8 *)PTR_DAT_047dda28 = uVar6;
  FUN_012b76f4(uVar6,local_28);
  (**(code **)(*param_1 + 0x80))(param_1);
  FUN_012ad430();
  FUN_012ad5b0(local_28);
  local_60 = (long *)0x7850ccbce4baf793;
  pcStack_58 = "pe_TextComponent";
  local_50 = 0x10;
  local_48 = (long *)0x0;
  FUN_012ad75c(&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x25aef58798c0aa6a;
  pcStack_58 = "pe_FlatbuffersDataComponent";
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  FUN_012ad85c(&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = (long *)0x74a2d07136e8ffd0;
  pcStack_58 = "pe_InputEventTriggerComponent";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  local_68 = local_28;
  FUN_012adb5c(&local_60,&local_68);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_012ae094(local_28);
  if (((DAT_04842058 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04842058), iVar5 != 0)) {
    FUN_00100190(&LAB_02b6f1ec,&DAT_04842048,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842058);
  }
  DAT_04842060 = DAT_04842048;
  thunk_FUN_012ad48c(DAT_04842048,local_28);
  FUN_012ae134(local_28);
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  *(undefined8 *)PTR_DAT_047d8928 = *(undefined8 *)PTR_DAT_047d8920;
  FUN_012af358();
  FUN_012ae5a8(local_28,&local_28);
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  *(undefined8 *)PTR_DAT_047d8cd8 = *(undefined8 *)PTR_DAT_047d8cd0;
  FUN_012ba294();
  FUN_012ae1d4(local_28);
  if (((*PTR_DAT_047d88a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d88a8;
  *(undefined8 *)PTR_DAT_047d88b0 = uVar6;
  FUN_012b7a90(uVar6,local_28);
  FUN_012ae274(local_28);
  if (((DAT_04842078 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04842078), iVar5 != 0)) {
    FUN_00100190(&LAB_02b6f26c,&DAT_04842068,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842078);
  }
  DAT_04842080 = DAT_04842068;
  FUN_012ad4e8();
  FUN_012ae314(local_28);
  (**(code **)(*param_1 + 0x88))(param_1);
  FUN_012ae3b4(local_28);
  if (((*PTR_DAT_047dda30 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047dda30), iVar5 != 0))
  {
    FUN_00100190(&LAB_02b6f3c8,PTR_DAT_047dda38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dda30);
  }
  DAT_048420a0 = *(undefined8 *)PTR_DAT_047dda38;
  FUN_012ad42c(DAT_048420a0,local_28);
  puVar1 = PTR_DAT_047d8c00;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  puVar3 = PTR_DAT_047d8c10;
  puVar2 = PTR_DAT_047d8c08;
  lVar7 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar7;
  *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0x119) = 1;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar7 = *(long *)puVar2;
  *(long *)puVar3 = lVar7;
  *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0x118) = 1;
  if (((*PTR_DAT_047d92e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d92e0);
  }
  lVar7 = *(long *)PTR_DAT_047d92e8;
  *(long *)PTR_DAT_047d92f0 = lVar7;
  *(undefined1 *)(*(long *)(lVar7 + 0x28) + 0x128) = 1;
  local_f0 = &LAB_021ebe88;
  local_e8 = FUN_02b6f3d0;
  local_e0 = &LAB_02b6f3d4;
  puStack_d8 = &LAB_02b6f3d8;
  FUN_012ad614(&local_f0);
  pcVar4 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar4)(auStack_d0);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


