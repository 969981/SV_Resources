/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464690; name: FUN_00464690
 */


ulong FUN_00464690(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar3 = 0x69;
    uVar4 = 0x29b;
  }
  else {
    lVar1 = 0;
    if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0x38)) {
      lVar1 = *(ulong *)(param_1 + 0x38) - *(ulong *)(param_1 + 0x30);
    }
    uVar6 = *(ulong *)(param_1 + 8);
    uVar5 = lVar1 * (ulong)param_2 + 7 >> 3;
    if (uVar5 <= *(long *)(param_1 + 0x20) - uVar6) {
      uVar7 = *(ulong *)(param_1 + 0x18) - uVar6;
      if (uVar7 <= uVar5 || *(ulong *)(param_1 + 0x18) <= uVar6) {
        uVar7 = uVar5;
      }
      iVar2 = FUN_00464cf0(param_1,uVar7);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return 0;
      }
      return uVar7;
    }
    uVar3 = 0x7d;
    uVar4 = 0x2a3;
  }
  FUN_004806c0(0x24,0x73,uVar3,"external/openssl/crypto/rand/rand_lib.c",uVar4);
  return 0;
}


