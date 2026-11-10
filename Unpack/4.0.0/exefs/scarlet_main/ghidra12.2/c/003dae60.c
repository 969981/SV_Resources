/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dae60; name: FUN_003dae60
 */


undefined8 FUN_003dae60(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_003ebf10(*(undefined8 *)(param_1 + 0x8f0),*(undefined8 *)(param_1 + 0x8e8));
  if (((iVar1 < 0) &&
      (iVar1 = FUN_003ebf10(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x8e8)),
      iVar1 < 0)) && (iVar1 = FUN_003eb480(*(undefined8 *)(param_1 + 0x900)), iVar1 == 0)) {
    iVar1 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x8e8));
    if (iVar1 < *(int *)(param_1 + 0x930)) {
      uVar3 = 0x47;
      uVar4 = 0xf1;
      uVar5 = 0x15c;
    }
    else if (*(code **)(param_1 + 0x8d0) == (code *)0x0) {
      lVar2 = FUN_0047d830(*(undefined8 *)(param_1 + 0x8f0),*(undefined8 *)(param_1 + 0x8e8));
      if (lVar2 != 0) {
        return 1;
      }
      uVar3 = 0x47;
      uVar4 = 0xf1;
      uVar5 = 0x169;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x8d0))(param_1,*(undefined8 *)(param_1 + 0x8c0));
      if (0 < iVar1) {
        return 1;
      }
      uVar3 = 0x47;
      uVar4 = 0xea;
      uVar5 = 0x164;
    }
  }
  else {
    uVar3 = 0x2f;
    uVar4 = 0x186;
    uVar5 = 0x156;
  }
  FUN_003c3950(param_1,uVar3,0x254,uVar4,"external/openssl/ssl/tls_srp.c",uVar5);
  return 0;
}


