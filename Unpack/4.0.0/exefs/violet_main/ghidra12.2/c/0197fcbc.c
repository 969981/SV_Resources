/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197fcbc; name: FUN_0197fcbc
 */


void FUN_0197fcbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_LAB_047d5920;
  if (DAT_04810520 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_28 = FUN_017f7db0(param_2);
  FUN_0197fd18(param_1,puVar1,0,&local_28);
  return;
}


