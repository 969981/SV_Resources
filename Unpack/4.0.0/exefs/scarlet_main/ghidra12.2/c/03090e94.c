/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03090e94; name: FUN_03090e94
 */


void FUN_03090e94(long *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  code *pcVar3;
  undefined8 local_18;
  
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_047e5008;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[0x2b] = -0x8000000000000000;
  param_1[0x2f] = -1;
  param_1[0xf] = -0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = -0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = -0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = -0x8000000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = -0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = -0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = -0x8000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = -0x8000000000000000;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = -0x8000000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = -0x8000000000000000;
  param_1[0x33] = (long)&DAT_03d7702c;
  puVar1 = PTR_DAT_047d1a08;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_18 = 0x20;
  pMVar2 = (MutexType *)(**(code **)puVar1)(0,&local_18,0);
  pcVar3 = *(code **)(puVar1 + 0x10);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pMVar2,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar2,true,0);
  param_1[0x35] = (long)pMVar2;
  return;
}


