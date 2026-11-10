/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175c780; name: FUN_0175c780
 */


void FUN_0175c780(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  
  if (param_2 != 0) {
    do {
      if (param_1[0x10] != 0) {
        psVar1 = (short *)(param_1[0x10] + 0x18);
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
          FUN_0116e168();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      pcVar5 = (code *)param_1[1];
      param_2 = param_2 + -1;
      if (pcVar5 != (code *)0x0) {
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        (*pcVar5)(param_1 + 4);
      }
      param_1 = param_1 + 0x12;
    } while (param_2 != 0);
  }
  return;
}


