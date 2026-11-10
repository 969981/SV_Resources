/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cb180; name: FUN_004cb180
 */


void FUN_004cb180(long *param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = (uint *)param_1[2];
  if ((puVar1 == (uint *)0x0) || (*param_1 != 0)) {
    param_1[2] = 0;
    return;
  }
  uVar2 = (ulong)*puVar1;
  if (0 < (int)*puVar1) {
    do {
      puVar1 = puVar1 + 2;
      FUN_004e7f90(*(undefined8 *)puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    puVar1 = (uint *)param_1[2];
  }
  FUN_0049e700(puVar1);
  param_1[2] = 0;
  return;
}


