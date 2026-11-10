/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f48a4; name: FUN_001f48a4
 */


void FUN_001f48a4(long param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    return;
  }
  FUN_001f45b0(param_2,**(undefined8 **)(param_1 + 0x10));
  return;
}


