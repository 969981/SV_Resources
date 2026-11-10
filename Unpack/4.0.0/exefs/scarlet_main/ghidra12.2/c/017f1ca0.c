/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1ca0; name: FUN_017f1ca0
 */


undefined4 FUN_017f1ca0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x408))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6);
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar2 == 3 || iVar3 == 0) {
    uVar4 = 0xfffffff6;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar1 < 0x3d) && ((1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xfffffff4;
      if (*(short *)(param_1 + 0xb6) != 0x9c) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


