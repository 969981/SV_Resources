/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025de3b8; name: FUN_025de3b8
 */


void FUN_025de3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_78 [8];
  undefined1 auStack_70 [80];
  
  puVar1 = PTR_FUN_047e0018;
  if (DAT_04853948 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025deb74(local_78,param_2,puVar1,0);
  FUN_025debd0(param_1,local_78);
  if (local_78[0] != '\0') {
    FUN_019ab5b0(auStack_70);
  }
  return;
}


