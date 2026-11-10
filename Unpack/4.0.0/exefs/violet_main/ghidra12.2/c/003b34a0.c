/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b34a0; name: FUN_003b34a0
 */


void FUN_003b34a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == param_2) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_003e98f0();
    }
    if (lVar1 == param_3) {
      return;
    }
  }
  if ((param_2 != 0) && (param_2 == param_3)) {
    FUN_003e8c90(param_2);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != param_2) {
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_003e98f0(lVar1);
    }
    if (lVar1 == param_3) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar2 = *(long *)(param_1 + 0x18);
      }
      else {
        lVar2 = FUN_003e98f0();
      }
      if (lVar1 != lVar2) {
        FUN_003e9900(*(undefined8 *)(param_1 + 0x10));
        *(long *)(param_1 + 0x10) = param_2;
        return;
      }
    }
    FUN_003e9900(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = param_2;
  }
  if (lVar1 != 0) {
    uVar3 = FUN_003e9870(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  FUN_003e9900();
  *(long *)(param_1 + 0x18) = param_3;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar3 = FUN_003e9810(*(long *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}


