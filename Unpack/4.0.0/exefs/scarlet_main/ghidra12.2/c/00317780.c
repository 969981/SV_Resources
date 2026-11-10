/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00317780; name: FUN_00317780
 */


void FUN_00317780(long param_1)

{
  undefined1 uVar1;
  
  if (*(undefined **)(param_1 + 0x1158) != PTR_LAB_047ccb60) {
    *(undefined1 **)(param_1 + 0x1158) = &LAB_00318320;
    return;
  }
  *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
  *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
  *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
  *(undefined8 *)(param_1 + 0xf00) = 0;
  *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1138) != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x1136);
  }
  *(undefined1 *)(param_1 + 0xfc6) = uVar1;
  return;
}


