/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01604b90; name: FUN_01604b90
 */


void FUN_01604b90(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_18;
  
  FUN_01604d90();
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_0457f710;
  param_1[6] = &PTR_LAB_0457f7b8;
  param_1[4] = &PTR_LAB_0457f770;
  param_1[5] = &PTR_LAB_0457f790;
  param_1[0xc] = 0xfffffffffffffff;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x11] = 0xfffffffffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0xaaaaaaaaaaaaaaa;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0xaaaaaaaaaaaaaaa;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x23] = &PTR_FUN_0457f7e0;
  param_1[0x24] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2b),false,0);
  param_1[0x2f] = 0;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0))
  {
    local_18 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar3 = *(long **)PTR_DAT_047d8c30;
  param_1[0x30] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[0x35] = 0x1fffffffffffffff;
  param_1[0x36] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x41] = 0x249249249249249;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = param_2;
  param_1[0x49] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = param_2;
  param_1[0x4e] = 0xfffffffffffffff;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x3b] = param_2;
  param_1[0x3c] = 0x249249249249249;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  param_1[0x53] = 0x41f0000040a00000;
  param_1[0x54] = 0xa42480000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_2;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_2;
  return;
}


