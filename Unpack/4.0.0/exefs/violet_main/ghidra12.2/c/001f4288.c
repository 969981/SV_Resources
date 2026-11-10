/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4288; name: FUN_001f4288
 */


void FUN_001f4288(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      uVar3 = param_1[2];
      puVar1 = (undefined8 *)*puVar2;
      FUN_001f45b0(uVar3,puVar2[1]);
      puVar2[1] = 0;
      FUN_001f45b0(uVar3,puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


