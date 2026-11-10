/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea5784; name: FUN_01ea5784
 */


void FUN_01ea5784(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x398);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00c43ef0(param_1,lVar1 + 0x1b8);
  param_1[2] = *(undefined8 *)(lVar1 + 0x1c8);
  return;
}


