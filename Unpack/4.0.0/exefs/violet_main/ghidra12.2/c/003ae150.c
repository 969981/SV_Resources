/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ae150; name: FUN_003ae150
 */


void FUN_003ae150(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x208);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar2) {
    return;
  }
  FUN_0043e1f0(*(undefined8 *)(param_1 + 8));
  FUN_003ae230(param_1);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/ssl_cert.c",0xef);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/ssl_cert.c",0xf0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x188),"external/openssl/ssl/ssl_cert.c",0xf1);
  FUN_00484650(*(undefined8 *)(param_1 + 0x1d0));
  FUN_00484650(*(undefined8 *)(param_1 + 0x1c8));
  FUN_003bfc00(param_1 + 0x1d8);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x200),"external/openssl/ssl/ssl_cert.c",0xf6);
  FUN_0047e620(*(undefined8 *)(param_1 + 0x210));
  FUN_00452f80(param_1,"external/openssl/ssl/ssl_cert.c",0xf9);
  return;
}


