/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ecce00; name: FUN_01ecce00
 */


void FUN_01ecce00(undefined1 *param_1)

{
  int iVar1;
  undefined8 local_8;
  
  iVar1 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_8);
  *param_1 = 0;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = local_8;
    *param_1 = 1;
  }
  return;
}


