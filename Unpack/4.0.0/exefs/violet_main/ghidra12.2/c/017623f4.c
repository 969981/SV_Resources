/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017623f4; name: FUN_017623f4
 */


undefined8 FUN_017623f4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x38);
  }
  return *puVar1;
}


