/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ab4f4; name: FUN_024ab4f4
 */


void FUN_024ab4f4(undefined8 *param_1,long ****param_2)

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
  FUN_024aba78(uVar1,&local_88,param_2);
  local_38 = param_2;
  if (param_2 == (long ****)0x0) {
    local_38 = (long ****)FUN_024a7940();
  }
  *param_1 = uVar1;
  FUN_024abb44(param_1 + 1,uVar1,param_2,&local_38);
  FUN_024a8204(&local_68,local_60);
  FUN_024a8258(&local_88);
  param_1[2] = *(undefined8 *)*param_1;
  __mutex = (pthread_mutex_t *)(*(code *)(*param_2)[2])(param_2,0x20,0x10);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  pppplVar2 = param_2;
  if (param_2 == (long ****)0x0) {
    pppplVar2 = (long ****)FUN_024a7940();
  }
  param_1[3] = &__mutex->__data;
  local_88 = (long *****)pppplVar2;
  FUN_024abbe8(param_1 + 4,__mutex,param_2,&local_88);
  param_1[5] = param_2;
  return;
}


