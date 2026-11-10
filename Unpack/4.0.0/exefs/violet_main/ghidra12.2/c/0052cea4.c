/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052cea4; name: FUN_0052cea4
 */


void FUN_0052cea4(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0052ceb0 to 0052ceb3 has its CatchHandler @ 0052cec0 */
  uVar1 = FUN_0052c420(param_1,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


