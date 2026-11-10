/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f0080; name: FUN_008f0080
 */


void FUN_008f0080(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar1 = 0;
  if ((uVar2 & 1) != 0) {
    lVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    lVar1 = lVar1 + 0xc;
  }
  *(int *)(param_1 + 0x24) = param_2;
  if ((uVar2 & 4) != 0) {
    lVar1 = lVar1 + 8;
  }
  *(long *)(param_1 + 0x30) = lVar1 * param_2;
  return;
}


