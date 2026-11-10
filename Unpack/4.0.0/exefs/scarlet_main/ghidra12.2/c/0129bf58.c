/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0129bf58; name: FUN_0129bf58
 */


void FUN_0129bf58(long param_1,undefined4 param_2,byte param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined1 uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x68);
  *(char *)(param_1 + 0x70 + (ulong)uVar5) = (char)((uint)param_2 >> 8);
  uVar6 = uVar5 + 2;
  *(uint *)(param_1 + 0x68) = uVar6;
  *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 1)) = (char)param_2;
  if (0xc3 < param_3) {
    if (0xd3 < param_3) {
      if (param_3 != 0xd4) {
        if (param_3 != 0xe3) {
          return;
        }
        uVar7 = *param_4;
        lVar9 = param_1 + 0x70;
        *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
        *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
        *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
        *(uint *)(param_1 + 0x68) = uVar5 + 6;
        *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
        uVar6 = param_4[1];
        *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
        *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
        *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
        *(uint *)(param_1 + 0x68) = uVar5 + 10;
        *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
        uVar7 = param_4[2];
        goto LAB_0129c3b0;
      }
      uVar7 = *param_4;
      lVar9 = param_1 + 0x70;
      *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
      *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
      *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
      *(uint *)(param_1 + 0x68) = uVar5 + 6;
      *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
      uVar6 = param_4[1];
      *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
      *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
      *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
      *(uint *)(param_1 + 0x68) = uVar5 + 10;
      *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
      uVar7 = param_4[2];
      *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar7 >> 8);
      uVar6 = uVar5 + 0xc;
      *(uint *)(param_1 + 0x68) = uVar6;
      *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar7;
      uVar7 = param_4[3];
      iVar8 = 0xd;
      goto LAB_0129bff4;
    }
    if (param_3 != 0xc4) {
      if (param_3 != 0xd3) {
        return;
      }
      uVar7 = *param_4;
      lVar9 = param_1 + 0x70;
      *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
      *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
      *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
      *(uint *)(param_1 + 0x68) = uVar5 + 6;
      *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
      uVar6 = param_4[1];
      *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
      *(uint *)(param_1 + 0x68) = uVar5 + 8;
      *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
      uVar7 = param_4[2];
      goto LAB_0129daec;
    }
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar7 = param_4[3];
    goto LAB_0129c448;
  }
  switch(param_3) {
  case 1:
    uVar7 = *param_4;
    goto LAB_0129c0ac;
  case 2:
    uVar7 = *param_4;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(param_1 + (ulong)uVar6 + 0x70) = (char)uVar7;
    uVar7 = param_4[1];
    goto LAB_0129c698;
  case 3:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(param_1 + (ulong)uVar6 + 0x70) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[2];
    goto LAB_0129c698;
  case 4:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    goto LAB_0129c0e0;
  case 5:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) =
         (byte)((uVar7 << 5) >> 8) & 3 | (byte)(((*param_4 & 0x1f) << 10) >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)(uVar7 << 5) | (byte)uVar1 & 0x1f;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar7 = param_4[4];
    goto LAB_0129bfe4;
  case 6:
    uVar3 = param_4[1];
    uVar1 = param_4[4];
    uVar7 = param_4[5];
    uVar2 = param_4[2];
    uVar4 = param_4[3];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) =
         (byte)((uVar3 << 5) >> 8) & 3 | (byte)(((*param_4 & 0x1f) << 10) >> 8);
    uVar7 = uVar1 << 5 | uVar7 & 0x1f;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)(uVar3 << 5) | (byte)uVar2 & 0x1f;
    *(byte *)(lVar9 + (ulong)(uVar5 + 4)) =
         (byte)((uVar1 << 5) >> 8) & 3 | (byte)(((uVar4 & 0x1f) << 10) >> 8);
    goto LAB_0129c0e0;
  case 7:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[6];
    goto LAB_0129cdc8;
  case 8:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[6];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar7 = param_4[7];
    goto LAB_0129c944;
  case 9:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[6];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar6 = param_4[7];
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar7 = param_4[8];
    goto LAB_0129c3b0;
  case 10:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[6];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar6 = param_4[7];
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[8];
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar7 = param_4[9];
    goto LAB_0129cb78;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
    goto switchD_0129bfa4_caseD_b;
  case 0x10:
  case 0x20:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x10;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x14;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x14)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x15)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x16)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x18;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x17)) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x18)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x19)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1a)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x1c;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1b)) = (char)uVar6;
    uVar6 = param_4[7];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1c)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1d)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1e)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x20;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1f)) = (char)uVar6;
    uVar6 = param_4[8];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x20)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x21)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x22)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x24;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x23)) = (char)uVar6;
    uVar7 = param_4[9];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x24)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x25)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x27;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x26)) = (char)(uVar7 >> 8);
    iVar8 = 0x28;
    break;
  case 0x11:
    uVar7 = *param_4;
    uVar1 = uVar7;
    goto LAB_0129cdfc;
  case 0x12:
    uVar7 = *param_4;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(param_1 + 0x70 + (ulong)uVar6) = (char)uVar7;
    uVar7 = param_4[1];
    goto LAB_0129ce24;
  case 0x13:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(param_1 + 0x70 + (ulong)uVar6) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[2];
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 8);
    goto LAB_0129ce30;
  case 0x14:
    uVar7 = *param_4;
    uVar1 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(param_1 + (ulong)uVar6 + 0x70) = (byte)uVar1 & 7 | (byte)(uVar7 << 3);
    uVar7 = param_4[3] & 7 | param_4[2] << 3;
    goto LAB_0129c698;
  case 0x15:
    uVar7 = param_4[2];
    uVar1 = param_4[3];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)param_4[1] & 7 | (byte)(*param_4 << 3);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)uVar1 & 1 | (byte)(uVar7 << 1);
    uVar7 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    goto LAB_0129c0e0;
  case 0x16:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(param_1 + 0x70 + (ulong)uVar6) =
         (byte)(uVar7 << 5) | (byte)((uVar2 & 3) << 3) | (byte)((uVar1 & 1) << 2) |
         (byte)((uVar3 & 1) << 1) | (byte)uVar4 & 1;
    uVar7 = param_4[5];
    goto LAB_0129ce24;
  case 0x17:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar7 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar7 >> 8);
    goto LAB_0129d0a8;
  case 0x18:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x10;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)uVar6;
    uVar7 = param_4[7];
    goto LAB_0129c634;
  case 0x19:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x10;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)uVar6;
    uVar6 = param_4[7];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)uVar6;
    uVar7 = param_4[8];
    uVar6 = uVar5 + 0x13;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar7 >> 8);
    iVar8 = 0x14;
    break;
  case 0x1a:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x10;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)uVar6;
    uVar6 = param_4[7];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)uVar6;
    uVar6 = param_4[8];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x14;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)uVar6;
    uVar7 = param_4[9];
    uVar10 = (undefined1)(uVar7 >> 8);
    goto LAB_0129c334;
  case 0x21:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    goto LAB_0129c0e0;
  case 0x22:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar7 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar7 >> 8);
    goto LAB_0129c044;
  case 0x23:
    uVar7 = param_4[1] << 5 | param_4[2] & 0x1f;
    uVar1 = param_4[1] << 5 & 0x300 | (*param_4 & 0x1f) << 10;
