/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01259384; name: FUN_01259384
 */


void FUN_01259384(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_a0 [128];
  undefined1 *local_8;
  
  if (*param_2 == 0) {
    lVar2 = 0x11;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x40) + 0x11;
  }
  puVar1 = auStack_a0 + (0x80 - (lVar2 + 0xfU & 0xfffffffffffffff0));
  local_8 = puVar1;
  *puVar1 = 0;
  FUN_01259454(puVar1,param_2);
  FUN_00cf9768(param_1,&local_8);
  return;
}


