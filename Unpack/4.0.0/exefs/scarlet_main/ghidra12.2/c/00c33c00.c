/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c33c00; name: FUN_00c33c00
 */


undefined8 FUN_00c33c00(undefined8 *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined **ppuStack_188;
  undefined8 *local_180;
  int local_178 [2];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_118;
  undefined ***pppuStack_110;
  byte local_108;
  byte *local_100;
  ulong local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  uint local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  char local_b7;
  ulong local_b0 [4];
  ulong uStack_90;
  ulong local_88;
  byte *local_80;
  byte *local_78;
  undefined8 uStack_70;
  
  (**(code **)(*param_3 + 0x38))(param_3);
  bVar2 = *(byte *)((long)param_1 + 0x1e);
  local_c8 = (**(code **)(*param_3 + 0xb8))(param_3);
  local_1a0 = *param_1;
  uStack_198 = param_1[1];
  local_190 = param_1[2];
  local_bc = *(undefined1 *)((long)param_1 + 0x19);
  local_bb = *(undefined1 *)((long)param_1 + 0x1a);
  local_ba = *(undefined1 *)((long)param_1 + 0x1b);
  local_b9 = *(undefined1 *)((long)param_1 + 0x1c);
  cVar3 = *(char *)((long)param_1 + 0x1d);
  local_b8 = *(undefined1 *)(param_1 + 3);
  local_130 = 0;
  ppuStack_188 = &PTR_LAB_0455c8d0;
  local_180 = &local_1a0;
  pppuStack_110 = &ppuStack_188;
  local_170 = 0;
  uStack_168 = 0;
  local_ec = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 1;
  local_150 = 0;
  local_178[0] = 0;
  local_80 = (byte *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_100 = (byte *)0x0;
  local_f8 = 0;
  local_160 = 0;
  uStack_158 = 0;
  pcVar9 = *(code **)(*param_2 + 0x10);
  local_118 = param_2;
  while (uVar6 = (*pcVar9)(local_118,&local_80,&local_f8), (uVar6 & 1) != 0) {
    if ((int)local_f8 != 0) {
      local_100 = local_80;
      local_108 = *local_80;
      goto LAB_00c33d48;
    }
    pcVar9 = *(code **)(*local_118 + 0x10);
  }
  local_108 = 0;
  local_f8 = local_f8 & 0xffffffff00000000;
  local_f0 = 1;
LAB_00c33d48:
  local_b7 = '\0';
  local_d4 = 1;
  local_d0 = 1;
  if (cVar3 != '\0') {
    local_cc = 0x100;
  }
  local_c0 = bVar2 ^ 1;
  FUN_00c2f698(local_178);
  do {
    if (local_178[0] == 1) {
      if (local_b7 == '\0') {
        if ((*(char *)(param_1 + 3) != '\0') ||
           (uVar6 = (**(code **)(*param_3 + 0x40))(param_3), (uVar6 & 1) != 0)) {
          uVar10 = 1;
          goto LAB_00c33dc8;
        }
        local_80 = (byte *)0x0;
        local_78 = (byte *)0x0;
        uStack_70 = 0;
        FUN_00bf6454(param_3,&local_80);
        pbVar4 = local_78;
        pbVar11 = local_80;
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_b0[2] = 0;
        if (local_80 != local_78) {
          pbVar1 = *(byte **)(local_80 + 0x10);
          if ((*local_80 & 1) == 0) {
            pbVar1 = local_80 + 1;
          }
          std::string::append((char *)local_b0,(ulong)pbVar1);
          pbVar11 = pbVar11 + 0x18;
          if (pbVar11 != pbVar4) {
            lVar13 = -0x18;
            do {
              if (lVar13 != 0) {
                std::string::append((char *)local_b0);
              }
              pbVar1 = *(byte **)(pbVar11 + 0x10);
              if ((*pbVar11 & 1) == 0) {
                pbVar1 = pbVar11 + 1;
              }
              std::string::append((char *)local_b0,(ulong)pbVar1);
              pbVar11 = pbVar11 + 0x18;
              lVar13 = lVar13 + -0x18;
            } while (pbVar11 != pbVar4);
          }
        }
        puVar7 = (ulong *)std::string::insert((ulong)local_b0,(char *)0x0);
        uStack_90 = puVar7[1];
        local_88 = puVar7[2];
        local_b0[3] = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_00c340d8(&local_1a0,0xffffffff,0,local_b0 + 3);
        uVar6 = local_88;
        if (((local_b0[3] & 1) != 0) && (local_88 != 0)) {
          lVar13 = tpidr_el0;
          plVar12 = *(long **)(lVar13 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar8 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,uVar6,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,uVar6,0,8);
          }
        }
        uVar6 = local_b0[2];
        if (((local_b0[0] & 1) != 0) && (local_b0[2] != 0)) {
          lVar13 = tpidr_el0;
          plVar12 = *(long **)(lVar13 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar8 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,uVar6,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,uVar6,0,8);
          }
        }
        FUN_01f6e5a0(&local_80);
      }
      break;
    }
    uVar6 = FUN_00c386c4(&local_1a0,param_3);
  } while ((uVar6 & 1) != 0);
  uVar10 = 0;
LAB_00c33dc8:
  FUN_00c2dc7c(local_178);
  return uVar10;
}


