/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001203c0; name: FUN_001203c0
 */


undefined8 FUN_001203c0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00120430();
  if (0x1f < uVar3) {
    return param_1;
  }
  iVar2 = uVar3 - param_2;
  iVar1 = 0;
  if ((iVar2 <= (int)uVar3 || param_2 < 1) && -1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0x1f;
  if (((int)uVar3 <= iVar1 || -1 < param_2) && iVar1 < 0x20) {
    iVar2 = iVar1;
  }
  uVar4 = FUN_001204b0(iVar2);
  return uVar4;
}


