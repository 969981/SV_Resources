/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294f2f0; name: FUN_0294f2f0
 */


void FUN_0294f2f0(long param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar3 = 0;
  if (*(long *)(lVar2 + 0x18) != 0) {
    iVar3 = *(int *)(*(long *)(lVar2 + 0x18) + 0xc);
  }
  if (((iVar3 == param_2) && (*(long *)(lVar2 + 0x348) != 0)) &&
     (*(char *)(*(long *)(lVar2 + 0x348) + 0xc) == '\x01')) {
    lVar2 = *(long *)(lVar2 + 0x248);
    if ((lVar2 == 0) || (1 < *(byte *)(lVar2 + 10))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      *(undefined4 *)(lVar2 + 0xc) = 1;
      if (*(byte *)(lVar2 + 10) == 1) {
        *(undefined1 *)(lVar2 + 10) = 2;
        uVar1 = 1;
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)(param_3 & 0xff) * 4 + 0x48) = uVar1;
  }
  return;
}


