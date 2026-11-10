/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024b1e78; name: FUN_024b1e78
 */


void FUN_024b1e78(undefined8 param_1,undefined8 param_2)

{
  ulong local_40;
  undefined8 auStack_38 [3];
  
  local_40 = 0x45bc6a1;
  auStack_38[0] = param_2;
  FUN_024ad86c(&local_40,param_1);
  if (((local_40 != 0) && ((local_40 & 1) == 0)) &&
     (*(code **)(local_40 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)(local_40 & 0xfffffffffffffffe))(auStack_38,auStack_38,2);
  }
  return;
}


