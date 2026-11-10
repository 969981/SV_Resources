/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a5160; name: FUN_003a5160
 */


int FUN_003a5160(int *param_1,int param_2,long param_3,long *param_4,ulong param_5,int param_6,
                long *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong local_10b8;
  int local_108c;
  long local_1088;
  undefined1 local_1080;
  undefined7 uStack_107f;
  ulong local_1078;
  long local_1070;
  ulong local_1068;
  undefined8 local_1060 [320];
  undefined1 auStack_660 [1536];
  
  piVar23 = (int *)local_1060;
  puVar22 = local_1060;
  local_1068 = 0;
  if (param_5 == 0) {
    local_1088 = 0;
  }
  else {
    if (param_5 < 8) {
      uVar11 = 0;
      local_1088 = 0;
    }
    else {
      lVar15 = 0;
      lVar8 = 0;
      lVar25 = 0;
      lVar24 = 0;
      lVar27 = 0;
      lVar26 = 0;
      lVar29 = 0;
      lVar28 = 0;
      uVar11 = param_5 & 0xfffffffffffffff8;
      plVar12 = param_4 + 4;
      uVar13 = uVar11;
      do {
        lVar24 = plVar12[-2] + lVar24;
        lVar25 = plVar12[-1] + lVar25;
        lVar15 = plVar12[-4] + lVar15;
        lVar8 = plVar12[-3] + lVar8;
        uVar13 = uVar13 - 8;
        lVar26 = *plVar12 + lVar26;
        lVar27 = plVar12[1] + lVar27;
        lVar28 = plVar12[2] + lVar28;
        lVar29 = plVar12[3] + lVar29;
        plVar12 = plVar12 + 8;
      } while (uVar13 != 0);
      local_1088 = lVar28 + lVar26 + lVar24 + lVar15 + lVar29 + lVar27 + lVar25 + lVar8;
      if (uVar11 == param_5) goto LAB_003a5230;
    }
    lVar15 = param_5 - uVar11;
    plVar12 = param_4 + uVar11;
    do {
      local_1088 = *plVar12 + local_1088;
      lVar15 = lVar15 + -1;
      plVar12 = plVar12 + 1;
    } while (lVar15 != 0);
  }
LAB_003a5230:
  uVar13 = *(ulong *)(param_1 + 600);
  if ((uVar13 == 0) || (*(long *)(param_1 + uVar13 * 10 + 0x262) == 0)) {
    if (*(int *)(*(long *)(param_1 + 0x2a) + 0xfc) != 0) {
      iVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      if (iVar2 < 1) {
        return iVar2;
      }
      uVar13 = *(ulong *)(param_1 + 600);
    }
    if ((param_5 <= uVar13) || (iVar2 = FUN_003a6a90(param_1,param_5,0), iVar2 != 0)) {
      if ((param_6 == 0) && (local_1088 == 0)) {
        return 0;
      }
      if (((*(long *)(param_1 + 0x174) == 0) || (*(long *)(param_1 + 0x14c) == 0)) ||
         (lVar15 = FUN_0043b770(*(undefined8 *)(param_1 + 0x152)), lVar15 == 0)) {
        iVar2 = 0;
        if (*(long *)(param_1 + 0x14c) == 0 || param_6 != 0) {
LAB_003a5320:
          local_10b8 = 0;
          if (param_6 == 0) goto LAB_003a541c;
LAB_003a5328:
          uVar13 = (ulong)~((int)*(undefined8 *)(param_1 + 0x264) + 1U) & 7;
          *(ulong *)(param_1 + 0x26a) = uVar13;
          iVar3 = FUN_003a2210(auStack_660,*(undefined8 *)(param_1 + 0x264),
                               *(undefined8 *)(param_1 + 0x268),0);
          if ((iVar3 == 0) || (iVar3 = FUN_003a1b10(auStack_660,uVar13,0), iVar3 == 0)) {
            uVar10 = 0x304;
            goto LAB_003a54ec;
          }
LAB_003a5450:
          uVar13 = 1;
        }
        else {
LAB_003a5314:
          lVar15 = *(long *)(param_1 + 0x2a);
          if (*(int *)(lVar15 + 0xdc) != 0) goto LAB_003a5320;
          local_10b8 = 0;
          if ((param_2 == 0x17) && (*(int *)(lVar15 + 0xd8) != 0)) {
            local_1060[0] = 0;
            iVar3 = FUN_003a5160(param_1,0x17,param_3,local_1060,1,1,&local_1068);
            if (iVar3 < 1) goto LAB_003a54f4;
            if (0x55 < local_1068) {
              uVar10 = 0x2ec;
              goto LAB_003a54ec;
            }
            lVar15 = *(long *)(param_1 + 0x2a);
            local_10b8 = local_1068;
          }
          *(undefined4 *)(lVar15 + 0xdc) = 1;
          if (param_6 != 0) goto LAB_003a5328;
LAB_003a541c:
          if (local_10b8 != 0) {
            iVar3 = FUN_003a2210(auStack_660,*(undefined8 *)(param_1 + 0x264),
                                 *(undefined8 *)(param_1 + 0x268),0);
            if ((iVar3 == 0) ||
               (iVar3 = FUN_003a1b10(auStack_660,*(long *)(param_1 + 0x26a) + local_10b8,0),
               iVar3 == 0)) {
              uVar10 = 0x310;
              goto LAB_003a54ec;
            }
            goto LAB_003a5450;
          }
          uVar13 = 0;
          if (param_5 != 0) {
            puVar21 = (ulong *)(param_1 + 0x26a);
            puVar17 = auStack_660;
            do {
              uVar11 = (ulong)~((int)puVar21[-3] + 4U) & 7;
              *puVar21 = uVar11;
              iVar3 = FUN_003a2210(puVar17,puVar21[-3],puVar21[-1],0);
              if ((iVar3 == 0) || (iVar3 = FUN_003a1b10(puVar17,uVar11,0), iVar3 == 0)) {
                uVar10 = 0x322;
                goto LAB_003a5d68;
              }
              uVar13 = uVar13 + 1;
              puVar17 = puVar17 + 0x30;
              puVar21 = puVar21 + 5;
            } while (param_5 != uVar13);
            uVar13 = param_5;
          }
        }
        if (*(long *)(param_1 + 0x14c) == 0) {
LAB_003a55cc:
          local_108c = 0;
        }
        else {
          uVar4 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
          if (((uVar4 & 1) == 0) ||
             (((((uVar4 >> 3 & 1) == 0 && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
               (iVar3 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x168] == 1))))))
          goto LAB_003a55cc;
          FUN_0043b170();
          uVar4 = FUN_0043b160();
          if ((uVar4 & 0xf0007) - 6 < 2) {
            local_108c = 8;
          }
          else {
            if ((uVar4 & 0xf0007) != 2) goto LAB_003a55cc;
            iVar3 = FUN_0043b4a0(*(undefined8 *)(param_1 + 0x14c));
            local_108c = 0;
            if (1 < iVar3) {
              local_108c = iVar3;
            }
          }
        }
        memset(local_1060,0,0xa00);
        if (param_5 == 0) {
          local_1088 = 0;
        }
        else {
          puVar17 = auStack_660;
          local_1088 = 0;
          uVar11 = param_5;
          do {
            local_1078 = 0;
            iVar3 = 0x303;
            if (*param_1 != 0x304) {
              iVar3 = *param_1;
            }
            if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
                  (iVar18 = **(int **)(param_1 + 2), 0x303 < iVar18)) && (iVar18 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x168] == 1)))) &&
               (*(long *)(param_1 + 0x14c) != 0)) {
              if (param_2 == 0x15) {
                iVar18 = 0x17;
                if (param_1[0x1f] == 2) goto LAB_003a5688;
              }
              else {
                iVar18 = 0x17;
              }
            }
            else {
LAB_003a5688:
              iVar18 = param_2;
            }
            piVar23[1] = iVar18;
            iVar5 = FUN_003c38c0(param_1);
            iVar20 = iVar3;
            if ((((iVar5 == 0xc) && (param_1[0x224] == 0)) &&
                (uVar4 = FUN_003b4ef0(param_1), (uVar4 & 0xffffff00) == 0x300)) &&
               ((iVar5 = FUN_003b4ef0(param_1), 0x301 < iVar5 &&
                (iVar20 = 0x301, param_1[0x168] != 0)))) {
              iVar20 = iVar3;
            }
            *piVar23 = iVar20;
            lVar15 = *param_4;
            if (*(long *)(param_1 + 0x148) != 0) {
              lVar15 = *param_4 + 0x400;
            }
            iVar3 = FUN_003a26e0(puVar17,iVar18,1);
            if ((((iVar3 == 0) || (iVar3 = FUN_003a26e0(puVar17,iVar20,2), iVar3 == 0)) ||
                ((iVar3 = FUN_003a1e80(puVar17,2), iVar3 == 0 ||
                 ((0 < local_108c && (iVar3 = FUN_003a1b10(puVar17,local_108c,0), iVar3 == 0))))))
               || ((lVar15 != 0 && (iVar3 = FUN_003a1be0(puVar17,lVar15,&local_1078), iVar3 == 0))))
            {
              uVar10 = 0x36c;
              goto LAB_003a5d68;
            }
            lVar15 = *param_4;
            *(long *)(piVar23 + 2) = lVar15;
            *(ulong *)(piVar23 + 8) = local_1078;
            *(long *)(piVar23 + 10) = param_3 + local_1088;
            if (*(long *)(param_1 + 0x148) == 0) {
              iVar3 = FUN_003a2900(puVar17,param_3 + local_1088,lVar15);
              if (iVar3 == 0) {
                uVar10 = 0x386;
                goto LAB_003a5d68;
              }
              *(undefined8 *)(piVar23 + 10) = *(undefined8 *)(piVar23 + 8);
              piVar14 = *(int **)(param_1 + 2);
              bVar1 = *(byte *)(*(long *)(piVar14 + 0x30) + 0x60);
            }
            else {
              iVar3 = FUN_003a7e30(param_1,piVar23);
              if ((iVar3 == 0) ||
                 (iVar3 = FUN_003a1b10(puVar17,*(undefined8 *)(piVar23 + 2),0), iVar3 == 0)) {
                uVar9 = 0x8d;
                uVar10 = 0x380;
                goto LAB_003a5d6c;
              }
              piVar14 = *(int **)(param_1 + 2);
              bVar1 = *(byte *)(*(long *)(piVar14 + 0x30) + 0x60);
            }
            if ((((((bVar1 >> 3 & 1) == 0) && (0x303 < *piVar14)) && (*piVar14 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x168] == 1)))) &&
               ((*(long *)(param_1 + 0x14c) != 0 && ((param_2 != 0x15 || (param_1[0x1f] != 2)))))) {
              iVar3 = FUN_003a26e0(puVar17,param_2,1);
              if (iVar3 == 0) {
                uVar10 = 0x394;
                goto LAB_003a5d68;
              }
              *(long *)(piVar23 + 2) = *(long *)(piVar23 + 2) + 1;
              uVar6 = FUN_003b5ee0(param_1);
              uVar19 = *(ulong *)(piVar23 + 2);
              if (uVar19 < (uVar6 & 0xffffffff)) {
                if (*(code **)(param_1 + 0x64e) == (code *)0x0) {
                  uVar7 = *(ulong *)(param_1 + 0x652);
                  if (uVar7 != 0) {
                    if ((uVar7 & uVar7 - 1) == 0) {
                      uVar16 = uVar7 - 1 & uVar19;
                    }
                    else {
                      uVar16 = 0;
                      if (uVar7 != 0) {
                        uVar16 = uVar19 / uVar7;
                      }
                      uVar16 = uVar19 - uVar16 * uVar7;
                    }
                    if (uVar16 != 0) {
                      uVar7 = uVar7 - uVar16;
                      goto joined_r0x003a58f0;
                    }
                  }
                }
                else {
                  uVar7 = (**(code **)(param_1 + 0x64e))
                                    (param_1,param_2,uVar19,*(undefined8 *)(param_1 + 0x650));
joined_r0x003a58f0:
                  if (uVar7 != 0) {
                    uVar19 = (uVar6 & 0xffffffff) - uVar19;
                    if (uVar7 <= uVar19) {
                      uVar19 = uVar7;
                    }
                    iVar3 = FUN_003a2820(puVar17,0,uVar19);
                    if (iVar3 == 0) {
                      uVar10 = 0x3b6;
                      goto LAB_003a5d68;
                    }
                    *(ulong *)(piVar23 + 2) = *(long *)(piVar23 + 2) + uVar19;
                  }
                }
              }
            }
            if (((iVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) == 0)) &&
               ((iVar3 = FUN_003a1b10(puVar17,(long)iVar2,&local_1080), iVar3 == 0 ||
                (iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                                   (param_1,piVar23,CONCAT71(uStack_107f,local_1080),1), iVar3 == 0)
                ))) {
              uVar10 = 0x3ca;
              goto LAB_003a5d68;
            }
            iVar3 = FUN_003a1be0(puVar17,0x10,0);
            if ((iVar3 == 0) || (iVar3 = FUN_003a2be0(puVar17,&local_1070), iVar3 == 0)) {
              uVar10 = 0x3dc;
              goto LAB_003a5d68;
            }
            local_1088 = lVar15 + local_1088;
            lVar15 = FUN_003a2110(puVar17);
            uVar11 = uVar11 - 1;
            param_4 = param_4 + 1;
            *(long *)(piVar23 + 8) = lVar15 - local_1070;
            *(long *)(piVar23 + 10) = lVar15 - local_1070;
            *(long *)(piVar23 + 2) = local_1070;
            piVar23 = piVar23 + 0x14;
            puVar17 = puVar17 + 0x30;
          } while (uVar11 != 0);
        }
        if (param_1[0x1f] == 2) {
          iVar3 = FUN_003a9490(param_1,local_1060,param_5,1);
          if (0 < iVar3) goto LAB_003a5a44;
          iVar2 = FUN_003c39d0(param_1);
          if (iVar2 == 0) {
            uVar9 = 0x44;
            uVar10 = 0x3f0;
            goto LAB_003a5d6c;
          }
        }
        else {
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))
                            (param_1,local_1060,param_5,1);
          if (iVar3 < 1) {
            iVar2 = FUN_003c39d0(param_1);
            if (iVar2 != 0) goto LAB_003a5d70;
            uVar9 = 0x44;
            uVar10 = 0x3f8;
          }
          else {
LAB_003a5a44:
            if (param_5 == 0) {
LAB_003a5bec:
              *(long *)(param_1 + 0x630) = local_1088;
              *(long *)(param_1 + 0x636) = param_3;
              param_1[0x632] = param_2;
              *(long *)(param_1 + 0x634) = local_1088;
              goto LAB_003a525c;
            }
            puVar17 = auStack_660;
            lVar15 = 0x9b0;
LAB_003a5a60:
            iVar3 = FUN_003a2be0(puVar17,&local_1078);
            if (iVar3 == 0) {
LAB_003a5c98:
              uVar10 = 0x40c;
              goto LAB_003a5d68;
            }
            lVar8 = *(ulong *)((long)puVar22 + 8) - local_1078;
            if ((*(ulong *)((long)puVar22 + 8) < local_1078) ||
               ((lVar8 != 0 && (iVar3 = FUN_003a1b10(puVar17,lVar8,0), iVar3 == 0))))
            goto LAB_003a5c98;
            if ((iVar2 == 0) || (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) == 0)) {
LAB_003a5ae8:
              iVar3 = FUN_003a2be0(puVar17,&local_1070);
              if ((iVar3 == 0) || (iVar3 = FUN_003a1fe0(puVar17), iVar3 == 0)) {
                uVar10 = 0x41e;
                goto LAB_003a5d68;
              }
              if (*(long *)(param_1 + 0x2e) != 0) {
                lVar8 = FUN_003a2110(puVar17);
                (**(code **)(param_1 + 0x2e))
                          (1,0,0x100,(lVar8 - local_1070) + -5,5,param_1,
                           *(undefined8 *)(param_1 + 0x30));
                if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0)
                      && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
                    ((param_1[0x21] - 1U < 4 || (param_1[0x168] == 1)))) &&
                   (*(long *)(param_1 + 0x14c) != 0)) {
                  local_1080 = (undefined1)param_2;
                  (**(code **)(param_1 + 0x2e))
                            (1,*param_1,0x101,&local_1080,1,param_1,*(undefined8 *)(param_1 + 0x30))
                  ;
                }
              }
              iVar3 = FUN_003a2510(puVar17);
              if (iVar3 == 0) {
                uVar10 = 0x433;
                goto LAB_003a5d68;
              }
              lVar8 = *(long *)((long)puVar22 + 8) + 5;
              *(int *)((long)puVar22 + 4) = param_2;
              *(long *)((long)puVar22 + 8) = lVar8;
              if (param_6 != 0) {
                *param_7 = lVar8;
                return 1;
              }
              param_5 = param_5 - 1;
              *(ulong *)((long)param_1 + lVar15) = local_10b8 + lVar8;
              puVar22 = (undefined8 *)((long)puVar22 + 0x50);
              puVar17 = puVar17 + 0x30;
              lVar15 = lVar15 + 0x28;
              if (param_5 == 0) goto LAB_003a5bec;
              goto LAB_003a5a60;
            }
            iVar3 = FUN_003a1b10(puVar17,(long)iVar2,&local_1080);
            if ((iVar3 != 0) &&
               (iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                                  (param_1,puVar22,CONCAT71(uStack_107f,local_1080),1), iVar3 != 0))
            {
              *(long *)((long)puVar22 + 8) = *(long *)((long)puVar22 + 8) + (long)iVar2;
              goto LAB_003a5ae8;
            }
            uVar10 = 0x415;
LAB_003a5d68:
            uVar9 = 0x44;
          }
LAB_003a5d6c:
          FUN_003c3950(param_1,0x50,0x68,uVar9,"external/openssl/ssl/record/rec_layer_s3.c",uVar10);
        }
LAB_003a5d70:
        if (uVar13 != 0) {
          puVar17 = auStack_660;
          do {
            FUN_003a2c10(puVar17);
            uVar13 = uVar13 - 1;
            puVar17 = puVar17 + 0x30;
          } while (uVar13 != 0);
          return -1;
        }
      }
      else {
        FUN_0043b770(*(undefined8 *)(param_1 + 0x152));
        iVar2 = FUN_0043b720();
        if (-1 < iVar2) {
          if (param_6 == 0) goto LAB_003a5314;
          goto LAB_003a5320;
        }
        uVar10 = 0x2ca;
LAB_003a54ec:
        FUN_003c3950(param_1,0x50,0x68,0x44,"external/openssl/ssl/record/rec_layer_s3.c",uVar10);
      }
    }
LAB_003a54f4:
    iVar2 = -1;
  }
  else {
LAB_003a525c:
    iVar2 = FUN_003a4fc0(param_1,param_2,param_3,local_1088,param_7);
  }
  return iVar2;
}


