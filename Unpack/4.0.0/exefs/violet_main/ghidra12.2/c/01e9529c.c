/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9529c; name: FUN_01e9529c
 */


void FUN_01e9529c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_016c7db0();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01e94e9c(param_1,lVar1,1,param_2);
  return;
}


