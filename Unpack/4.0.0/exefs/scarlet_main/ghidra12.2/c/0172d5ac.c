/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172d5ac; name: FUN_0172d5ac
 */


long FUN_0172d5ac(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(*param_1 + param_2 * 8);
  if ((plVar3 == (long *)0x0) || (plVar3 = (long *)*plVar3, plVar3 == (long *)0x0)) {
    return 0;
  }
  uVar4 = param_1[1];
  if ((uVar4 & uVar4 - 1) == 0) {
    lVar2 = 0;
    do {
      if ((plVar3[1] & uVar4 - 1) != param_2) {
        return lVar2;
      }
      plVar3 = (long *)*plVar3;
      lVar2 = lVar2 + 1;
    } while (plVar3 != (long *)0x0);
  }
  else {
    lVar2 = 0;
    do {
      uVar5 = plVar3[1];
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar1 * uVar4;
      }
      if (uVar5 != param_2) {
        return lVar2;
      }
      plVar3 = (long *)*plVar3;
      lVar2 = lVar2 + 1;
    } while (plVar3 != (long *)0x0);
  }
  return lVar2;
}


