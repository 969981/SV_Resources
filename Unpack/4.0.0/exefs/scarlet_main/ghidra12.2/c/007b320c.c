/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b320c; name: FUN_007b320c
 */


undefined8 FUN_007b320c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_007a86b8();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0078b278(param_1 + 0x80,param_2 + 0x80);
  return uVar2;
}


