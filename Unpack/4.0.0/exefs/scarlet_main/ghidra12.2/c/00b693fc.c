/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b693fc; name: FUN_00b693fc
 */


undefined4 FUN_00b693fc(long param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc0)) {
  case 3:
    uVar1 = 1;
    if (*(int *)(param_1 + 0xc4) != 2) {
      uVar1 = 2;
    }
    break;
  case 4:
    return 3;
  case 5:
    uVar1 = 3;
    if (*(int *)(param_1 + 0xc4) == 5) {
      uVar1 = 4;
    }
    return uVar1;
  case 6:
    return 5;
  default:
    return 0;
  }
  return uVar1;
}


