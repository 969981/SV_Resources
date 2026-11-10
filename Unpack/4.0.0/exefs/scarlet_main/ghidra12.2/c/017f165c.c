/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f165c; name: FUN_017f165c
 */


undefined8 FUN_017f165c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb),
      (uVar1 & 1) != 0)) ||
     ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
      (uVar1 & 1) != 0 && (*(short *)(param_1 + 0x9e) != 0x97)))) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


