/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087d720; name: FUN_0087d720
 */


int FUN_0087d720(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_1 == 0) {
    iVar1 = -0x7fd9fdff;
  }
  else {
    if (*(code **)(param_1 + 0x70) == (code *)0x0) {
      iVar1 = 0;
      pcVar4 = *(code **)(param_1 + 0xb8);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x60),param_2);
      pcVar4 = *(code **)(param_1 + 0xb8);
    }
    iVar2 = iVar1;
    if (pcVar4 != (code *)0x0) {
      iVar2 = (*pcVar4)(*(undefined8 *)(param_1 + 0xa8),param_2);
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
    }
    iVar3 = iVar2;
    if (*(code **)(param_1 + 0x100) != (code *)0x0) {
      iVar3 = (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0xf0),param_2);
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
    }
    iVar1 = iVar3;
    if (*(code **)(param_1 + 0x148) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x138),param_2);
      if (iVar3 != 0) {
        iVar1 = iVar3;
      }
    }
  }
  return iVar1;
}


