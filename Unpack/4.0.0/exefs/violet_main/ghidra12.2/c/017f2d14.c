/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f2d14; name: FUN_017f2d14
 */


undefined4 FUN_017f2d14(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((uVar1 < 0x3d && (1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0) ||
     (*(short *)(param_1 + 0xb6) != 0x9c)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
        uVar4 = 0xfffffff6;
        if (iVar2 != 0) {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xfffffff4;
  }
  return uVar4;
}


