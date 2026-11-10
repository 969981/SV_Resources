/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c255c; name: FUN_029c255c
 */


void FUN_029c255c(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 >> 0x3e != 0) {
    FUN_029c2580();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x29c2578);
    (*pcVar1)();
  }
  operator_new(param_1 << 2);
  return;
}


