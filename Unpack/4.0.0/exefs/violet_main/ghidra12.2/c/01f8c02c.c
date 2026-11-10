/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8c02c; name: FUN_01f8c02c
 */


bool FUN_01f8c02c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00da75d8();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x470) = param_2;
  }
  return lVar1 != 0;
}


