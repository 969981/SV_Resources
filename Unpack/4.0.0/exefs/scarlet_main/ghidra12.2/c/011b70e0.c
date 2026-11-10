/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b70e0; name: FUN_011b70e0
 */


bool FUN_011b70e0(long param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  iVar2 = FUN_0154b6c8(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x498) >> 10 & 1;
  if (iVar2 != 0) {
    return true;
  }
  if ((iVar1 != 2) || ((int)uVar3 != 0)) {
    if ((iVar1 == 2) && (uVar3 != 0)) {
      return param_2 != 1;
    }
    if (iVar1 == 1) {
      if (*(char *)(*(long *)(param_1 + 8) + 0x370) != '\x05') {
        return true;
      }
      param_2 = param_2 & 0xfd;
    }
    else if (iVar1 != 0) {
      return true;
    }
  }
  return param_2 == 0;
}


