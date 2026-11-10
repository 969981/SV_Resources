/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c304a8; name: FUN_00c304a8
 */


undefined1  [16] FUN_00c304a8(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  ulong local_80 [3];
  undefined4 local_68 [2];
  char *local_60;
  undefined4 local_58;
  char local_50 [24];
  byte *local_38;
  
  pbVar7 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  auVar9 = FUN_00c2d740(pbVar7,&local_38);
  uVar10 = auVar9._8_8_;
  bVar2 = *local_38;
  pbVar3 = local_38;
  if ((bVar2 | 0x20) == 0x65) {
    bVar2 = local_38[1];
    if ((bVar2 == 0x2d) || (pbVar3 = local_38 + 1, bVar2 == 0x2b)) {
      bVar2 = local_38[2];
      pbVar3 = local_38 + 2;
    }
  }
  local_38 = pbVar3;
  if ((bVar2 | 0x20) == 0x66) {
    local_38 = local_38 + 1;
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (((long)local_38 - (long)pbVar7 != uVar1) || (*pbVar7 == 0x2d)) {
    local_68[0] = 2;
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_58 = 0x398;
    local_60 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/tokenizer.cc"
    ;
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    std::string::append(local_50);
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[0] = 0;
    uVar1 = (ulong)(*param_1 >> 1);
    pbVar7 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    FUN_00c0fad0(pbVar7,uVar1,local_80);
    uVar1 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar1 = local_80[2];
    }
    std::string::append(local_50,uVar1);
    FUN_00bb0e90(local_68);
    uVar1 = local_80[2];
    if (((local_80[0] & 1) != 0) && (local_80[2] != 0)) {
      lVar6 = tpidr_el0;
      plVar8 = *(long **)(lVar6 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar1,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar1,0,8);
      }
    }
    FUN_00bb0d74(local_68);
  }
  auVar9._8_8_ = uVar10;
  return auVar9;
}