LAB_0129cdfc:
    *(char *)(param_1 + (ulong)uVar6 + 0x70) = (char)(uVar1 >> 8);
LAB_0129c698:
    uVar6 = uVar5 + 3;
    iVar8 = 4;
    break;
  case 0x24:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) =
         (byte)((uVar7 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)((uVar7 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar1;
    goto LAB_0129dd24;
  case 0x25:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(byte *)(param_1 + 0x70 + (ulong)uVar6) =
         (byte)(uVar7 << 5) | (byte)((uVar2 & 7) << 2) | (byte)((uVar1 & 1) << 1) | (byte)uVar3 & 1;
    uVar7 = param_4[4];
LAB_0129ce24:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 8);
    goto LAB_0129ce30;
  case 0x26:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)(uVar7 >> 1) & 0xf;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) =
         (byte)((uVar7 << 0xf) >> 8) | (byte)(((uVar2 & 0x1f) << 10) >> 8) |
         (byte)((uVar1 << 5) >> 8) & 3;
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(byte *)(lVar9 + (ulong)(uVar5 + 4)) = (byte)(uVar1 << 5) | (byte)uVar3 & 0x1f;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[5];
    goto LAB_0129d8a8;
  case 0x27:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)(uVar7 >> 4) & 1;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) =
         (byte)((uVar2 << 7) >> 8) & 0xf | (byte)((uVar7 << 0xc) >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(byte *)(lVar9 + (ulong)(uVar5 + 4)) =
         (byte)(uVar2 << 7) | (byte)((uVar1 & 0x1f) << 2) | (byte)((uVar3 & 1) << 1) |
         (byte)uVar4 & 1;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[6];
LAB_0129d8a8:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 7)) = (char)(uVar7 >> 8);
    goto LAB_0129cdc8;
  case 0x28:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x14)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x16;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x15)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x16)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x17)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x18)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x1a;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x19)) = (char)uVar6;
    uVar6 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1a)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1b)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1c)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x1e;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1d)) = (char)uVar6;
    uVar7 = param_4[7];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1e)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x1f)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x21;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x20)) = (char)(uVar7 >> 8);
    iVar8 = 0x22;
    break;
  case 0x29:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar6 = param_4[6];
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[7];
    *(uint *)(param_1 + 0x68) = uVar5 + 0xd;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)uVar6;
    uVar7 = param_4[8];
    goto LAB_0129c17c;
  case 0x32:
    uVar7 = param_4[1] & 0xf | *param_4 << 4;
    goto LAB_0129c0ac;
  case 0x33:
    uVar1 = param_4[1];
    uVar7 = param_4[2];
    *(byte *)(param_1 + 0x70 + (ulong)uVar6) =
         (byte)((uVar1 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)(param_1 + 0x70 + (ulong)(uVar5 + 3)) =
         (byte)((uVar1 << 0xe) >> 8) | (byte)(uVar7 >> 8) & 0x3f;
    goto LAB_0129ce30;
  case 0x34:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) =
         (byte)((uVar7 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)((uVar7 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar1;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar7 >> 8);
    goto LAB_0129c044;
  case 0x35:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar7 = param_4[4];
    goto LAB_0129cbf8;
  case 0x36:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)((uVar7 << 6) >> 8) & 7 | (byte)((*param_4 << 0xb) >> 8)
    ;
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)(uVar7 << 6) | (byte)uVar1 & 0x3f;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[5];
LAB_0129daec:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 8);
    goto LAB_0129c944;
  case 0x37:
    uVar7 = *param_4;
    uVar2 = param_4[1];
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)(uVar7 >> 4) & 1;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) =
         (byte)((uVar2 << 0xf) >> 0x10) & 0xf | (byte)((uVar7 << 0x14) >> 0x10);
    *(byte *)(lVar9 + (ulong)(uVar5 + 4)) =
         (byte)((uVar2 << 0xf) >> 8) | (byte)(((uVar1 & 0x1f) << 10) >> 8) |
         (byte)((uVar3 << 5) >> 8) & 3;
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(byte *)(lVar9 + (ulong)(uVar5 + 5)) = (byte)(uVar3 << 5) | (byte)uVar4 & 0x1f;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[6];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 8);
    goto LAB_0129c944;
  case 0x42:
    uVar7 = param_4[1] & 7 | *param_4 << 3;
