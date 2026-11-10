/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029590a0; name: FUN_029590a0
 */


void FUN_029590a0(long param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 0;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
    }
    cVar2 = FUN_01dbde48(uVar1);
    if (cVar2 == '\0') {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xd0);
      if (((lVar4 != 0) && (*(byte *)(lVar4 + 10) < 2)) &&
         (*(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1, *(byte *)(lVar4 + 10) == 1)) {
        *(undefined1 *)(lVar4 + 10) = 2;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 1;
    }
  }
  return;
}


