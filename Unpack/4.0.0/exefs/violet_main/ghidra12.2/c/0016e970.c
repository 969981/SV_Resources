/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016e970; name: FUN_0016e970
 */


void FUN_0016e970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,long param_7,long param_8,long param_9,
                 int param_10,long param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 *param_14)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_118 [8];
  uint auStack_110 [2];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  uint *local_b8;
  uint *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  int *local_98;
  int *local_90;
  long local_88;
  int local_80;
  long local_78;
  uint local_70;
  undefined4 local_6c;
  
  iVar19 = param_10 + 8;
  uVar7 = *(undefined4 *)(param_7 + 0x4c);
  local_78 = param_9;
  iVar4 = param_10;
  if (param_10 < 0) {
    iVar4 = param_10 + 1;
  }
  iVar4 = (iVar4 >> 1) + 8;
  iVar23 = param_10 / 3;
  iVar24 = param_10 + 0xff;
  if (param_10 >= 0) {
    iVar24 = param_10;
  }
  iVar24 = (iVar24 >> 8) * 4;
  local_80 = param_10;
  FUN_00164c64(param_14 + 1,(long)(iVar23 * 5 + param_10 / 5 + iVar4 + iVar19 * 2 + iVar24 + 0x100),
               *param_14);
  local_f8 = (undefined8 *)param_14[1];
  local_e8 = (undefined8 *)((long)local_f8 + (long)iVar19);
  local_d8 = (char *)((long)local_e8 + (long)iVar19);
  local_c8 = local_d8 + iVar4;
  iVar8 = param_10 + -0x10;
  local_b8 = (uint *)((ulong)(local_c8 + (long)iVar23 + 3) & 0xfffffffffffffffc);
  local_a8 = (undefined1 *)((long)local_b8 + (long)(iVar23 * 4));
  local_98 = (int *)((ulong)(local_a8 + (long)(param_10 / 5) + 3) & 0xfffffffffffffffc);
  local_88 = (long)local_98 + (long)iVar24;
  local_70 = 8;
  local_100 = 8;
  local_108 = 0x800000008;
  iVar19 = (uint)(param_11 == 0) * 8;
  lVar14 = *(long *)(param_7 + 0x10);
  iVar4 = 0x40000000;
  if (*(int *)(lVar14 + 0x14) - 1U >> 0x1e == 0) {
    iVar4 = *(int *)(lVar14 + 0x14);
  }
  local_f0 = local_f8;
  local_e0 = local_e8;
  local_d0 = local_d8;
  local_c0 = local_c8;
  local_b0 = local_b8;
  local_a0 = local_a8;
  local_90 = local_98;
  local_6c = uVar7;
  if (iVar19 < iVar8) {
    uVar25 = 8;
    lVar15 = param_9 + param_10 + -8;
    iVar24 = iVar19;
    local_d0 = local_d8;
    do {
      while( true ) {
        lVar3 = param_9 + iVar24;
        uVar10 = FUN_0016f000(param_8 + (long)iVar24 * 0x20,auStack_118,lVar3,lVar15,param_6,
                              iVar24 - iVar19,param_12,iVar4,lVar14);
        uVar11 = uVar10;
        if ((int)uVar10 == 0) break;
        while( true ) {
          iVar23 = iVar24 + 1;
          uVar21 = uVar11 >> 0x20;
          iVar17 = (int)uVar10;
          iVar18 = (int)(uVar11 >> 0x20);
          if (iVar8 <= iVar23) break;
          lVar22 = lVar3 + 1;
          uVar11 = FUN_0016f000(param_8 + (long)iVar23 * 0x20,auStack_118,lVar22,lVar15,param_6,
                                iVar23 - iVar19,param_12,iVar4,lVar14);
          if ((int)uVar11 == 0) {
LAB_0016ec20:
            iVar23 = iVar24 + 2;
            if (iVar8 <= iVar23) break;
            lVar22 = lVar3 + 2;
            uVar11 = FUN_0016f000(param_8 + (long)iVar23 * 0x20,auStack_118,lVar22,lVar15,param_6,
                                  iVar23 - iVar19,param_12,iVar4,lVar14);
            if ((int)uVar11 == 0) break;
            iVar13 = (int)(uVar11 >> 0x20);
            iVar5 = 0;
            if (0 < iVar13) {
              iVar5 = (int)LZCOUNT(iVar13) + -0x22;
            }
            iVar13 = -4;
            if (0 < iVar18) {
              iVar13 = 0x1e - (int)LZCOUNT(iVar18);
            }
            if (iVar13 + ((int)uVar11 - iVar17) * 4 + iVar5 < 4) break;
          }
          else {
            iVar13 = (int)(uVar11 >> 0x20);
            iVar5 = 0;
            if (0 < iVar13) {
              iVar5 = (int)LZCOUNT(iVar13) + -0x22;
            }
            iVar13 = -4;
            if (0 < iVar18) {
              iVar13 = 0x1e - (int)LZCOUNT(iVar18);
            }
            if (iVar13 + ((int)uVar11 - iVar17) * 4 + iVar5 < 1) goto LAB_0016ec20;
          }
          uVar10 = uVar11 & 0xffffffff;
          lVar3 = lVar22;
          iVar24 = iVar23;
        }
        if (iVar18 == 0) {
          if (iVar24 == iVar19) {
            uVar20 = uVar25;
            if (local_108._4_4_ == uVar25) {
              uVar20 = 0xffffffff;
            }
            uVar21 = (ulong)uVar20;
          }
          iVar23 = iVar24 - iVar19;
          if (iVar23 == 0) goto LAB_0016ee1c;
LAB_0016eccc:
          puVar1 = (undefined8 *)(param_9 + iVar19);
          if (8 < iVar23) {
            FUN_0016fe00(&local_f8);
            cVar16 = '\x03';
            goto joined_r0x0016ed90;
          }
          iVar19 = iVar23 + -3;
          *local_a0 = (char)iVar19;
          puVar6 = local_a0 + 1;
          if (iVar19 < 0) {
            puVar6 = local_a0;
          }
          local_a0 = puVar6;
          *local_f0 = *puVar1;
          local_f0 = (undefined8 *)((long)local_f0 + (long)iVar23);
          uVar26 = *puVar1;
          uVar27 = *(undefined8 *)((long)puVar1 - (long)(int)local_70);
          *local_e0 = CONCAT17((char)((ulong)uVar26 >> 0x38) - (char)((ulong)uVar27 >> 0x38),
                               CONCAT16((char)((ulong)uVar26 >> 0x30) -
                                        (char)((ulong)uVar27 >> 0x30),
                                        CONCAT15((char)((ulong)uVar26 >> 0x28) -
                                                 (char)((ulong)uVar27 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar26 >> 0x20) -
                                                          (char)((ulong)uVar27 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar26 >> 0x18) -
                                                                   (char)((ulong)uVar27 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar26 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar27 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar26 >> 8) - (char)((ulong)uVar27 >> 8),
                                                  (char)uVar26 - (char)uVar27)))))));
          iVar18 = 3;
          if (iVar19 < 0) {
            iVar18 = iVar23;
          }
          cVar16 = (char)iVar18;
          local_e0 = (undefined8 *)((long)local_e0 + (long)iVar23);
          if (0xe < iVar17 + -2) goto LAB_0016ed4c;
