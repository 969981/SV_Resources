/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02981cc0; name: FUN_02981cc0
 */


void FUN_02981cc0(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 auStack_550 [176];
  undefined2 local_4a0;
  byte local_494 [2];
  byte local_492 [114];
  int aiStack_420 [2];
  undefined1 auStack_416 [10];
  undefined1 auStack_40c [10];
  undefined1 auStack_402 [10];
  undefined1 auStack_3f8 [10];
  undefined1 auStack_3ee [10];
  undefined1 auStack_3e4 [10];
  undefined1 auStack_3da [10];
  undefined1 auStack_3d0 [10];
  undefined1 auStack_3c6 [14];
  byte abStack_3b8 [12];
  byte local_3ac [60];
  undefined1 auStack_370 [72];
  undefined1 auStack_328 [5];
  undefined1 local_323 [67];
  undefined1 auStack_2e0 [72];
  undefined1 auStack_298 [72];
  undefined1 auStack_250 [72];
  undefined1 auStack_208 [72];
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [72];
  undefined1 auStack_130 [72];
  undefined2 local_e8;
  byte local_dc [124];
  
  *param_2 = 0;
  plVar10 = (long *)FUN_0168126c(param_3[4],0);
  uVar7 = FUN_01ab445c(param_3[4]);
  if (1 < uVar7) {
    uVar8 = (**(code **)(*plVar10 + 0x98))(plVar10);
    uVar3 = FUN_018d31e0(param_1,uVar8);
    lVar11 = FUN_0149b698(param_1);
    *(undefined1 *)(lVar11 + 0x13) = uVar3;
  }
  uVar12 = FUN_01246e90(param_1);
  bVar4 = FUN_0293bc44(uVar12,*param_3);
  *(byte *)(param_3[6] + 5) = ~bVar4 & 1;
  *(byte *)(param_3[6] + 6) = ~bVar4 & 1;
  local_e8 = 0;
  memset((void *)((ulong)&local_e8 | 4),0,0x78);
  FUN_019d4de4(abStack_3b8);
  FUN_019d4de4(auStack_370);
  FUN_019d4de4(auStack_328);
  FUN_019d4de4(auStack_2e0);
  FUN_019d4de4(auStack_298);
  FUN_019d4de4(auStack_250);
  FUN_019d4de4(auStack_208);
  FUN_019d4de4(auStack_1c0);
  FUN_019d4de4(auStack_178);
  FUN_019d4de4(auStack_130);
  FUN_0168125c(aiStack_420);
  FUN_0168125c(auStack_416);
  FUN_0168125c(auStack_40c);
  FUN_0168125c(auStack_402);
  FUN_0168125c(auStack_3f8);
  FUN_0168125c(auStack_3ee);
  FUN_0168125c(auStack_3e4);
  FUN_0168125c(auStack_3da);
  FUN_0168125c(auStack_3d0);
  FUN_0168125c(auStack_3c6);
  if (*(char *)param_3[6] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar21 = 0;
    uVar7 = 0;
    do {
      uVar8 = (**(code **)(*(long *)*param_3 + 0x230))();
      plVar10 = (long *)FUN_029824b4(param_1,param_3[4],uVar21 & 0xffffffff);
      if (plVar10 != (long *)0x0) {
        if ((uVar21 != 0) && (*(char *)(param_3[6] + 2) != '\0')) {
          uVar12 = FUN_01246e90(param_1);
          uVar13 = FUN_0167ef78(uVar12,*param_3,plVar10,param_3[2],0);
          if ((uVar13 & 1) == 0) break;
        }
        local_4a0 = 0;
        memset((void *)((ulong)&local_4a0 | 4),0,0x78);
        FUN_01243d84(auStack_550);
        FUN_010f9510(auStack_550);
        FUN_01247a58(auStack_550,plVar10);
        FUN_029825b0(param_1,&local_4a0,*param_3,auStack_550,param_3[2],param_3[3],param_3[6],
                     uVar21 & 0xffffffff);
        iVar9 = (**(code **)(*plVar10 + 0x98))(plVar10);
        bVar5 = FUN_018d31e0(param_1,iVar9);
        if (uVar21 == 0) {
          lVar11 = FUN_0149b698(param_1);
          FUN_02982670(lVar11 + 0x10);
          *(undefined1 *)(lVar11 + 0x10 + (ulong)bVar5 * 2 + (ulong)bVar5 + 0xd) = 1;
          if ((uint)local_4a0._1_1_ + (uint)(byte)local_4a0 == 0) {
            bVar14 = 7;
          }
          else {
            uVar1 = (uint)local_4a0._1_1_ + (uint)(byte)local_4a0;
            uVar13 = (ulong)uVar1;
            if (uVar1 < 2) {
              uVar13 = 1;
            }
            pbVar18 = local_494;
            do {
              if (*(int *)(pbVar18 + -4) == iVar9) {
                bVar14 = *pbVar18;
                goto LAB_02982138;
              }
              pbVar18 = pbVar18 + 0xc;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            bVar14 = 7;
          }
LAB_02982138:
          lVar2 = lVar11 + (ulong)bVar5 * 3;
          *(byte *)(lVar2 + 0x1f) = bVar14;
          if ((uint)local_4a0._1_1_ + (uint)(byte)local_4a0 == 0) {
            uVar3 = 0;
          }
          else {
            uVar13 = (ulong)local_4a0._1_1_ + (ulong)(byte)local_4a0;
            if (uVar13 < 2) {
              uVar13 = 1;
            }
            pbVar18 = local_492;
            do {
              if (*(int *)(pbVar18 + -6) == iVar9) {
                if ((*pbVar18 >> 1 & 1) != 0) {
                  uVar3 = 2;
                  break;
                }
                if ((*pbVar18 & 1) != 0) {
                  uVar3 = 1;
                  break;
                }
              }
              uVar3 = 0;
              uVar13 = uVar13 - 1;
              pbVar18 = pbVar18 + 0xc;
            } while (uVar13 != 0);
          }
          *(undefined1 *)(lVar2 + 0x1e) = uVar3;
          *(undefined1 *)(lVar11 + 0x16) = 0;
          *(undefined1 *)(lVar11 + 0x1c) = 1;
          piVar20 = param_2 + 1;
LAB_02982020:
          uVar12 = FUN_01245ab0(param_1);
          FUN_0292411c(piVar20,uVar12);
        }
        else if ((((byte *)param_3[6])[3] != 0) || (*(byte *)param_3[6] < 2)) {
          lVar11 = FUN_0149b698(param_1);
          pbVar18 = abStack_3b8 + uVar21 * 0x48;
          FUN_02924040(pbVar18,lVar11 + 0x10);
          abStack_3b8[uVar21 * 0x48 + 3] = bVar5;
          FUN_02982670(pbVar18);
          uVar13 = (ulong)bVar5;
          pbVar18[uVar13 * 2 + (ulong)bVar5 + 0xd] = 1;
          if ((uint)local_4a0._1_1_ + (uint)(byte)local_4a0 == 0) {
            bVar5 = 0;
            local_3ac[uVar13 * 3 + uVar21 * 0x48 + 3] = 7;
          }
          else {
            uVar15 = (ulong)local_4a0._1_1_ + (ulong)(byte)local_4a0;
            if (uVar15 < 2) {
              uVar15 = 1;
            }
            pbVar17 = local_494;
            uVar19 = uVar15;
            do {
              if (*(int *)(pbVar17 + -4) == iVar9) {
                bVar5 = *pbVar17;
                goto LAB_02981fb0;
              }
              pbVar17 = pbVar17 + 0xc;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            bVar5 = 7;
LAB_02981fb0:
            local_3ac[uVar13 * 3 + uVar21 * 0x48 + 3] = bVar5;
            pbVar17 = local_492;
            do {
              if (*(int *)(pbVar17 + -6) == iVar9) {
                if ((*pbVar17 >> 1 & 1) != 0) {
                  bVar5 = 2;
                  break;
                }
                if ((*pbVar17 & 1) != 0) {
                  bVar5 = 1;
                  break;
                }
              }
              uVar15 = uVar15 - 1;
              pbVar17 = pbVar17 + 0xc;
              bVar5 = 0;
            } while (uVar15 != 0);
          }
          lVar11 = uVar21 * 0x48;
          local_3ac[uVar13 * 3 + lVar11 + 2] = bVar5;
          abStack_3b8[lVar11 + 6] = (byte)uVar21;
          local_3ac[lVar11] = 1;
          FUN_029826ac(pbVar18);
          piVar20 = (int *)((long)aiStack_420 + uVar21 * 10);
          goto LAB_02982020;
        }
        iVar9 = FUN_029826b8(param_1,*param_3,param_3[1],param_3[2],&local_4a0,param_3[6],param_3[5]
                            );
        *param_2 = *param_2 + iVar9;
        FUN_029826fc(&local_e8,&local_4a0);
        uVar7 = uVar7 + 1;
        FUN_01245ab0(param_1);
        FUN_02982788();
        uVar13 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if ((uVar13 & 1) == 0) {
          FUN_029827c0(param_1,plVar10);
        }
        uVar13 = FUN_02982818(param_1,*param_3,param_3[4],uVar8);
        if ((uVar13 & 1) == 0) break;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(byte *)param_3[6]);
  }
  lVar11 = FUN_0149b698(param_1);
  uVar3 = (undefined1)uVar7;
  *(undefined1 *)(lVar11 + 0x15) = uVar3;
  if (uVar7 != 0) {
    uVar13 = (ulong)uVar7;
    uVar21 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      puVar16 = local_323;
      do {
        uVar15 = uVar15 + 4;
        puVar16[-0x90] = uVar3;
        puVar16[-0x48] = uVar3;
        *puVar16 = uVar3;
        puVar16[0x48] = uVar3;
        puVar16 = puVar16 + 0x120;
      } while ((uVar13 & 0xfffffffc) != uVar15);
    }
    if ((uVar7 & 3) != 0) {
      puVar16 = (undefined1 *)((ulong)(abStack_3b8 + uVar15 * 0x48) | 5);
      do {
        uVar21 = uVar21 - 1;
        *puVar16 = uVar3;
        puVar16 = puVar16 + 0x48;
      } while (uVar21 != 0);
    }
    pbVar18 = abStack_3b8;
    piVar20 = aiStack_420;
    do {
      uVar21 = FUN_029828cc(piVar20);
      if ((uVar21 & 1) != 0) {
        uVar22 = param_3[2];
        uVar12 = FUN_01678f00(param_1);
        FUN_01679420(uVar12,uVar22,pbVar18,piVar20);
      }
      uVar13 = uVar13 - 1;
      pbVar18 = pbVar18 + 0x48;
      piVar20 = (int *)((long)piVar20 + 10);
    } while (uVar13 != 0);
    if ((bVar4 & 1) != 0) {
      if (*(char *)(param_3[6] + 6) == '\0') {
        uVar12 = FUN_01243584(param_1);
        uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
        FUN_029828dc(uVar12,uVar8,*(undefined1 *)(param_3[6] + 4));
      }
      uVar12 = FUN_01243584(param_1);
      uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_02982914(uVar12,uVar8,0x204,uVar7);
      uVar21 = (ulong)(byte)local_e8;
      uVar13 = (ulong)local_e8._1_1_;
      if ((uint)local_e8._1_1_ + (uint)(byte)local_e8 != 0) {
        uVar15 = 0;
        pbVar18 = local_dc;
        do {
          if (7 < *pbVar18) {
            FUN_02982934(param_1,*(undefined4 *)(pbVar18 + -4));
            uVar12 = FUN_01243584(param_1);
            uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
            uVar22 = FUN_014813f4(param_1,uVar8);
            FUN_01248470(uVar12,uVar22,0x18);
          }
          uVar15 = uVar15 + 1;
          pbVar18 = pbVar18 + 0xc;
        } while (uVar15 < uVar13 + uVar21);
      }
    }
  }
  uVar12 = FUN_01243584(param_1);
  FUN_02980868(uVar12,0x60);
  if (*(char *)(param_3[6] + 5) == '\0') {
    FUN_01243d7c(param_3[4]);
    plVar10 = (long *)FUN_0168003c(param_3[4]);
    if (plVar10 != (long *)0x0) {
      do {
        uVar21 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if (((uVar21 & 1) != 0) && (cVar6 = FUN_0297d890(param_1,plVar10), cVar6 == '\x01')) {
          uVar12 = FUN_01243584(param_1);
          uVar8 = (**(code **)(*(long *)*param_3 + 0x98))();
          FUN_01636f5c(uVar12,uVar8,plVar10,0);
        }
        plVar10 = (long *)FUN_0168003c(param_3[4]);
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


