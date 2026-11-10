/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f12e8; name: FUN_017f12e8
 */


undefined8 FUN_017f12e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (((iVar1 == 0) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
      (uVar2 & 1) != 0)) ||
     ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
      (uVar2 & 1) != 0 && (*(short *)(param_1 + 0x9e) != 0x97)))) {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


