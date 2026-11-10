/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02857a54; name: FUN_02857a54
 */


void FUN_02857a54(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  lVar7 = *param_2;
  param_1[4] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_02857b48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar5;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02857b48;
  }
  param_1[5] = param_2[1];
  *(undefined1 *)(param_1 + 6) = 0;
  if ((char)param_2[2] != '\0') {
    memcpy((void *)((long)param_1 + 0x34),(void *)((long)param_2 + 0x14),0x28);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *param_1 = &LAB_0287d0d0;
  param_1[1] = &LAB_02c6850c;
  param_1[2] = &LAB_02c697b4;
  param_1[3] = &LAB_02c69880;
  return;
}


