/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294e2b0; name: FUN_0294e2b0
 */


void FUN_0294e2b0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0293d6a0(param_1,2);
  if (param_2 == (uVar1 & 0xff)) {
    FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x38,0x2000);
    return;
  }
  return;
}


