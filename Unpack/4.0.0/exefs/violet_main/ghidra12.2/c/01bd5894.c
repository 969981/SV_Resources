/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bd5894; name: FUN_01bd5894
 */


void FUN_01bd5894(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    FUN_01bd5a84(param_1 + 8);
    return;
  }
  if ((cVar1 == '\x01') && (*(long **)(param_1 + 8) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01bd58cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x60))();
    return;
  }
  return;
}


