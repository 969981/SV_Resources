/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a3630; name: FUN_028a3630
 */


void FUN_028a3630(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x308) != 0) {
    uVar1 = FUN_028a3688();
    while ((uVar1 & 1) != 0) {
      nn::os::SleepThread(100000);
      uVar1 = FUN_028a3688(*(undefined8 *)(param_1 + 0x308),param_2);
    }
  }
  return;
}


