/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f789d8; name: FUN_02f789d8
 */


void FUN_02f789d8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0220e630(&DAT_046103c8,"Not implemented");
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  return;
}


