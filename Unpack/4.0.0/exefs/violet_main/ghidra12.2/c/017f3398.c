/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3398; name: FUN_017f3398
 */


int FUN_017f3398(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x12);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\v') {
      iVar3 = -10;
    }
    else {
      iVar3 = -10;
      if (*(char *)(param_1 + 0xb9) != '\v') {
        uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
        if ((uVar1 < 0x3d) && ((1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0)) {
          iVar3 = 0;
        }
        else {
          iVar4 = -10;
          if (*(short *)(param_1 + 0xb6) != 0x62) {
            iVar4 = 0;
          }
          iVar3 = -0xc;
          if (*(short *)(param_1 + 0xb6) != 0x9c) {
            iVar3 = iVar4;
          }
        }
      }
    }
  }
  else {
    iVar3 = -8;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar2 & 1) != 0) {
    if (*(short *)(param_1 + 0x9e) != 0x97) {
      iVar3 = iVar3 + -10;
    }
  }
  return iVar3;
}


