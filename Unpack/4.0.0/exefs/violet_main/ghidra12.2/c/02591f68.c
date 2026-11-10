/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02591f68; name: FUN_02591f68
 */


void FUN_02591f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [32];
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047df770;
  if (DAT_04851fa8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = param_3;
  FUN_02592d78(auStack_40,param_2,puVar1,0,&local_8);
  FUN_02592dc0(param_1,auStack_40);
  FUN_0219b5bc(auStack_40);
  return;
}


