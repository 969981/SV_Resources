/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015744a8; name: FUN_015744a8
 */


undefined8 * FUN_015744a8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = 0x9000000;
  puVar1[1] = 0;
  FUN_01574580(param_1,puVar1);
  return puVar1;
}


