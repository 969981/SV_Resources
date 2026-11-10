/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01466234; name: FUN_01466234
 */


undefined4 FUN_01466234(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar2 = FUN_01465ae8(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),
                       *(undefined1 *)(param_1 + 0x1a4),0);
  plVar4 = (long *)FUN_0147ac98(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar2,0);
  if (plVar4 == (long *)0x0) {
    return 0x1ef;
  }
  if (((*(int *)(*(long *)(param_1 + 0x38) + 0x36c) == 0) &&
      (uVar5 = (**(code **)(*plVar4 + 0x200))(plVar4), (uVar5 & 1) == 0)) &&
     (iVar3 = (**(code **)(*plVar4 + 0x658))(plVar4), iVar3 < 0x4d800)) {
    if (iVar3 < 0x37000) {
      if (iVar3 < 0x20800) {
        uVar2 = 0x1fb;
        if (iVar3 < 0xa000) {
          uVar2 = 0x1fc;
        }
      }
      else {
        uVar2 = 0x1fa;
      }
    }
    else {
      uVar2 = 0x1f9;
    }
  }
  else {
    bVar1 = FUN_01466360(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2);
    uVar2 = 0x2e6;
    if (bVar1 < 0xdc) {
      uVar2 = 0x1ef;
    }
  }
  return uVar2;
}


