/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001edfd0; name: FUN_001edfd0
 */


void FUN_001edfd0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + 0x890;
  puVar3 = *(undefined8 **)(param_1 + 0x8e0);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_001f45b0(lVar1,puVar3[1]);
    FUN_001f45b0(lVar1,puVar3);
    puVar3 = puVar2;
  }
  FUN_001f9640(param_1 + 0x20);
  FUN_001f8e54(param_1,FUN_001ee0e0,param_1);
  FUN_001f8e48(param_1);
  FUN_001ee154(param_1 + 0x108,lVar1);
  FUN_001ee154(param_1 + 0x120,lVar1);
  FUN_001ee154(param_1 + 0x138,lVar1);
  FUN_001ee1a4(param_1 + 0x150,lVar1);
  FUN_001ee1e8(param_1);
  thunk_FUN_001f57dc(param_1 + 0x290);
  FUN_001f585c(param_1 + 0x6e8);
  FUN_001f4288(param_1 + 0x158);
  FUN_001f45b0(lVar1,param_1);
  return;
}


