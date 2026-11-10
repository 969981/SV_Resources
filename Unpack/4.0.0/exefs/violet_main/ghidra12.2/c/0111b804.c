/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111b804; name: FUN_0111b804
 */


void FUN_0111b804(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_28;
  
  FUN_0111badc(param_1,1,0);
  *param_1 = &DAT_04601588;
  param_1[4] = &PTR_LAB_04601728;
  param_1[5] = &DAT_04601850;
  param_1[6] = &PTR_LAB_046018a8;
  plVar5 = param_1 + 7;
  *plVar5 = (long)&PTR_LAB_046018d0;
  param_1[0x24] = &PTR_LAB_04601908;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x7f] = param_1[1];
  param_1[0x7d] = 0;
  param_1[0x80] = 0xaaaaaaaaaaaaaaa;
  FUN_0111c28c(param_1 + 0x83,param_3);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x85),false,0);
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0x7ffffffffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  param_1[0x8b] = param_1[1];
  param_1[0x90] = param_1[1];
  param_1[0x91] = 0x7ffffffffffffff;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x96),false,0);
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0x555555555555555;
  param_1[0x9f] = 0;
  param_1[0x9d] = param_1[1];
  *(undefined4 *)(param_1 + 0xa0) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xa1),false,0);
  param_1[0xa8] = 0x3ffffffffffffff;
  param_1[0xad] = 0x3ffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x594) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xa7] = param_1[1];
  param_1[0xac] = param_1[1];
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xb2) = 0x100;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb3),false,0);
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  FUN_00daf940(param_1 + 0xe8,param_4);
  *(undefined1 *)(param_1 + 0xe9) = 0;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_28 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar4 = *(long **)PTR_DAT_047d8c30;
  param_1[0xea] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\x05')) {
    uVar1 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x500;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar5);
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,uVar1);
  }
  if ((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) {
    FUN_0119039c(param_1 + 0x7c,param_2);
  }
  return;
}


