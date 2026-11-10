/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344206c; name: FUN_0344206c
 */


void FUN_0344206c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047e6ef8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0xe] = (long)(puVar1 + 0xe8);
  *param_1 = (long)(puVar1 + 0x10);
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    lVar5 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar5 + 0x1e8));
    *(int *)(lVar5 + 0x210) = *(int *)(lVar5 + 0x210) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1e8));
  }
  FUN_0343cfb0(param_1);
  lVar5 = tpidr_el0;
  plVar4 = *(long **)(lVar5 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar3 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar4,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03442128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1,0,8);
  return;
}


