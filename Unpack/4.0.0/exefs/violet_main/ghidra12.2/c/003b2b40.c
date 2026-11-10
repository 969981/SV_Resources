/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b2b40; name: FUN_003b2b40
 */


void FUN_003b2b40(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x690);
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
  FUN_00489d50(*(undefined8 *)(param_1 + 0xd0));
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0xe0),&LAB_003b5f60);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0xe8),PTR_FUN_047cd0a0);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_0048c830(*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  FUN_00444c10(0,param_1,param_1 + 0x678);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = FUN_003e9870(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    FUN_003e8b90(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_003e9900(*(undefined8 *)(param_1 + 0x18));
  FUN_003e9900(*(undefined8 *)(param_1 + 0x10));
  FUN_003f3160(*(undefined8 *)(param_1 + 0x88));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x120));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x128));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x130));
  FUN_0047db00(*(undefined8 *)(param_1 + 0x118));
  if (*(long *)(param_1 + 0x5d0) != 0) {
    FUN_003b9cc0(param_1);
    FUN_003b8e30(*(undefined8 *)(param_1 + 0x5d0));
  }
  FUN_003b8e30(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x5e0),"external/openssl/ssl/ssl_lib.c",0x4d3);
  if (*(long *)(param_1 + 0x500) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x500) = 0;
  }
  if (*(long *)(param_1 + 0x530) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  FUN_003f4080(*(undefined8 *)(param_1 + 0x528));
  *(undefined8 *)(param_1 + 0x528) = 0;
  FUN_003f4080(*(undefined8 *)(param_1 + 0x520));
  *(undefined8 *)(param_1 + 0x520) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x518));
  *(undefined8 *)(param_1 + 0x518) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x548));
  *(undefined8 *)(param_1 + 0x548) = 0;
  FUN_003ae150(*(undefined8 *)(param_1 + 0x550));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1980),"external/openssl/ssl/ssl_lib.c",0x4d8);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x700),"external/openssl/ssl/ssl_lib.c",0x4db);
  FUN_003b3320(*(undefined8 *)(param_1 + 0x878));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x750),"external/openssl/ssl/ssl_lib.c",0x4de);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x760),"external/openssl/ssl/ssl_lib.c",0x4df);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x770),"external/openssl/ssl/ssl_lib.c",0x4e0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x780),"external/openssl/ssl/ssl_lib.c",0x4e1);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x728),PTR_LAB_047cd0b8);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x720),PTR_FUN_047cd0c0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x730),"external/openssl/ssl/ssl_lib.c",0x4eb);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x7b0),"external/openssl/ssl/ssl_lib.c",0x4ec);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x7e0),"external/openssl/ssl/ssl_lib.c",0x4ed);
  uVar7 = 0;
  if (*(long *)(param_1 + 0x868) != 0) {
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x868) + 0x288),
                 "external/openssl/ssl/ssl_lib.c",0x4ef);
    uVar7 = *(undefined8 *)(param_1 + 0x868);
  }
  FUN_00452f80(uVar7,"external/openssl/ssl/ssl_lib.c",0x4f0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x8a0),"external/openssl/ssl/ssl_lib.c",0x4f1);
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x8b8));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x800),"external/openssl/ssl/ssl_lib.c",0x4f5);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x810),"external/openssl/ssl/ssl_lib.c",0x4f6);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x820),"external/openssl/ssl/ssl_lib.c",0x4f7);
  FUN_003f3160(*(undefined8 *)(param_1 + 0x840));
  puVar8 = *(undefined8 **)(param_1 + 0x848);
  puVar6 = PTR_FUN_047cca78;
  while (PTR_FUN_047cca78 = puVar6, puVar8 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x848) = *puVar8;
    FUN_00452f80(puVar8,"external/openssl/ssl/ssl_lib.c",0x4fe);
    puVar6 = PTR_FUN_047cca78;
    puVar8 = *(undefined8 **)(param_1 + 0x848);
  }
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x680),puVar6);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x688),puVar6);
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x668),PTR_FUN_047cd0a0);
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1);
  }
  FUN_003a4530(param_1 + 0x948);
  FUN_003b3320(*(undefined8 *)(param_1 + 0x660));
  FUN_003e64a0(*(undefined8 *)(param_1 + 0x1918));
  FUN_00452f80(*(undefined8 *)(param_1 + 0x7c0),"external/openssl/ssl/ssl_lib.c",0x511);
  FUN_0047db00(*(undefined8 *)(param_1 + 0x880));
  FUN_0047e620(*(undefined8 *)(param_1 + 0x1950));
  FUN_00452f80(param_1,"external/openssl/ssl/ssl_lib.c",0x51a);
  return;
}


