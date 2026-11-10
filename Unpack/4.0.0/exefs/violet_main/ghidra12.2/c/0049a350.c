/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049a350; name: FUN_0049a350
 */


undefined8 FUN_0049a350(long *param_1,long param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
    uVar5 = 0x6b;
    uVar6 = 0x90;
LAB_0049a3b8:
    FUN_004806c0(0x22,0x7e,uVar5,"external/openssl/crypto/x509v3/v3_sxnet.c",uVar6);
    return 0;
  }
  sVar8 = param_4 & 0xffffffff;
  iVar1 = (int)param_4;
  if (iVar1 == -1) {
    sVar8 = strlen(param_3);
    iVar1 = (int)sVar8;
  }
  if (0x40 < iVar1) {
    uVar5 = 0x84;
    uVar6 = 0x96;
    goto LAB_0049a3b8;
  }
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_003e49a0(PTR_DAT_047cd6d0);
    if ((puVar7 == (undefined8 *)0x0) || (iVar1 = FUN_003e1030(*puVar7,0), iVar1 == 0)) {
      plVar4 = (long *)0x0;
      goto LAB_0049a4f8;
    }
    *param_1 = (long)puVar7;
    iVar1 = FUN_0047e430(puVar7[1]);
  }
  else {
    iVar1 = FUN_0047e430(puVar7[1]);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_0047e450(puVar7[1],iVar1);
      iVar2 = FUN_003e0620(*puVar3,param_2);
      if (iVar2 == 0) {
        if (puVar3[1] != 0) {
          uVar5 = 0x85;
          uVar6 = 0xa2;
          goto LAB_0049a3b8;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(puVar7[1]);
    } while (iVar1 < iVar2);
  }
  plVar4 = (long *)FUN_003e49a0(PTR_DAT_047cd6d8);
  if (plVar4 != (long *)0x0) {
    if ((int)sVar8 == -1) {
      sVar8 = strlen(param_3);
    }
    iVar1 = thunk_FUN_003df070(plVar4[1],param_3,sVar8 & 0xffffffff);
    if ((iVar1 != 0) && (iVar1 = FUN_0047e2f0(puVar7[1],plVar4), iVar1 != 0)) {
      *plVar4 = param_2;
      return 1;
    }
  }
LAB_0049a4f8:
  FUN_004806c0(0x22,0x7e,0x41,"external/openssl/crypto/x509v3/v3_sxnet.c",0xb3);
  FUN_003e4550(plVar4,PTR_DAT_047cd6d8);
  FUN_003e4550(puVar7,PTR_DAT_047cd6d0);
  *param_1 = 0;
  return 0;
}


