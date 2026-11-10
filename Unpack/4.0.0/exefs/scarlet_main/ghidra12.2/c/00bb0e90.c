/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb0e90; name: FUN_00bb0e90
 */


int FUN_00bb0e90(uint *param_1)

{
  char *param5;
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  pthread_mutex_t *__mutex;
  ulong uVar6;
  long *plVar7;
  FILE *param0;
  
  if (*param_1 == 3) {
    uVar6 = 3;
  }
  else {
    if ((DAT_0483a6b0 != 2) && (DAT_0483a6b0 != 2)) {
      do {
        lVar3 = DAT_0483a6b0;
        if (DAT_0483a6b0 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x483a6b0,0x10);
        if (bVar2) {
          DAT_0483a6b0 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar3 == 0) {
        lVar3 = tpidr_el0;
        plVar7 = *(long **)(lVar3 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,8,8);
        plVar7 = *(long **)(lVar3 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        __mutex = (pthread_mutex_t *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
        *puVar5 = &__mutex->__data;
        pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
        DAT_0483a6b8 = puVar5;
        FUN_00bb0860(&LAB_00bb0510);
        DAT_0483a6b0 = 2;
      }
      else {
        while (lVar3 == 1) {
          sched_yield();
          lVar3 = DAT_0483a6b0;
        }
      }
    }
    puVar5 = DAT_0483a6b8;
    FUN_00bb1344(DAT_0483a6b8);
    FUN_00bb14b8(puVar5);
    uVar6 = (ulong)*param_1;
  }
  param0 = *(FILE **)PTR_stderr_047cb8b8;
  param5 = (char *)((long)param_1 + 0x19);
  if ((param_1[6] & 1) != 0) {
    param5 = *(char **)(param_1 + 10);
  }
  fprintf(param0,"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_0455a4a8)[uVar6],*(char **)(param_1 + 2),
          param_1[4],param5);
  iVar4 = fflush(param0);
  if (*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar4;
}


