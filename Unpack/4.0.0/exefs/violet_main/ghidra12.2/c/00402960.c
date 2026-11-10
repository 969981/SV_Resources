/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00402960; name: FUN_00402960
 */


undefined8 FUN_00402960(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  plVar1 = param_1 + 2;
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
  if ((((*(byte *)((long)param_1 + 0x14) >> 2 & 1) == 0) &&
      (*(code **)(*param_1 + 0x10) != (code *)0x0)) &&
     (iVar5 = (**(code **)(*param_1 + 0x10))(param_1), iVar5 == 0)) {
    uVar6 = 0x6b;
    uVar7 = 0x4f;
  }
  else {
    if ((*(code **)(*param_1 + 0x40) == (code *)0x0) ||
       (iVar5 = (**(code **)(*param_1 + 0x40))(param_1), iVar5 != 0)) {
      FUN_0047db00(param_1[1]);
      FUN_00452f80(param_1[6],"external/openssl/crypto/dso/dso_lib.c",0x5a);
      FUN_00452f80(param_1[7],"external/openssl/crypto/dso/dso_lib.c",0x5b);
      FUN_0047e620(param_1[8]);
      FUN_00452f80(param_1,"external/openssl/crypto/dso/dso_lib.c",0x5d);
      return 1;
    }
    uVar6 = 0x66;
    uVar7 = 0x55;
  }
  FUN_004806c0(0x25,0x6f,uVar6,"external/openssl/crypto/dso/dso_lib.c",uVar7);
  return 0;
}


