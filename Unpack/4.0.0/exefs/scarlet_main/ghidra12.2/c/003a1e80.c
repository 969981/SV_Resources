/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1e80; name: FUN_003a1e80
 */


undefined8 FUN_003a1e80(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[5] == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_00452ce0(0x28,"external/openssl/ssl/packet.c",0x119);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x14,0x27a,0x41,"external/openssl/ssl/packet.c",0x11a);
    return 0;
  }
  *plVar2 = param_1[5];
  lVar5 = param_1[3];
  param_1[5] = (long)plVar2;
  plVar2[2] = param_2;
  plVar2[3] = lVar5 + param_2;
  if (param_2 == 0) {
    plVar2[1] = 0;
    return 1;
  }
  if ((ulong)(param_1[4] - lVar5) < param_2) {
    return 0;
  }
  lVar3 = param_1[1];
  lVar6 = lVar3;
  if (lVar3 == 0) {
    uVar4 = *(ulong *)*param_1;
    if (uVar4 - lVar5 < param_2) {
      uVar1 = param_2;
      if (param_2 <= uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 * 2;
      if (uVar4 < 0x101) {
        uVar4 = 0x100;
      }
      if ((long)uVar1 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      lVar5 = FUN_003f31c0((ulong *)*param_1,uVar4);
      if (lVar5 == 0) {
        return 0;
      }
      lVar3 = param_1[1];
      lVar6 = lVar3;
      if (lVar3 != 0) goto LAB_003a1fa0;
    }
    lVar3 = 0;
    lVar6 = *(long *)(*param_1 + 8);
  }
LAB_003a1fa0:
  lVar5 = param_1[2];
  param_1[3] = param_1[3] + param_2;
  param_1[2] = lVar5 + param_2;
  if (lVar3 == 0) {
    lVar3 = *(long *)(*param_1 + 8);
  }
  plVar2[1] = (lVar6 + lVar5) - lVar3;
  return 1;
}


