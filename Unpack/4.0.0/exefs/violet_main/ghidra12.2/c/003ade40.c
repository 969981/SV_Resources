/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ade40; name: FUN_003ade40
 */


long * FUN_003ade40(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  plVar2 = (long *)FUN_00452ce0(0x218,"external/openssl/ssl/ssl_cert.c",0x4c);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x50);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar2 + 0x41) = 1;
  *plVar2 = (*param_1 - (long)param_1) + (long)plVar2;
  lVar3 = FUN_0047e540();
  plVar2[0x42] = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x58);
    FUN_00452f80(plVar2,"external/openssl/ssl/ssl_cert.c",0x59);
    return (long *)0x0;
  }
  if (param_1[1] != 0) {
    plVar2[1] = param_1[1];
    FUN_0043dfc0();
  }
  plVar2[2] = param_1[2];
  lVar3 = 0;
  *(int *)(plVar2 + 3) = (int)param_1[3];
  do {
    lVar4 = *(long *)((long)param_1 + lVar3 + 0x20);
    if (lVar4 != 0) {
      *(long *)((long)plVar2 + lVar3 + 0x20) = lVar4;
      FUN_00485cf0();
    }
    lVar4 = *(long *)((long)param_1 + lVar3 + 0x28);
    if (lVar4 != 0) {
      *(long *)((long)plVar2 + lVar3 + 0x28) = lVar4;
      FUN_0043dfc0(*(undefined8 *)((long)param_1 + lVar3 + 0x28));
    }
    if (*(long *)((long)param_1 + lVar3 + 0x30) != 0) {
      lVar4 = FUN_00484190();
      *(long *)((long)plVar2 + lVar3 + 0x30) = lVar4;
      if (lVar4 == 0) {
        FUN_004806c0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x75);
        goto LAB_003ae128;
      }
    }
    if (*(long *)((long)param_1 + lVar3 + 0x38) != 0) {
      pvVar5 = (void *)FUN_00452c30(*(undefined8 *)((long)param_1 + lVar3 + 0x40),
                                    "external/openssl/ssl/ssl_cert.c",0x7c);
      *(void **)((long)plVar2 + lVar3 + 0x38) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        FUN_004806c0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x7e);
        goto LAB_003ae128;
      }
      *(undefined8 *)((long)plVar2 + lVar3 + 0x40) = *(undefined8 *)((long)param_1 + lVar3 + 0x40);
      memcpy(pvVar5,*(void **)((long)param_1 + lVar3 + 0x38),
             *(size_t *)((long)param_1 + lVar3 + 0x40));
    }
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x168);
  if (param_1[0x33] == 0) {
    plVar2[0x33] = 0;
    if (param_1[0x35] != 0) goto LAB_003ae004;
LAB_003ae070:
    plVar2[0x35] = 0;
    lVar3 = param_1[0x31];
  }
  else {
    pvVar5 = (void *)FUN_00452c30(param_1[0x34] << 1,"external/openssl/ssl/ssl_cert.c",0x8a);
    plVar2[0x33] = (long)pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_003ae128;
    memcpy(pvVar5,(void *)param_1[0x33],param_1[0x34] << 1);
    plVar2[0x34] = param_1[0x34];
    if (param_1[0x35] == 0) goto LAB_003ae070;
LAB_003ae004:
    pvVar5 = (void *)FUN_00452c30(param_1[0x36] << 1,"external/openssl/ssl/ssl_cert.c",0x95);
    plVar2[0x35] = (long)pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_003ae128;
    memcpy(pvVar5,(void *)param_1[0x35],param_1[0x36] << 1);
    plVar2[0x36] = param_1[0x36];
    lVar3 = param_1[0x31];
  }
  if (lVar3 != 0) {
    lVar3 = FUN_0045ace0(lVar3,param_1[0x32],"external/openssl/ssl/ssl_cert.c",0x9f);
    plVar2[0x31] = lVar3;
    if (lVar3 == 0) goto LAB_003ae128;
    plVar2[0x32] = param_1[0x32];
  }
  *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  lVar3 = param_1[0x37];
  plVar2[0x38] = param_1[0x38];
  plVar2[0x37] = lVar3;
  if (param_1[0x3a] != 0) {
    FUN_004847f0();
    plVar2[0x3a] = param_1[0x3a];
  }
  if (param_1[0x39] != 0) {
    FUN_004847f0();
    plVar2[0x39] = param_1[0x39];
  }
  plVar2[0x3d] = param_1[0x3d];
  *(int *)(plVar2 + 0x3e) = (int)param_1[0x3e];
  plVar2[0x3f] = param_1[0x3f];
  iVar1 = FUN_003bfa00(plVar2 + 0x3b,param_1 + 0x3b);
  if (iVar1 != 0) {
    if (param_1[0x40] == 0) {
      return plVar2;
    }
    lVar3 = FUN_0045abd0(param_1[0x40],"external/openssl/ssl/ssl_cert.c",0xbc);
    plVar2[0x40] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
  }
LAB_003ae128:
  FUN_003ae150(plVar2);
  return (long *)0x0;
}


