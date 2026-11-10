/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f83dc; name: FUN_007f83dc
 */


void FUN_007f83dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((undefined8 *)param_1[1] != param_1) {
    puVar1 = (undefined8 *)param_1[1];
    do {
      puVar2 = (undefined8 *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_0078fa04(param_1 + 3,param_1 + 3,(long)*(int *)((long)param_1 + 0x2c) + (long)puVar1);
      puVar1 = puVar2;
    } while (puVar2 != param_1);
  }
  FUN_0078f9d4(param_1);
  return;
}


