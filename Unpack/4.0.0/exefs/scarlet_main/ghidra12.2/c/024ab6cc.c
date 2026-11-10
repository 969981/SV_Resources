/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ab6cc; name: FUN_024ab6cc
 */


void FUN_024ab6cc(undefined8 *param_1,long ****param_2)

{
  undefined8 uVar1;
  pthread_mutex_t *__mutex;
  long ****pppplVar2;
  long *****local_88;
  long *****ppppplStack_80;
  undefined8 local_78;
  long ****pppplStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  long ****local_58;
  undefined8 uStack_50;
  long ****local_38;
  
  uVar1 = (*(code *)(*param_2)[2])(param_2,0x20,0x10);
  pppplStack_70 = param_2;
  if (param_2 == (long ****)0x0) {
    pppplStack_70 = (long ****)FUN_024a7940();
  }
  local_88 = (long *****)&local_88;
  local_78 = 0;
  local_58 = param_2;
  ppppplStack_80 = local_88;
  if (param_2 == (long ****)0x0) {
    local_58 = (long ****)FUN_024a7940();
  }
  local_68 = &local_60;
  uStack_50 = 0;
  local_60 = 0;
  FUN_024ac050(uVar1,&local_88,param_2);
  local_38 = param_2;
  if (param_2 == (long ****)0x0) {
    local_38 = (long ****)FUN_024a7940();
  }
  *param_1 = uVar1;
  FUN_024ac11c(param_1 + 1,uVar1,param_2,&local_38);
  FUN_024a98cc(&local_68,local_60);
  FUN_024a9920(&local_88);
  param_1[2] = *(undefined8 *)*param_1;
  __mutex = (pthread_mutex_t *)(*(code *)(*param_2)[2])(param_2,0x20,0x10);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  pppplVar2 = param_2;
  if (param_2 == (long ****)0x0) {
    pppplVar2 = (long ****)FUN_024a7940();
  }
  param_1[3] = &__mutex->__data;
  local_88 = (long *****)pppplVar2;
  FUN_024ac1c0(param_1 + 4,__mutex,param_2,&local_88);
  param_1[5] = param_2;
  return;
}


