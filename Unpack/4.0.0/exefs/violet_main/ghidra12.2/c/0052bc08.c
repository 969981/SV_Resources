/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052bc08; name: FUN_0052bc08
 */


undefined1  [16] FUN_0052bc08(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_8;
  
  pbVar1 = (byte *)*param_1;
  if (((int)(byte *)param_1[1] - (int)pbVar1 < 10) && ((byte *)param_1[1] <= pbVar1)) {
    uVar8 = FUN_0052c2a8(param_1,&local_8);
    auVar12._8_8_ = uVar8 & 1;
    auVar12._0_8_ = local_8;
    return auVar12;
  }
  uVar8 = (ulong)pbVar1[1];
  if ((char)pbVar1[1] < '\0') {
    uVar4 = (ulong)pbVar1[2];
    if ((char)pbVar1[2] < '\0') {
      uVar6 = (ulong)pbVar1[3];
      if ((char)pbVar1[3] < '\0') {
        uVar7 = (ulong)pbVar1[4];
        if ((char)pbVar1[4] < '\0') {
          uVar9 = (ulong)pbVar1[5];
          if ((char)pbVar1[5] < '\0') {
            uVar10 = (ulong)pbVar1[6];
            if ((char)pbVar1[6] < '\0') {
              uVar11 = (ulong)pbVar1[7];
              if ((char)pbVar1[7] < '\0') {
                bVar2 = pbVar1[8];
                if ((char)bVar2 < '\0') {
                  if ((char)pbVar1[9] < '\0') {
                    return ZEXT816(0);
                  }
                  lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                          (uVar9 << 0x23) + (uVar10 << 0x2a) + (uVar11 << 0x31) +
                          ((ulong)bVar2 << 0x38 ^ 0x8000000000000000) + ((ulong)pbVar1[9] << 0x3f) +
                          -0x102040810204080;
                  lVar5 = 10;
                }
                else {
                  lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                          (uVar9 << 0x23) + (uVar10 << 0x2a) + (uVar11 << 0x31) +
                          ((ulong)bVar2 << 0x38) + -0x102040810204080;
                  lVar5 = 9;
                }
              }
              else {
                lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                        (uVar9 << 0x23) + (uVar10 << 0x2a) + (uVar11 << 0x31) + -0x2040810204080;
                lVar5 = 8;
              }
            }
            else {
              lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                      (uVar9 << 0x23) + (uVar10 << 0x2a) + -0x40810204080;
              lVar5 = 7;
            }
          }
          else {
            lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                    (uVar9 << 0x23) + -0x810204080;
            lVar5 = 6;
          }
        }
        else {
          lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + uVar7 * 0x10000000 +
                  -0x10204080;
          lVar5 = 5;
        }
      }
      else {
        lVar5 = 4;
        lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + uVar6 * 0x200000 + -0x204080;
      }
    }
    else {
      lVar3 = uVar8 * 0x80 + uVar4 * 0x4000 + -0x4080;
      lVar5 = 3;
    }
  }
  else {
    lVar3 = uVar8 * 0x80 + -0x80;
    lVar5 = 2;
  }
  bVar2 = *pbVar1;
  *param_1 = (ulong)(pbVar1 + lVar5);
  auVar13._8_8_ = 1;
  auVar13._0_8_ = lVar3 + (ulong)bVar2;
  return auVar13;
}


