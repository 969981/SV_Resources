/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d2210; name: FUN_017d2210
 */


void FUN_017d2210(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00cd0d38(param_1,0x10000);
  *param_1 = &PTR_LAB_045a86f0;
  param_1[4] = &PTR_LAB_045a87a0;
  param_1[5] = &DAT_045a87f0;
  param_1[0x6c] = *param_2;
  param_1[0x6d] = param_2[1];
  param_1[0x6e] = param_2[2];
  plVar2 = (long *)param_2[3];
  param_1[0x6f] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  uVar1 = *param_3;
  uVar4 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(param_1 + 0x73) = *(undefined4 *)(param_3 + 3);
  param_1[0x72] = uVar3;
  param_1[0x71] = uVar4;
  param_1[0x70] = uVar1;
  param_1[0x74] = param_3[4];
  param_1[0x75] = param_3[5];
  param_1[0x76] = param_3[6];
  plVar2 = (long *)param_3[7];
  param_1[0x77] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  uVar1 = param_3[9];
  uVar4 = param_3[10];
  param_1[0x78] = param_3[8];
  param_1[0x7a] = uVar4;
  param_1[0x79] = uVar1;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x7c),false,0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  return;
}


