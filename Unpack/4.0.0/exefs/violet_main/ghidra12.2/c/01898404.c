/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01898404; name: FUN_01898404
 */


void FUN_01898404(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  FUN_01898574(auStack_30,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01898fb4(param_1,auStack_30);
  FUN_01898464(auStack_30);
  *(undefined1 *)(param_1 + 3) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x40;
  }
  param_1[2] = lVar1;
  return;
}


