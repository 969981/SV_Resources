/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f1d64; name: FUN_014f1d64
 */


void FUN_014f1d64(long param_1)

{
  size_t __n;
  long *__src;
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)&DAT_0486ac70);
  if (DAT_0486ac50 != (long *)0x0) {
    plVar2 = (long *)*DAT_0486ac50;
    __src = (long *)DAT_0486ac50[1];
    if ((plVar2 != __src) && (*plVar2 != param_1)) {
      do {
        plVar2 = plVar2 + 1;
        if (__src == plVar2) {
          plVar2 = __src;
          goto LAB_014f1e38;
        }
      } while (*plVar2 != param_1);
    }
    if (plVar2 != __src) {
      plVar1 = plVar2 + 1;
      if (plVar1 != __src) {
        uVar3 = (long)__src + (-0x10 - (long)plVar2);
        plVar4 = plVar2;
        if (((uint)uVar3 >> 3 & 1) == 0) {
          if (*plVar1 != param_1) {
            plVar4 = plVar2 + 1;
            *plVar2 = *plVar1;
          }
          plVar1 = plVar2 + 2;
        }
        if (7 < uVar3) {
          do {
            plVar2 = plVar4;
            if (*plVar1 != param_1) {
              plVar2 = plVar4 + 1;
              *plVar4 = *plVar1;
            }
            plVar4 = plVar2;
            if (plVar1[1] != param_1) {
              plVar4 = plVar2 + 1;
              *plVar2 = plVar1[1];
            }
            plVar1 = plVar1 + 2;
          } while (plVar1 != __src);
        }
        __src = (long *)DAT_0486ac50[1];
        plVar2 = plVar4;
      }
    }
LAB_014f1e38:
    plVar1 = DAT_0486ac50;
    if (__src != plVar2) {
      __n = DAT_0486ac50[1] - (long)__src;
      if (__n != 0) {
        memmove(plVar2,__src,__n);
      }
      plVar1[1] = (long)plVar2 + __n;
      __src = (long *)DAT_0486ac50[1];
    }
    plVar2 = DAT_0486ac50;
    if (((long *)*DAT_0486ac50 == __src) && (DAT_0486ac50 = (long *)0x0, plVar2 != (long *)0x0)) {
      FUN_0185d190(&DAT_0486ac58,plVar2);
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0486ac70);
  return;
}


