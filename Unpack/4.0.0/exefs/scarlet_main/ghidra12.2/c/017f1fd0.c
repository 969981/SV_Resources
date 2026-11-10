/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1fd0; name: FUN_017f1fd0
 */


int FUN_017f1fd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  if ((*(short *)(param_1 + 0xb6) == 0x72) &&
     (uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68,
     0x3c < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) == 0)) {
    iVar3 = -0xc;
  }
  else {
    if ((*(char *)(param_1 + 0xb8) == '\n') || (*(char *)(param_1 + 0xb9) == '\n')) {
      iVar3 = -10;
    }
    else {
      iVar3 = 0;
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (((uVar2 & 1) != 0) && (*(short *)(param_1 + 0x9e) != 0x97)) {
      iVar3 = iVar3 + -10;
    }
  }
  return iVar3;
}


