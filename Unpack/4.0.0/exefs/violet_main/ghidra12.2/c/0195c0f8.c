/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195c0f8; name: FUN_0195c0f8
 */


void FUN_0195c0f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_8 [8];
  
  lVar5 = FUN_0195c2a8(auStack_8,param_2,param_3);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_0195c180:
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
    else if (sVar2 == -1) goto LAB_0195c180;
  }
  return;
}


