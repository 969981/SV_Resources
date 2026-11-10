/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c84cbc; name: FUN_01c84cbc
 */


void FUN_01c84cbc(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = &LAB_009700c8;
  if (DAT_04816c70 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_8 = param_3;
  local_4 = FUN_01c8575c(param_2,puVar1,0,&local_8);
  *param_1 = 1;
  FUN_01c857ac(param_1 + 8,&local_4);
  return;
}


