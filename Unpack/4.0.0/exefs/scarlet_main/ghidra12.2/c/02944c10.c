/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944c10; name: FUN_02944c10
 */


undefined8 FUN_02944c10(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar2 = 0;
  if (*(long *)(lVar1 + 0x28) != 0) {
    iVar2 = *(int *)(*(long *)(lVar1 + 0x28) + 0xc);
  }
  if (iVar2 == param_2) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0xf8) != 0) {
      uVar3 = *(uint *)(*(long *)(lVar1 + 0xf8) + 0xc);
    }
    if ((((uVar3 & 0xffff) == (param_3 & 0xffff)) && (lVar1 = *(long *)(lVar1 + 0x248), lVar1 != 0))
       && (*(byte *)(lVar1 + 10) < 2)) {
      *(undefined4 *)(lVar1 + 0xc) = 1;
      if (*(byte *)(lVar1 + 10) == 1) {
        *(undefined1 *)(lVar1 + 10) = 2;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


