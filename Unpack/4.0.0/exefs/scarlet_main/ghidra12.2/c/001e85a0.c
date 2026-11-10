/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e85a0; name: FUN_001e85a0
 */


undefined8 FUN_001e85a0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) &&
     (iVar1 = FUN_001e0a18(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10)),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


