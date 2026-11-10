/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dd0d8; name: FUN_029dd0d8
 */


bool FUN_029dd0d8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)**(long **)*param_1;
  plVar1 = (long *)(*(long **)*param_1)[1];
  if ((plVar2 != plVar1) && (*(long *)(*plVar2 + 0x1d0) != *(long *)(*param_2 + 0x1d0))) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        plVar2 = plVar1;
        goto LAB_029dd104;
      }
    } while (*(long *)(*plVar2 + 0x1d0) != *(long *)(*param_2 + 0x1d0));
  }
LAB_029dd104:
  return plVar1 != plVar2;
}


