/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c9a50; name: FUN_007c9a50
 */


undefined8 FUN_007c9a50(long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*param_3 < 0x20) {
        if (param_4 <= uVar4 + 1) break;
        pbVar5 = param_3 + 1;
        uVar7 = uVar4 + 1;
        if (param_3[1] < 0x20) {
          if (param_4 <= uVar4 + 2) break;
          pbVar5 = param_3 + 2;
          uVar7 = uVar4 + 2;
        }
      }
      else {
        pbVar5 = param_3;
        uVar7 = uVar4;
      }
      uVar4 = uVar7 + 4;
      if (param_4 < uVar4) {
        return 0;
      }
      bVar2 = *pbVar5;
      uVar6 = bVar2 - 0x41;
      if (uVar6 < 0x1a) goto LAB_007c9ad4;
      uVar9 = (uint)bVar2;
      if (bVar2 - 0x61 < 0x1a) {
        uVar6 = uVar9 - 0x47;
        bVar2 = pbVar5[1];
      }
      else {
        uVar8 = (uint)bVar2;
        if (uVar8 - 0x30 < 10) {
          uVar6 = uVar8 + 4;
          bVar2 = pbVar5[1];
        }
        else {
          if (uVar8 < 0x2f) {
            uVar6 = 0x3e;
            if ((uVar9 != 0x2b) && (uVar8 != 0x2d)) {
LAB_007c9bcc:
              uVar6 = 0;
              bVar2 = pbVar5[1];
              goto joined_r0x007c9b4c;
            }
          }
          else {
            if ((uVar8 != 0x5f) && (uVar9 != 0x2f)) goto LAB_007c9bcc;
            uVar6 = 0x3f;
          }
LAB_007c9ad4:
          bVar2 = pbVar5[1];
        }
      }
joined_r0x007c9b4c:
      uVar8 = (uint)bVar2;
      uVar9 = uVar8 - 0x41;
      if (0x19 < uVar9) {
        if (uVar8 - 0x61 < 0x1a) {
          uVar9 = uVar8 - 0x47;
        }
        else if (uVar8 - 0x30 < 10) {
          uVar9 = uVar8 + 4;
        }
        else if (uVar8 < 0x2f) {
          uVar9 = 0x3e;
          if ((uVar8 != 0x2b) && (uVar8 != 0x2d)) {
LAB_007c9bc4:
            uVar9 = 0;
          }
        }
        else {
          if ((uVar8 != 0x5f) && (uVar8 != 0x2f)) goto LAB_007c9bc4;
          uVar9 = 0x3f;
        }
      }
      bVar2 = pbVar5[2];
      uVar8 = bVar2 - 0x41;
      if (uVar8 < 0x1a) goto LAB_007c9bf0;
      uVar11 = (uint)bVar2;
      if (bVar2 - 0x61 < 0x1a) {
        uVar8 = uVar11 - 0x47;
        bVar2 = pbVar5[3];
      }
      else {
        uVar10 = (uint)bVar2;
        if (uVar10 - 0x30 < 10) {
          uVar8 = uVar10 + 4;
          bVar2 = pbVar5[3];
        }
        else {
          if (uVar10 < 0x2f) {
            uVar8 = 0x3e;
            if ((uVar11 != 0x2b) && (uVar10 != 0x2d)) {
LAB_007c9ce8:
              uVar8 = 0x40;
              bVar2 = pbVar5[3];
              goto joined_r0x007c9c68;
            }
          }
          else {
            if ((uVar10 != 0x5f) && (uVar11 != 0x2f)) goto LAB_007c9ce8;
            uVar8 = 0x3f;
          }
LAB_007c9bf0:
          bVar2 = pbVar5[3];
        }
      }
joined_r0x007c9c68:
      uVar10 = (uint)bVar2;
      uVar11 = uVar10 - 0x41;
      if (0x19 < uVar11) {
        if (uVar10 - 0x61 < 0x1a) {
          uVar11 = uVar10 - 0x47;
        }
        else if (uVar10 - 0x30 < 10) {
          uVar11 = uVar10 + 4;
        }
        else if (uVar10 < 0x2f) {
          uVar11 = 0x3e;
          if ((uVar10 != 0x2b) && (uVar10 != 0x2d)) {
LAB_007c9ce0:
            uVar11 = 0x40;
          }
        }
        else {
          if ((uVar10 != 0x5f) && (uVar10 != 0x2f)) goto LAB_007c9ce0;
          uVar11 = 0x3f;
        }
      }
      if (param_2 <= uVar3) {
        return 0;
      }
      uVar7 = uVar3 + 1;
      *(byte *)(param_1 + uVar3) = (byte)((uVar9 & 0x3f) >> 4) | (byte)(uVar6 << 2);
      if (uVar8 < 0x40) {
        if (param_2 <= uVar7) {
          return 0;
        }
        uVar1 = uVar3 + 2;
        *(byte *)(param_1 + uVar7) = (byte)(uVar8 >> 2) | (byte)((uVar9 & 0x3f) << 4);
        if (uVar11 < 0x40) {
          if (param_2 <= uVar1) {
            return 0;
          }
          *(byte *)(param_1 + uVar1) = (byte)uVar11 | (byte)(uVar8 << 6);
          uVar7 = uVar3 + 3;
        }
        else {
          uVar7 = uVar1;
        }
      }
      uVar3 = uVar7;
      param_3 = pbVar5 + 4;
    } while (uVar4 < param_4);
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = uVar3;
  }
  return 1;
}


