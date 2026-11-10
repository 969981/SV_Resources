/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02958fa0; name: FUN_02958fa0
 */


void FUN_02958fa0(long param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar6 = *(long *)(lVar4 + 0x28);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  if (iVar5 == param_2) {
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar5 = 0;
    if (lVar4 != 0) {
      iVar5 = *(int *)(lVar4 + 0xc);
    }
    if ((iVar5 != param_2) && (cVar2 = FUN_017962f0(param_1), cVar2 == '\v')) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x98);
      if (lVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(lVar4 + 0xc);
      }
      uVar3 = FUN_01796310(uVar1);
      if ((((uVar3 & 1) == 0) &&
          (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x240), lVar4 != 0)) &&
         (*(byte *)(lVar4 + 10) < 2)) {
        *(undefined4 *)(lVar4 + 0xc) = 1;
        if (*(byte *)(lVar4 + 10) == 1) {
          *(undefined1 *)(lVar4 + 10) = 2;
        }
        FUN_02954a10(param_1,param_2,1,1);
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x3b0);
        if (((lVar4 != 0) && (*(byte *)(lVar4 + 10) < 2)) &&
           (*(undefined4 *)(lVar4 + 0xc) = 1, *(byte *)(lVar4 + 10) == 1)) {
          *(undefined1 *)(lVar4 + 10) = 2;
        }
      }
    }
  }
  return;
}


