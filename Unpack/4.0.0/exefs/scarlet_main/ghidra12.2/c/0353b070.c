/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353b070; name: FUN_0353b070
 */


void FUN_0353b070(ulong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0353b230(param_1,param_2,0);
  if ((param_4 != 0) || (*(int *)((long)param_2 + 0x189c) != 0)) {
    lVar9 = 0;
    do {
      puVar2 = param_2 + 0x17b;
      if (lVar9 != 0) {
        puVar2 = param_2 + lVar9 * 0x65 + 0x2b0;
      }
      if (*puVar2 != 0) {
        uVar10 = 0;
        do {
          FUN_0353b6c0(param_1 & 0xffffffff,puVar2[uVar10 + 1]);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar2);
        *puVar2 = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x20);
  }
  lVar9 = (long)(int)param_1;
  puVar7 = (undefined8 *)nn::os::GetTlsValue((&DAT_048d2d70)[(int)param_1]);
  if (puVar7 == param_2) {
    nn::os::SetTlsValue((&DAT_048d2d70)[lVar9],0);
  }
  piVar1 = (int *)(&DAT_048d2720 + lVar9 * 0x638);
  while (*piVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0353b1a8;
  }
  iVar8 = 1000;
  ClearExclusiveLocal();
  do {
    Yield();
    iVar8 = iVar8 + -1;
    do {
      if (*piVar1 != 0) {
        bVar4 = false;
        ClearExclusiveLocal();
        break;
      }
      bVar4 = true;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while ((iVar8 != 0) && (!bVar4));
  if (iVar8 == 0) {
    do {
      nn::os::SleepThread(100000);
      while (*piVar1 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0353b1a8;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0353b1a8:
  *param_2 = 0xffffffffffffffff;
  puVar6 = &DAT_048d2728;
  if (param_3 != 0) {
    puVar6 = &DAT_048d2730;
  }
  param_2[0x312] = *(undefined8 *)(puVar6 + lVar9 * 0x638);
  *(undefined8 **)(puVar6 + lVar9 * 0x638) = param_2;
  *piVar1 = 0;
  return;
}


