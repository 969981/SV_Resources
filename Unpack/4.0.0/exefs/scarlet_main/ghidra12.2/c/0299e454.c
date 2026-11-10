/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e454; name: FUN_0299e454
 */


long FUN_0299e454(long param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  undefined8 local_50;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  plVar2 = (long *)(param_1 + 0x68);
  *plVar2 = *plVar2 + 1;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_b0);
    local_b8 = param_2[3];
    local_c8 = (code *)param_2[1];
    local_d0 = *param_2;
    local_c0 = param_2[2];
  }
  local_50 = param_3;
  FUN_029a08c8(param_1,plVar2,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  lVar3 = *plVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return lVar3;
}


