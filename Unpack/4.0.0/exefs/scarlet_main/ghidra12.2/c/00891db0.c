/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00891db0; name: FUN_00891db0
 */


void FUN_00891db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_00893160(param_1 + 0x18);
  FUN_008b3b9c(param_1 + 0x28,param_2,param_3);
  for (lVar1 = *(long *)(param_1 + 0x10); param_1 + 8 != lVar1; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x10);
    FUN_00893160(lVar2 + 0x80,param_2,param_3);
    FUN_008b3b9c(lVar2 + 0x90,param_2,param_3);
  }
  return;
}


