/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1216c; name: FUN_00c1216c
 */


void FUN_00c1216c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  long *plVar3;
  
  param_1[4] = 0;
  *param_1 = &PTR_LAB_0455c5c8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  __mutex = (pthread_mutex_t *)(**(code **)(*plVar3 + 0x10))(plVar3,0x20,8);
  param_1[5] = &__mutex->__data;
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_0455c658;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  FUN_00c18e44();
  param_1[10] = param_2;
  return;
}


