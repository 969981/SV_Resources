/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00359c10; name: FUN_00359c10
 */


undefined8 FUN_00359c10(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_0038db40(param_1 + 0xb);
  plVar3 = (long *)(*param_1 + 0x28);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0 < param_2) {
    plVar3 = param_1 + 9;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 != 0) {
      lVar4 = param_1[0xf];
      param_1[0xf] = lVar4 - param_2;
      if (lVar4 - param_2 < 0) {
        if (param_3 != (undefined8 *)0x0) {
          param_1[0x13] = param_1[0x13] + param_2;
          param_3[3] = 0;
          *param_3 = 0;
          plVar3 = param_1 + 0x10;
          if (*plVar3 != 0) {
            plVar3 = (long *)param_1[0x11];
          }
          *plVar3 = (long)param_3;
          param_1[0x11] = (long)param_3;
        }
        if ((char)param_1[0x12] == '\0') {
          *(undefined1 *)(param_1 + 0x12) = 1;
          FUN_00350c0c(*(undefined8 *)(*param_1 + 0x10),param_1 + 1,0);
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_0038db60(param_1 + 0xb);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


