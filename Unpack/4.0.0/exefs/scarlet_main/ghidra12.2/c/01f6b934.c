/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6b934; name: FUN_01f6b934
 */


void FUN_01f6b934(undefined4 *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar4 = -0x7b;
  if (iVar2 != (short)iVar2) {
    iVar4 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar2 != (char)iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 + 0x40U < 0xc0) {
    iVar1 = iVar2;
  }
  lVar3 = FUN_0111b030(iVar1);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar3)) {
    *param_1 = 0xd;
    return;
  }
  FUN_01f6bdf8(param_1,param_2,param_3);
  return;
}


