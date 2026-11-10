/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dab50; name: FUN_003dab50
 */


undefined4 FUN_003dab50(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = FUN_0047d790(*(undefined8 *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x8e8));
  if (iVar3 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_0047cf20(*(undefined8 *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x900),
                               *(undefined8 *)(param_1 + 0x8e8));
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0047d050(*(undefined8 *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x920),lVar5,
                           *(undefined8 *)(param_1 + 0x918),*(undefined8 *)(param_1 + 0x8e8));
      if (lVar6 != 0) {
        iVar3 = FUN_003eb2b0(lVar6);
        uVar1 = iVar3 + 0xe;
        if (-1 < (int)(iVar3 + 7U)) {
          uVar1 = iVar3 + 7U;
        }
        lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
        lVar7 = FUN_00452c30(lVar2,"external/openssl/ssl/tls_srp.c",0x108);
        if (lVar7 != 0) {
          FUN_003ebe40(lVar6,lVar7);
          uVar4 = FUN_003ac690(param_1,lVar7,lVar2,1);
          goto LAB_003dac40;
        }
        FUN_003c3950(param_1,0x50,0x24d,0x41,"external/openssl/ssl/tls_srp.c",0x10a);
      }
    }
  }
  uVar4 = 0xffffffff;
LAB_003dac40:
  FUN_003eb490(lVar6);
  FUN_003eb490(lVar5);
  return uVar4;
}


