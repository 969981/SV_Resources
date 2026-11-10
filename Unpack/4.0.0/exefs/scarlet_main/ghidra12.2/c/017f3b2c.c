/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f3b2c; name: FUN_017f3b2c
 */


undefined8 FUN_017f3b2c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((uVar1 & 1) == 0) {
      return 0xfffffff8;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),5);
      if (((uVar1 & 1) != 0) ||
         (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1d0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
         (uVar1 & 1) != 0)) {
        uVar2 = FUN_017f3920(param_1);
        return uVar2;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4);
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_017f47b0(param_1);
        return uVar2;
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar2 = FUN_017f49d4(param_1);
      return uVar2;
    }
  }
  return 0xfffffff6;
}


