/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008eef3c; name: FUN_008eef3c
 */


void FUN_008eef3c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar2 != 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x38) + lVar5;
      FUN_008f1bb0(lVar1);
      FUN_008f1bd8(lVar1,param_2,lVar4 + lVar6);
      if (*(long *)(param_1 + 0x48) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0x48) + lVar7) + 2;
      }
      FUN_008effb0(lVar1,lVar4);
      lVar6 = lVar6 + 0x20;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + 0x78;
    } while ((ulong)bVar2 * 0x20 != lVar6);
  }
  uVar3 = *(ushort *)(param_1 + 0x9e);
  if ((ulong)uVar3 != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x50);
      bVar2 = *(byte *)(lVar7 + lVar6 + 0x10);
      if ((0x1b < bVar2) && (*(long *)(lVar7 + lVar6) == 0)) {
        *(undefined **)(lVar7 + lVar6) = (&PTR_LAB_04519408)[bVar2 - 0x1c];
      }
      lVar6 = lVar6 + 0x20;
    } while ((ulong)uVar3 * 0x20 != lVar6);
  }
  return;
}


