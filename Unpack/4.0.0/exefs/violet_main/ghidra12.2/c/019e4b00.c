/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e4b00; name: FUN_019e4b00
 */


void FUN_019e4b00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &DAT_04602830;
  param_1[4] = &PTR_LAB_046029d0;
  param_1[5] = &DAT_04602af8;
  param_1[0x24] = &PTR_LAB_04602bb0;
  param_1[6] = &PTR_LAB_04602b50;
  param_1[7] = &PTR_LAB_04602b78;
  nn::os::LockMutex((MutexType *)(param_1 + 0x25));
  lVar1 = param_1[0x3d];
  lVar2 = param_1[0x3e];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  if (0 < (int)((ulong)(lVar2 - lVar1) >> 4) * -0x45d1745d) {
    FUN_019e4bc4(param_1);
  }
  if ((long *)param_1[0x7d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7d] + 0x20))();
  }
  if ((long *)param_1[0x7c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7c] + 0x20))();
  }
  FUN_013ec594(param_1);
  return;
}


