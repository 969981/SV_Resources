/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01497ee8; name: FUN_01497ee8
 */


undefined8 FUN_01497ee8(long param_1)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_01497d90(*(undefined8 *)(param_1 + 0x30));
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
    uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),0);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      sVar1 = FUN_02923b14(uVar3,0);
      if (sVar1 == 0) {
        return 1;
      }
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
    uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),1);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      sVar1 = FUN_02923b14(uVar3,1);
      if (sVar1 == 0) {
        return 1;
      }
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
    uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),2);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      sVar1 = FUN_02923b14(uVar3,2);
      if (sVar1 == 0) {
        return 1;
      }
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
    uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),3);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      sVar1 = FUN_02923b14(uVar3,3);
      if (sVar1 == 0) {
        return 1;
      }
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
    uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),4);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      sVar1 = FUN_02923b14(uVar3,4);
      if (sVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


