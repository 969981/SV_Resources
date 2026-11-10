/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b5600; name: FUN_003b5600
 */


undefined8 FUN_003b5600(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8);
  FUN_0043b770(uVar4);
  uVar1 = FUN_0043b720();
  if (((int)uVar1 < 0) || (param_3 < uVar1)) {
    FUN_003c3950(param_1,0x50,0x230,0x44,"external/openssl/ssl/ssl_lib.c",0x1246);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0042bbc0();
    if (lVar3 == 0) {
      uVar4 = 0x124d;
    }
    else {
      iVar2 = FUN_0042bfb0(lVar3,uVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_0042be20(lVar3,param_2,0), 0 < iVar2)) {
        uVar4 = 1;
        *param_4 = (ulong)uVar1;
        goto LAB_003b56ec;
      }
      uVar4 = 0x1254;
    }
    FUN_003c3950(param_1,0x50,0x230,0x44,"external/openssl/ssl/ssl_lib.c",uVar4);
  }
  uVar4 = 0;
LAB_003b56ec:
  FUN_0042bbe0(lVar3);
  return uVar4;
}


