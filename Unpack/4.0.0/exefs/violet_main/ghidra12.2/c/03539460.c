/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03539460; name: FUN_03539460
 */


void FUN_03539460(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)param_1;
  lVar6 = nn::os::GetTlsValue((&DAT_048d2d70)[param_1]);
  if (lVar6 != 0) {
    FUN_0353b070(param_1,lVar6,0,1);
  }
  nn::os::SetTlsValue((&DAT_048d2d70)[lVar7],0);
  lVar6 = lVar7 * 0x638;
  if (*(long *)(&DAT_048d2590 + lVar6) != 0) {
    iVar2 = *(int *)(&DAT_048d2598 + lVar7 * 0x638);
    piVar1 = (int *)(*(long *)(&DAT_048d25a0 + lVar7 * 0x638) + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 - iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(&DAT_048d2598 + lVar6) = 0;
    *(undefined8 *)(&DAT_048d25a0 + lVar6) = 0;
    *(undefined8 *)(&DAT_048d2590 + lVar6) = 0;
  }
  lVar6 = 0;
  *(undefined4 *)(&DAT_048d2720 + lVar7 * 0x638) = 0;
  do {
    lVar5 = *(long *)(&DAT_048d25a8 + lVar7 * 0x638 + lVar6 * 8);
    while (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x1888);
      *(undefined4 *)(lVar5 + 0x189c) = 1;
      FUN_03539580(param_1);
      lVar5 = lVar8;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x2f);
  nn::os::FreeTlsSlot((&DAT_048d2d70)[lVar7]);
  *(undefined4 *)(&DAT_048d2100 + lVar7 * 0x638) = 0;
  return;
}


