/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e08c6c; name: FUN_01e08c6c
 */


undefined4 FUN_01e08c6c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xd80) == '\0') {
    return 0;
  }
  uVar1 = 0;
  switch(*param_2) {
  case 1:
    return *(undefined4 *)(param_1 + 0xd88);
  case 2:
    return *(undefined4 *)(param_1 + 0xd98);
  case 3:
    return *(undefined4 *)(param_1 + 0xda8);
  case 4:
    return *(undefined4 *)(param_1 + 0xdb8);
  case 5:
    uVar1 = *(undefined4 *)(param_1 + 0xdc8);
  }
  return uVar1;
}


