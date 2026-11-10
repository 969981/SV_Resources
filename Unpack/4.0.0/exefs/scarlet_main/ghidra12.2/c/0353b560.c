/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353b560; name: FUN_0353b560
 */


void FUN_0353b560(int param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_2[8];
  lVar6 = *plVar4;
  if (lVar6 != 0) {
    lVar3 = nn::os::GetTlsValue((&DAT_048d2d70)[param_1]);
    plVar4 = (long *)param_2[8];
    if ((lVar6 != lVar3) && (*(int *)((long)plVar4 + 0x189c) == 0)) {
      plVar4 = plVar4 + 0x30c;
      do {
        lVar6 = *plVar4;
        *param_2 = lVar6;
        while (*plVar4 == lVar6) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = (long)param_2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  plVar4[0x30d] = plVar4[0x30d] + -1;
  if (*(long **)(param_2[8] + 0x7e70) == param_2) {
    *(long *)(param_2[8] + 0x7e70) = param_2[9];
  }
  else {
    lVar6 = param_2[9];
    lVar3 = param_2[10];
    *(long *)(lVar3 + 0x48) = lVar6;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x50) = lVar3;
    }
  }
  lVar3 = *(long *)(&DAT_048d2150 + (long)param_1 * 0x638) * (ulong)*(uint *)((long)param_2 + 0x2c);
  plVar4 = param_2 + 0xb;
  lVar6 = lVar3;
  if ((*(int *)((long)param_2 + 0x3c) != 0) && (lVar3 != 0)) {
    param_2 = (long *)((long)param_2 + (long)(*(int *)((long)param_2 + 0x3c) * -8));
    lVar6 = (&DAT_048d2168)[(long)param_1 * 199] + lVar3;
  }
  (**(code **)(&DAT_048d2110 + (long)param_1 * 0x638))(param_2,lVar3,*plVar4,lVar6);
  if (lVar6 == 0) {
    return;
  }
  do {
    lVar3 = DAT_048d2d80;
    lVar5 = DAT_048d2d80 - lVar6;
    while (DAT_048d2d80 == lVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_048d2d80 = lVar5;
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


