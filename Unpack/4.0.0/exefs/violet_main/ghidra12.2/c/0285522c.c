/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0285522c; name: FUN_0285522c
 */


void FUN_0285522c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *local_18;
  
  if ((*(long **)(param_2 + 0x60) == (long *)0x0) ||
     (uVar5 = (**(code **)(**(long **)(param_2 + 0x60) + 0x70))(), (uVar5 & 1) == 0)) {
    FUN_028552f0(&local_18,param_2,param_3);
    FUN_0186e16c(param_1,param_2,&local_18);
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
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
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}


