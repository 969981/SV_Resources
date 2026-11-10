/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2210; name: FUN_003a2210
 */


undefined8 FUN_003a2210(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = ~(-1L << ((param_4 & 7) << 3)) + param_4;
  if (6 < param_4 - 1) {
    uVar4 = 0xffffffffffffffff;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 <= uVar4) {
    uVar4 = param_3;
  }
  param_1[4] = uVar4;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  param_1[3] = 0;
  lVar2 = FUN_00452ce0(0x28,"external/openssl/ssl/packet.c",0x61);
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    FUN_004806c0(0x14,0x279,0x41,"external/openssl/ssl/packet.c",0x62);
    return 0;
  }
  if (param_4 == 0) {
    return 1;
  }
  *(ulong *)(lVar2 + 0x10) = param_4;
  *(ulong *)(lVar2 + 0x18) = param_4;
  if ((ulong)(param_1[4] - param_1[3]) < param_4) {
LAB_003a22b0:
    FUN_00452f80(lVar2,"external/openssl/ssl/packet.c",0x6d);
    param_1[5] = 0;
    return 0;
  }
  lVar3 = param_1[1];
  lVar2 = lVar3;
  if (lVar3 == 0) {
    uVar4 = *(ulong *)*param_1;
    if (uVar4 - param_1[3] < param_4) {
      uVar1 = param_4;
      if (param_4 <= uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 * 2;
      if (uVar4 < 0x101) {
        uVar4 = 0x100;
      }
      if ((long)uVar1 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      lVar2 = FUN_003f31c0((ulong *)*param_1,uVar4);
      if (lVar2 == 0) {
        lVar2 = param_1[5];
        goto LAB_003a22b0;
      }
      lVar3 = param_1[1];
      lVar2 = lVar3;
      if (lVar3 != 0) goto LAB_003a2360;
    }
    lVar3 = 0;
    lVar2 = *(long *)(*param_1 + 8);
  }
LAB_003a2360:
  lVar6 = *plVar5;
  param_1[3] = param_1[3] + param_4;
  *plVar5 = lVar6 + param_4;
  if (lVar3 == 0) {
    lVar3 = *(long *)(*param_1 + 8);
  }
  *(long *)(param_1[5] + 8) = (lVar2 + lVar6) - lVar3;
  return 1;
}


