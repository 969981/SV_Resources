/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0e7c; name: FUN_017f0e7c
 */


undefined4 FUN_017f0e7c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffec;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (iVar1 == 0xc) {
      uVar2 = 0xfffffff6;
    }
    else {
      uVar2 = 0xfffffff4;
      if (*(short *)(param_1 + 0xaa) != 0x7e) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


