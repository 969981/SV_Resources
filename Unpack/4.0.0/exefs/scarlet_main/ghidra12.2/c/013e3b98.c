/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e3b98; name: FUN_013e3b98
 */


void FUN_013e3b98(undefined8 *param_1,ushort param_2)

{
  undefined2 uVar1;
  long *plVar2;
  undefined8 local_48;
  char acStack_40 [16];
  
  FUN_00d1a240(param_1,0x800c8080);
  *param_1 = &PTR_FUN_0457fd78;
  param_1[4] = &PTR_LAB_0457fec0;
  param_1[5] = &DAT_0457ffe8;
  param_1[6] = &PTR_LAB_04580040;
  plVar2 = param_1 + 7;
  *plVar2 = (long)&PTR_LAB_04580068;
  param_1[0x28] = 0;
  param_1[0x29] = param_1[1];
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2a] = 0xaaaaaaaaaaaaaaa;
  param_1[0x2b] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2e),false,0);
  param_1[0x32] = 0;
  param_1[0x33] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x36) = 100;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined2 *)((long)param_1 + 0x1bc) = 0x100;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x38),false,0);
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\n')) {
    uVar1 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0xa00;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar2);
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  }
  snprintf(acStack_40,0x10,"PLAY_PV_%04hu",param_2);
  FUN_013e3cf8(&local_48,acStack_40);
  plVar2 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  param_1[0x32] = local_48;
  return;
}


