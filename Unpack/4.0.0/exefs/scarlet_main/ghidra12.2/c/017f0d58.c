/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0d58; name: FUN_017f0d58
 */


undefined4 FUN_017f0d58(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 1000))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 1000))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


