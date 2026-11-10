/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298d1a8; name: FUN_0298d1a8
 */


void FUN_0298d1a8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if (((*(byte *)(lVar2 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar2 + 0x30) < 2)) {
    uVar1 = *(int *)(param_1 + 0xc) + param_2;
    if (0x1869e < uVar1) {
      uVar1 = 99999;
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  return;
}


