/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484650; name: FUN_00484650
 */


void FUN_00484650(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x88);
  do {
    iVar4 = *piVar1;
    iVar5 = iVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar4) {
    return;
  }
  FUN_0049d970();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  iVar4 = FUN_0047e430(uVar8);
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      lVar6 = FUN_0047e450(uVar8,iVar4);
      if ((*(long *)(lVar6 + 8) != 0) &&
         (pcVar7 = *(code **)(*(long *)(lVar6 + 8) + 0x20), pcVar7 != (code *)0x0)) {
        (*pcVar7)(lVar6);
      }
      if (lVar6 != 0) {
        if ((*(long *)(lVar6 + 8) != 0) &&
           (pcVar7 = *(code **)(*(long *)(lVar6 + 8) + 0x10), pcVar7 != (code *)0x0)) {
          (*pcVar7)(lVar6);
        }
        FUN_00452f80(lVar6,"external/openssl/crypto/x509/x509_lu.c",0x2e);
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_0047e430(uVar8);
    } while (iVar4 < iVar5);
  }
  FUN_0047db00(uVar8);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 8),PTR_LAB_047cd510);
  FUN_00444c10(4,param_1,param_1 + 0x80);
  FUN_00489d50(*(undefined8 *)(param_1 + 0x18));
  FUN_0047e620(*(undefined8 *)(param_1 + 0x90));
  FUN_00452f80(param_1,"external/openssl/crypto/x509/x509_lu.c",0xf8);
  FUN_0049dab0();
  return;
}


