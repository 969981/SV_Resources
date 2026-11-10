/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148fefc; name: FUN_0148fefc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0148fefc(undefined8 *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  
  FUN_00d1a240(param_1,0x800c8080);
  *param_1 = &DAT_04600c08;
  param_1[4] = &PTR_LAB_04600da8;
  param_1[5] = &DAT_04600ed0;
  param_1[6] = &PTR_LAB_04600f28;
  plVar8 = param_1 + 7;
  *plVar8 = (long)&PTR_LAB_04600f50;
  param_1[0x24] = &PTR_LAB_04600f88;
  bVar6 = true;
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
  param_1[0x61] = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    if (uVar7 == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = *(char *)((long)param_2 + uVar7) != '\0';
    }
  }
  *(bool *)(param_1 + 0x62) = bVar6;
  *(undefined1 *)((long)param_1 + 0x311) = 0;
  param_1[99] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 100) = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    bVar6 = false;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    bVar6 = false;
    if (uVar7 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar7) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x321) = bVar6;
  *(undefined1 *)((long)param_1 + 0x322) = 0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar7 == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = *(char *)((long)param_2 + uVar7) != '\0';
  }
  *(bool *)((long)param_1 + 0x323) = bVar6;
  uVar5 = _UNK_03cabe68;
  uVar4 = _DAT_03cabe60;
  uVar3 = _UNK_03caa5b8;
  uVar2 = _DAT_03caa5b0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = uVar3;
  param_1[0x68] = uVar2;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6b] = uVar5;
  param_1[0x6a] = uVar4;
  FUN_0111c03c(param_1 + 0x3d,4);
  FUN_0111be2c(param_1 + 0x44,2);
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 0x59) == '\n')) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0xa00;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar8);
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,uVar1);
  return;
}


