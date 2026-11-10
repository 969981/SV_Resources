/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cbf60; name: FUN_003cbf60
 */


undefined8 FUN_003cbf60(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    param_2[5] = 0x2020202020202020;
    param_2[4] = 0x2020202020202020;
    param_2[7] = 0x2020202020202020;
    param_2[6] = 0x2020202020202020;
    param_2[1] = 0x2020202020202020;
    *param_2 = 0x2020202020202020;
    param_2[3] = 0x2020202020202020;
    param_2[2] = 0x2020202020202020;
    if (*(int *)(param_1 + 0x5c) - 0x27U < 2) {
      pcVar4 = "TLS 1.3, server CertificateVerify";
    }
    else {
      pcVar4 = "TLS 1.3, client CertificateVerify";
    }
    uVar5 = *(undefined8 *)(pcVar4 + 8);
    uVar3 = *(undefined8 *)pcVar4;
    uVar7 = *(undefined8 *)(pcVar4 + 0x18);
    uVar6 = *(undefined8 *)(pcVar4 + 0x10);
    *(undefined2 *)(param_2 + 0xc) = 0x79;
    param_2[9] = uVar5;
    param_2[8] = uVar3;
    param_2[0xb] = uVar7;
    param_2[10] = uVar6;
    if ((*(int *)(param_1 + 0x5c) == 0x27) || (*(int *)(param_1 + 0x5c) == 0x1d)) {
      memcpy((void *)((long)param_2 + 0x62),(void *)(param_1 + 0x558),*(size_t *)(param_1 + 0x598));
      local_28 = *(long *)(param_1 + 0x598);
    }
    else {
      uVar3 = FUN_003b5600(param_1,(long)param_2 + 0x62,0x40,&local_28);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    *param_3 = param_2;
    *param_4 = local_28 + 0x62;
  }
  else {
    lVar2 = FUN_003e9560(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,param_3);
    if (lVar2 < 1) {
      FUN_003c3950(param_1,0x50,0x24c,0x44,"external/openssl/ssl/statem/statem_lib.c",0xf1);
      return 0;
    }
    *param_4 = lVar2;
  }
  return 1;
}


