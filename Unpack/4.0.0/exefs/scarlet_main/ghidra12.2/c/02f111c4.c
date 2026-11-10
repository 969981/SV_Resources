/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f111c4; name: FUN_02f111c4
 */


undefined8 FUN_02f111c4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0220e630(&DAT_0460eb40,"Not implemented");
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  return 0;
}


