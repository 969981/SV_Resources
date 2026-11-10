/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c32f7c; name: FUN_00c32f7c
 */


int FUN_00c32f7c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  pthread_mutex_t *__mutex;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_0455c820;
  param_1[1] = 0;
  lVar1 = tpidr_el0;
  plVar4 = *(long **)(lVar1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  puVar3[2] = 0;
  puVar3[3] = 0;
  param_1[3] = puVar3;
  plVar4 = *(long **)(lVar1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  __mutex = (pthread_mutex_t *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,8);
  param_1[4] = &__mutex->__data;
  iVar2 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  return iVar2;
}


