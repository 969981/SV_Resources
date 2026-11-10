/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c8868; name: FUN_025c8868
 */


uint FUN_025c8868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 local_30 [2];
  undefined8 auStack_20 [2];
  
  puVar1 = &LAB_025d22dc;
  if (DAT_048537b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30[0] = param_2;
  auStack_20[0] = param_1;
  uVar2 = FUN_025d2494(param_3,puVar1,0,auStack_20,local_30);
  return uVar2 & 1;
}


