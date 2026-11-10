/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dca9c; name: FUN_012dca9c
 */


int FUN_012dca9c(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_012dca9c();
    *(undefined1 *)(param_1 + 0x31) = 1;
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x10))();
  }
  return iVar1;
}


