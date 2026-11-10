/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007beba8; name: FUN_007beba8
 */


void FUN_007beba8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_2c0 [8];
  int local_2a0 [4];
  undefined4 local_290 [8];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined4 local_90 [8];
  undefined4 local_70 [4];
  
  local_70[0] = 0;
  local_290[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_290);
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_290[0] = 0;
    local_90[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_290 | 4),(Result *)local_90);
    FUN_00cbd7c0(param_1,local_290);
    return;
  }
  lVar8 = *(long *)(param_2 + 0x58);
  FUN_0284e338(local_90);
  nn::os::LockMutex((MutexType *)(param_2 + 0x60));
  if (*(int *)(param_3 + 0x5fc) == 0xffffff) {
    FUN_00796584(local_290);
    FUN_00796584(auStack_270);
    FUN_00796584(auStack_250);
    FUN_00796584(auStack_230);
    FUN_00796584(auStack_210);
    FUN_00796584(auStack_1f0);
    FUN_00796584(auStack_1d0);
    FUN_00796584(auStack_1b0);
    FUN_00796584(auStack_190);
    FUN_00796584(auStack_170);
    FUN_00796584(auStack_150);
    FUN_00796584(auStack_130);
    FUN_00796584(auStack_110);
    FUN_00796584(auStack_f0);
    FUN_00796584(auStack_d0);
    FUN_00796584(auStack_b0);
    uVar4 = FUN_007beab0(param_2,local_290,param_3);
    if (uVar4 == 0) {
      local_2c0[0] = 0;
      local_2a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2c0 | 4),(Result *)local_2a0);
      puVar7 = local_2c0;
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x90);
      uVar9 = (ulong)uVar4;
      if ((ulong)bVar2 != 0xfd) {
        lVar8 = *(long *)(param_2 + 0x80);
        puVar7 = local_290;
        uVar10 = uVar9;
        do {
          uVar5 = FUN_00796a00(lVar8 + (ulong)bVar2 * 0x20,puVar7);
          if ((uVar5 & 1) != 0) goto LAB_007becd4;
          puVar7 = puVar7 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar3 = uVar4 - 1;
        if (uVar3 != 0) {
          uVar10 = 0;
          do {
            lVar8 = uVar10 * 8;
            uVar10 = uVar10 + 1;
            uVar5 = uVar10 & 0xffffffff;
            do {
              uVar6 = FUN_00796a00(local_290 + lVar8,local_290 + uVar5 * 8);
              if ((uVar6 & 1) != 0) goto LAB_007becd4;
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar1;
            } while (uVar1 <= uVar3);
          } while (uVar10 != uVar3);
        }
      }
      if (*(char *)(*(long *)(param_2 + 0x58) + 0x1190) != '\0') goto LAB_007bedb0;
LAB_007becd4:
      local_2c0[0] = 0;
      local_2a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2c0 | 4),(Result *)local_2a0);
      FUN_018ff39c(local_70,local_2c0);
      if (0 < (int)uVar4) {
        puVar7 = local_290;
        do {
          FUN_00796868(local_2c0,puVar7);
          FUN_007bf020(local_2a0,param_2,param_3,local_2c0);
          FUN_0284e3d4(local_2c0);
          if (local_2a0[0] != 0) {
            FUN_018ff39c(local_70,local_2a0);
          }
          puVar7 = puVar7 + 8;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar7 = local_70;
    }
  }
  else {
    FUN_00796868(local_290,param_3 + 0x600);
    uVar9 = FUN_0078b108(local_290,lVar8 + 0x1238);
    FUN_0284e3d4(local_290);
    if ((uVar9 & 1) != 0) {
LAB_007bedb0:
      FUN_007beefc(param_1,param_2,param_3);
      goto LAB_007beecc;
    }
    FUN_00796868(local_290,param_3 + 0x600);
    FUN_0284e39c(local_90,local_290);
    FUN_0284e3d4(local_290);
    uVar9 = FUN_0078b12c(local_90);
    if ((uVar9 & 1) != 0) {
      FUN_007bf020(param_1,param_2,param_3,local_90);
      goto LAB_007beecc;
    }
    local_290[0] = 0;
    local_2c0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_290 | 4),(Result *)local_2c0);
    puVar7 = local_290;
  }
  FUN_00cbd7c0(param_1,puVar7);
LAB_007beecc:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x60));
  FUN_0284e3d4(local_90);
  return;
}


