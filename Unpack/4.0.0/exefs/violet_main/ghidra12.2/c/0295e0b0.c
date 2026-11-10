/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295e0b0; name: FUN_0295e0b0
 */


void FUN_0295e0b0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar2 = *(long *)(lVar3 + 1000);
  if (lVar2 == 0) {
    uVar4 = 0x7d;
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (1 < iVar1) {
      return;
    }
    uVar4 = (ushort)(iVar1 + 0x7dU);
    if (0x85 < (iVar1 + 0x7dU & 0xffff)) goto LAB_0295e10c;
  }
  lVar2 = *(long *)(lVar3 + (ulong)uVar4 * 8 + 8);
  if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
     (*(uint *)(lVar2 + 0xc) = param_2 & 0xffff, *(byte *)(lVar2 + 10) == 1)) {
    *(undefined1 *)(lVar2 + 10) = 2;
  }
LAB_0295e10c:
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 1000);
  if (((lVar2 == 0) || (1 < *(byte *)(lVar2 + 10))) ||
     (*(int *)(lVar2 + 0xc) = iVar1 + 1, *(byte *)(lVar2 + 10) != 1)) {
    return;
  }
  *(undefined1 *)(lVar2 + 10) = 2;
  return;
}


