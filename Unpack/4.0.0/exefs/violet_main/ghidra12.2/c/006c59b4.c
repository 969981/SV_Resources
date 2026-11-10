/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


