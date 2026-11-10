/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb162c; name: FUN_00bb162c
 */


void FUN_00bb162c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  (*(code *)param_1[1])();
  if ((param_1 == (long *)0x0) || ((char)lVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bb1664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


