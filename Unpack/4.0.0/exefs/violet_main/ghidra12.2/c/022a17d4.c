/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a17d4; name: FUN_022a17d4
 */


void FUN_022a17d4(double param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  puVar1 = PTR_LAB_047dde20;
  if (DAT_04843be8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14 = param_3;
  FUN_022a1e18(param_2,puVar1,0,&local_14,&local_18);
  return;
}