LAB_0016ed94:
          cVar16 = cVar16 + ((char)uVar10 + -2) * '\x04';
          iVar19 = (int)uVar21;
joined_r0x0016ed9c:
          if (iVar19 < 1) goto LAB_0016ee68;
LAB_0016eda0:
          local_100 = local_108._4_4_;
          uVar20 = (uint)uVar21;
          local_108 = CONCAT44(uVar25,uVar20);
          local_70 = uVar20;
          if ((int)uVar20 < 0x7fff08) {
            *local_c0 = ((byte)(uVar20 + 0xf8) & 0xf) + (char)LZCOUNT(uVar20 + 0xf8) * -0x10 + 'p';
            *local_b0 = uVar20;
            local_c0 = local_c0 + 1;
            local_b0 = local_b0 + 1;
          }
          else {
            FUN_0016ff40(&local_f8,uVar21);
          }
          cVar12 = -0x40;
          uVar25 = uVar20;
        }
        else {
          iVar23 = iVar24 - iVar19;
          if (iVar23 != 0) goto LAB_0016eccc;
LAB_0016ee1c:
          cVar16 = '\0';
joined_r0x0016ed90:
          if (iVar17 + -2 < 0xf) goto LAB_0016ed94;
LAB_0016ed4c:
          piVar9 = local_90;
          puVar6 = local_a0;
          iVar19 = (int)uVar21;
          if (0xfe < iVar17 + -0x11) {
            local_a0 = local_a0 + 1;
            *puVar6 = 0xff;
            local_90 = local_90 + 1;
            *piVar9 = iVar17 + -0x110;
            cVar16 = cVar16 + '<';
            goto joined_r0x0016ed9c;
          }
          local_a0 = local_a0 + 1;
          *puVar6 = (char)(iVar17 + -0x11);
          cVar16 = cVar16 + '<';
          if (0 < iVar19) goto LAB_0016eda0;
LAB_0016ee68:
          lVar3 = (long)-iVar19;
          cVar12 = (char)iVar19 * -0x40;
          uVar20 = auStack_110[lVar3 + 1];
          uVar25 = auStack_110[lVar3 + 2];
          auStack_110[lVar3 + 1] = auStack_110[lVar3];
          auStack_110[lVar3 + 2] = uVar20;
          local_108 = CONCAT44(local_108._4_4_,uVar25);
          local_70 = uVar25;
        }
        iVar19 = iVar24 + iVar17;
        pcVar2 = local_d0 + 1;
        *local_d0 = cVar16 + cVar12;
        iVar24 = iVar19;
        local_d0 = pcVar2;
        if (iVar8 <= iVar19) goto LAB_0016eebc;
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < iVar8);
  }
LAB_0016eebc:
  FUN_0016f590(&local_f8,param_9 + iVar19);
  uVar25 = *(uint *)(param_7 + 0x48);
  uVar7 = *(undefined4 *)(param_7 + 4);
  *(undefined4 *)(param_7 + 4) = 4;
  *(uint *)(param_7 + 0x48) = uVar25 & 0xffffffef;
  FUN_0016f6f0(param_1,param_2,param_3,param_4,param_5,param_7,*param_14,&local_f8,param_11,param_13
              );
  *(undefined4 *)(param_7 + 4) = uVar7;
  *(uint *)(param_7 + 0x48) = uVar25;
  return;
}


