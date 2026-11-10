/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0296d8b0; name: FUN_0296d8b0
 */


void FUN_0296d8b0(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int local_28;
  undefined2 local_24;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (iVar2 == param_2) {
    FUN_0293db40(param_1);
    local_24 = 0;
    local_28 = param_2;
    uVar1 = FUN_02940e80(param_1,&local_28);
    if (((((uVar1 & 1) != 0) &&
         (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3c8), lVar3 != 0)) &&
        (*(byte *)(lVar3 + 10) < 2)) &&
       (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
      *(undefined1 *)(lVar3 + 10) = 2;
    }
  }
  return;
}


