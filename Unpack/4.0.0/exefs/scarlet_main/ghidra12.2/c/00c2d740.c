/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2d740; name: FUN_00c2d740
 */


undefined1  [16] FUN_00c2d740(char *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  ulong local_90;
  char *local_88;
  char *local_80;
  char local_78 [24];
  char *local_60 [2];
  char *local_48;
  
  dVar10 = strtod(param_1,&local_48);
  if (param_2 != (long *)0x0) {
    *param_2 = (long)local_48;
  }
  uVar12 = extraout_var;
  if (*local_48 == '.') {
    iVar5 = sprintf((char *)local_60,"%.1f",0x3ff8000000000000);
    if ((char)local_60[0] != '1') {
      local_90 = CONCAT44(local_90._4_4_,3);
      local_80 = (char *)CONCAT44(local_80._4_4_,0x40);
      local_88 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/strtod.cc"
      ;
      local_78[0] = '\0';
      local_78[1] = '\0';
      local_78[2] = '\0';
      local_78[3] = '\0';
      local_78[4] = '\0';
      local_78[5] = '\0';
      local_78[6] = '\0';
      local_78[7] = '\0';
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      local_78[0x10] = '\0';
      local_78[0x11] = '\0';
      local_78[0x12] = '\0';
      local_78[0x13] = '\0';
      local_78[0x14] = '\0';
      local_78[0x15] = '\0';
      local_78[0x16] = '\0';
      local_78[0x17] = '\0';
      std::string::append(local_78);
      FUN_00bb0e90(&local_90);
      FUN_00bb0d74(&local_90);
    }
    if (local_78[(long)iVar5 + 0x17] != '5') {
      local_90 = CONCAT44(local_90._4_4_,3);
      local_80 = (char *)CONCAT44(local_80._4_4_,0x41);
      local_88 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/strtod.cc"
      ;
      local_78[0] = '\0';
      local_78[1] = '\0';
      local_78[2] = '\0';
      local_78[3] = '\0';
      local_78[4] = '\0';
      local_78[5] = '\0';
      local_78[6] = '\0';
      local_78[7] = '\0';
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      local_78[0x10] = '\0';
      local_78[0x11] = '\0';
      local_78[0x12] = '\0';
      local_78[0x13] = '\0';
      local_78[0x14] = '\0';
      local_78[0x15] = '\0';
      local_78[0x16] = '\0';
      local_78[0x17] = '\0';
      std::string::append(local_78);
      FUN_00bb0e90(&local_90);
      FUN_00bb0d74(&local_90);
    }
    if (6 < iVar5) {
      local_90 = CONCAT44(local_90._4_4_,3);
      local_80 = (char *)CONCAT44(local_80._4_4_,0x42);
      local_88 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/strtod.cc"
      ;
      local_78[0] = '\0';
      local_78[1] = '\0';
      local_78[2] = '\0';
      local_78[3] = '\0';
      local_78[4] = '\0';
      local_78[5] = '\0';
      local_78[6] = '\0';
      local_78[7] = '\0';
      local_78[8] = '\0';
      local_78[9] = '\0';
      local_78[10] = '\0';
      local_78[0xb] = '\0';
      local_78[0xc] = '\0';
      local_78[0xd] = '\0';
      local_78[0xe] = '\0';
      local_78[0xf] = '\0';
      local_78[0x10] = '\0';
      local_78[0x11] = '\0';
      local_78[0x12] = '\0';
      local_78[0x13] = '\0';
      local_78[0x14] = '\0';
      local_78[0x15] = '\0';
      local_78[0x16] = '\0';
      local_78[0x17] = '\0';
      std::string::append(local_78);
      FUN_00bb0e90(&local_90);
      FUN_00bb0d74(&local_90);
    }
    local_88 = (char *)0x0;
    local_80 = (char *)0x0;
    local_90 = 0;
    strlen(param_1);
    std::string::reserve((ulong)&local_90);
    FUN_00c2da58(&local_90,param_1,local_48);
    std::string::append((char *)&local_90,(ulong)local_60 | 1);
    std::string::append((char *)&local_90);
    pcVar2 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pcVar2 = local_80;
    }
    dVar10 = strtod(pcVar2,local_60);
    uVar7 = local_90;
    uVar12 = extraout_var_00;
    if ((param_2 != (long *)0x0) &&
       (lVar9 = CONCAT71(local_60[0]._1_7_,(char)local_60[0]) - (long)pcVar2,
       (long)local_48 - (long)param_1 < lVar9)) {
      uVar4 = (uint)local_88;
      bVar3 = (byte)local_90 >> 1;
      sVar6 = strlen(param_1);
      uVar1 = (uint)bVar3;
      if ((uVar7 & 1) != 0) {
        uVar1 = uVar4;
      }
      *param_2 = (long)(param_1 + (lVar9 - (int)(uVar1 - (int)sVar6)));
    }
    pcVar2 = local_80;
    if (((uVar7 & 1) != 0) && (local_80 != (char *)0x0)) {
      lVar9 = tpidr_el0;
      plVar8 = *(long **)(lVar9 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,pcVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar8,pcVar2,0,8);
      }
    }
  }
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = dVar10;
  return auVar11;
}


