/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046e7a0; name: FUN_0046e7a0
 */


undefined8 FUN_0046e7a0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_0043b710();
  if (param_2 == 5) {
    iVar1 = FUN_00470860(iVar1);
    if (iVar1 != -1) {
      return 1;
    }
    uVar2 = 0x8e;
    uVar3 = 0x16e;
  }
  else if (param_2 == 3) {
    uVar2 = 0x8d;
    uVar3 = 0x168;
  }
  else {
    uVar2 = 1;
    if (iVar1 < 0x2a0) {
      if ((iVar1 - 0x40U < 0x36) &&
         ((1L << ((ulong)(iVar1 - 0x40U) & 0x3f) & 0x24000080000001U) != 0)) {
        return uVar2;
      }
      if (iVar1 - 3U < 2) {
        return uVar2;
      }
      if (iVar1 == 0x101) {
        return uVar2;
      }
    }
    else if ((iVar1 - 0x2a0U < 4) || (iVar1 - 0x448U < 4)) {
      return uVar2;
    }
    uVar2 = 0x9d;
    uVar3 = 0x186;
  }
  FUN_004806c0(4,0x8c,uVar2,"external/openssl/crypto/rsa/rsa_pmeth.c",uVar3);
  return 0;
}


