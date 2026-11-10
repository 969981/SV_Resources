/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008013e4; name: FUN_008013e4
 */


long * FUN_008013e4(ushort *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (((int)param_2 < 0) || ((int)(uint)*param_1 <= (int)param_2)) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
  plVar1 = (long *)0x0;
  if (*plVar2 != -1) {
    plVar1 = plVar2;
  }
  return plVar1;
}


