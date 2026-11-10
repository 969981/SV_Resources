/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f4234; name: FUN_017f4234
 */


undefined8 FUN_017f4234(long param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((uVar3 < 0x3d && (1L << ((ulong)uVar3 & 0x3f) & 0x1800000000000001U) != 0) ||
     (*(short *)(param_1 + 0xb6) != 0x9c)) {
    sVar1 = *(short *)(param_1 + 0xb6);
    if (sVar1 == 0x24) {
      return 0xfffffff6;
    }
    if (sVar1 == 0xa1) {
      return 0xfffffff6;
    }
    uVar2 = *(ushort *)(param_1 + 0xb4);
    if (uVar2 < 0x1a5) {
      if (uVar2 == 0x84) {
        return 0xfffffff6;
      }
      if (uVar2 == 0x124) {
        return 0xfffffff6;
      }
      if (uVar2 == 0x15f) {
        return 0xfffffff6;
      }
    }
    else if (uVar2 < 0x23b) {
      if (uVar2 == 0x1a5) {
        return 0xfffffff6;
      }
      if (uVar2 == 0x1ed) {
        return 0xfffffff6;
      }
    }
    else {
      if (uVar2 == 0x23b) {
        return 0xfffffff6;
      }
      if (uVar2 == 0x2a9) {
        return 0xfffffff6;
      }
    }
    if ((sVar1 != 0x56) &&
       ((uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        (uVar4 & 1) == 0 || (*(short *)(param_1 + 0x9e) == 0x97)))) {
      sVar1 = *(short *)(param_1 + 0xb4);
      if (sVar1 == 0x121) {
        return 0xfffffff4;
      }
      if (sVar1 == 0x1e6) {
        return 0xfffffff4;
      }
      if (sVar1 == 0x237) {
        return 0xfffffff4;
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


