/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b2ba0; name: FUN_012b2ba0
 */


void FUN_012b2ba0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_012b2de4();
  uVar2 = param_1[1];
  *param_1 = &PTR_FUN_045abec8;
  param_1[4] = &PTR_LAB_045abef8;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = uVar2;
  param_1[9] = 0x5f417d05f417d0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x1f] = 0xfffffffffffffff;
  param_1[0x20] = 0;
  param_1[0x24] = 0xfffffffffffffff;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = uVar2;
  param_1[0x22] = 0;
  param_1[0x23] = uVar2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x29),false,0);
  param_1[0x50] = 0;
  param_1[0x2e] = 0x3f00000000;
  param_1[0x2f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x54,0,1);
  pcVar1 = (code *)param_1[0xd];
  if (pcVar1 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar1)(param_1 + 0x10);
  }
  param_1[0xc] = &LAB_00e1e8a0;
  param_1[0xd] = &LAB_02b78acc;
  param_1[0xe] = &LAB_02b78ad0;
  param_1[0xf] = &LAB_02b78ad4;
  FUN_012b2cdc(param_1 + 0x1c,(long)(64.0 / *(float *)(param_1 + 0x28)));
  return;
}


