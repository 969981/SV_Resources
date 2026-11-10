/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c9f30; name: FUN_019c9f30
 */


ulong FUN_019c9f30(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  uint uVar2;
  char *pcVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_68 [8];
  
  pcVar3 = param_3;
  if (((*param_3 == -0x11) && (param_3[1] == -0x45)) && (pcVar3 = param_3 + 3, param_3[2] != -0x41))
  {
    pcVar3 = param_3;
  }
  if (param_4 == 0) {
LAB_019ca018:
    uVar8 = 0;
  }
  else if (param_2 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar9 = param_4 - uVar7;
      sVar1 = uVar9;
      if (5 < uVar9) {
        sVar1 = 6;
      }
      memcpy(local_68,pcVar3 + uVar7,sVar1);
      if (uVar9 < 6) {
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      uVar2 = ~(uint)local_68[0];
      if ((uVar2 >> 7 & 1) == 0) {
        if ((uVar2 >> 6 & 1) != 0) goto LAB_019ca018;
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 4 & 1) == 0) {
            if ((uVar2 >> 3 & 1) == 0) {
              if ((uVar2 >> 2 & 1) == 0) {
                if ((uVar2 >> 1 & 1) == 0) goto LAB_019ca018;
                lVar5 = 6;
              }
              else {
                lVar5 = 5;
              }
            }
            else {
              lVar5 = 4;
            }
          }
          else {
            lVar5 = 3;
          }
        }
        else {
          lVar5 = 2;
        }
      }
      else {
        lVar5 = 1;
      }
      uVar7 = lVar5 + uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar7 < param_4);
  }
  else {
    uVar7 = 0;
    uVar9 = 0;
    do {
      uVar8 = param_4 - uVar7;
      sVar1 = uVar8;
      if (5 < uVar8) {
        sVar1 = 6;
      }
      memcpy(local_68,pcVar3 + uVar7,sVar1);
      if (uVar8 < 6) {
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      uVar2 = ~(uint)local_68[0];
      if ((uVar2 >> 7 & 1) == 0) {
        if ((uVar2 >> 6 & 1) != 0) goto LAB_019ca018;
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 4 & 1) == 0) {
            if ((uVar2 >> 3 & 1) == 0) {
              lVar5 = 5;
              if ((uVar2 >> 2 & 1) == 0) {
                if ((uVar2 >> 1 & 1) == 0) goto LAB_019ca018;
                lVar5 = 6;
              }
            }
            else {
              lVar5 = 4;
            }
          }
          else {
            lVar5 = 3;
          }
        }
        else {
          lVar5 = 2;
        }
      }
      else {
        lVar5 = 1;
      }
      uVar8 = uVar9 + 1;
      if (param_2 < uVar8) {
        return uVar9;
      }
      iVar6 = (int)lVar5;
      uVar4 = (ushort)local_68[0];
      if (iVar6 != 1) {
        if (iVar6 == 2) {
          uVar4 = local_68[1] & 0xc03f | (ushort)((local_68[0] & 0x1f) << 6);
        }
        else {
          uVar4 = 0xff1f;
          if (iVar6 == 3) {
            uVar4 = (ushort)local_68[0] << 0xc | (local_68[1] & 0x3f) << 6 | local_68[2] & 0x3f;
          }
        }
      }
      uVar7 = uVar7 + lVar5;
      *(ushort *)(param_1 + uVar9 * 2) = uVar4;
      uVar9 = uVar8;
    } while (uVar7 < param_4);
  }
  return uVar8;
}


