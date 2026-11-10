/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029678c0; name: FUN_029678c0
 */


void FUN_029678c0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (iVar2 == param_2) {
    uVar1 = FUN_02943450(param_1);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xb8);
    if (((lVar3 != 0) && (*(byte *)(lVar3 + 10) < 2)) &&
       (*(uint *)(lVar3 + 0xc) = uVar1 & 0xff, *(byte *)(lVar3 + 10) == 1)) {
      *(undefined1 *)(lVar3 + 10) = 2;
    }
  }
  return;
}


