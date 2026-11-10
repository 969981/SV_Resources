/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c0ac34; name: FUN_02c0ac34
 */


void FUN_02c0ac34(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar6;
  lVar5 = param_1[2];
  param_2[2] = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_02c0acd0:
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
    else if (sVar2 == -1) goto LAB_02c0acd0;
  }
  uVar6 = param_1[3];
  param_1[3] = 0;
  param_2[3] = uVar6;
  return;
}


