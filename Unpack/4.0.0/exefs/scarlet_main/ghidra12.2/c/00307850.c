/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00307850; name: FUN_00307850
 */


void FUN_00307850(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    if (param_2 < 0x14) {
      *(undefined4 *)(param_1 + 0x38) = 2;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      return;
    }
    if (param_2 < 0x14) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      plVar1 = (long *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
      *(long *)(param_1 + 0xd8) = param_1;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


