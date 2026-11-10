/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2cd10; name: FUN_01b2cd10
 */


undefined8 FUN_01b2cd10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_f0 [128];
  
  uVar1 = FUN_0012e090(param_1,param_2,local_f0 + 0x80);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  return uVar1;
}


