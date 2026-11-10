/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d8a70; name: FUN_001d8a70
 */


void FUN_001d8a70(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 0xef8);
  if (plVar2 != (long *)0x0) {
    if (plVar2[1] == param_2) {
      plVar3 = (long *)0x0;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
        if (plVar2 == (long *)0x0) goto LAB_001d8ad0;
      } while (plVar2[1] != param_2);
    }
    plVar1 = (long *)(param_1 + 0xef8);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3;
    }
    *plVar1 = *plVar2;
    FUN_001ec308();
  }
LAB_001d8ad0:
  *(undefined8 *)(param_2 + 0xee8) = 0;
  *(ulong *)(param_2 + 0xf40) = *(ulong *)(param_2 + 0xf40) & 0xffefffffffffffff;
  return;
}