LAB_0129c0ac:
    iVar8 = 3;
    break;
  case 0x43:
    uVar7 = *param_4;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(param_1 + 0x70 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar7 = param_4[2];
LAB_0129ce30:
    uVar6 = uVar5 + 4;
    iVar8 = 5;
    break;
  case 0x44:
    uVar7 = param_4[1];
    uVar1 = param_4[2];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) = (byte)((uVar7 << 6) >> 8) & 7 | (byte)((*param_4 << 0xb) >> 8)
    ;
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)(uVar7 << 6) | (byte)uVar1 & 0x3f;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    goto LAB_0129c0e0;
  case 0x45:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 0x10);
    goto LAB_0129c42c;
  case 0x46:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 8);
    goto LAB_0129c944;
  case 0x47:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar7 = param_4[6];
    uVar10 = (undefined1)(uVar7 >> 8);
    goto LAB_0129c3ac;
  case 0x52:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar7 = param_4[1];
    goto LAB_0129c044;
  case 0x53:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    goto LAB_0129c0e0;
  case 0x54:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
LAB_0129dd24:
    uVar7 = param_4[3];
LAB_0129c0e0:
    uVar6 = uVar5 + 5;
    iVar8 = 6;
    break;
  case 0x55:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar7 = param_4[4];
    goto LAB_0129c944;
  case 0x56:
    uVar3 = param_4[1];
    uVar1 = param_4[2];
    uVar4 = param_4[3];
    uVar2 = param_4[4];
    uVar7 = param_4[5];
    lVar9 = param_1 + 0x70;
    *(byte *)(lVar9 + (ulong)uVar6) =
         (byte)((uVar3 << 0xe) >> 0x10) & 7 | (byte)((*param_4 << 0x13) >> 0x10);
    *(byte *)(lVar9 + (ulong)(uVar5 + 3)) = (byte)((uVar3 << 0xe) >> 8) | (byte)(uVar1 >> 8) & 0x3f;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar1;
    *(byte *)(lVar9 + (ulong)(uVar5 + 5)) = (byte)uVar2 & 1 | (byte)(uVar4 << 1);
    goto LAB_0129c044;
  case 0x57:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[5];
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar7 = param_4[6];
    goto LAB_0129cb78;
  case 0x62:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar7 = param_4[1];
