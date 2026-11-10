/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ada310; name: FUN_00ada310
 */


void FUN_00ada310(undefined1 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ushort uVar9;
  byte *pbVar10;
  char local_180 [4];
  int local_17c;
  char local_178 [4];
  int local_174;
  char local_170 [4];
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  undefined1 auStack_154 [4];
  undefined1 local_150;
  undefined1 local_140;
  undefined1 local_134;
  undefined1 local_12c;
  
  switch(*(undefined4 *)(param_2 + 0x50)) {
  case 1:
    FUN_02788aa0(local_178,0);
    if (local_178[0] == '\0') {
LAB_00ada464:
      local_170[0] = '\0';
      local_168 = 0;
      FUN_00adaaec(param_2 + 0x78,local_170);
      goto LAB_00ada4cc;
    }
    if (local_174 != 0) goto LAB_00ada40c;
    uVar6 = 2;
    goto LAB_00ada424;
  case 2:
    FUN_02788bf0(local_178);
    if (local_178[0] == '\0') goto switchD_00ada358_default;
    if ((local_174 == 0) && (FUN_0278b400(local_180), local_180[0] != '\0')) {
      if (local_17c == 0) {
        uVar6 = 3;
      }
      else {
        local_170[0] = '\0';
        local_168 = 0;
        FUN_00adaaec(param_2 + 0x78,local_170);
        uVar6 = 8;
      }
      *(undefined4 *)(param_2 + 0x50) = uVar6;
      goto switchD_00ada358_default;
    }
LAB_00ada40c:
    local_170[0] = '\0';
    local_168 = 0;
    FUN_00adaaec(param_2 + 0x78,local_170);
    uVar6 = 8;
LAB_00ada424:
    *(undefined4 *)(param_2 + 0x50) = uVar6;
    goto switchD_00ada358_default;
  case 3:
    uVar5 = FUN_01e5f02c(param_2);
    if ((uVar5 & 1) == 0) goto LAB_00ada464;
    uVar6 = 5;
    break;
  case 4:
    uVar5 = FUN_01e5f5a8(param_2);
    if ((uVar5 & 1) == 0) goto LAB_00ada464;
    uVar6 = 6;
    break;
  case 5:
  case 6:
    lVar4 = *(long *)(param_2 + 0x58);
    if (lVar4 == 0) goto LAB_00ada464;
    if (*(long *)(lVar4 + 8) == 0) {
      local_16c = *(uint *)(lVar4 + 0xb0);
LAB_00ada490:
      lVar4 = *(long *)(lVar4 + 0xb8);
    }
    else {
      if ((*(byte *)(*(long *)(lVar4 + 8) + 0x24a) & 1) == 0) goto switchD_00ada358_default;
      FUN_01eda888();
      lVar4 = *(long *)(param_2 + 0x58);
      local_16c = *(uint *)(lVar4 + 0xb0);
      if (*(long *)(lVar4 + 8) == 0) goto LAB_00ada490;
      lVar4 = 0;
    }
    local_170[0] = '\x01';
    local_168 = (uint)lVar4;
    FUN_00adaaec(param_2 + 0x78,local_170);
    lVar8 = *(long *)(param_2 + 0x58);
    if (((((*(int *)(lVar8 + 0x78) == 0) && (*(int *)(lVar8 + 0xb0) == 0)) &&
         (*(long *)(lVar8 + 8) == 0)) &&
        ((pbVar10 = *(byte **)(lVar8 + 0xa8), pbVar10 != (byte *)0x0 &&
         (uVar1 = *(uint *)(lVar8 + 0xa4), uVar1 != 0)))) && (lVar4 - 200U < 100)) {
      if (*(int *)(param_2 + 0x50) == 6) {
        uVar5 = FUN_01e5f6f4(pbVar10,uVar1);
        if ((uVar5 & 1) != 0) {
          uVar6 = 3;
          break;
        }
        goto LAB_00ada464;
      }
      if (*(int *)(param_2 + 0x50) == 5) {
        local_170[0] = '\0';
        memset((void *)((ulong)local_170 | 4),0,0x118);
        bVar2 = *pbVar10;
        if (bVar2 == 2) {
LAB_00ada610:
          uVar6 = 4;
          break;
        }
        if (uVar1 < 7) goto LAB_00ada464;
        uVar9 = *(ushort *)(pbVar10 + 5) >> 8 | *(ushort *)(pbVar10 + 5) << 8;
        if (5 < uVar9) {
          uVar9 = 6;
        }
        if (uVar9 == 0) {
          pbVar10 = pbVar10 + 7;
          uVar7 = 0x107;
        }
        else {
          if (uVar1 < 0xb) goto LAB_00ada464;
          uVar7 = (*(uint *)(pbVar10 + 7) & 0xff00ff00) >> 8 |
                  (*(uint *)(pbVar10 + 7) & 0xff00ff) << 8;
          local_16c = uVar7 >> 0x10 | uVar7 << 0x10;
          if (uVar9 == 1) {
            pbVar10 = pbVar10 + 0xb;
            uVar7 = 0x10b;
          }
          else {
            if (uVar1 < 0xf) goto LAB_00ada464;
            uVar7 = (*(uint *)(pbVar10 + 0xb) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar10 + 0xb) & 0xff00ff) << 8;
            local_168 = uVar7 >> 0x10 | uVar7 << 0x10;
            if (uVar9 == 2) {
              pbVar10 = pbVar10 + 0xf;
              uVar7 = 0x10f;
            }
            else {
              if (uVar1 < 0x13) goto LAB_00ada464;
              uVar7 = (*(uint *)(pbVar10 + 0xf) & 0xff00ff00) >> 8 |
                      (*(uint *)(pbVar10 + 0xf) & 0xff00ff) << 8;
              local_164 = uVar7 >> 0x10 | uVar7 << 0x10;
              if (uVar9 == 3) {
                pbVar10 = pbVar10 + 0x13;
                uVar7 = 0x113;
              }
              else {
                if (uVar1 < 0x17) goto LAB_00ada464;
                uVar7 = (*(uint *)(pbVar10 + 0x13) & 0xff00ff00) >> 8 |
                        (*(uint *)(pbVar10 + 0x13) & 0xff00ff) << 8;
                local_160 = uVar7 >> 0x10 | uVar7 << 0x10;
                if (uVar9 == 4) {
                  pbVar10 = pbVar10 + 0x17;
                  uVar7 = 0x117;
                }
                else {
                  if (uVar1 < 0x1b) goto LAB_00ada464;
                  uVar7 = (*(uint *)(pbVar10 + 0x17) & 0xff00ff00) >> 8 |
                          (*(uint *)(pbVar10 + 0x17) & 0xff00ff) << 8;
                  local_15c = uVar7 >> 0x10 | uVar7 << 0x10;
                  if (uVar9 == 5) {
                    pbVar10 = pbVar10 + 0x1b;
                    uVar7 = 0x11b;
                  }
                  else {
                    if (uVar1 < 0x1f) goto LAB_00ada464;
                    uVar7 = (*(uint *)(pbVar10 + 0x1b) & 0xff00ff00) >> 8 |
                            (*(uint *)(pbVar10 + 0x1b) & 0xff00ff) << 8;
                    local_158 = uVar7 >> 0x10 | uVar7 << 0x10;
                    pbVar10 = pbVar10 + 0x1f;
                    uVar7 = 0x11f;
                  }
                }
              }
            }
          }
        }
        if (bVar2 == 0) {
          if (uVar1 < uVar7) goto LAB_00ada464;
          memcpy(auStack_154,pbVar10,0x100);
        }
        local_170[0] = bVar2 == 1;
        cVar3 = *(char *)(param_2 + 0x88);
        memcpy((void *)(param_2 + 0x8c),local_170,0x11c);
        if (cVar3 == '\0') {
          *(undefined1 *)(param_2 + 0x88) = 1;
        }
        if (bVar2 < 2) {
          if ((bVar2 == 0) || (bVar2 == 1)) {
            uVar6 = 7;
            break;
          }
        }
        else {
          if (bVar2 == 2) goto LAB_00ada610;
          if (bVar2 == 0xff) goto LAB_00ada464;
        }
      }
    }
LAB_00ada4cc:
    uVar6 = 8;
    break;
  case 7:
  case 9:
    *param_1 = 0;
    if (*(char *)(param_2 + 0x78) == '\0') {
      return;
    }
    param_1[4] = 0;
    if (*(char *)(param_2 + 0x7c) != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x80);
      param_1[4] = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x84);
    *param_1 = 1;
    return;
  case 8:
    if (*(char *)(param_2 + 0x78) == '\0') {
LAB_00ada54c:
      FUN_01c3df28();
    }
    else if (*(int *)(param_2 + 0x84) == 0x1f7) {
      FUN_01c3ea68();
    }
    else {
      if ((*(char *)(param_2 + 0x7c) == '\0') ||
         (local_16c = *(int *)(param_2 + 0x80), local_16c == 0)) goto LAB_00ada54c;
      local_170[0] = '\x01';
      local_168 = local_168 & 0xffffff00;
      local_150 = 0;
      local_140 = 0;
      local_134 = 0;
      local_12c = 0;
      FUN_01c3d63c(local_170);
    }
    uVar6 = 9;
    break;
  default:
    goto switchD_00ada358_default;
  }
  *(undefined4 *)(param_2 + 0x50) = uVar6;
switchD_00ada358_default:
  *param_1 = 0;
  return;
}


