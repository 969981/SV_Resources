/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00103a10; name: FUN_00103a10
 */


uint FUN_00103a10(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x400;
  if (param_1 < 0x5622) {
    iVar2 = 0x200;
  }
  iVar1 = 0x800;
  if (param_1 < 0xac44) {
    iVar1 = iVar2;
  }
  return ((uint)(iVar1 * param_2) >> 3 & 0xfffffc0) + 0xaf & 0x1fffffe0;
}


