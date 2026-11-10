/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b8990; name: FUN_007b8990
 */


void FUN_007b8990(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [32];
  undefined8 local_150;
  undefined1 auStack_148 [64];
  undefined8 local_108;
  undefined4 local_100;
  undefined1 auStack_d8 [136];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  undefined8 local_28;
  
  lVar1 = param_1 + 0x1218;
  uVar2 = FUN_0078a34c(lVar1);
  if ((uVar2 & 1) == 0) {
    local_150 = (undefined *)((ulong)local_150._4_4_ << 0x20);
    FUN_0078a244(auStack_d8,lVar1,&local_150);
    FUN_007938d0(&local_28,*(undefined2 *)(param_1 + 0x1230));
    FUN_007938d0((ulong)&local_28 | 2,(ulong)local_150 & 0xffffffff);
    FUN_007938b0((ulong)&local_28 | 4,(ulong)local_150 & 0xffffffff);
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    FUN_0078a390(auStack_d8,lVar1,&local_50);
    memcpy(auStack_3c,&local_50,0x10);
    FUN_007938d0(auStack_2c,*(undefined2 *)(param_1 + 0x1230));
    FUN_007976d8(auStack_d8);
    local_108 = 0;
    local_100 = 0;
    local_150 = PTR_DAT_047d0a58 + 0x10;
    memset(auStack_148,0,0x40);
    local_150 = PTR_DAT_047d0a60 + 0x10;
    memset(auStack_180,0,0x10);
    FUN_007976e0(auStack_d8,&local_150,auStack_180,0x10);
    FUN_0079790c(auStack_d8,auStack_170,auStack_3c,0x12);
    local_28 = FUN_007938a0(auStack_170);
  }
  FUN_007ec4c8(param_1,local_28);
  return;
}


