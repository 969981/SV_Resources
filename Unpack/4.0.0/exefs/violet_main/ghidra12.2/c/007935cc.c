/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007935cc; name: FUN_007935cc
 */


void FUN_007935cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  *param_1 = uVar1;
  return;
}


