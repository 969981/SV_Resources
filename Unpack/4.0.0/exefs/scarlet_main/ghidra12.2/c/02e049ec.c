/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e049ec; name: FUN_02e049ec
 */


undefined8 FUN_02e049ec(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (((*(short *)(param_1 + 0xb6) == 0x9a) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), iVar1 < 9))
     && (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x46)
        , (uVar2 & 1) != 0)) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xfffffff6;
  }
  return uVar3;
}


