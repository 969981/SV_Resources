/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c7744; name: FUN_001c7744
 */


void FUN_001c7744(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 3;
    nnosLockMutex(*plVar3);
    lVar1 = plVar2[4];
    *(undefined4 *)(plVar2 + 4) = 1;
    nnosUnlockMutex(*plVar3);
    if ((int)lVar1 == 0) {
      FUN_001fabf0();
    }
    else {
      if (*plVar2 != 0) {
        FUN_001fabf4(plVar2);
      }
      FUN_001c7d08(plVar3);
      FUN_001ec308(param_1[4]);
    }
  }
  param_1[4] = 0;
  FUN_001ec308(*param_1);
  *param_1 = 0;
  return;
}


