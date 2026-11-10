/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


