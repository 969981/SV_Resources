/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919634; name: FUN_02919634
 */


undefined4 FUN_02919634(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (((*(ushort *)(param_1 + 0xaa) & 0xfffe) == 0x9a) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), iVar1 != 0)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (1 < iVar2 + iVar1) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
      uVar4 = 2;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}


