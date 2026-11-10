/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f111f4; name: FUN_02f111f4
 */


void FUN_02f111f4(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0220e630(&DAT_0460eb60,"Not implemented");
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  *param_1 = 0;
  return;
}


