/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049e7b0; name: FUN_0049e7b0
 */


long * FUN_0049e7b0(code *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
                    /* try { // try from 0049e7c0 to 0049e7c3 has its CatchHandler @ 0049e7dc */
  plVar1 = (long *)(*param_1)(param_2 + 0x10);
  plVar2 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 2;
    *plVar1 = param_2;
  }
  return plVar2;
}


