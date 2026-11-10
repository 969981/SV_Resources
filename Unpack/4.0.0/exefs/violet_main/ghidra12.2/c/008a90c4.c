/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a90c4; name: FUN_008a90c4
 */


void FUN_008a90c4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_00896e98(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00896e98(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00896e98(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00896e98(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(lVar3 + 8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar3 + 4)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar1 = lVar1 + lVar4;
        if (*(long *)(lVar1 + 0x18) != 0) {
          FUN_00896e98();
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x20;
        *(undefined4 *)(lVar1 + 0x10) = 0;
        lVar1 = *(long *)(lVar3 + 8);
      } while (lVar5 < *(int *)(lVar3 + 4));
      if (lVar1 == 0) goto LAB_008a9184;
    }
    FUN_00896e98();
  }
LAB_008a9184:
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 4) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00896e98();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


