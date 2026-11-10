/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299aac4; name: FUN_0299aac4
 */


void FUN_0299aac4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04600b48;
  param_1[4] = &PTR_LAB_04600b80;
  pvVar1 = (void *)param_1[0xe];
  if (pvVar1 != (void *)0x0) {
    param_1[0xf] = pvVar1;
    operator_delete(pvVar1);
  }
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 != 0) {
    FUN_019433d0(param_1 + 0xb);
  }
  FUN_018a2664(param_1 + 6,0);
  return;
}


