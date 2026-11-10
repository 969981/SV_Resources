/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3755c; name: FUN_01a3755c
 */


int FUN_01a3755c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (0xd < (int)param_2) {
    return 0;
  }
  uVar3 = FUN_01a375b0(param_1 + 8 + (ulong)param_2 * 0x10 + 0x340);
  uVar1 = *(uint *)(param_1 + 8 + (ulong)param_2 * 4 + 0x30);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - uVar1;
  if ((uVar3 < uVar1 || iVar2 == 0) || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}


