/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5348; name: FUN_004a5348
 */


/* WARNING: Removing unreachable block (ram,0x004a537c) */

long FUN_004a5348(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long extraout_x1;
  
  iVar2 = FUN_004c0784(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),param_1,param_2);
  if (iVar2 != 2) {
    return 0;
  }
  lVar1 = extraout_x1;
  if (*(char *)(extraout_x1 + 0x43) != '\0') {
    lVar1 = 0;
  }
  return lVar1;
}


