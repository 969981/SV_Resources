/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0287e1d8; name: FUN_0287e1d8
 */


void FUN_0287e1d8(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 1) != '\0') {
    memcpy((void *)((long)param_1 + 0x2c),(void *)((long)param_2 + 0xc),0x28);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  lVar7 = param_2[7];
  param_1[0xb] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0287e32c;
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
    else if (sVar2 == -1) goto LAB_0287e32c;
  }
  lVar7 = param_2[8];
  param_1[0xc] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0287e32c:
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
    else if (sVar2 == -1) goto LAB_0287e32c;
  }
  *param_1 = &LAB_0287e4f4;
  param_1[1] = FUN_02c68898;
  param_1[2] = &LAB_02c693a0;
  param_1[3] = &LAB_02c694cc;
  return;
}


