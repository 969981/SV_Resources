/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001260a0; name: FUN_001260a0
 */


void FUN_001260a0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (1 < (byte)((*(byte *)(param_2 + 8) & 0xf) - 3)) {
    param_3 = param_2;
  }
  FUN_00125b40(param_1,param_3,"concatenate");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1260cc);
  (*pcVar1)();
}


