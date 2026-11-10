/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a14b4; name: FUN_028a14b4
 */


undefined8 FUN_028a14b4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x24a) & 1) == 0) {
      return 1;
    }
    FUN_014ece90(*(undefined8 *)(param_1 + 0x40));
    plVar5 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return 0;
}


