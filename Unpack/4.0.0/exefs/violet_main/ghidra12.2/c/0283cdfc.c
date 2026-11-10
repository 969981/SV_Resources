/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0283cdfc; name: FUN_0283cdfc
 */


void FUN_0283cdfc(undefined8 *param_1,long *param_2)

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
LAB_0283cebc:
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
    else if (sVar2 == -1) goto LAB_0283cebc;
  }
  puVar7 = PTR_LAB_047e2338;
  puVar6 = PTR_FUN_047e2330;
  puVar5 = PTR_FUN_047e2328;
  *param_1 = PTR_LAB_047e2320;
  param_1[1] = puVar5;
  param_1[2] = puVar6;
  param_1[3] = puVar7;
  return;
}


