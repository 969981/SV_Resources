/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02360ec0; name: FUN_02360ec0
 */


void FUN_02360ec0(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 local_30 [16];
  
  puVar1 = PTR_FUN_047de9d0;
  if (DAT_04849160 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30 = FUN_023637dc(param_2,puVar1,0);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


