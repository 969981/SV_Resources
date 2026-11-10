/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b82160; name: FUN_00b82160
 */


void FUN_00b82160(int param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_128;
  undefined4 local_120;
  byte *local_f8;
  uint local_f0;
  ulong local_c8;
  uint local_c0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  byte local_80 [16];
  ulong local_70;
  
  std::string::__init((ulong)local_80,(char)(param_1 << 1));
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar3 = FUN_00ba9500(param_1,param_2,&local_98);
  if (((uVar3 & 1) != 0) && (local_90 != local_98)) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      local_c0 = (uint)(local_80[0] >> 1);
      local_c8 = (ulong)local_80 | 1;
      if ((local_80[0] & 1) != 0) {
        local_c0 = local_80._8_4_;
        local_c8 = local_70;
      }
      pbVar1 = (byte *)(local_98 + lVar5);
      local_f8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        local_f8 = pbVar1 + 1;
      }
      local_128 = 0;
      local_120 = 0xffffffff;
      local_158 = 0;
      local_150 = 0xffffffff;
      local_188 = 0;
      local_180 = 0xffffffff;
      local_1b8 = 0;
      local_1b0 = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0xffffffff;
      local_218 = 0;
      local_210 = 0xffffffff;
      local_f0 = (uint)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        local_f0 = (uint)*(undefined8 *)(pbVar1 + 8);
      }
      local_248 = 0;
      local_240 = 0xffffffff;
      local_278 = 0;
      local_270 = 0xffffffff;
      FUN_00c2ce10(param_3,"$0option $1;\n",&local_c8,&local_f8,&local_128,&local_158,&local_188,
                   &local_1b8,&local_1e8,&local_218,&local_248,&local_278);
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar3 < (ulong)((local_90 - local_98 >> 3) * -0x5555555555555555));
  }
  FUN_01f6e5a0(&local_98);
  if (((local_80[0] & 1) != 0) && (local_70 != 0)) {
    lVar5 = tpidr_el0;
    plVar4 = *(long **)(lVar5 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,local_70,0,8);
    }
    else {
      FUN_00c48fe8(plVar4,local_70,0,8);
    }
  }
  return;
}


