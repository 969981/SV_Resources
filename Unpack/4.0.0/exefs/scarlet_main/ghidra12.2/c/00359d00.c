/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00359d00; name: FUN_00359d00
 */


void FUN_00359d00(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_0038db40(param_1 + 0xb);
  lVar4 = *param_1;
  plVar1 = (long *)(lVar4 + 0x28);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 <= lVar5) {
    lVar6 = param_1[0xf];
    lVar5 = lVar6 + param_2;
    param_1[0xf] = lVar5;
    if (((lVar6 < 1) && (0 < lVar5)) && ((char)param_1[0x14] == '\0')) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      FUN_00350c0c(*(undefined8 *)(lVar4 + 0x10),param_1 + 5,0);
    }
    FUN_0038db60(param_1 + 0xb);
    if (0 < param_2) {
      plVar1 = param_1 + 9;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -param_2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (param_2 <= lVar4) {
        if (lVar4 == param_2) {
          FUN_00350c0c(*(undefined8 *)(*param_1 + 0x10),param_1 + 0x22,0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