LAB_0129bfe4:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 6)) = (char)(uVar7 >> 8);
    goto LAB_0129bff0;
  case 99:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar7 >> 0x10);
    goto LAB_0129de84;
  case 100:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar7 = param_4[3];
LAB_0129de84:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 6)) = (char)(uVar7 >> 8);
    goto LAB_0129bff0;
  case 0x65:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[3];
LAB_0129c42c:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar7 = param_4[4];
LAB_0129c448:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 0xc)) = (char)(uVar7 >> 8);
    goto LAB_0129c17c;
  case 0x66:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xf;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x13;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)uVar6;
    uVar7 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x14)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x16;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x15)) = (char)(uVar7 >> 8);
    iVar8 = 0x17;
    break;
  case 0x67:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x10;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)uVar6;
    uVar7 = param_4[6];
LAB_0129c634:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 0x10)) = (char)(uVar7 >> 8);
LAB_0129c640:
    uVar6 = uVar5 + 0x11;
    iVar8 = 0x12;
    break;
  case 0x72:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar7 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 8);
LAB_0129c944:
    uVar6 = uVar5 + 9;
    iVar8 = 10;
    break;
  case 0x73:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 0x10);
    goto LAB_0129c3a8;
  case 0x74:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar7 >> 8);
    goto LAB_0129cb78;
  case 0x75:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xf;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)uVar6;
    uVar7 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)(uVar7 >> 8);
    iVar8 = 0x13;
    break;
  case 0x76:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 9;
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar7 = param_4[5];
    goto LAB_0129c3b0;
  case 0x83:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar7 >> 8);
LAB_0129c17c:
    uVar6 = uVar5 + 0xd;
    iVar8 = 0xe;
    break;
  case 0x84:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 8);
    goto LAB_0129d0f8;
  case 0x85:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xc;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)uVar6;
    uVar7 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar7 >> 8);
LAB_0129d0a8:
    uVar6 = uVar5 + 0xf;
    iVar8 = 0x10;
    break;
  case 0x86:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar6 = param_4[4];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[5];
    goto LAB_0129bff0;
  case 0x93:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[2];
LAB_0129bff0:
    uVar6 = uVar5 + 7;
    iVar8 = 8;
    break;
  case 0x94:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar7 >> 8);
    goto LAB_0129c640;
  case 0x95:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 3;
    *(char *)(lVar9 + (ulong)uVar6) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 4;
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 5;
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)uVar6;
    uVar6 = param_4[3];
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar6;
    uVar7 = param_4[4];
