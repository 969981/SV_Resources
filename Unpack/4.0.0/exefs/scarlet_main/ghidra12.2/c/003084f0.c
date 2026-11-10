/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003084f0; name: FUN_003084f0
 */


void FUN_003084f0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0xea0) = 0;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x38) == 1) {
      *(undefined4 *)(param_1 + 0x38) = 2;
    }
    else if (*(int *)(param_1 + 0x38) == 0) {
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
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
      *(long *)(param_1 + 0xd8) = param_1;
      thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003065d4(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
    return;
  }
  return;
}


