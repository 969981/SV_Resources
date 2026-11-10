/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079824c; name: FUN_0079824c
 */


void FUN_0079824c(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  void *__dest;
  void *__src;
  
  param_1[1] = *(long *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  __dest = (void *)param_1[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  if ((__dest != (void *)0x0) && (__src = *(void **)(param_2 + 0x18), __src != (void *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    memcpy(__dest,__src,(ulong)(uint)(iVar2 + iVar1));
  }
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  memcpy((void *)((long)param_1 + 0x25),(void *)(param_2 + 0x25),0x10);
  return;
}


