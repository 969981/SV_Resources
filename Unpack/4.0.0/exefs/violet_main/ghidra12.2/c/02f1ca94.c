/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1ca94; name: FUN_02f1ca94
 */


ulong FUN_02f1ca94(long param_1,ulong *param_2)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x40));
  uVar2 = (ulong)(ushort)param_2[2];
  if (((uVar2 == 0xffff) || (*(int *)(param_1 + 0x50) <= (int)(uint)(ushort)param_2[2])) ||
     (*(float *)(*(long *)(param_1 + 0x48) + uVar2 * 0x50 + 0x28) < 0.0)) {
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
    __s = (char *)(*param_2 & 0xfffffffffffffffe);
    if (((__s == (char *)0x0) || (sVar1 = strlen(__s), (int)sVar1 < 1)) ||
       (uVar2 = FUN_02f1c86c(param_1,__s), (~(uint)uVar2 & 0xffff) == 0)) {
      if (param_2[1] == 0) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = FUN_00cb1704(param_1,param_2[1] + 0x20);
      }
    }
  }
  else {
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
  }
  return uVar2 & 0xffff;
}


