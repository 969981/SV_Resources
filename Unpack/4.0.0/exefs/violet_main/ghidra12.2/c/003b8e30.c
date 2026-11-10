/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b8e30; name: FUN_003b8e30
 */


void FUN_003b8e30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1d0);
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
  FUN_00444c10(2,param_1,param_1 + 0x200);
  FUN_00453300(param_1 + 0x50,0x100);
  FUN_00453300(param_1 + 0x158,0x20);
  FUN_0048c830(*(undefined8 *)(param_1 + 0x1b8));
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x1c0),PTR_FUN_047cd0a0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x218),"external/openssl/ssl/ssl_sess.c",0x2fd);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x220),"external/openssl/ssl/ssl_sess.c",0x2fe);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1a0),"external/openssl/ssl/ssl_sess.c",0x300);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/ssl_sess.c",0x301);
  FUN_00452f80(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_sess.c",0x304);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x240),"external/openssl/ssl/ssl_sess.c",0x306);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x260),"external/openssl/ssl/ssl_sess.c",0x307);
  FUN_0047e620(*(undefined8 *)(param_1 + 0x278));
  FUN_00453260(param_1,0x280,"external/openssl/ssl/ssl_sess.c",0x309);
  return;
}


