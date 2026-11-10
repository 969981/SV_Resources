/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cec08; name: FUN_001cec08
 */


void FUN_001cec08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long local_8;
  
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_001cf980(param_1,&local_8);
    if (local_8 < 0) {
      if ((*(long *)(param_1 + 0x1d0) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) {
        return;
      }
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      pcVar3 = *(code **)(param_1 + 0x1c0);
      uVar1 = *(undefined8 *)(param_1 + 0x1c8);
      local_8 = -1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0xb0);
      if ((*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x1d0)) &&
         (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x1d8))) {
        return;
      }
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x1d8) = uVar1;
      pcVar3 = *(code **)(param_1 + 0x1c0);
      uVar1 = *(undefined8 *)(param_1 + 0x1c8);
    }
    (*pcVar3)(param_1,local_8,uVar1);
  }
  return;
}


