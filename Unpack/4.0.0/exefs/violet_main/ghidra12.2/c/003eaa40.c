/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eaa40; name: FUN_003eaa40
 */


long FUN_003eaa40(char *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  size_t *psVar3;
  size_t *psVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  
  if (param_1 == (char *)0x0) {
    FUN_004806c0(0x20,0x7e,0x73,"external/openssl/crypto/bio/bss_mem.c",0x5e);
    return 0;
  }
  if ((int)param_2 < 0) {
    sVar5 = strlen(param_1);
    lVar1 = FUN_003e8a30(&DAT_044a26d0);
  }
  else {
    sVar5 = (size_t)param_2;
    lVar1 = FUN_003e8a30(&DAT_044a26d0);
  }
  if (lVar1 == 0) {
    return 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x38);
  psVar4 = (size_t *)*puVar2;
  psVar4[2] = sVar5;
  *psVar4 = sVar5;
  psVar4[1] = (size_t)param_1;
  psVar3 = (size_t *)puVar2[1];
  sVar5 = *psVar4;
  sVar7 = psVar4[3];
  sVar6 = psVar4[2];
  psVar3[1] = psVar4[1];
  *psVar3 = sVar5;
  psVar3[3] = sVar7;
  psVar3[2] = sVar6;
  *(uint *)(lVar1 + 0x28) = *(uint *)(lVar1 + 0x28) | 0x200;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return lVar1;
}


