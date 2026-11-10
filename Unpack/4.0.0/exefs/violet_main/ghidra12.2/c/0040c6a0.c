/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040c6a0; name: FUN_0040c6a0
 */


uint FUN_0040c6a0(long param_1)

{
  uint *puVar1;
  
  if ((*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) ||
     (puVar1 = (uint *)**(undefined8 **)(param_1 + 0x18), puVar1 == (uint *)0x0)) {
    return 0;
  }
  return (*puVar1 >> 2 ^ 0xffffffff) & 1;
}


