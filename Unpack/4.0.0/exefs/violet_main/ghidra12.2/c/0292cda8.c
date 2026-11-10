/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cda8; name: FUN_0292cda8
 */


void FUN_0292cda8(long param_1)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    uVar1 = FUN_0292ce60(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  case 1:
    uVar1 = FUN_0292cec0(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  case 2:
    uVar1 = FUN_0292cef0(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  case 3:
    uVar1 = FUN_0292cf30(*(undefined2 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),&local_4);
    break;
  case 4:
    uVar1 = FUN_0292cf80(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  case 5:
    uVar1 = FUN_0292cfe0(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  case 6:
    uVar1 = FUN_0292d050(*(undefined2 *)(param_1 + 0x18),&local_4);
    break;
  default:
    goto switchD_0292cddc_default;
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
switchD_0292cddc_default:
  return;
}


