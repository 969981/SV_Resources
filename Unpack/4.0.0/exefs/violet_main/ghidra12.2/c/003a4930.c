/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a4930; name: FUN_003a4930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003a4930(long param_1,int param_2,long param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong local_168 [4];
  ulong local_148 [12];
  ulong local_e8 [16];
  ulong local_68;
  
  uVar21 = *(ulong *)(param_1 + 0x18a0);
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((param_4 < uVar21) ||
     ((lVar12 = *(long *)(param_1 + 0x9b0), lVar12 != 0 &&
      (param_4 < *(long *)(param_1 + 0x18c0) + uVar21)))) {
    uVar10 = 0x10f;
    uVar11 = 0x16c;
    goto LAB_003a49a4;
  }
  if (*(int *)(param_1 + 0x84) == 4) {
    iVar6 = FUN_003a6e30(param_1,param_4,0,1);
    if (iVar6 == 0) {
      return 0xffffffff;
    }
    lVar12 = *(long *)(param_1 + 0x9b0);
  }
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  if ((lVar12 == 0) && ((*(int *)(param_1 + 0x894) != -1 || (0 < *(int *)(param_1 + 0x744))))) {
    FUN_003c39e0(param_1,1);
  }
  iVar6 = FUN_003c38d0(param_1);
  if (((iVar6 != 0) && (iVar6 = FUN_003c39f0(param_1), iVar6 == 0)) &&
     (*(int *)(param_1 + 0x84) != 6)) {
    uVar10 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    if ((int)uVar10 == 0) {
      return 0xffffffff;
    }
  }
  if (*(long *)(param_1 + 0x9b0) != 0) {
    uVar10 = FUN_003a4fc0(param_1,param_2,param_3 + uVar21,*(undefined8 *)(param_1 + 0x18c0),
                          &local_68);
    if ((int)uVar10 < 1) {
LAB_003a4f74:
      *(ulong *)(param_1 + 0x18a0) = uVar21;
      return uVar10;
    }
    uVar21 = local_68 + uVar21;
  }
  if (uVar21 == param_4) {
    if (((*(byte *)(param_1 + 0x698) >> 4 & 1) != 0) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
      FUN_003a6cb0(param_1);
    }
    *param_5 = param_4;
    return 1;
  }
  uVar7 = FUN_003b5ee0(param_1);
  uVar20 = (ulong)uVar7;
  uVar8 = FUN_003b5f10(param_1);
  uVar22 = *(ulong *)(param_1 + 0x6c8);
  if (0x20 < uVar22) {
    uVar10 = 0x44;
    uVar11 = 0x23c;
    goto LAB_003a49a4;
  }
  uVar23 = (ulong)uVar8;
  if ((uVar22 == 0) || (*(long *)(param_1 + 0x530) == 0)) {
LAB_003a4b2c:
    uVar22 = 1;
  }
  else {
    FUN_0043b170();
    uVar9 = FUN_0043b160();
    if (((uVar9 >> 0x17 & 1) == 0) ||
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0)) goto LAB_003a4b2c;
  }
  uVar4 = _UNK_03caa7b8;
  uVar3 = _DAT_03caa7b0;
  if (uVar8 - 1 < uVar7) {
    param_4 = param_4 - uVar21;
    if (param_2 != 0x17) {
      if (param_4 == 0) goto LAB_003a4dc8;
LAB_003a4db8:
      uVar13 = 0;
      if (uVar23 != 0) {
        uVar13 = (param_4 - 1) / uVar23;
      }
      uVar13 = uVar13 + 1;
      uVar19 = param_4;
      do {
        uVar1 = uVar22;
        if (uVar13 <= uVar22) {
          uVar1 = uVar13;
        }
        uVar13 = 0;
        if (uVar1 != 0) {
          uVar13 = uVar19 / uVar1;
        }
        if (uVar13 < uVar20) {
          uVar14 = uVar19 - uVar13 * uVar1;
          uVar2 = uVar1;
          if (uVar1 < 2) {
            uVar2 = 1;
          }
          if (7 < uVar2) {
            uVar17 = uVar2 & 0xfffffffffffffff8;
            uVar18 = uVar17;
            puVar15 = local_148;
            uVar24 = uVar3;
            uVar25 = uVar4;
            do {
              uVar18 = uVar18 - 8;
              uVar26 = uVar24 + 4;
              uVar27 = uVar25 + 4;
              uVar28 = uVar24 + 6;
              uVar29 = uVar25 + 6;
              puVar15[-3] = uVar13 + (uVar25 < uVar14);
              puVar15[-4] = uVar13 + (uVar24 < uVar14);
              puVar15[-1] = uVar13 + (uVar25 + 2 < uVar14);
              puVar15[-2] = uVar13 + (uVar24 + 2 < uVar14);
              uVar24 = uVar24 + 8;
              uVar25 = uVar25 + 8;
              puVar15[1] = uVar13 + (uVar27 < uVar14);
              *puVar15 = uVar13 + (uVar26 < uVar14);
              puVar15[3] = uVar13 + (uVar29 < uVar14);
              puVar15[2] = uVar13 + (uVar28 < uVar14);
              puVar15 = puVar15 + 8;
              if (uVar18 == 0) goto LAB_003a4f20;
            } while( true );
          }
          uVar17 = 0;
          do {
            uVar18 = uVar13;
            if (uVar17 < uVar14) {
              uVar18 = uVar13 + 1;
            }
            local_168[uVar17] = uVar18;
            uVar17 = uVar17 + 1;
LAB_003a4f20:
          } while (uVar2 != uVar17);
        }
        else {
          uVar13 = uVar1;
          if (uVar1 < 2) {
            uVar13 = 1;
          }
          if (uVar13 < 8) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar13 & 0xfffffffffffffff8;
            uVar2 = (uVar14 - 8 >> 3) + 1;
            uVar17 = uVar2 & 3;
            if (uVar14 - 8 < 0x18) {
              lVar12 = 0;
            }
            else {
              lVar12 = 0;
              lVar16 = -(uVar2 & 0x3ffffffffffffffc);
              puVar15 = local_e8;
              do {
                puVar15[-0xf] = uVar20;
                puVar15[-0x10] = uVar20;
                puVar15[-0xd] = uVar20;
                puVar15[-0xe] = uVar20;
                lVar12 = lVar12 + 0x20;
                lVar16 = lVar16 + 4;
                puVar15[-0xb] = uVar20;
                puVar15[-0xc] = uVar20;
                puVar15[-9] = uVar20;
                puVar15[-10] = uVar20;
                puVar15[1] = uVar20;
                *puVar15 = uVar20;
                puVar15[3] = uVar20;
                puVar15[2] = uVar20;
                puVar15[5] = uVar20;
                puVar15[4] = uVar20;
                puVar15[7] = uVar20;
                puVar15[6] = uVar20;
                puVar15[9] = uVar20;
                puVar15[8] = uVar20;
                puVar15[0xb] = uVar20;
                puVar15[10] = uVar20;
                puVar15[0xd] = uVar20;
                puVar15[0xc] = uVar20;
                puVar15[0xf] = uVar20;
                puVar15[0xe] = uVar20;
                puVar15[-7] = uVar20;
                puVar15[-8] = uVar20;
                puVar15[-5] = uVar20;
                puVar15[-6] = uVar20;
                puVar15[-3] = uVar20;
                puVar15[-4] = uVar20;
                puVar15[-1] = uVar20;
                puVar15[-2] = uVar20;
                puVar15 = puVar15 + 0x20;
              } while (lVar16 != 0);
            }
            if (uVar17 != 0) {
              lVar16 = -uVar17;
              puVar15 = local_148 + lVar12;
              do {
                puVar15[-3] = uVar20;
                puVar15[-4] = uVar20;
                puVar15[-1] = uVar20;
                puVar15[-2] = uVar20;
                bVar5 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                puVar15[1] = uVar20;
                *puVar15 = uVar20;
                puVar15[3] = uVar20;
                puVar15[2] = uVar20;
                puVar15 = puVar15 + 8;
              } while (bVar5);
            }
            if (uVar13 == uVar14) goto LAB_003a4f28;
          }
          lVar12 = uVar13 - uVar14;
          puVar15 = local_168 + uVar14;
          do {
            lVar12 = lVar12 + -1;
            *puVar15 = uVar20;
            puVar15 = puVar15 + 1;
          } while (lVar12 != 0);
        }
LAB_003a4f28:
        uVar10 = FUN_003a5160(param_1,param_2,param_3 + uVar21,local_168,uVar1,0,&local_68);
        if ((int)uVar10 < 1) goto LAB_003a4f74;
        param_4 = uVar19 - local_68;
        if (param_4 == 0) goto LAB_003a4f7c;
        uVar21 = local_68 + uVar21;
        if (param_4 != 0) goto LAB_003a4db8;
LAB_003a4dc8:
        uVar13 = 1;
        uVar19 = param_4;
      } while( true );
    }
    if (param_4 == 0) goto LAB_003a4ba8;
