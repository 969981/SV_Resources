/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574698; name: FUN_01574698
 */


undefined1 * FUN_01574698(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = operator_new(0x14);
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0x38d1b7173f4ccccd;
  *(undefined8 *)(puVar1 + 0xc) = 0x3f3333333f6b851f;
  FUN_01574824(param_1,puVar1);
  return puVar1;
}


