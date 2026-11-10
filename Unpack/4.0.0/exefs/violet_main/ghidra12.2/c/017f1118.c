/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f1118; name: FUN_017f1118
 */


undefined4 FUN_017f1118(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x9e) == 0x7e) {
    uVar2 = 0xfffffff4;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar2 = 0xfffffff6;
    if (iVar1 != 0xc) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      uVar2 = 0xfffffff6;
      if (0x18 < iVar1) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return uVar2;
}


