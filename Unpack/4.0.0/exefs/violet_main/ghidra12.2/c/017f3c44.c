/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3c44; name: FUN_017f3c44
 */


undefined8 FUN_017f3c44(long param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x10);
  if ((uVar4 & 1) == 0) {
    sVar1 = *(short *)(param_1 + 0xb6);
    if (sVar1 == 0x32) {
      return 0xfffffff6;
    }
    if (sVar1 == 0x76) {
      return 0xfffffff6;
    }
    if (sVar1 == 0x79) {
      return 0xfffffff6;
    }
    uVar3 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if (((0x3c < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x1800000000000001U) == 0)) &&
       (sVar1 == 0x9c)) {
      return 0xfffffff4;
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (((uVar4 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) {
      uVar2 = *(ushort *)(param_1 + 0xb4);
      if (uVar2 < 0x1ed) {
        if (uVar2 == 0x121) {
          return 0xfffffff4;
        }
        if (uVar2 == 0x1e6) {
          return 0xfffffff4;
        }
      }
      else {
        if (uVar2 == 0x1ed) {
          return 0xfffffff6;
        }
        if (uVar2 == 0x2a9) {
          return 0xfffffff6;
        }
        if (uVar2 == 0x237) {
          return 0xfffffff4;
        }
      }
      sVar1 = *(short *)(param_1 + 0xb6);
      if (sVar1 == 0x36) {
        return 0xfffffff4;
      }
      if (sVar1 == 0x70) {
        return 0xfffffff4;
      }
      if (sVar1 == 0x81) {
        return 0xfffffff4;
      }
      return 0;
    }
  }
  return 0xfffffff6;
}


