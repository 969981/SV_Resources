/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186fe98; name: FUN_0186fe98
 */


void FUN_0186fe98(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  
  pcVar9 = (code *)param_1[1];
  if (pcVar9 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar9)(param_1 + 4);
  }
  lVar10 = *param_2;
  param_1[4] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0186ff90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar8;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0186ff90;
  }
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  lVar10 = param_2[4];
  param_2[4] = 0;
  param_1[8] = lVar10;
  FUN_0186fd6c(param_1 + 9,param_2 + 5);
  puVar7 = PTR_LAB_047e2158;
  puVar6 = PTR_LAB_047e2150;
  puVar5 = PTR_LAB_047e2148;
  *param_1 = PTR_FUN_047e2140;
  param_1[1] = puVar5;
  param_1[2] = puVar6;
  param_1[3] = puVar7;
  return;
}


