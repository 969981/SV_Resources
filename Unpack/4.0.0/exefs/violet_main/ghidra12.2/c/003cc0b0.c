/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cc0b0; name: FUN_003cc0b0
 */


undefined8 FUN_003cc0b0(int *param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_108;
  undefined1 auStack_fc [164];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  lVar3 = FUN_0042bbc0();
  local_108 = 0;
  if (lVar3 == 0) {
    uVar6 = 0x50;
    uVar7 = 0x41;
    uVar8 = 0x181;
    goto LAB_003cc2f0;
  }
  lVar4 = FUN_00483c90(*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1b8));
  if (lVar4 == 0) {
    uVar6 = 0x50;
    uVar7 = 0x44;
    uVar8 = 0x189;
    lVar4 = 0;
    goto LAB_003cc178;
  }
  lVar5 = FUN_003af5b0(lVar4,0);
  if (lVar5 == 0) {
    uVar6 = 0x2f;
    uVar7 = 0xdc;
    uVar8 = 399;
    goto LAB_003cc2f0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 1 & 1) == 0) {
    iVar2 = FUN_003d5ec0(param_1,lVar4);
    if (iVar2 == 0) {
      uVar6 = 0x50;
      uVar7 = 0x44;
      uVar8 = 0x1a1;
    }
    else {
LAB_003cc1f8:
      iVar2 = FUN_003d5e80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x308),&local_48);
      if (iVar2 == 0) {
        uVar6 = 0x50;
        uVar7 = 0x44;
        uVar8 = 0x1a7;
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 1 & 1) == 0) {
          lVar5 = param_2[1];
          if (lVar5 == 0x40) {
            iVar2 = FUN_0043e840(lVar4);
            if ((iVar2 != 0x32b) && (iVar2 = FUN_0043e840(lVar4), iVar2 != 0x3d3)) {
              lVar5 = param_2[1];
              goto LAB_003cc24c;
            }
          }
          else {
LAB_003cc24c:
            if ((lVar5 != 0x80) || (iVar2 = FUN_0043e840(lVar4), iVar2 != 0x3d4)) goto LAB_003cc26c;
          }
          uVar10 = *(uint *)(param_2 + 1);
        }
        else {
LAB_003cc26c:
          if ((ulong)param_2[1] < 2) {
            uVar6 = 0x32;
            uVar7 = 0x9f;
            uVar8 = 0x1c2;
            goto LAB_003cc2f0;
          }
          uVar10 = (uint)*(ushort *)*param_2;
          uVar10 = ((uVar10 & 0xff00) << 8 | uVar10 << 0x18) >> 0x10;
          *param_2 = (long)((ushort *)*param_2 + 1);
          param_2[1] = param_2[1] - 2;
        }
        iVar2 = FUN_0043dbf0(lVar4);
        if (((iVar2 < (int)uVar10) || (uVar9 = param_2[1], uVar9 == 0)) || (iVar2 < (int)uVar9)) {
          uVar6 = 0x32;
          uVar7 = 0x109;
          uVar8 = 0x1ca;
        }
        else {
          uVar11 = (ulong)uVar10;
          if (uVar9 < uVar11) {
            uVar6 = 0x32;
            uVar7 = 0x9f;
            uVar8 = 0x1cf;
          }
          else {
            lVar5 = *param_2;
            *param_2 = lVar5 + uVar11;
            param_2[1] = uVar9 - uVar11;
            iVar2 = FUN_003cbf60(param_1,auStack_fc,&local_58,&local_50);
            if (iVar2 == 0) goto LAB_003cc2f4;
            iVar2 = FUN_0043cae0(lVar3,&local_108,local_48,0,lVar4);
            if (0 < iVar2) {
              iVar2 = FUN_0043e840(lVar4);
              if ((iVar2 - 0x3d3U < 2) || (iVar2 == 0x32b)) {
                lVar4 = FUN_00452c30(uVar11,"external/openssl/ssl/statem/statem_lib.c",0x1e7);
                if (lVar4 == 0) {
                  uVar6 = 0x50;
                  uVar7 = 0x41;
                  uVar8 = 0x1e9;
                  goto LAB_003cc178;
                }
                FUN_003f3470(lVar4,lVar5,uVar11);
                lVar5 = lVar4;
              }
              else {
                lVar4 = 0;
              }
              if (((*(long *)(*(long *)(param_1 + 0x2a) + 0x308) == 0) ||
                  (*(int *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x308) + 0x14) != 0x390)) ||
                 ((iVar2 = FUN_0046a3b0(local_108,0xffffffff,0x1001,6,0), 0 < iVar2 &&
                  (iVar2 = FUN_0046a3b0(local_108,0x18,0x1002,0xffffffff,0), 0 < iVar2)))) {
                if (*param_1 == 0x300) {
                  iVar2 = FUN_0042bd60(lVar3,local_58,local_50);
                  if ((iVar2 < 1) ||
                     (iVar2 = FUN_0042c270(lVar3,0x1d,
                                           *(undefined4 *)(*(long *)(param_1 + 0x174) + 8),
                                           *(long *)(param_1 + 0x174) + 0x50), iVar2 == 0)) {
                    uVar8 = 0x201;
                    goto LAB_003cc5b0;
                  }
                  iVar2 = FUN_0043ce20(lVar3,lVar5,uVar11);
                  if (0 < iVar2) goto LAB_003cc538;
                  uVar6 = 0x33;
                  uVar7 = 0x7b;
                  uVar8 = 0x206;
                }
                else {
                  iVar2 = FUN_0043cf50(lVar3,lVar5,uVar11,local_58,local_50);
                  if (0 < iVar2) {
LAB_003cc538:
                    if ((((param_1[0xe] == 0) &&
                         ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0
                         )) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
                       ((iVar2 != 0x10000 && (*(int *)(*(long *)(param_1 + 0x2a) + 0x248) == 1)))) {
                      uVar6 = 2;
                    }
                    else {
                      uVar6 = 3;
                    }
                    goto LAB_003cc2fc;
                  }
                  uVar6 = 0x33;
                  uVar7 = 0x7b;
                  uVar8 = 0x20d;
                }
              }
              else {
                uVar8 = 0x1f7;
LAB_003cc5b0:
                uVar6 = 0x50;
                uVar7 = 6;
              }
LAB_003cc178:
              FUN_003c3950(param_1,uVar6,0x17b,uVar7,"external/openssl/ssl/statem/statem_lib.c",
                           uVar8);
              uVar6 = 0;
              goto LAB_003cc2fc;
            }
            uVar6 = 0x50;
            uVar8 = 0x1de;
            uVar7 = 6;
          }
        }
      }
    }
LAB_003cc2f0:
    FUN_003c3950(param_1,uVar6,0x17b,uVar7,"external/openssl/ssl/statem/statem_lib.c",uVar8);
  }
  else {
    if ((ulong)param_2[1] < 2) {
      uVar6 = 0x32;
      uVar8 = 0x198;
      uVar7 = 0xf0;
      goto LAB_003cc2f0;
    }
    uVar1 = *(ushort *)*param_2;
    *param_2 = (long)((ushort *)*param_2 + 1);
    param_2[1] = param_2[1] - 2;
    iVar2 = FUN_003d6500(param_1,uVar1 >> 8 | uVar1 << 8,lVar4);
    if (0 < iVar2) goto LAB_003cc1f8;
  }
LAB_003cc2f4:
  uVar6 = 0;
  lVar4 = 0;
LAB_003cc2fc:
  FUN_003e8b90(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0xe0));
  *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0xe0) = 0;
  FUN_0042bbe0(lVar3);
  FUN_00452f80(lVar4,"external/openssl/ssl/statem/statem_lib.c",0x223);
  return uVar6;
}