LAB_0129c044:
    uVar6 = uVar5 + 6;
    iVar8 = 7;
    break;
  case 0x96:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)uVar6;
    uVar6 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x14)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x16;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x15)) = (char)uVar6;
    uVar7 = param_4[5];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x16)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x17)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0x19;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x18)) = (char)(uVar7 >> 8);
    iVar8 = 0x1a;
    break;
  case 0xa3:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar7 >> 8);
    goto LAB_0129cdc8;
  case 0xa4:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(uint *)(param_1 + 0x68) = uVar5 + 8;
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)uVar6;
    uVar7 = param_4[3];
LAB_0129cdc8:
    uVar6 = uVar5 + 8;
    iVar8 = 9;
    break;
  case 0xa5:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)uVar6;
    uVar6 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xe)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xf)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x10)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0x12;
    *(char *)(lVar9 + (ulong)(uVar5 + 0x11)) = (char)uVar6;
    uVar7 = param_4[4];
    *(char *)(lVar9 + (ulong)(uVar5 + 0x12)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0x13)) = (char)(uVar7 >> 0x10);
    uVar10 = (undefined1)(uVar7 >> 8);
LAB_0129c334:
    uVar6 = uVar5 + 0x15;
    *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar5 + 0x14)) = uVar10;
    iVar8 = 0x16;
    break;
  case 0xb3:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar7 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar7 >> 0x10);
LAB_0129c3a8:
    uVar10 = (undefined1)(uVar7 >> 8);
LAB_0129c3ac:
    *(undefined1 *)(param_1 + 0x70 + (ulong)(uVar5 + 9)) = uVar10;
LAB_0129c3b0:
    uVar6 = uVar5 + 10;
    iVar8 = 0xb;
    break;
  case 0xb4:
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
LAB_0129d0f8:
    lVar9 = param_1 + 0x70;
    *(uint *)(param_1 + 0x68) = uVar5 + 7;
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)uVar6;
    uVar6 = param_4[2];
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 0xb;
    *(char *)(lVar9 + (ulong)(uVar5 + 10)) = (char)uVar6;
    uVar7 = param_4[3];
    *(char *)(lVar9 + (ulong)(uVar5 + 0xb)) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 0xc)) = (char)(uVar7 >> 0x10);
    uVar6 = uVar5 + 0xe;
    *(char *)(lVar9 + (ulong)(uVar5 + 0xd)) = (char)(uVar7 >> 8);
    iVar8 = 0xf;
    break;
  default:
    if (param_3 != 0xc3) {
      return;
    }
    uVar7 = *param_4;
    lVar9 = param_1 + 0x70;
    *(char *)(lVar9 + (ulong)uVar6) = (char)(uVar7 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 3)) = (char)(uVar7 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 4)) = (char)(uVar7 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 6;
    *(char *)(lVar9 + (ulong)(uVar5 + 5)) = (char)uVar7;
    uVar6 = param_4[1];
    *(char *)(lVar9 + (ulong)(uVar5 + 6)) = (char)(uVar6 >> 0x18);
    *(char *)(lVar9 + (ulong)(uVar5 + 7)) = (char)(uVar6 >> 0x10);
    *(char *)(lVar9 + (ulong)(uVar5 + 8)) = (char)(uVar6 >> 8);
    *(uint *)(param_1 + 0x68) = uVar5 + 10;
    *(char *)(lVar9 + (ulong)(uVar5 + 9)) = (char)uVar6;
    uVar7 = param_4[2];
LAB_0129cbf8:
    *(char *)(param_1 + 0x70 + (ulong)(uVar5 + 10)) = (char)(uVar7 >> 8);
LAB_0129cb78:
    uVar6 = uVar5 + 0xb;
    iVar8 = 0xc;
  }
LAB_0129bff4:
  *(uint *)(param_1 + 0x68) = uVar5 + iVar8;
  *(char *)(param_1 + (ulong)uVar6 + 0x70) = (char)uVar7;
switchD_0129bfa4_caseD_b:
  return;
}


