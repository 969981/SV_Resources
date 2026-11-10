/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6b740; name: FUN_01c6b740
 */


void FUN_01c6b740(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = (undefined4)param_3;
  if ((param_3 & 0xff00000000) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_20 = param_2;
    FUN_01c6ccec(param_1 + 8,&local_20);
  }
  return;
}


