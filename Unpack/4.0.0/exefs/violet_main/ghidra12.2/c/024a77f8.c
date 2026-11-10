/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a77f8; name: FUN_024a77f8
 */


void FUN_024a77f8(ulong param_1)

{
  code *pcVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
    FUN_024a6ed0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x24a7824);
    (*pcVar1)();
  }
  operator_new(param_1 * 0x18);
  return;
}


