/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186e0b4; name: FUN_0186e0b4
 */


void FUN_0186e0b4(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *local_28;
  
  if ((*(long **)(param_2 + 0x60) == (long *)0x0) ||
     (uVar5 = (**(code **)(**(long **)(param_2 + 0x60) + 0x70))(), (uVar5 & 1) == 0)) {
    FUN_0186e318(&local_28);
    FUN_0186e16c(param_1,param_2,&local_28);
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[6];
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
        (**(code **)(*local_28 + 0x50))();
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


