/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014dd224; name: FUN_014dd224
 */


void FUN_014dd224(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = FUN_012e29a0();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_014df110(DAT_04841fa0,"MemoryType::kMain",0,*(undefined8 *)(param_3 + 0x18),
                         *(undefined8 *)(param_1 + 8));
  }
  else {
    uVar3 = FUN_014de260();
  }
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar2 = FUN_012e29a0();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_014df110(DAT_04841fa0,"MemoryType::kIO",1,*(undefined8 *)(param_3 + 0x20),
                         *(undefined8 *)(param_1 + 8));
  }
  else {
    uVar3 = FUN_014de260();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  if (*(code **)(param_1 + 0x200) != (code *)0x0) {
    (**(code **)(param_1 + 0x200))(param_1 + 0x220,param_3);
  }
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar5 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar5;
  FUN_014dedac(&local_88,lVar5 + 0x1d0,param_2);
  *(undefined8 *)(param_1 + 0x80) = local_88;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)local_70;
  *(undefined **)(param_1 + 0x88) = local_80;
  *(undefined8 *)(param_1 + 0x90) = local_78;
  plVar4 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xa0) = local_68;
  *(undefined8 *)(param_1 + 0xa8) = local_60;
  *(undefined8 *)(param_1 + 0xb0) = local_58;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar3 = local_50;
  local_50 = 0;
  *(undefined8 *)(param_1 + 200) = uStack_40;
  *(undefined8 *)(param_1 + 0xd0) = local_38;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = local_48;
  FUN_014de940((undefined8 *)(param_1 + 0x80));
  local_88 = &DAT_e4d07a996e5ef5e8;
  local_80 = &DAT_03c60f6f;
  local_78 = 4;
  local_70 = 0;
  FUN_00f844f4(param_1,&local_88);
  FUN_014de158();
  pcVar6 = *(code **)(param_1 + 0x528);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x538) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    (*pcVar6)(param_1 + 0x540);
  }
  *(code **)(param_1 + 0x520) = FUN_021e9a64;
  *(undefined1 **)(param_1 + 0x528) = &LAB_02b6d6fc;
  *(undefined1 **)(param_1 + 0x530) = &LAB_02b6d700;
  *(long *)(param_1 + 0x540) = param_1;
  *(undefined1 **)(param_1 + 0x538) = &LAB_02b6d70c;
  if (((*PTR_DAT_047dd2e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd9c8,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047dd2f0;
  *(undefined8 *)PTR_DAT_047dd2f8 = uVar3;
  FUN_014dd4a8(uVar3,4,param_1 + 0x510);
  return;
}


