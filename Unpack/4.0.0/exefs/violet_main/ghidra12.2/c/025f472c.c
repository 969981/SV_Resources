/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025f472c; name: FUN_025f472c
 */


void FUN_025f472c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  puVar1 = PTR_LAB_047e00f8;
  if (DAT_04854240 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = FUN_017d6540(param_2);
  uVar2 = FUN_02476690(param_3);
  FUN_025f4c88(param_1,puVar1,0,&local_18,uVar2);
  return;
}


