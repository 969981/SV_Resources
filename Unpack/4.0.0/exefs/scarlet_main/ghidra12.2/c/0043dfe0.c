/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043dfe0; name: FUN_0043dfe0
 */


undefined8 * FUN_0043dfe0(int param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long local_38;
  
  puVar7 = (undefined8 *)FUN_00452ce0(0x48,"external/openssl/crypto/evp/p_lib.c",0x8e);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_004806c0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x91);
    return (undefined8 *)0x0;
  }
  piVar1 = (int *)(puVar7 + 1);
  *puVar7 = 0;
  *piVar1 = 1;
  *(undefined4 *)(puVar7 + 6) = 1;
  lVar8 = FUN_0047e540();
  puVar7[8] = lVar8;
  if (lVar8 == 0) {
    FUN_004806c0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x9a);
    uVar10 = 0x9b;
    goto LAB_0043e1c4;
  }
  plVar2 = &local_38;
  if (param_2 != 0) {
    plVar2 = (long *)0x0;
  }
  local_38 = param_2;
  if (((puVar7[5] != 0) && (puVar7[2] != 0)) &&
     (pcVar13 = *(code **)(puVar7[2] + 0xa8), pcVar13 != (code *)0x0)) {
    (*pcVar13)(puVar7);
    puVar7[5] = 0;
  }
  if ((*(int *)((long)puVar7 + 4) == param_1) &&
     (puVar9 = (undefined4 *)puVar7[2], puVar9 != (undefined4 *)0x0)) {
LAB_0043e0a4:
    if (*(code **)(puVar9 + 0x3e) == (code *)0x0) {
      uVar10 = 0xbf;
      uVar11 = 0x96;
      uVar12 = 0xed;
    }
    else {
      iVar6 = (**(code **)(puVar9 + 0x3e))(puVar7,param_3,param_4);
      if (iVar6 != 0) {
        return puVar7;
      }
      uVar10 = 0xbf;
      uVar11 = 0xb4;
      uVar12 = 0xf2;
    }
  }
  else {
    puVar9 = (undefined4 *)FUN_003de9a0(plVar2,param_1);
    if (puVar9 != (undefined4 *)0x0) {
      puVar7[2] = puVar9;
      puVar7[3] = local_38;
      *(undefined4 *)puVar7 = *puVar9;
      *(int *)((long)puVar7 + 4) = param_1;
      goto LAB_0043e0a4;
    }
    uVar10 = 0x9e;
    uVar11 = 0x9c;
    uVar12 = 0xd2;
  }
  FUN_004806c0(6,uVar10,uVar11,"external/openssl/crypto/evp/p_lib.c",uVar12);
  do {
    iVar6 = *piVar1;
    iVar5 = iVar6 + -1;
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
  else if (1 < iVar6) {
    return (undefined8 *)0x0;
  }
  if ((puVar7[2] != 0) && (pcVar13 = *(code **)(puVar7[2] + 0xa8), pcVar13 != (code *)0x0)) {
    (*pcVar13)(puVar7);
    puVar7[5] = 0;
  }
  FUN_0047e620(puVar7[8]);
  FUN_0047e3b0(puVar7[7],PTR_LAB_047cd348);
  uVar10 = 0x262;
LAB_0043e1c4:
  FUN_00452f80(puVar7,"external/openssl/crypto/evp/p_lib.c",uVar10);
  return (undefined8 *)0x0;
}


