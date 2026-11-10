/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02914b2c; name: FUN_02914b2c
 */


undefined4 FUN_02914b2c(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x12);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),10),
     (uVar2 & 1) == 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),5);
    if ((uVar2 & 1) != 0) {
LAB_02914ba0:
      uVar3 = 1;
      if (*(short *)(param_1 + 0x9e) == 0x5a) {
        uVar3 = 2;
      }
      return uVar3;
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1d0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if ((uVar2 & 1) != 0) goto LAB_02914ba0;
      cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
      if ((cVar1 != '\x01') || (*(short *)(param_1 + 0x9e) != 0x57)) {
        return 0;
      }
    }
  }
  return 1;
}


