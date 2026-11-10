/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295d4c0; name: FUN_0295d4c0
 */


void FUN_0295d4c0(long param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar5 = *(long *)(lVar3 + 0x28);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  if ((iVar4 == param_2) &&
     ((lVar3 = *(long *)(lVar3 + 0x270), lVar3 == 0 || (*(int *)(lVar3 + 0xc) < 1)))) {
    cVar1 = FUN_015c78b0(param_1);
    if ((cVar1 == '\x01') && (uVar2 = FUN_0295d430(param_1,param_2), (uVar2 & 1) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 1;
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x1e8);
      if (((lVar3 != 0) && (*(byte *)(lVar3 + 10) < 2)) &&
         (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
        *(undefined1 *)(lVar3 + 10) = 2;
      }
    }
  }
  return;
}


