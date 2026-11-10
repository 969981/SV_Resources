/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322cb38; name: FUN_0322cb38
 */


void FUN_0322cb38(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  ThreadType *pTVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
  uVar2 = nn::os::GetThreadId(pTVar1);
  param_1[4] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


