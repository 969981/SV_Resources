/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222b634; name: FUN_0222b634
 */


bool FUN_0222b634(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    lVar2 = 0;
  }
  else {
    plVar1 = (long *)(**(code **)(*(long *)*param_1 + 0x38))();
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      do {
        lVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
        if (lVar2 != 0) goto LAB_0222b6ac;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1);
      } while (plVar1 != (long *)0x0);
      lVar2 = 0;
    }
  }
LAB_0222b6ac:
  return lVar2 != 0;
}


