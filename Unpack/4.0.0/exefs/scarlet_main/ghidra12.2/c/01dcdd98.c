/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcdd98; name: FUN_01dcdd98
 */


void FUN_01dcdd98(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_01dcddf4(*(undefined8 *)(param_1 + 0x1a0));
  if (iVar1 - 0xeU < 8) {
    FUN_01dcddfc(param_1,*(undefined4 *)(&DAT_03cbf1e0 + (long)(int)(iVar1 - 0xeU) * 4),0,0,1,0);
    return;
  }
  return;
}


