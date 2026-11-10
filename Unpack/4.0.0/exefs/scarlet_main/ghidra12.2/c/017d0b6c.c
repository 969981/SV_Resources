/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d0b6c; name: FUN_017d0b6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_017d0b6c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int local_150;
  byte local_14c;
  char cStack_14b;
  char cStack_14a;
  undefined1 uStack_149;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined6 uStack_144;
  undefined2 uStack_13e;
  undefined1 local_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined6 uStack_134;
  undefined2 uStack_12e;
  undefined6 local_12c;
  undefined2 uStack_126;
  undefined6 uStack_124;
  undefined2 uStack_11e;
  undefined1 local_11c;
  undefined4 uStack_11b;
  undefined1 uStack_117;
  undefined2 uStack_116;
  undefined5 uStack_114;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined4 uStack_10d;
  undefined1 uStack_109;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined6 uStack_104;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined6 local_fc;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined6 uStack_f4;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined5 uStack_eb;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined6 uStack_e4;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined6 local_dc;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined6 uStack_d4;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined5 uStack_cb;
  undefined2 uStack_c6;
  undefined6 uStack_c4;
  undefined2 uStack_be;
  undefined6 local_bc;
  undefined2 uStack_b6;
  undefined6 uStack_b4;
  undefined2 uStack_ae;
  undefined6 local_ac;
  undefined2 uStack_a6;
  undefined6 uStack_a4;
  undefined2 uStack_9e;
  undefined6 local_9c;
  undefined2 uStack_96;
  undefined6 uStack_94;
  undefined2 uStack_8e;
  undefined6 local_8c;
  undefined2 uStack_86;
  undefined6 uStack_84;
  undefined2 uStack_7e;
  undefined6 local_7c;
  undefined2 uStack_76;
  undefined6 uStack_74;
  undefined2 uStack_6e;
  undefined6 local_6c;
  undefined2 uStack_66;
  undefined6 uStack_64;
  undefined2 uStack_5e;
  undefined6 local_5c;
  undefined2 uStack_56;
  undefined6 uStack_54;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  
  local_150 = -1;
  uStack_4c = 0;
  uStack_144 = 0;
  uStack_13e = 0;
  local_14c = 0;
  cStack_14b = '\0';
  cStack_14a = '\0';
  uStack_149 = 0;
  uStack_148 = 0;
  uStack_146 = 0;
  uStack_134 = 0;
  uStack_12e = 0;
  local_13c = 0;
  uStack_13b = 0;
  uStack_139 = 0;
  uStack_138 = 0;
  uStack_136 = 0;
  uStack_124 = 0;
  uStack_11e = 0;
  local_12c = 0;
  uStack_126 = 0;
  uStack_114 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  local_11c = 0;
  uStack_11b = 0;
  uStack_117 = 0;
  uStack_116 = 0;
  uStack_104 = 0;
  uStack_fe = 0;
  uStack_fd = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_108 = 0;
  uStack_106 = 0;
  uStack_105 = 0;
  uStack_f4 = 0;
  uStack_ee = 0;
  uStack_ed = 0;
  local_fc = 0;
  uStack_f6 = 0;
  uStack_f5 = 0;
  uStack_e4 = 0;
  uStack_de = 0;
  uStack_dd = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_d4 = 0;
  uStack_ce = 0;
  uStack_cd = 0;
  local_dc = 0;
  uStack_d6 = 0;
  uStack_d5 = 0;
  uStack_c4 = 0;
  uStack_be = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_c6 = 0;
  uStack_b4 = 0;
  uStack_ae = 0;
  local_bc = 0;
  uStack_b6 = 0;
  uStack_a4 = 0;
  uStack_9e = 0;
  local_ac = 0;
  uStack_a6 = 0;
  uStack_94 = 0;
  uStack_8e = 0;
  local_9c = 0;
  uStack_96 = 0;
  uStack_84 = 0;
  uStack_7e = 0;
  local_8c = 0;
  uStack_86 = 0;
  uStack_74 = 0;
  uStack_6e = 0;
  local_7c = 0;
  uStack_76 = 0;
  uStack_64 = 0;
  uStack_5e = 0;
  local_6c = 0;
  uStack_66 = 0;
  uStack_54 = 0;
  uStack_4e = 0;
  local_5c = 0;
  uStack_56 = 0;
  FUN_0082112c(&local_150,param_6);
  auVar5 = FUN_008212d0(&local_150,param_2,param_3,param_4,param_5);
  lVar3 = auVar5._8_8_;
  if (auVar5._0_4_ != 0) {
    return auVar5._0_8_;
  }
  if (local_150 < 0) {
    if (local_150 != -1) {
      return 0x16;
    }
  }
  else if (local_150 != 0) {
    pbVar1 = (byte *)(param_2 + lVar3);
    if (local_150 == 3) {
      if ((ulong)(param_3 - lVar3) < 2) {
        return 0x22;
      }
      uVar2 = (int)cStack_14b << 0xc | (int)(char)local_14c << 0x12 | (int)cStack_14a << 6;
      *pbVar1 = (byte)(uVar2 >> 0x10);
      pbVar1[1] = (byte)(uVar2 >> 8);
      lVar4 = 2;
    }
    else {
      if (param_3 == lVar3) {
        return 0x22;
      }
      *pbVar1 = (byte)((uint)((int)cStack_14b << 0xc) >> 0x10) |
                (byte)(((uint)local_14c << 0x12) >> 0x10);
      lVar4 = 1;
    }
    goto LAB_017d0d74;
  }
  lVar4 = 0;
LAB_017d0d74:
  *param_1 = lVar4 + lVar3;
  return 0;
}


