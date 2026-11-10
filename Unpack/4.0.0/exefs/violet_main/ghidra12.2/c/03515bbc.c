/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03515bbc; name: FUN_03515bbc
 */


void FUN_03515bbc(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 0xa60) = 1;
  if (*(char *)(param_1 + 0x8a0) != '\0') {
    nn::os::SignalEvent((EventType *)(param_1 + 0xa38));
    nn::os::WaitThread((ThreadType *)(param_1 + 0x860));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x860));
    if ((*(long *)(param_1 + 0xa28) != 0) && (lVar4 = *(long *)(param_1 + 0xa20), lVar4 != 0)) {
      lVar1 = tpidr_el0;
      plVar5 = *(long **)(lVar1 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar3 = FUN_00c4e564(plVar5);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar4,0,8);
      }
    }
    *(undefined8 *)(param_1 + 0xa20) = 0;
  }
  if (*(char *)(param_1 + 0xa4b) == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0xa38));
    return;
  }
  return;
}


