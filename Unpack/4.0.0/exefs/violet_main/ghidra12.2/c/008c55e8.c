/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c55e8; name: FUN_008c55e8
 */


void FUN_008c55e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ushort uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ushort *puVar23;
  ulong uVar24;
  ushort *puVar25;
  int local_d4;
  float local_d0;
  float fStack_cc;
  ulong local_c8;
  long lStack_c0;
  ulong local_b8;
  long lStack_b0;
  ulong local_a8;
  long lStack_a0;
  ulong local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_68;
  
  local_68 = 0;
  local_80 = 0;
  uVar5 = *(uint *)(param_2 + 0xc0);
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar21 = 0;
    uVar7 = 0;
    do {
      lVar17 = *(long *)(param_2 + 0xa0);
      puVar23 = (ushort *)(lVar17 + uVar21 * 0xa0);
      uVar14 = *puVar23;
      uVar10 = (ulong)uVar14;
      if (uVar14 != 0) {
        uVar24 = 0;
        do {
          lVar18 = *(long *)(*(long *)(lVar17 + uVar21 * 0xa0 + 8) + uVar24 * 8);
          if (*(short *)(lVar18 + 4) != 0 && (*(byte *)(lVar18 + 1) & 1) == 0) {
            uVar5 = (**(code **)(**(long **)(*(long *)(*(long *)(param_2 + 0xa8) + uVar21 * 0x30 +
                                                      0x18) + uVar24 * 8) + 0x38))();
            uVar10 = (ulong)*puVar23;
            if (uVar5 <= uVar7) {
              uVar5 = uVar7;
            }
            uVar7 = uVar5;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar10);
        uVar5 = *(uint *)(param_2 + 0xc0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar5);
  }
  FUN_008c3a98(param_2,(long)&local_68 + 4,&local_68,(long)&local_80 + 4,&local_80);
  if (local_80._4_4_ != 0 || local_68._4_4_ != 0) {
    lVar17 = 0;
    if (local_80._4_4_ != 0) {
      lVar17 = (long)(int)uVar7 * 0x18;
    }
    lVar20 = *(long *)(*(long *)(param_3 + 0xb8) + 0x70);
    lVar11 = *(long *)(*(long *)(param_3 + 0xb8) + 0x78);
    lVar18 = (long)local_80._4_4_ * 8 + ((long)local_68._4_4_ << 3 | 4U) + lVar17 +
             (long)(int)local_68 * 4 + (long)(int)local_80 * 4 + (lVar11 + lVar20) * 2;
    pbVar19 = *(byte **)(param_3 + 200);
    if ((*pbVar19 & 1) == 0) {
      lVar13 = *(long *)(pbVar19 + 0x48) + lVar18;
      *(long *)(pbVar19 + 0x48) = lVar13;
    }
    else {
      plVar22 = *(long **)(pbVar19 + 0x48);
      do {
        lVar13 = *plVar22 + lVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *plVar22 = lVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_90 = *(long *)(*(long *)(param_3 + 200) + 0x38);
    local_c8 = (lStack_90 + (*(long *)(pbVar19 + 0x18) - lVar13) + 3U & 0xfffffffffffffffc) +
               lVar20 + -1 & -lVar20;
    lStack_c0 = local_c8 - lStack_90;
    local_b8 = lVar11 + -1 + local_c8 + (long)local_68._4_4_ * 8 & -lVar11;
    local_a8 = lVar20 + -1 + local_b8 + (long)(int)local_68 * 4 & -lVar20;
    local_98 = lVar11 + -1 + local_a8 + (long)local_80._4_4_ * 8 & -lVar11;
    lStack_b0 = local_b8 - lStack_90;
    lStack_a0 = local_a8 - lStack_90;
    lStack_90 = local_98 - lStack_90;
    if (lVar17 != 0) {
      local_88 = local_98 + (long)(int)local_80 * 4;
    }
    *(undefined8 *)(param_2 + 0xcc) = 0;
    uVar21 = (ulong)*(uint *)(param_2 + 0xc0);
    *(long *)(param_2 + 0xd8) = lStack_c0;
    *(long *)(param_2 + 0xe0) = lStack_b0;
    *(long *)(param_2 + 0xf0) = lStack_a0;
    *(long *)(param_2 + 0xf8) = lStack_90;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    if (*(uint *)(param_2 + 0xc0) != 0) {
      uVar10 = 0;
      do {
        lVar17 = *(long *)(param_2 + 0xa0);
        puVar23 = (ushort *)(lVar17 + uVar10 * 0xa0);
        if (((*puVar23 != 0) && (puVar25 = (ushort *)(lVar17 + uVar10 * 0xa0 + 0x10), *puVar25 != 0)
            ) && (0.0 < *(float *)(param_2 + 0x18))) {
          uVar8 = FUN_008c3710(param_1,param_2,param_3,param_4,uVar10 & 0xffffffff,puVar23);
          uVar14 = *puVar23;
          lVar18 = *(long *)(param_2 + 0xa8);
          if (uVar14 == 0) {
            local_d4 = 0;
          }
          else {
            lVar17 = lVar17 + uVar10 * 0xa0;
            uVar21 = 0;
            local_d4 = 0;
            do {
              lVar20 = *(long *)(*(long *)(lVar17 + 8) + uVar21 * 8);
              if (*(short *)(lVar20 + 4) != 0 && (*(byte *)(lVar20 + 1) & 1) == 0) {
                plVar22 = *(long **)(*(long *)(lVar18 + uVar10 * 0x30 + 0x18) + uVar21 * 8);
                iVar1 = *(int *)(param_2 + 0xd0);
                local_d0 = 1.0;
                fStack_cc = 0.0;
                uVar8 = FUN_008c5334(param_1,uVar8,&fStack_cc,&local_d0,puVar23,lVar20);
                if (0.001 <= local_d0 - fStack_cc) {
                  (**(code **)(*plVar22 + 0x60))(plVar22);
                  uVar8 = (**(code **)(*plVar22 + 0x68))
                                    (plVar22,&local_c8,(undefined8 *)(param_2 + 0xcc),&local_b8,
                                     (int *)(param_2 + 0xd0),local_88);
                  uVar24 = (ulong)*(ushort *)(lVar20 + 2);
                  uVar6 = (undefined4)uVar8;
                  if (*(ushort *)(lVar20 + 2) < *puVar25) {
                    lVar18 = uVar24 << 4;
                    do {
                      lVar11 = local_88;
                      pbVar19 = *(byte **)(*(long *)(lVar17 + 0x18) + uVar24 * 8);
                      if ((pbVar19[1] & 1) == 0) {
                        if (*pbVar19 == 1) {
                          if ((*(byte *)(lVar20 + 4) >> 1 & 1) != 0) {
                            lVar13 = *(long *)(*(long *)(param_2 + 0xa8) + uVar10 * 0x30 + 0x10);
                            uVar5 = *(uint *)(param_2 + 0xec);
                            uVar9 = (**(code **)(*plVar22 + 0x50))(plVar22);
                            if ((uVar9 & 1) == 0) {
                              uVar7 = 0;
                            }
                            else {
                              uVar7 = (**(code **)(*plVar22 + 0x58))(plVar22);
                              uVar7 = uVar7 ^ 1;
                            }
                            uVar8 = FUN_008c4830(param_1,param_2,plVar22,&local_a8,&local_98,
                                                 lVar13 + lVar18,lVar11,uVar6,uVar7 & 1);
                            lVar11 = *(long *)(param_2 + 0xa8) + uVar10 * 0x30;
                            iVar2 = *(int *)(param_2 + 0xec);
                            puVar15 = (uint *)(*(long *)(lVar11 + 0x28) + (long)local_d4 * 0x18);
                            local_d4 = local_d4 + 1;
                            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 8) + uVar24 * 8);
                            *puVar15 = (uint)*pbVar19;
                            puVar15[1] = uVar5;
                            puVar15[2] = iVar2 - uVar5;
                            *(undefined8 *)(puVar15 + 4) = uVar12;
                          }
                        }
                        else if ((*pbVar19 == 0) && ((*(byte *)(lVar20 + 4) & 1) != 0)) {
                          lVar11 = *(long *)(param_2 + 0xa8) + uVar10 * 0x30;
                          iVar2 = *(int *)(param_2 + 0xd0);
                          puVar16 = (undefined4 *)(*(long *)(lVar11 + 0x28) + (long)local_d4 * 0x18)
                          ;
                          uVar12 = *(undefined8 *)(*(long *)(lVar11 + 8) + uVar24 * 8);
                          local_d4 = local_d4 + 1;
                          *puVar16 = 0;
                          puVar16[1] = iVar1;
                          *(undefined8 *)(puVar16 + 4) = uVar12;
                          puVar16[2] = iVar2 - iVar1;
                        }
                      }
                      uVar24 = uVar24 + 1;
                      lVar18 = lVar18 + 0x10;
                    } while (uVar24 < *puVar25);
                  }
                }
                uVar14 = *puVar23;
                lVar18 = *(long *)(param_2 + 0xa8);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar14);
          }
          *(int *)(lVar18 + uVar10 * 0x30 + 0x24) = local_d4;
          uVar21 = (ulong)*(uint *)(param_2 + 0xc0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar21);
    }
  }
  return;
}


