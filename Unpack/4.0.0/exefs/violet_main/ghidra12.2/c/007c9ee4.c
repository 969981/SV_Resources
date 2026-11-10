/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c9ee4; name: FUN_007c9ee4
 */


void FUN_007c9ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::ConvertToTimeSpan(param_2);
  nn::os::TimedWaitEvent(param_1 + 0x20,uVar1);
  return;
}


