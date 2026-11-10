/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dc000; name: FUN_001dc000
 */


undefined4 FUN_001dc000(void)

{
  int iVar1;
  long lVar2;
  long *in_x3;
  undefined4 uVar3;
  
  lVar2 = nnsocketRecv();
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    uVar3 = 0x51;
    if (iVar1 != 4 && iVar1 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
    *in_x3 = lVar2;
  }
  return uVar3;
}


