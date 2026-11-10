/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0db4; name: FUN_017f0db4
 */


undefined4 FUN_017f0db4(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
    uVar2 = 0xfffffff8;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffff6;
  }
  return uVar2;
}


