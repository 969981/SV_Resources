/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c1368; name: FUN_004c1368
 */


void FUN_004c1368(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < param_2) {
    FUN_004c1450(param_1,param_2);
    return;
  }
  if (uVar2 <= param_2) {
    return;
  }
  uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if ((uVar2 < 3) ||
     (uVar4 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar2 
                                                  >> 8)),POPCOUNT((char)uVar2)))))))),
     uVar3 = NEON_uaddlv(uVar4,1), 1 < (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar3))) {
    uVar1 = std::__next_prime(uVar1);
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (uVar2 <= uVar1) {
      return;
    }
  }
  else {
    if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (uVar2 <= uVar1) {
      return;
    }
  }
  FUN_004c1450(param_1);
  return;
}


