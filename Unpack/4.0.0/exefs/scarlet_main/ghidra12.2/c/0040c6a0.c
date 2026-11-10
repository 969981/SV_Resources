/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


