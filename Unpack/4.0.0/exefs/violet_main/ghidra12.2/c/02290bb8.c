/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02290bb8; name: FUN_02290bb8
 */


void FUN_02290bb8(undefined1 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  puVar1 = &LAB_022977c4;
  if (DAT_04843ba0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30 = FUN_022979e4(param_5,puVar1,0);
  *param_1 = 1;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_02297a54(param_1 + 8,&local_30);
  return;
}


