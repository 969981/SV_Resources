/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b77294; name: FUN_00b77294
 */


int FUN_00b77294(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  pthread_mutex_t *__mutex;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = std::__next_prime(3);
  uVar7 = param_1[1];
  if (uVar7 < uVar3) {
    uVar4 = uVar3;
LAB_00b772d8:
    FUN_00baa9d0(param_1,uVar4);
  }
  else if (uVar3 < uVar7) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) ||
       (uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
       uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
       1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar4 = std::__next_prime(uVar4);
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 < uVar7) goto LAB_00b772d8;
  }
  FUN_00b77524(param_1 + 5);
  FUN_00b77524(param_1 + 10);
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  uVar3 = std::__next_prime(3);
  uVar7 = param_1[0x10];
  if (uVar7 <= uVar3 && uVar3 != uVar7) {
    uVar4 = uVar3;
  }
  else {
    if (uVar7 <= uVar3) goto LAB_00b77458;
    uVar4 = (ulong)((float)(ulong)param_1[0x12] / *(float *)(param_1 + 0x13));
    if ((uVar7 < 3) ||
       (uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555),
       uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
       1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar4 = std::__next_prime(uVar4);
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar7 <= uVar4) goto LAB_00b77458;
  }
  FUN_00bac7c0(param_1 + 0xf,uVar4);
LAB_00b77458:
  FUN_00b7761c(param_1 + 0x14);
  FUN_00b7761c(param_1 + 0x19);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar1 = tpidr_el0;
  plVar6 = *(long **)(lVar1 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  __mutex = (pthread_mutex_t *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
  param_1[0x24] = &__mutex->__data;
  iVar2 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  return iVar2;
}


