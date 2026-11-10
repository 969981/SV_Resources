/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fb060; name: FUN_019fb060
 */


long * FUN_019fb060(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (param_2 < 0x21) {
    param_2 = 0x20;
  }
  uVar5 = param_2;
  if ((param_2 & param_2 - 1) != 0) {
    uVar1 = 0x20;
    do {
      uVar5 = uVar1;
      uVar1 = uVar5 << 1;
    } while (uVar5 < param_2);
  }
  if (param_3 < -uVar5 - 0x80) {
    uVar1 = 0x20;
    if (0x16 < param_3) {
      uVar1 = param_3 + 0x17 & 0xfffffffffffffff0;
    }
    uVar3 = FUN_00c61aa0(param_1,uVar1 + uVar5 + 0x18);
    if ((uVar3 != 0) &&
       (((*(byte *)(param_1 + 0x370) >> 1 & 1) == 0 ||
        (iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x378)), iVar2 == 0)))) {
      plVar8 = (long *)(uVar3 - 0x10);
      plVar6 = plVar8;
      if ((uVar5 - 1 & uVar3) != 0) {
        plVar6 = (long *)(((uVar3 + uVar5) - 1 & -uVar5) - 0x10);
        if ((ulong)((long)plVar6 - (long)plVar8) < 0x20) {
          plVar6 = (long *)((long)plVar6 + uVar5);
        }
        uVar5 = (long)plVar6 - (long)plVar8;
        uVar7 = (*(ulong *)(uVar3 - 8) & 0xfffffffffffffff8) - uVar5;
        if ((*(ulong *)(uVar3 - 8) & 3) == 0) {
          *plVar6 = *plVar8 + uVar5;
          plVar6[1] = uVar7;
        }
        else {
          plVar6[1] = uVar7 | plVar6[1] & 1U | 2;
          *(ulong *)((long)plVar6 + uVar7 + 8) = *(ulong *)((long)plVar6 + uVar7 + 8) | 1;
          *(ulong *)(uVar3 - 8) = uVar5 | *(ulong *)(uVar3 - 8) & 1 | 2;
          plVar6[1] = plVar6[1] | 1;
          FUN_00c62d90(param_1,plVar8);
        }
      }
      uVar5 = plVar6[1];
      if (((uVar5 & 3) != 0) && (uVar3 = uVar5 & 0xfffffffffffffff8, uVar1 + 0x20 < uVar3)) {
        plVar6[1] = uVar1 | uVar5 & 1 | 2;
        *(ulong *)((long)plVar6 + uVar1 + 8) = uVar3 - uVar1 | 3;
        *(ulong *)((long)plVar6 + uVar3 + 8) = *(ulong *)((long)plVar6 + uVar3 + 8) | 1;
        FUN_00c62d90(param_1);
      }
      if ((*(byte *)(param_1 + 0x370) >> 1 & 1) == 0) {
        return plVar6 + 2;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x378));
      return plVar6 + 2;
    }
  }
  else if (param_1 != 0) {
    piVar4 = __errno_location();
    *piVar4 = 0xc;
    return (long *)0x0;
  }
  return (long *)0x0;
}


