/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b18d8; name: FUN_027b18d8
 */


void FUN_027b18d8(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02790ba0(param_2,param_1);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_027b1984:
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
    else if (sVar2 == -1) goto LAB_027b1984;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_2[4] = uVar6;
  return;
}


