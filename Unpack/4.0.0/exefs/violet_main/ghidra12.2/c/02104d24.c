/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02104d24; name: FUN_02104d24
 */


undefined2 FUN_02104d24(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0107ffe0(param_1 + 0x3c8);
  }
  return uVar1;
}


