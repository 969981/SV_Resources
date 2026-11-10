/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bd300; name: FUN_008bd300
 */


void FUN_008bd300(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[2] = param_2;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != param_3) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_3);
    lVar2 = FUN_00896e78(0x38);
    if (lVar2 != 0) {
      FUN_008947c4(lVar2);
    }
    param_1[1] = lVar2;
    for (lVar2 = *(long *)(param_3 + 8); param_3 != lVar2; lVar2 = *(long *)(lVar2 + 8)) {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x18) + 0x78))
                        (*(long **)(param_2 + 0x18),*(undefined8 *)(lVar2 + 0x10),1);
      FUN_008948c0(param_1[1],uVar1);
    }
    uVar1 = (**(code **)*param_1)(param_1);
    param_1[4] = uVar1;
  }
  return;
}


