/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f14dc; name: FUN_017f14dc
 */


undefined4 FUN_017f14dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x11);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if (uVar1 < 0x3d && (1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffff4;
      if (*(short *)(param_1 + 0xb6) != 0x9c) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0xfffffff6;
  }
  return uVar3;
}


