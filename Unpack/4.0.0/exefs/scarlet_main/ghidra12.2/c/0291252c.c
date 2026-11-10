/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291252c; name: FUN_0291252c
 */


uint FUN_0291252c(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((iVar1 < 8) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8))
     || (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e)
        , (uVar3 & 1) == 0)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (((iVar1 < 5) ||
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 5))
       && (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                             (*(long **)(param_1 + 0x30),0x4e), (uVar3 & 1) != 0)) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((0x31 < iVar1) ||
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar3 & 1) == 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      return uVar2 & 1;
    }
  }
  return 0xffffffff;
}


