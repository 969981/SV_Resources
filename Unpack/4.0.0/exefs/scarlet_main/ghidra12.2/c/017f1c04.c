/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1c04; name: FUN_017f1c04
 */


undefined4 FUN_017f1c04(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((uVar1 < 0x3d && (1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0) ||
     (*(short *)(param_1 + 0xb6) != 0x9c)) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xe);
    uVar3 = 0xfffffff6;
    if (((uVar4 & 1) == 0) && (uVar3 = 0xfffffff6, iVar2 != 0)) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


