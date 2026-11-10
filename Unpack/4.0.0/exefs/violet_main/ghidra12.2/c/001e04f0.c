/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e04f0; name: FUN_001e04f0
 */


void FUN_001e04f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      puVar1 = (undefined8 *)param_1[1];
      FUN_001ec308(*param_1);
      *param_1 = 0;
      FUN_001ec308(param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


