/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9894; name: FUN_001f9894
 */


undefined8 FUN_001f9894(long param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xe4) & (param_2 ^ 0xff);
  *(byte *)(param_1 + 0xe4) = bVar1;
  if ((bVar1 & 0xc) == 0) {
    uVar2 = FUN_001f9a90(*(undefined8 *)(param_1 + 0x70),param_1);
    return uVar2;
  }
  return 0;
}


