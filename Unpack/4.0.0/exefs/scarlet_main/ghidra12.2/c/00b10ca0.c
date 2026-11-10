/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b10ca0; name: FUN_00b10ca0
 */


void FUN_00b10ca0(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulong local_48;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  uVar5 = *(ulong *)(param_2 + 0xbd8);
  local_48 = uVar5;
  uVar2 = FUN_02adbf5c();
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    local_48 = 0;
  }
  lVar6 = *param_3;
  if (lVar6 != 0) {
    if (0x7f < uVar5) {
      if (uVar5 < 0x100) {
        uVar5 = 0x80;
      }
      else if (uVar5 < 0x10000) {
        uVar5 = 0x81;
      }
      else {
        uVar4 = 0xffffff82;
        if (uVar5 >> 0x20 != 0) {
          uVar4 = 0xffffff83;
        }
        uVar5 = (ulong)uVar4;
      }
    }
    lVar3 = FUN_0111b030(uVar5 & 0xffffffff);
    if (*(ulong *)(lVar6 + 0x10) < lVar3 + *(long *)(lVar6 + 0x18) + 2U) {
      local_50 = CONCAT44(local_50._4_4_,0xd);
    }
    else {
      *(undefined1 *)(*(long *)(lVar6 + 8) + *(long *)(lVar6 + 0x18)) = 0xb9;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      FUN_00f46670(&local_50,0xb9,&local_48,lVar6 + 8);
    }
  }
  local_24 = *(undefined4 *)(param_2 + 0xbd0);
  uVar2 = FUN_02adbf5c();
  if ((uVar2 & 1) == 0) {
    local_24 = 0xffffffff;
  }
  if (*param_3 != 0) {
    FUN_01e62d14(&local_50,&local_24,*param_3 + 8);
  }
  *(undefined4 *)(param_2 + 0xbd0) = 0xffffffff;
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar6 == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_00ea2b08(lVar6 + -0x28);
  }
  lVar6 = *param_3;
  bVar1 = bVar1 & 1;
  if (lVar6 != 0) {
    lVar3 = FUN_0111b030(bVar1);
    if ((ulong)(*(long *)(lVar6 + 0x18) + lVar3) <= *(ulong *)(lVar6 + 0x10)) {
      *(byte *)(*(long *)(lVar6 + 8) + *(long *)(lVar6 + 0x18)) = bVar1;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    }
  }
  if (bVar1 != 0) {
    local_50 = *(undefined8 *)(param_2 + 0xb70);
    if (*param_3 != 0) {
      FUN_01e62da0(auStack_28,&local_50,*param_3 + 8);
      local_54 = *(undefined4 *)(param_2 + 0xb78);
      if (*param_3 != 0) {
        FUN_01e62d14(auStack_28,&local_54,*param_3 + 8);
        local_58 = *(undefined4 *)(param_2 + 0xb7c);
        if (*param_3 != 0) {
          FUN_01e62d14(auStack_28,&local_58,*param_3 + 8);
        }
      }
    }
  }
  return;
}


