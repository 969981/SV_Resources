/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247ef48; name: FUN_0247ef48
 */


void FUN_0247ef48(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  uVar1 = 0x88;
  if (DAT_0484c200 == '\0') {
    uVar1 = 0;
  }
  local_30 = FUN_02480308(param_2,uVar1,DAT_0484c208);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


