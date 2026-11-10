/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b17c0; name: FUN_027b17c0
 */


void FUN_027b17c0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02790ba0(param_2,param_1);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027b18c0;
    psVar1 = (short *)(lVar6 + 0x1a);
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
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027b18c0;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  param_2[4] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_027b18c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
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
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027b18c0;
  }
  return;
}


