/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c3469c; name: FUN_02c3469c
 */


void FUN_02c3469c(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    memcpy((void *)((long)param_2 + 0xc),(void *)((long)param_1 + 0xc),0x28);
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar5 = param_1[7];
  param_2[7] = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_02c3475c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    psVar1 = (short *)(lVar5 + 0x1a);
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
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      *(undefined8 *)(lVar5 + 8) = uVar6;
      *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_02c3475c;
  }
  uVar6 = param_1[8];
  param_1[8] = 0;
  param_2[8] = uVar6;
  return;
}


