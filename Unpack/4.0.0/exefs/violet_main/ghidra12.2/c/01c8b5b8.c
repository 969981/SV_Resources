/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c8b5b8; name: FUN_01c8b5b8
 */


void FUN_01c8b5b8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_8 [2];
  
  puVar1 = PTR_LAB_047d6480;
  if (DAT_04816c78 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c8c988(local_28,param_2,puVar1,0);
  if (local_28[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_8[0] = local_24;
    FUN_01c8c9d8(param_1 + 8,local_8);
  }
  return;
}


