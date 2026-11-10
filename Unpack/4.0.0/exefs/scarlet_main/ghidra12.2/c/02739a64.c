/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02739a64; name: FUN_02739a64
 */


void FUN_02739a64(long param_1,undefined4 param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_00ccbb30();
  memcpy(__dest,(void *)(param_1 + 0x7c),0x40);
  FUN_00ccbb18(param_1,param_2);
  return;
}


