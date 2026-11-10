/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c09268; name: FUN_00c09268
 */


undefined1  [16] FUN_00c09268(ulong *param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  pbVar5 = (byte *)*param_1;
  pbVar7 = (byte *)param_1[1];
  if (((int)pbVar7 - (int)pbVar5 < 10) && (pbVar7 <= pbVar5)) {
    lVar10 = 0;
    uVar8 = 0;
    uVar9 = 1;
    do {
      if (lVar10 == 10) {
LAB_00c0932c:
        uVar9 = 0;
        break;
      }
      while (pbVar5 == pbVar7) {
        uVar3 = FUN_00c08eb0(param_1);
        if ((uVar3 & 1) == 0) goto LAB_00c0932c;
        pbVar7 = (byte *)param_1[1];
        pbVar5 = (byte *)*param_1;
      }
      bVar2 = *pbVar5;
      *param_1 = (ulong)(pbVar5 + 1);
      uVar8 = ((ulong)bVar2 & 0x7f) << (lVar10 * 7 & 0x3fU) | uVar8;
      lVar10 = lVar10 + 1;
      pbVar5 = pbVar5 + 1;
    } while ((char)bVar2 < '\0');
  }
  else {
    pbVar7 = pbVar5 + 1;
    bVar2 = *pbVar5;
    uVar4 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar4 = ((uint)bVar2 + (uint)pbVar5[1] * 0x80) - 0x80;
      if ((char)pbVar5[1] < '\0') {
        uVar4 = (uVar4 + (uint)pbVar5[2] * 0x4000) - 0x4000;
        if ((char)pbVar5[2] < '\0') {
          iVar1 = uVar4 + (uint)pbVar5[3] * 0x200000;
          uVar4 = iVar1 - 0x200000;
          if ((char)pbVar5[3] < '\0') {
            uVar4 = iVar1 + 0xefe00000;
            bVar2 = pbVar5[4];
            uVar6 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              uVar6 = ((uint)bVar2 + (uint)pbVar5[5] * 0x80) - 0x80;
              if ((char)pbVar5[5] < '\0') {
                uVar6 = (uVar6 + (uint)pbVar5[6] * 0x4000) - 0x4000;
                if ((char)pbVar5[6] < '\0') {
                  iVar1 = uVar6 + (uint)pbVar5[7] * 0x200000;
                  uVar6 = iVar1 - 0x200000;
                  if ((char)pbVar5[7] < '\0') {
                    bVar2 = pbVar5[8];
                    uVar8 = (ulong)bVar2;
                    uVar6 = iVar1 + 0xefe00000;
                    if ((char)bVar2 < '\0') {
                      if ((char)pbVar5[9] < '\0') {
                        uVar8 = 0;
                        uVar9 = 0;
                        goto LAB_00c09428;
                      }
                      pbVar7 = pbVar5 + 10;
                      uVar8 = (ulong)(((uint)bVar2 + (uint)pbVar5[9] * 0x80) - 0x80);
                    }
                    else {
                      pbVar7 = pbVar5 + 9;
                    }
                  }
                  else {
                    uVar8 = 0;
                    pbVar7 = pbVar5 + 8;
                  }
                }
                else {
                  uVar8 = 0;
                  pbVar7 = pbVar5 + 7;
                }
              }
              else {
                uVar8 = 0;
                pbVar7 = pbVar5 + 6;
              }
            }
            else {
              uVar8 = 0;
              pbVar7 = pbVar5 + 5;
            }
          }
          else {
            uVar6 = 0;
            uVar8 = 0;
            pbVar7 = pbVar5 + 4;
          }
        }
        else {
          uVar6 = 0;
          uVar8 = 0;
          pbVar7 = pbVar5 + 3;
        }
      }
      else {
        uVar6 = 0;
        uVar8 = 0;
        pbVar7 = pbVar5 + 2;
      }
    }
    else {
      uVar6 = 0;
      uVar8 = 0;
    }
    uVar8 = (ulong)uVar4 | (ulong)uVar6 << 0x1c | uVar8 << 0x38;
    *param_1 = (ulong)pbVar7;
    uVar9 = 1;
  }
LAB_00c09428:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar8;
  return auVar11;
}


