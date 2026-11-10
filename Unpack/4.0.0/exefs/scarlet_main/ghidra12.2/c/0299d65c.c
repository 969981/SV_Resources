/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299d65c; name: FUN_0299d65c
 */


bool FUN_0299d65c(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x68))();
  if (iVar2 == 1) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(*(long **)(param_1 + 0x80),param_2);
    bVar1 = iVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


