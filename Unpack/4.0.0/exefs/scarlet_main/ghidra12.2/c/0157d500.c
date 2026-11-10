/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157d500; name: FUN_0157d500
 */


undefined4 FUN_0157d500(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if ((*(short *)(param_1 + 0xb6) == 3) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0)), (uVar1 & 1) != 0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
    uVar2 = 2;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


