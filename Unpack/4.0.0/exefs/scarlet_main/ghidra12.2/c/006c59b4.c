/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c59b4; name: FUN_006c59b4
 */


void FUN_006c59b4(long param_1)

{
  EventType *pEVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  FUN_006c4b84(auStack_40);
  plVar2 = (long *)FUN_006c4ae0();
  pEVar1 = (EventType *)(param_1 + 0x120);
  *plVar2 = param_1;
  uVar3 = nn::os::TryWaitEvent(pEVar1);
  if ((uVar3 & 1) == 0) {
    do {
      FUN_006c6a08(param_1 + 8,pEVar1);
      uVar3 = nn::os::TryWaitEvent(pEVar1);
    } while ((uVar3 & 1) == 0);
  }
  FUN_006c4cb4(auStack_40);
  return;
}


