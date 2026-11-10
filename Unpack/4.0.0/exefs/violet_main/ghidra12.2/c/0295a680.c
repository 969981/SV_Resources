/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295a680; name: FUN_0295a680
 */


void FUN_0295a680(long param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 0;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0xc);
  }
  if ((iVar2 == param_2) && (cVar1 = FUN_017962f0(param_1), cVar1 == '\0')) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0xb8);
    uVar3 = 0;
    if (lVar4 != 0) {
      if (*(byte *)(lVar4 + 10) < 2) {
        *(uint *)(lVar4 + 0xc) = param_3 & 0xff;
        if (*(byte *)(lVar4 + 10) == 1) {
          *(undefined1 *)(lVar4 + 10) = 2;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = uVar3;
  }
  return;
}


