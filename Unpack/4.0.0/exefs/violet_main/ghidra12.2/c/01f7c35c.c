/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7c35c; name: FUN_01f7c35c
 */


bool FUN_01f7c35c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  lVar1 = lVar1 - *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x58) = lVar1;
  if (1000.0 <= (double)lVar1 / 1000000.0) {
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    lVar1 = FUN_01f7c420(param_1);
    if (*(long *)(param_1 + 0x48) != lVar1) {
      *(long *)(param_1 + 0x48) = lVar1;
      nn::os::GetSystemTick();
      uVar2 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x60) = uVar2;
    }
  }
  nn::os::GetSystemTick();
  lVar1 = nn::os::ConvertToTimeSpan();
  lVar1 = lVar1 - *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x68) = lVar1;
  return (double)lVar1 / 1000000.0 < 6000.0;
}


