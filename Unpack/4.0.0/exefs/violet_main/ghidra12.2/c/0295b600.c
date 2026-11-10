/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295b600; name: FUN_0295b600
 */


void FUN_0295b600(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar5 = *(long *)(lVar3 + 0x20);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  if (iVar4 == param_2) {
    lVar3 = *(long *)(lVar3 + 0x98);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
    }
    uVar2 = FUN_0161bd78(uVar1);
    if (((((uVar2 & 1) != 0) &&
         (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xd0), lVar3 != 0)) &&
        (*(byte *)(lVar3 + 10) < 2)) &&
       (*(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 3, *(byte *)(lVar3 + 10) == 1)) {
      *(undefined1 *)(lVar3 + 10) = 2;
    }
  }
  return;
}


