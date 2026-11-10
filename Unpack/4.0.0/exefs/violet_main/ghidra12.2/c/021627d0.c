/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021627d0; name: FUN_021627d0
 */


void FUN_021627d0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a0 [128];
  undefined1 *local_8;
  
  puVar1 = auStack_a0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x1cU & 0xfffffffffffffff0));
  local_8 = puVar1;
  *puVar1 = 0;
  FUN_021629e8(puVar1,param_2);
  FUN_00cf9768(param_1,&local_8);
  return;
}


