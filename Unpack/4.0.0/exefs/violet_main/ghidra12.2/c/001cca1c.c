/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cca1c; name: FUN_001cca1c
 */


undefined8 FUN_001cca1c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = (*(uint *)(param_1 + 0x80) & 2) << 1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (uVar1 < *(uint *)(param_1 + 0x88)) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0,0);
      iVar2 = (int)uVar3;
      if (iVar2 - 1U < 2) {
        return uVar3;
      }
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return 1;
        }
        goto LAB_001cca7c;
      }
    }
    uVar3 = 2;
  }
  else {
LAB_001cca7c:
    uVar3 = 0;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return uVar3;
}


