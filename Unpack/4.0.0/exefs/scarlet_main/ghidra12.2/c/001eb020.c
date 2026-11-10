/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eb020; name: FUN_001eb020
 */


void FUN_001eb020(long param_1,char *param_2)

{
  uint *puVar1;
  size_t __n;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_e0;
  uint local_d8 [16];
  ulong local_98;
  undefined1 local_90 [56];
  ulong local_58;
  
  local_e0 = 0;
  local_d8[0] = 0x6a09e667;
  local_d8[1] = 0;
  local_d8[2] = 0xbb67ae85;
  local_d8[3] = 0;
  local_d8[4] = 0x3c6ef372;
  local_d8[5] = 0;
  local_d8[6] = 0xa54ff53a;
  local_d8[7] = 0;
  local_d8[8] = 0x510e527f;
  local_d8[9] = 0;
  local_d8[10] = 0x9b05688c;
  local_d8[0xb] = 0;
  local_d8[0xc] = 0x1f83d9ab;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0x5be0cd19;
  local_d8[0xf] = 0;
  local_98 = 0;
  strlen(param_2);
  uVar2 = FUN_001ec18c();
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar2;
    do {
      if ((uVar3 == 0) && (uVar6 = uVar5 - 0x40, 0x3f < uVar5)) {
        FUN_001eb250(&local_e0,param_2);
        local_e0 = local_e0 + 0x200;
        param_2 = param_2 + 0x40;
      }
      else {
        __n = uVar5;
        if (0x40 - uVar3 <= uVar5) {
          __n = 0x40 - uVar3;
        }
        memcpy(local_90 + uVar3,param_2,__n);
        local_98 = local_98 + __n;
        param_2 = param_2 + __n;
        uVar6 = uVar5 - __n;
        if (local_98 == 0x40) {
          FUN_001eb250(&local_e0,local_90);
          local_98 = 0;
          local_e0 = local_e0 + 0x200;
        }
      }
      uVar3 = local_98;
      uVar5 = uVar6;
    } while (uVar6 != 0);
    if (0x3f < local_98) {
      return;
    }
  }
  local_e0 = local_e0 + uVar3 * 8;
  local_98 = uVar3 + 1;
  local_90[uVar3] = 0x80;
  if (local_98 < 0x39) {
    if (local_98 == 0x38) goto LAB_001eb1f0;
  }
  else {
    for (; local_98 < 0x40; local_98 = local_98 + 1) {
      local_90[local_98] = 0;
    }
    FUN_001eb250(&local_e0,local_90);
    local_98 = 0;
  }
  do {
    uVar3 = local_98 + 1;
    local_90[local_98] = 0;
    local_98 = uVar3;
  } while (uVar3 < 0x38);
LAB_001eb1f0:
  uVar3 = (local_e0 & 0xff00ff00ff00ff00) >> 8 | (local_e0 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  local_58 = uVar3 >> 0x20 | uVar3 << 0x20;
  FUN_001eb250(&local_e0,local_90);
  lVar4 = 0;
  param_1 = param_1 + 1;
  do {
    puVar1 = (uint *)((long)local_d8 + lVar4);
    lVar4 = lVar4 + 8;
    uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    *(uint *)(param_1 + -1) = uVar2 >> 0x10 | uVar2 << 0x10;
    param_1 = param_1 + 4;
  } while (lVar4 != 0x40);
  return;
}


