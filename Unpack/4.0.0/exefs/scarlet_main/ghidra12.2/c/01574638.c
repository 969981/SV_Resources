/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574638; name: FUN_01574638
 */


undefined8 * FUN_01574638(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = 0x2000000;
  puVar1[1] = 0x30000000;
  puVar1[2] = 0x6000000;
  puVar1[3] = 0x4000000;
  puVar1[4] = 0x4000000;
  puVar1[5] = 0x40000000;
  puVar1[6] = 0x6000000;
  puVar1[7] = 0x4000000;
  puVar1[8] = 0x4000000;
  puVar1[9] = 0;
  FUN_01574bf0(param_1,puVar1);
  return puVar1;
}


