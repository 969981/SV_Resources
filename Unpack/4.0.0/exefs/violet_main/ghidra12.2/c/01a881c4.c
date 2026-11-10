/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a881c4; name: FUN_01a881c4
 */


void FUN_01a881c4(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x908)) {
  case 0:
    FUN_02159dfc(param_1);
    uVar2 = 1;
    break;
  case 1:
    uVar1 = FUN_02159ff8(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 2;
    break;
  case 2:
    FUN_0215a234(param_1);
    uVar2 = 3;
    break;
  case 3:
    uVar1 = FUN_0215a304(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 4;
    break;
  case 4:
    FUN_0215a410(param_1);
    uVar2 = 5;
    break;
  case 5:
    uVar1 = FUN_0215a4bc(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 6;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x84) = 1;
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined4 *)(param_1 + 0xa10) = 0;
  default:
    goto switchD_01a881f4_default;
  }
  *(undefined4 *)(param_1 + 0x908) = uVar2;
switchD_01a881f4_default:
  return;
}


