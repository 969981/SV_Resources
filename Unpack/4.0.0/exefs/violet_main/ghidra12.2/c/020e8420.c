/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e8420; name: FUN_020e8420
 */


void FUN_020e8420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [128];
  undefined1 *local_18;
  
  lVar1 = FUN_020e8488();
  puVar2 = auStack_b0 + (0x80 - (lVar1 + 0x10U & 0xfffffffffffffff0));
  local_18 = puVar2;
  *puVar2 = 0;
  FUN_020e84c0(puVar2,param_2,param_3);
  FUN_00cf9768(param_1,&local_18);
  return;
}


