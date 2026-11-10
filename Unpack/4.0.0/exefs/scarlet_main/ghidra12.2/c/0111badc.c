/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111badc; name: FUN_0111badc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0111badc(undefined8 *param_1,byte param_2,byte param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  FUN_00d1a240(param_1,0x800c8080);
  *param_1 = &DAT_04600c08;
  param_1[4] = &PTR_LAB_04600da8;
  param_1[5] = &DAT_04600ed0;
  param_1[6] = &PTR_LAB_04600f28;
  plVar4 = param_1 + 7;
  *plVar4 = (long)&PTR_LAB_04600f50;
  param_1[0x24] = &PTR_LAB_04600f88;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x25),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x29),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x31),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x35),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x39),false,0);
  param_1[0x3f] = 0;
  param_1[0x40] = param_1[1];
  param_1[0x47] = param_1[1];
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0x1745d1745d1745d;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0x666666666666666;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_0111bcf0(param_1 + 0x53);
  FUN_0111bcf0(param_1 + 0x5a);
  param_1[99] = 0xffffffffffffffff;
  uVar3 = _UNK_03caa5b8;
  uVar2 = _DAT_03caa5b0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = uVar3;
  param_1[0x68] = uVar2;
  uVar3 = _UNK_03cabe68;
  uVar2 = _DAT_03cabe60;
  param_1[0x61] = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(byte *)((long)param_1 + 0x321) = param_3 & 1;
  *(undefined1 *)((long)param_1 + 0x322) = 0;
  *(byte *)((long)param_1 + 0x323) = param_2 & 1;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6b] = uVar3;
  param_1[0x6a] = uVar2;
  FUN_0111c03c(param_1 + 0x3d,4);
  FUN_0111be2c(param_1 + 0x44,2);
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 0x59) == '\n')) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0xa00;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar4);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,uVar1);
  return;
}


