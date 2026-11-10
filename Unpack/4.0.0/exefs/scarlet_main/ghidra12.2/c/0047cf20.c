/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047cf20; name: FUN_0047cf20
 */


undefined8 FUN_0047cf20(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_44 [20];
  
  iVar1 = FUN_003eb2b0(param_3);
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  if (((param_1 != param_3) && (iVar1 = FUN_003ebf10(param_1,param_3), -1 < iVar1)) ||
     ((param_2 != param_3 && (iVar1 = FUN_003ebf10(param_2,param_3), -1 < iVar1)))) {
    return 0;
  }
  iVar2 = iVar2 >> 3;
  lVar3 = FUN_00452c30((long)(iVar2 << 1),"external/openssl/crypto/srp/srp_lib.c",0x22);
  if (((lVar3 != 0) && (iVar1 = FUN_003ebc80(param_1,lVar3,iVar2), -1 < iVar1)) &&
     (iVar1 = FUN_003ebc80(param_2,lVar3 + iVar2,iVar2), -1 < iVar1)) {
    uVar4 = FUN_0043c280();
    iVar2 = FUN_0042c130(lVar3,(long)(iVar2 << 1),auStack_44,0,uVar4,0);
    if (iVar2 != 0) {
      uVar4 = FUN_003eba50(auStack_44,0x14,0);
      goto LAB_0047d01c;
    }
  }
  uVar4 = 0;
LAB_0047d01c:
  FUN_00452f80(lVar3,"external/openssl/crypto/srp/srp_lib.c",0x2a);
  return uVar4;
}


