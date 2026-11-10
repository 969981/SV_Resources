/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eafca0; name: FUN_01eafca0
 */


undefined8 FUN_01eafca0(long param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(*(long *)(param_1 + 0x50) + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x178);
    memcpy((void *)(param_1 + 0x178),param_2,0x912);
    *(int *)(param_1 + 0x178) = iVar1 + 1;
    if (*(long *)(param_1 + 0xbc0) != 0) {
      *(long *)(param_1 + 0xbc0) = *(long *)(param_1 + 0xbc0) + -1;
      *(long *)(param_1 + 3000) = *(long *)(param_1 + 3000) + 1;
      FUN_01eafd14(param_1 + 0xb78);
    }
    uVar2 = 1;
  }
  return uVar2;
}


