/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015492d4; name: FUN_015492d4
 */


void FUN_015492d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_68 [2];
  undefined1 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x97e00,8);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xf200,8);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x97e00,8);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xf200,8);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0xff000,8);
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
  }
  puVar1 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar3 = PTR_DAT_047d4ca8;
  puVar2 = PTR_DAT_047d4ca0;
  uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xfeaa87da;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x5361ceb5;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x44);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x1e505002;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x14c5a101;
  FUN_0154a10c(uVar5,local_68,param_1 + 0x50,&DAT_03d60c88);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x8fab2c4d;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x58);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xb384c24;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x5c);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xea677637;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xd41f4fc4;
  FUN_0154a10c(uVar5,local_68,param_1 + 0x68,&DAT_03d60c8c);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xc0408301;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x70);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xcaabba50;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x74);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x902b64db;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x78);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xf8b14c88;
  FUN_0154a10c(uVar5,local_68,param_1 + 0x80,&DAT_03d60c88);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x6850a672;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x88);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x74077ecd;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x8c);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x83fc126a;
  FUN_01549fa4(uVar5,local_68,param_1 + 0x90);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xbcb6f239;
  FUN_0154a10c(uVar5,local_68,param_1 + 0x98,&DAT_03d60c8c);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0x8bdc8d7d;
  FUN_01549fa4(uVar5,local_68,param_1 + 0xa0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xee46a8f0;
  FUN_01549fa4(uVar5,local_68,param_1 + 0xa4);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xeb9d4871;
  FUN_01549fa4(uVar5,local_68,param_1 + 0xa8);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  local_60 = &DAT_e4d07a996e5ef5e8;
  puStack_58 = &DAT_03c60f6f;
  *(undefined8 *)puVar3 = uVar5;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar5 = FUN_00f844f4(uVar5,&local_60);
  local_68[0] = 0xc90a737b;
  FUN_0154a10c(uVar5,local_68,param_1 + 0xb0,&DAT_03d60c90);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


