/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5454; name: FUN_007b5454
 */


void FUN_007b5454(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xb];
  *param_1 = (long)(PTR_DAT_047d0e30 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    param_1[0xb] = 0;
  }
  param_1[0x31] = 0;
  FUN_0078cb10(param_1 + 0x2b);
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


