/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d6cf48; name: FUN_01d6cf48
 */


void FUN_01d6cf48(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_8;
  
  puVar1 = PTR_FUN_047d7cd8;
  if (DAT_048321b0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = FUN_01d6f8c0(param_2,puVar1,0);
  *param_1 = 1;
  FUN_01d6f954(param_1 + 8,&local_8);
  return;
}