LAB_003a4b98:
    uVar13 = 0;
    if (uVar23 != 0) {
      uVar13 = (param_4 - 1) / uVar23;
    }
    uVar13 = uVar13 + 1;
    uVar19 = param_4;
    do {
      uVar1 = uVar22;
      if (uVar13 <= uVar22) {
        uVar1 = uVar13;
      }
      uVar13 = 0;
      if (uVar1 != 0) {
        uVar13 = uVar19 / uVar1;
      }
      if (uVar13 < uVar20) {
        uVar14 = uVar19 - uVar13 * uVar1;
        uVar2 = uVar1;
        if (uVar1 < 2) {
          uVar2 = 1;
        }
        if (7 < uVar2) {
          uVar17 = uVar2 & 0xfffffffffffffff8;
          uVar18 = uVar17;
          puVar15 = local_148;
          uVar24 = uVar3;
          uVar25 = uVar4;
          do {
            uVar18 = uVar18 - 8;
            uVar26 = uVar24 + 4;
            uVar27 = uVar25 + 4;
            uVar28 = uVar24 + 6;
            uVar29 = uVar25 + 6;
            puVar15[-3] = uVar13 + (uVar25 < uVar14);
            puVar15[-4] = uVar13 + (uVar24 < uVar14);
            puVar15[-1] = uVar13 + (uVar25 + 2 < uVar14);
            puVar15[-2] = uVar13 + (uVar24 + 2 < uVar14);
            uVar24 = uVar24 + 8;
            uVar25 = uVar25 + 8;
            puVar15[1] = uVar13 + (uVar27 < uVar14);
            *puVar15 = uVar13 + (uVar26 < uVar14);
            puVar15[3] = uVar13 + (uVar29 < uVar14);
            puVar15[2] = uVar13 + (uVar28 < uVar14);
            puVar15 = puVar15 + 8;
            if (uVar18 == 0) goto LAB_003a4d00;
          } while( true );
        }
        uVar17 = 0;
        do {
          uVar18 = uVar13;
          if (uVar17 < uVar14) {
            uVar18 = uVar13 + 1;
          }
          local_168[uVar17] = uVar18;
          uVar17 = uVar17 + 1;
LAB_003a4d00:
        } while (uVar2 != uVar17);
      }
      else {
        uVar13 = uVar1;
        if (uVar1 < 2) {
          uVar13 = 1;
        }
        if (uVar13 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar13 & 0xfffffffffffffff8;
          uVar2 = (uVar14 - 8 >> 3) + 1;
          uVar17 = uVar2 & 3;
          if (uVar14 - 8 < 0x18) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            lVar16 = -(uVar2 & 0x3ffffffffffffffc);
            puVar15 = local_e8;
            do {
              puVar15[-0xf] = uVar20;
              puVar15[-0x10] = uVar20;
              puVar15[-0xd] = uVar20;
              puVar15[-0xe] = uVar20;
              lVar12 = lVar12 + 0x20;
              lVar16 = lVar16 + 4;
              puVar15[-0xb] = uVar20;
              puVar15[-0xc] = uVar20;
              puVar15[-9] = uVar20;
              puVar15[-10] = uVar20;
              puVar15[1] = uVar20;
              *puVar15 = uVar20;
              puVar15[3] = uVar20;
              puVar15[2] = uVar20;
              puVar15[5] = uVar20;
              puVar15[4] = uVar20;
              puVar15[7] = uVar20;
              puVar15[6] = uVar20;
              puVar15[9] = uVar20;
              puVar15[8] = uVar20;
              puVar15[0xb] = uVar20;
              puVar15[10] = uVar20;
              puVar15[0xd] = uVar20;
              puVar15[0xc] = uVar20;
              puVar15[0xf] = uVar20;
              puVar15[0xe] = uVar20;
              puVar15[-7] = uVar20;
              puVar15[-8] = uVar20;
              puVar15[-5] = uVar20;
              puVar15[-6] = uVar20;
              puVar15[-3] = uVar20;
              puVar15[-4] = uVar20;
              puVar15[-1] = uVar20;
              puVar15[-2] = uVar20;
              puVar15 = puVar15 + 0x20;
            } while (lVar16 != 0);
          }
          if (uVar17 != 0) {
            lVar16 = -uVar17;
            puVar15 = local_148 + lVar12;
            do {
              puVar15[-3] = uVar20;
              puVar15[-4] = uVar20;
              puVar15[-1] = uVar20;
              puVar15[-2] = uVar20;
              bVar5 = lVar16 != -1;
              lVar16 = lVar16 + 1;
              puVar15[1] = uVar20;
              *puVar15 = uVar20;
              puVar15[3] = uVar20;
              puVar15[2] = uVar20;
              puVar15 = puVar15 + 8;
            } while (bVar5);
          }
          if (uVar13 == uVar14) goto LAB_003a4d08;
        }
        lVar12 = uVar13 - uVar14;
        puVar15 = local_168 + uVar14;
        do {
          lVar12 = lVar12 + -1;
          *puVar15 = uVar20;
          puVar15 = puVar15 + 1;
        } while (lVar12 != 0);
      }
LAB_003a4d08:
      uVar10 = FUN_003a5160(param_1,0x17,param_3 + uVar21,local_168,uVar1,0,&local_68);
      if ((int)uVar10 < 1) goto LAB_003a4f74;
      param_4 = uVar19 - local_68;
      if (param_4 == 0) goto LAB_003a4f7c;
      if ((*(byte *)(param_1 + 0x698) & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xdc) = 0;
        uVar19 = local_68;
        goto LAB_003a4fb4;
      }
      uVar21 = local_68 + uVar21;
      if (param_4 != 0) goto LAB_003a4b98;
LAB_003a4ba8:
      uVar13 = 1;
      uVar19 = param_4;
    } while( true );
  }
  uVar10 = 0x44;
  uVar11 = 0x24c;
LAB_003a49a4:
  FUN_003c3950(param_1,0x50,0x9e,uVar10,"external/openssl/ssl/record/rec_layer_s3.c",uVar11);
  return 0xffffffff;
LAB_003a4f7c:
  *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xdc) = 0;
  if (((*(byte *)(param_1 + 0x698) >> 4 & 1) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
    FUN_003a6cb0(param_1);
  }
LAB_003a4fb4:
  *param_5 = uVar19 + uVar21;
  return 1;
}


