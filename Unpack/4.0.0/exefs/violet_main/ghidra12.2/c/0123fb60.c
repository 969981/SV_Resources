/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123fb60; name: FUN_0123fb60
 */


void FUN_0123fb60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined1 local_58;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar3 = *(byte *)(lVar2 + 0x95);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
  lVar1 = 0;
  if (bVar3 < 5) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)bVar3 * 0x38 + 0x28;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x9e);
  if (uVar7 == 0) {
    return;
  }
  lVar9 = 0;
  lVar10 = uVar7 - 1;
  do {
    if (((uint)lVar9 & 0xff) < (uint)uVar7) {
      if (*(char *)(lVar6 + lVar9 + 0x80) == '\0') {
        uVar8 = *(undefined4 *)(lVar6 + lVar9 * 4 + 8);
        goto LAB_0123fbdc;
      }
    }
    else {
      uVar8 = 0;
LAB_0123fbdc:
      uVar5 = FUN_014813ec();
      cVar4 = FUN_0154e790(uVar5,uVar8);
      if (cVar4 == '\x01') {
        lStack_70 = *(long *)(param_1 + 0x10);
        local_78 = lVar2;
        local_68 = lVar1;
        local_60 = FUN_01021c94(*(undefined8 *)(lStack_70 + 0x30),uVar8);
        if (local_60 == 0) goto LAB_0123fc40;
        local_58 = 1;
        FUN_018813a4(param_2,&local_78);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
      if (((uint)lVar9 & 0xff) < (uint)*(byte *)(lVar6 + 0x9e)) {
        *(undefined1 *)(lVar6 + lVar9 + 0x80) = 1;
      }
    }
LAB_0123fc40:
    if (lVar10 == lVar9) {
      return;
    }
    lVar9 = lVar9 + 1;
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
    uVar7 = (ulong)*(byte *)(lVar6 + 0x9e);
  } while( true );
}


