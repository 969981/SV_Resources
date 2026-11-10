/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01245ac0; name: FUN_01245ac0
 */


uint FUN_01245ac0(undefined8 param_1,uint param_2)

{
  if ((param_2 & 0xff) < 9) {
    return 0x1e1U >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}


