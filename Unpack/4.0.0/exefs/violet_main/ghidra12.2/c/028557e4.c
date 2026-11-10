/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028557e4; name: FUN_028557e4
 */


void FUN_028557e4(undefined8 param_1)

{
  long lVar1;
  long local_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0xc0f0e79e6ac2797c;
  pcStack_38 = "UpdateSessionSetting";
  local_30 = 0x14;
  uStack_28 = 0;
  FUN_0285585c(&local_60);
  FUN_028558f8(param_1,&local_40,&local_60);
  lVar1 = local_60;
  local_60 = 0;
  if (lVar1 != 0) {
    FUN_028559a8(auStack_58);
  }
  return;
}


