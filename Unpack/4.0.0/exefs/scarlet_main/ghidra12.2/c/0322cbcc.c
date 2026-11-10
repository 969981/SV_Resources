/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322cbcc; name: FUN_0322cbcc
 */


void FUN_0322cbcc(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  ThreadType *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
  uVar2 = nn::os::GetThreadId(pTVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar3 = param_1 + 10;
  *(undefined1 *)puVar3 = 0;
  *param_1 = puVar3;
  param_1[1] = 0x10000000000;
  param_1[4] = uVar2;
  param_1[5] = puVar3;
  return;
}


