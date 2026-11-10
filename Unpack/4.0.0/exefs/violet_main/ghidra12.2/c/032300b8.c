/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032300b8; name: FUN_032300b8
 */


ulong * FUN_032300b8(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (0x280 < *param_2) {
                    /* WARNING: Could not recover jumptable at 0x0323013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (ulong *)(**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                                (*(long **)(param_1 + 0x30),param_2);
    return puVar2;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  puVar1 = *(ulong **)(*(long *)(param_1 + 0x58) + (*param_2 + 0xf >> 1 & 0x7ffffffffffffff8));
  puVar2 = (ulong *)*puVar1;
  if (puVar2 == (ulong *)0x0) {
    puVar2 = (ulong *)puVar1[8];
    if (puVar2 < (ulong *)puVar1[9]) {
      puVar1[0xd] = puVar1[0xd] - 1;
      puVar1[8] = (long)puVar2 + puVar1[1];
    }
    else {
      puVar2 = (ulong *)FUN_031cee84(puVar1);
    }
  }
  else {
    puVar1[0xd] = puVar1[0xd] - 1;
    *puVar1 = *puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xdeadf00d,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/Allocators/hkFreeListAllocator.cpp"
                 ,0xe8,"Out of memory");
  }
  *param_2 = puVar1[1];
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  return puVar2;
}


