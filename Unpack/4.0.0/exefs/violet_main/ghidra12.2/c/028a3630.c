/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a3630; name: FUN_028a3630
 */


void FUN_028a3630(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x308) != 0) {
    uVar1 = FUN_028a3688();
    while ((uVar1 & 1) != 0) {
      nn::os::SleepThread(100000);
      uVar1 = FUN_028a3688(*(undefined8 *)(param_1 + 0x308),param_2);
    }
  }
  return;
}


