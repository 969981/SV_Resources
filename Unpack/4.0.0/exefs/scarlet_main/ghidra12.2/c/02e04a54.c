/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e04a54; name: FUN_02e04a54
 */


undefined8 FUN_02e04a54(long param_1)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0xac) == '\t') || (*(char *)(param_1 + 0xad) == '\t')) {
    return 0xfffffff5;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2b0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar2 & 1) == 0) {
    sVar1 = *(short *)(param_1 + 0xaa);
    if (sVar1 == 0x12) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x27);
      if ((uVar2 & 1) == 0) {
        sVar1 = *(short *)(param_1 + 0xaa);
        goto LAB_02e04adc;
      }
    }
    else {
LAB_02e04adc:
      if (((sVar1 != 0x3e) ||
          (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
          (uVar2 & 1) != 0)) ||
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                            (*(long **)(param_1 + 0x30),0x27), (uVar2 & 1) == 0)) goto LAB_02e04aa4;
    }
    uVar3 = 2;
  }
  else {
LAB_02e04aa4:
    uVar3 = 0xfffffff6;
  }
  return uVar3;
}


