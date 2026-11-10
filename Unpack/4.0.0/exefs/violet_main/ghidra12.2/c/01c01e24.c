/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c01e24; name: FUN_01c01e24
 */


void FUN_01c01e24(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = &LAB_0095fcb0;
  if (DAT_04810eb0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_3;
  local_8 = FUN_01c03b28(param_2,puVar1,0,&local_4);
  *param_1 = 1;
  FUN_01c03b70(param_1 + 8,&local_8);
  return;
}


