/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111b1ec; name: FUN_0111b1ec
 */


undefined8 FUN_0111b1ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (((*(char *)(param_1 + 0xa0) == '\0') &&
      ((*(long *)(param_1 + 0x88) == 0 || (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) == 0)))) ||
     (plVar2 = *(long **)(param_1 + 0x98), plVar2 == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0111b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x41,param_2);
  return uVar1;
}


