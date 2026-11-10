/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e5b78; name: FUN_008e5b78
 */


void FUN_008e5b78(long param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = lVar5 + (long)param_2 * 0x9e8;
  iVar2 = *(int *)(lVar3 + 0x9d0);
  lVar7 = (long)param_2;
  if (iVar2 != 0) {
    piVar1 = (int *)(lVar3 + 0x9d0);
    lVar6 = lVar5 + lVar7 * 0x9e8;
    lVar3 = *(long *)(lVar6 + 0x9c8);
    FUN_008e64c0(lVar3,lVar3 + (long)iVar2 * 0x10,auStack_68);
    if (param_2 < *(int *)(param_1 + 8)) {
      lVar4 = lVar7 * 0x9e8;
      lVar3 = lVar7 * 0x40;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar3 + 0x10) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar4);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar3 + 0x14) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar4 + 0x108);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4 + 0x7a8);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3 + 0x20) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4 + 0x7b0);
      lVar4 = *(long *)(param_1 + 0x10) + lVar4;
      lVar8 = lVar4 + 0x798;
      if (*(char *)(lVar4 + 0x9e0) != '\0') {
        lVar8 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x20) + lVar3 + 0x28) = lVar8;
      lVar3 = *(long *)(param_1 + 0x20) + lVar3;
      iVar2 = *piVar1;
    }
    else {
      lVar3 = 0;
      iVar2 = *piVar1;
    }
    if (0 < iVar2) {
      lVar4 = 0;
      lVar8 = 0;
      do {
        FUN_008cabc0(*(undefined8 *)(*(long *)(lVar6 + 0x9c8) + lVar4),param_3,
                     *(undefined4 *)(lVar5 + lVar7 * 0x9e8 + 4),param_4 & 1,param_5,lVar3,
                     *(undefined8 *)(param_1 + 0x11f8),*(undefined8 *)(param_1 + 0x11e8));
        lVar8 = lVar8 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar8 < *piVar1);
    }
    *piVar1 = 0;
  }
  *(undefined4 *)(lVar5 + lVar7 * 0x9e8 + 4) = 0;
  return;
}


