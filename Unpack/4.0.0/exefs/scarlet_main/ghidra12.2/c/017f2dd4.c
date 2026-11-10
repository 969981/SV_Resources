/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2dd4; name: FUN_017f2dd4
 */


int FUN_017f2dd4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x16);
  iVar3 = -10;
  if ((uVar2 & 1) == 0) {
    iVar3 = 0;
  }
  if ((*(char *)(param_1 + 0xb8) == '\a') || (*(char *)(param_1 + 0xb9) == '\a')) {
    iVar3 = iVar3 + -10;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if (((0x3c < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) == 0)) &&
       (*(short *)(param_1 + 0xb6) == 0x9c)) {
      return iVar3 + -0xc;
    }
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar2 & 1) != 0) && (*(short *)(param_1 + 0x9e) != 0x97)) {
    iVar3 = iVar3 + -10;
  }
  return iVar3;
}


