/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c3658; name: FUN_016c3658
 */


void FUN_016c3658(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_00cd0d38(param_1,0x10000);
  *param_1 = &PTR_LAB_045a8848;
  param_1[0x6c] = param_2;
  param_1[4] = &PTR_LAB_045a88f8;
  param_1[5] = &DAT_045a8948;
  plVar2 = (long *)*param_3;
  param_1[0x6d] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x6e] = param_3[1];
  param_1[0x6f] = param_3[2];
  param_1[0x70] = param_3[3];
  plVar2 = (long *)param_3[4];
  param_1[0x71] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  lVar1 = param_3[5];
  *(undefined4 *)(param_1 + 0x73) = 1;
  *(int *)(param_1 + 0x72) = (int)lVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x74),false,0);
  return;
}


