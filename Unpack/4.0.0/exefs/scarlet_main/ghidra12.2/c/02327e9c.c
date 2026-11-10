/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02327e9c; name: FUN_02327e9c
 */


uint FUN_02327e9c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long local_18;
  
  uVar1 = 0;
  if ((param_2 != -1) && (param_3 != -1)) {
    local_18 = param_3;
    uVar1 = FUN_0299e5b0(*(undefined8 *)(param_1 + 0x200),&local_18,1,param_2);
  }
  return uVar1 & 1;
}


