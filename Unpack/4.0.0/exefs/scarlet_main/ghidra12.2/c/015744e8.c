/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015744e8; name: FUN_015744e8
 */


undefined8 * FUN_015744e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *(undefined2 *)(puVar1 + 2) = 0;
  *puVar1 = 0x10000;
  puVar1[1] = 0x40000;
  FUN_01574768(param_1,puVar1);
  return puVar1;
}


