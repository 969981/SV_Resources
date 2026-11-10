/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3320; name: FUN_003b3320
 */


void FUN_003b3320(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x9c);
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
  FUN_00489d50(*(undefined8 *)(param_1 + 0x1a0));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x348),"external/openssl/ssl/ssl_lib.c",0xae);
  *(undefined8 *)(param_1 + 0x348) = 0;
  FUN_00452f80(*(undefined8 *)(param_1 + 0x350),"external/openssl/ssl/ssl_lib.c",0xb1);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x358) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_003b9d80(param_1,0);
  }
  FUN_00444c10(1,param_1,param_1 + 0xe8);
  FUN_00451510(*(undefined8 *)(param_1 + 0x28));
  FUN_00484650(*(undefined8 *)(param_1 + 0x20));
  FUN_0047db00(*(undefined8 *)(param_1 + 8));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x10));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x18));
  FUN_003ae150(*(undefined8 *)(param_1 + 0x140));
  puVar6 = PTR_FUN_047cca78;
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x118),PTR_FUN_047cca78);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x120),puVar6);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x100),PTR_FUN_047cd0a0);
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_0047db00(*(undefined8 *)(param_1 + 0x368));
  FUN_003da680(param_1);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x230),"external/openssl/ssl/ssl_lib.c",0xd26);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x240),"external/openssl/ssl/ssl_lib.c",0xd27);
  FUN_00452f80(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_lib.c",0xd29);
  FUN_00453350(*(undefined8 *)(param_1 + 0x200),"external/openssl/ssl/ssl_lib.c",0xd2a);
  FUN_0047e620(*(undefined8 *)(param_1 + 0x378));
  FUN_00452f80(param_1,"external/openssl/ssl/ssl_lib.c",0xd2e);
  return;
}


