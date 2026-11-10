/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038d390; name: FUN_0038d390
 */


undefined4 FUN_0038d390(char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char *local_8;
  
  uVar2 = strtol(param_1,&local_8,0);
  uVar1 = (undefined4)uVar2;
  if (*local_8 != '\0' || uVar2 >> 0x1f != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


