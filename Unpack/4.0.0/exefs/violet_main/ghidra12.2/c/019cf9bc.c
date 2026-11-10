/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cf9bc; name: FUN_019cf9bc
 */


void FUN_019cf9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_LAB_047e00f0;
  if (DAT_04854238 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_28 = FUN_017d6540(param_2);
  FUN_019cfa18(param_1,puVar1,0,&local_28);
  return;
}


