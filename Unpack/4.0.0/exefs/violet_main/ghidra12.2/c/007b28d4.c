/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b28d4; name: FUN_007b28d4
 */


void FUN_007b28d4(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  plVar4 = (long *)FUN_007aedc0(*(undefined8 *)(param_1 + 0x218));
  (**(code **)(*param_2 + 0x10))(param_2);
  param_2[1] = (ulong)*(ushort *)((long)plVar4 + 10);
  *(short *)(param_2 + 2) = (short)*(char *)((long)plVar4 + 0x66);
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = *(char *)((long)plVar4 + 0x62) == '\0';
  }
  else {
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x218) + 0x1e);
  }
  *(undefined1 *)((long)param_2 + 0x24) = uVar1;
  param_2[7] = *plVar4;
  memcpy((void *)((long)param_2 + 0x25),(void *)(param_1 + 0x220),0x10);
  memcpy(param_2 + 8,(void *)(param_1 + 0x12e0),(ulong)*(byte *)(param_1 + 0x1320));
  *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x1320);
  FUN_00798314(param_2);
  memcpy((void *)((long)param_2 + 0x81),(void *)((long)plVar4 + 0x26c),0x180);
  iVar2 = FUN_00798434(*(undefined8 *)(param_1 + 0x218));
  iVar3 = FUN_027e9a44(*(undefined8 *)(param_1 + 0x218));
  *(int *)(param_2 + 4) = iVar3 + iVar2;
  *(short *)((long)param_2 + 0x202) = (short)plVar4[9];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


