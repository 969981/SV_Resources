/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294de20; name: FUN_0294de20
 */


void FUN_0294de20(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar2 = FUN_0293d6a0(param_1,4);
  if (param_2 == (uVar2 & 0xff)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
    uVar2 = 0;
    if (*(long *)(lVar5 + 0xe0) != 0) {
      uVar2 = *(uint *)(*(long *)(lVar5 + 0xe0) + 0xc);
    }
    if (((uVar2 & 0xff) == (param_3 & 0xff)) &&
       ((*(long *)(lVar5 + 0x268) == 0 || (*(int *)(*(long *)(lVar5 + 0x268) + 0xc) == 0)))) {
      lVar1 = 100;
      if ((param_3 & 0xff) != 1) {
        lVar1 = 0x65;
      }
      lVar5 = *(long *)(lVar5 + lVar1 * 8 + 8);
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0xc) == 0)) {
        iVar3 = FUN_0154b6d4(*(undefined8 *)(param_1 + 8));
        uVar4 = 0x800;
        if (iVar3 != 0) {
          uVar4 = 0xaac;
        }
        FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x38,uVar4);
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + lVar1 * 8 + 8);
        if (((lVar5 != 0) && (*(byte *)(lVar5 + 10) < 2)) &&
           (*(undefined4 *)(lVar5 + 0xc) = 1, *(byte *)(lVar5 + 10) == 1)) {
          *(undefined1 *)(lVar5 + 10) = 2;
        }
      }
    }
  }
  return;
}


