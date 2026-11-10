/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dac70; name: FUN_003dac70
 */


undefined4 FUN_003dac70(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  char *__s;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  iVar3 = FUN_0047d6f0(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x8e8));
  if (iVar3 == 0) {
    lVar5 = 0;
LAB_003dad64:
    FUN_003c3950(param_1,0x50,0x253,0x44,"external/openssl/ssl/tls_srp.c",0x126);
    lVar6 = 0;
    lVar7 = 0;
    __s = (char *)0x0;
  }
  else {
    lVar5 = thunk_FUN_0047cf20(*(undefined8 *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x900),
                               *(undefined8 *)(param_1 + 0x8e8));
    if ((lVar5 == 0) || (*(code **)(param_1 + 0x8d8) == (code *)0x0)) goto LAB_003dad64;
    __s = (char *)(**(code **)(param_1 + 0x8d8))(param_1,*(undefined8 *)(param_1 + 0x8c0));
    if (__s == (char *)0x0) {
      FUN_003c3950(param_1,0x50,0x253,0xea,"external/openssl/ssl/tls_srp.c",0x12e);
      lVar6 = 0;
LAB_003dae30:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_0047d290(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)(param_1 + 0x8e0),__s);
      if ((lVar6 == 0) ||
         (lVar7 = FUN_0047d4f0(*(undefined8 *)(param_1 + 0x8e8),*(undefined8 *)(param_1 + 0x900),
                               *(undefined8 *)(param_1 + 0x8f0),lVar6,
                               *(undefined8 *)(param_1 + 0x910),lVar5), lVar7 == 0)) {
        FUN_003c3950(param_1,0x50,0x253,0x44,"external/openssl/ssl/tls_srp.c",0x136);
        goto LAB_003dae30;
      }
      iVar3 = FUN_003eb2b0();
      uVar1 = iVar3 + 0xe;
      if (-1 < (int)(iVar3 + 7U)) {
        uVar1 = iVar3 + 7U;
      }
      lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      lVar8 = FUN_00452c30(lVar2,"external/openssl/ssl/tls_srp.c",0x13b);
      if (lVar8 != 0) {
        FUN_003ebe40(lVar7,lVar8);
        uVar4 = FUN_003ac690(param_1,lVar8,lVar2,1);
        goto LAB_003dad94;
      }
      FUN_003c3950(param_1,0x50,0x253,0x41,"external/openssl/ssl/tls_srp.c",0x13d);
    }
  }
  uVar4 = 0xffffffff;
LAB_003dad94:
  FUN_003eb490(lVar7);
  FUN_003eb490(lVar6);
  if (__s != (char *)0x0) {
    sVar9 = strlen(__s);
    FUN_00453260(__s,sVar9,"external/openssl/ssl/tls_srp.c",0x147);
  }
  FUN_003eb490(lVar5);
  return uVar4;
}


