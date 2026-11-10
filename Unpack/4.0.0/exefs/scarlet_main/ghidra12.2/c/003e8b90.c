/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e8b90; name: FUN_003e8b90
 */


undefined8 FUN_003e8b90(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar1 = param_1 + 10;
  do {
    lVar4 = *plVar1;
    iVar5 = (int)lVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < (int)lVar4) {
    return 1;
  }
  pcVar7 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar7 == (code *)0x0) goto LAB_003e8c2c;
LAB_003e8c00:
    uVar6 = (*pcVar7)(param_1,1,0,0,0,0,1,0);
    iVar5 = (int)uVar6;
  }
  else {
    if (pcVar7 != (code *)0x0) goto LAB_003e8c00;
    uVar6 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
    iVar5 = (int)uVar6;
  }
  if (iVar5 < 1) {
    return uVar6;
  }
LAB_003e8c2c:
  if ((*param_1 != 0) && (pcVar7 = *(code **)(*param_1 + 0x50), pcVar7 != (code *)0x0)) {
    (*pcVar7)(param_1);
  }
  FUN_00444c10(0xc,param_1,param_1 + 0xd);
  FUN_0047e620(param_1[0xe]);
  FUN_00452f80(param_1,"external/openssl/crypto/bio/bio_lib.c",0x8a);
  return 1;
}


