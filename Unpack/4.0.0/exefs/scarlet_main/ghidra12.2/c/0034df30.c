/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034df30; name: FUN_0034df30
 */


void FUN_0034df30(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0038c900();
  if (iVar1 == 0) {
    DAT_047ef5a0 = 1;
  }
  else {
    uVar2 = FUN_0038c900();
    DAT_047ef5a0 = uVar2 & 0xffffffff;
  }
  uVar3 = FUN_0038c7b0(DAT_047ef5a0 * 0x1d50);
  *(undefined8 *)PTR_DAT_047ccdd8 = uVar3;
  return;
}


