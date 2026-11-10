/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c5060; name: FUN_024c5060
 */


void FUN_024c5060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_30 [2];
  undefined8 auStack_20 [2];
  
  puVar1 = PTR_LAB_047dee48;
  if (DAT_0484efd0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  auStack_20[0] = param_1;
  FUN_024c8558(param_3,puVar1,0,auStack_20,local_30);
  return;
}


