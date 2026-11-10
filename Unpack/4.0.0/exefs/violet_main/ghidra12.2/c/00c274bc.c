/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c274bc; name: FUN_00c274bc
 */


undefined8
FUN_00c274bc(long *param_1,int param_2,ulong param_3,undefined1 *param_4,ulong *param_5,
            long *param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined4 *__src;
  undefined8 *puVar16;
  ulong *puVar17;
  uint *puVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined2 uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  ulong *puVar28;
  uint *puVar29;
  byte *pbVar30;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long *plVar31;
  int iVar32;
  long lVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar7 = &local_90;
  puVar13 = (uint *)&local_90;
  puVar9 = &local_90;
  puVar14 = &local_90;
  puVar12 = &local_90;
  puVar15 = &local_90;
  __dest = &local_90;
  puVar16 = &local_90;
  __dest_00 = &local_90;
  puVar17 = &local_90;
  __dest_01 = &local_90;
  puVar18 = (uint *)&local_90;
  if ((param_3 & 1) != 0) {
    pbVar11 = (byte *)*param_5;
    pbVar26 = (byte *)param_5[1];
    if (pbVar11 < pbVar26) {
      uVar24 = (ulong)*pbVar11;
      if (-1 < (char)*pbVar11) {
        pbVar11 = pbVar11 + 1;
        *param_5 = (ulong)pbVar11;
        goto LAB_00c285fc;
      }
    }
    else {
      uVar24 = 0;
    }
    uVar24 = FUN_00c0944c(param_5,uVar24);
    if ((long)uVar24 < 0) {
      return 0;
    }
    pbVar11 = (byte *)*param_5;
    pbVar26 = (byte *)param_5[1];
LAB_00c285fc:
    iVar2 = (int)param_5[3];
    iVar10 = (int)pbVar11;
    iVar1 = (int)param_5[5];
    iVar5 = (iVar2 - *(int *)((long)param_5 + 0x2c)) + (iVar10 - (int)pbVar26);
    iVar23 = (int)uVar24;
    iVar32 = 0x7fffffff;
    if (iVar23 <= 0x7fffffff - iVar5 && -1 < iVar23) {
      iVar32 = iVar5 + iVar23;
    }
    iVar5 = iVar1;
    if (iVar32 <= iVar1) {
      iVar5 = iVar32;
    }
    pbVar26 = pbVar26 + *(int *)((long)param_5 + 0x2c);
    *(int *)(param_5 + 5) = iVar5;
    param_5[1] = (ulong)pbVar26;
    iVar32 = (int)param_5[6];
    if (iVar5 <= (int)param_5[6]) {
      iVar32 = iVar5;
    }
    iVar23 = iVar2 - iVar32;
    if (iVar23 == 0 || iVar2 < iVar32) {
      iVar23 = 0;
      *(undefined4 *)((long)param_5 + 0x2c) = 0;
    }
    else {
      pbVar26 = pbVar26 + -(long)iVar23;
      *(int *)((long)param_5 + 0x2c) = iVar23;
      param_5[1] = (ulong)pbVar26;
    }
    iVar32 = (int)pbVar26;
    switch(*param_4) {
    case 1:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 8) {
            if ((uint)lVar33 < 8) {
              iVar5 = 8;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 8;
            }
            *param_5 = (ulong)pbVar26;
            uVar20 = *(undefined8 *)pbVar11;
          }
          else {
            uVar20 = *(undefined8 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 8);
          }
          FUN_00c221a4(uVar20,param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 2:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 4) {
            if ((uint)lVar33 < 4) {
              iVar5 = 4;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 4;
            }
            *param_5 = (ulong)pbVar26;
            uVar34 = *(undefined4 *)pbVar11;
          }
          else {
            uVar34 = *(undefined4 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 4);
          }
          FUN_00c21c04(uVar34,param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 3:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if ((pbVar11 < pbVar26) && (-1 < (char)*pbVar11)) {
            uVar24 = (ulong)*pbVar11;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            auVar35 = FUN_00c09268(param_5);
            uVar24 = auVar35._0_8_;
            if ((auVar35._8_8_ & 1) == 0) {
              return 0;
            }
          }
          FUN_00c20b1c(param_1,param_2,3,param_4[2],uVar24,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 4:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if ((pbVar11 < pbVar26) && (-1 < (char)*pbVar11)) {
            uVar24 = (ulong)*pbVar11;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            auVar35 = FUN_00c09268(param_5);
            uVar24 = auVar35._0_8_;
            if ((auVar35._8_8_ & 1) == 0) {
              return 0;
            }
          }
          FUN_00c2165c(param_1,param_2,4,param_4[2],uVar24,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 5:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if (pbVar11 < pbVar26) {
            uVar24 = (ulong)*pbVar11;
            if ((char)*pbVar11 < '\0') goto LAB_00c2895c;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            uVar24 = 0;
LAB_00c2895c:
            uVar24 = FUN_00c0944c(param_5,uVar24);
            if ((long)uVar24 < 0) {
              return 0;
            }
          }
          FUN_00c2057c(param_1,param_2,5,param_4[2],uVar24,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 6:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 8) {
            if ((uint)lVar33 < 8) {
              iVar5 = 8;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 8;
            }
            *param_5 = (ulong)pbVar26;
            uVar20 = *(undefined8 *)pbVar11;
          }
          else {
            uVar20 = *(undefined8 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 8);
          }
          FUN_00c2165c(param_1,param_2,6,param_4[2],uVar20,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 7:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 4) {
            if ((uint)lVar33 < 4) {
              iVar5 = 4;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 4;
            }
            *param_5 = (ulong)pbVar26;
            uVar34 = *(undefined4 *)pbVar11;
          }
          else {
            uVar34 = *(undefined4 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 4);
          }
          FUN_00c210bc(param_1,param_2,7,param_4[2],uVar34,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 8:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if ((pbVar11 < pbVar26) && (-1 < (char)*pbVar11)) {
            uVar24 = (ulong)*pbVar11;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            auVar35 = FUN_00c09268(param_5);
            uVar24 = auVar35._0_8_;
            if ((auVar35._8_8_ & 1) == 0) {
              return 0;
            }
          }
          FUN_00c22820(param_1,param_2,8,param_4[2],uVar24 != 0,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      local_90._0_4_ = 3;
      local_68 = 0;
      local_80 = 0x4c6;
      local_88 = 0x3c0b260;
      uStack_84 = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      std::string::append((char *)&local_78);
      FUN_00bb0e90(&local_90);
      FUN_00bb0d74(&local_90);
      break;
    case 0xd:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if (pbVar11 < pbVar26) {
            uVar24 = (ulong)*pbVar11;
            if ((char)*pbVar11 < '\0') goto LAB_00c28a0c;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            uVar24 = 0;
LAB_00c28a0c:
            uVar24 = FUN_00c0944c(param_5,uVar24);
            if ((long)uVar24 < 0) {
              return 0;
            }
          }
          FUN_00c210bc(param_1,param_2,0xd,param_4[2],uVar24,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 0xe:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if (pbVar11 < pbVar26) {
            uVar24 = (ulong)*pbVar11;
            if ((char)*pbVar11 < '\0') goto LAB_00c29070;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            uVar24 = 0;
LAB_00c29070:
            uVar24 = FUN_00c0944c(param_5,uVar24);
            if ((long)uVar24 < 0) {
              return 0;
            }
          }
          uVar8 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar24 & 0xffffffff);
          if ((uVar8 & 1) == 0) {
            (**(code **)(*param_6 + 0x20))(param_6,param_2,uVar24 & 0xffffffff);
          }
          else {
            FUN_00c23438(param_1,param_2,0xe,param_4[2],uVar24 & 0xffffffff,
                         *(undefined8 *)(param_4 + 0x18));
          }
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 0xf:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 4) {
            if ((uint)lVar33 < 4) {
              iVar5 = 4;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 4;
            }
            *param_5 = (ulong)pbVar26;
            uVar34 = *(undefined4 *)pbVar11;
          }
          else {
            uVar34 = *(undefined4 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 4);
          }
          FUN_00c2057c(param_1,param_2,0xf,param_4[2],uVar34,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 0x10:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          lVar33 = (long)pbVar26 - (long)pbVar11;
          if ((int)(uint)lVar33 < 8) {
            if ((uint)lVar33 < 8) {
              iVar5 = 8;
              puVar7 = &local_90;
              do {
                iVar32 = (int)lVar33;
                memcpy(puVar7,pbVar11,(long)iVar32);
                *param_5 = *param_5 + (long)iVar32;
                uVar24 = FUN_00c08eb0(param_5);
                if ((uVar24 & 1) == 0) {
                  return 0;
                }
                pbVar11 = (byte *)*param_5;
                iVar5 = iVar5 - iVar32;
                lVar33 = param_5[1] - (long)pbVar11;
                puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
              } while ((int)lVar33 < iVar5);
              memcpy(puVar7,pbVar11,(long)iVar5);
              pbVar26 = (byte *)(*param_5 + (long)iVar5);
              pbVar11 = (byte *)&local_90;
            }
            else {
              pbVar26 = pbVar11 + 8;
            }
            *param_5 = (ulong)pbVar26;
            uVar20 = *(undefined8 *)pbVar11;
          }
          else {
            uVar20 = *(undefined8 *)pbVar11;
            *param_5 = (ulong)(pbVar11 + 8);
          }
          FUN_00c20b1c(param_1,param_2,0x10,param_4[2],uVar20,*(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 0x11:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if (pbVar11 < pbVar26) {
            uVar24 = (ulong)*pbVar11;
            if ((char)*pbVar11 < '\0') goto LAB_00c28798;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            uVar24 = 0;
LAB_00c28798:
            uVar24 = FUN_00c0944c(param_5,uVar24);
            if ((long)uVar24 < 0) {
              return 0;
            }
          }
          FUN_00c2057c(param_1,param_2,0x11,param_4[2],-((uint)uVar24 & 1) ^ (uint)uVar24 >> 1,
                       *(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
      break;
    case 0x12:
      if (iVar5 != 0x7fffffff) {
        iVar5 = (iVar5 - iVar2) + iVar23 + (iVar32 - iVar10);
        while (0 < iVar5) {
          if ((pbVar11 < pbVar26) && (-1 < (char)*pbVar11)) {
            uVar24 = (ulong)*pbVar11;
            *param_5 = (ulong)(pbVar11 + 1);
          }
          else {
            auVar35 = FUN_00c09268(param_5);
            uVar24 = auVar35._0_8_;
            if ((auVar35._8_8_ & 1) == 0) {
              return 0;
            }
          }
          FUN_00c20b1c(param_1,param_2,0x12,param_4[2],-(uVar24 & 1) ^ uVar24 >> 1,
                       *(undefined8 *)(param_4 + 0x18));
          if ((int)param_5[5] == 0x7fffffff) break;
          pbVar11 = (byte *)*param_5;
          pbVar26 = (byte *)param_5[1];
          iVar5 = ((int)param_5[5] - (int)param_5[3]) + *(int *)((long)param_5 + 0x2c) +
                  ((int)pbVar26 - (int)pbVar11);
        }
      }
    }
    uVar24 = param_5[1] + (long)*(int *)((long)param_5 + 0x2c);
    iVar5 = (int)param_5[6];
    if (iVar1 <= (int)param_5[6]) {
      iVar5 = iVar1;
    }
    iVar32 = (int)param_5[3] - iVar5;
    *(int *)(param_5 + 5) = iVar1;
    param_5[1] = uVar24;
    if (iVar32 == 0 || (int)param_5[3] < iVar5) {
      *(undefined4 *)((long)param_5 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_5 + 0x2c) = iVar32;
      param_5[1] = uVar24 - (long)iVar32;
    }
    *(undefined1 *)((long)param_5 + 0x24) = 0;
    return 1;
  }
  switch(*param_4) {
  case 1:
    puVar7 = (undefined8 *)*param_5;
    lVar33 = param_5[1] - (long)puVar7;
    if ((int)(uint)lVar33 < 8) {
      if ((uint)lVar33 < 8) {
        iVar5 = 8;
        do {
          iVar32 = (int)lVar33;
          memcpy(puVar12,puVar7,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          puVar7 = (undefined8 *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)puVar7;
          puVar12 = (undefined8 *)((long)puVar12 + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(puVar12,puVar7,(long)iVar5);
        puVar9 = (undefined8 *)(*param_5 + (long)iVar5);
      }
      else {
        puVar9 = puVar7 + 1;
        puVar15 = puVar7;
      }
      *param_5 = (ulong)puVar9;
      uVar20 = *puVar15;
    }
    else {
      uVar20 = *puVar7;
      *param_5 = (ulong)(puVar7 + 1);
    }
    if (param_4[1] == '\0') {
      uVar21 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c27f74;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c27f74;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c27f74;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c27f74:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar9 + 4) = param_2;
        puVar7 = puVar9 + 5;
        *puVar7 = CONCAT44(local_88,local_90._4_4_);
        puVar9[6] = CONCAT44(local_80,uStack_84);
        puVar9[7] = CONCAT44(local_78,uStack_7c);
        puVar9[2] = plVar31;
        *puVar9 = 0;
        puVar9[1] = 0;
        *plVar6 = (long)puVar9;
        if (*(long *)*param_1 == 0) {
          puVar12 = puVar9;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar12 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar12);
        param_1[2] = param_1[2] + 1;
        puVar9[7] = uVar21;
        *(undefined2 *)(puVar9 + 6) = 1;
      }
      else {
        puVar7 = (undefined8 *)(lVar33 + 0x28);
        *(undefined8 *)(lVar33 + 0x38) = uVar21;
      }
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xf0;
      *puVar7 = uVar20;
    }
    else {
      FUN_00c221a4(uVar20,param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 2:
    __src = (undefined4 *)*param_5;
    lVar33 = param_5[1] - (long)__src;
    if ((int)(uint)lVar33 < 4) {
      if ((uint)lVar33 < 4) {
        iVar5 = 4;
        do {
          iVar32 = (int)lVar33;
          memcpy(__dest,__src,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          __src = (undefined4 *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)__src;
          __dest = (undefined8 *)((long)__dest + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(__dest,__src,(long)iVar5);
        puVar27 = (undefined4 *)(*param_5 + (long)iVar5);
      }
      else {
        puVar27 = __src + 1;
        puVar16 = (undefined8 *)__src;
      }
      *param_5 = (ulong)puVar27;
      uVar34 = *(undefined4 *)puVar16;
    }
    else {
      uVar34 = *__src;
      *param_5 = (ulong)(__src + 1);
    }
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c28008;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c28008;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c28008;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c28008:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar9 + 4) = param_2;
        puVar7 = puVar9 + 5;
        *puVar7 = CONCAT44(local_88,local_90._4_4_);
        puVar9[6] = CONCAT44(local_80,uStack_84);
        puVar9[7] = CONCAT44(local_78,uStack_7c);
        puVar9[2] = plVar31;
        *puVar9 = 0;
        puVar9[1] = 0;
        *plVar6 = (long)puVar9;
        if (*(long *)*param_1 == 0) {
          puVar12 = puVar9;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar12 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar12);
        param_1[2] = param_1[2] + 1;
        puVar9[7] = uVar20;
        *(undefined2 *)(puVar9 + 6) = 2;
      }
      else {
        puVar7 = (undefined8 *)(lVar33 + 0x28);
        *(undefined8 *)(lVar33 + 0x38) = uVar20;
      }
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xf0;
      *(undefined4 *)puVar7 = uVar34;
    }
    else {
      FUN_00c21c04(uVar34,param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 3:
    pbVar11 = (byte *)*param_5;
    if ((pbVar11 < (byte *)param_5[1]) && (-1 < (char)*pbVar11)) {
      uVar24 = (ulong)*pbVar11;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      auVar35 = FUN_00c09268(param_5);
      uVar24 = auVar35._0_8_;
      if ((auVar35._8_8_ & 1) == 0) {
        return 0;
      }
    }
    if (param_4[1] != '\0') {
      uVar19 = param_4[2];
      uVar21 = *(undefined8 *)(param_4 + 0x18);
      uVar20 = 3;
      goto LAB_00c27944;
    }
    uVar20 = *(undefined8 *)(param_4 + 0x18);
    uStack_7c = 0;
    local_78 = 0;
    uStack_84 = 0;
    local_80 = 0;
    local_90._4_4_ = 0;
    local_88 = 0;
    plVar6 = param_1 + 1;
    plVar31 = (long *)*plVar6;
    if (plVar31 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c281b8;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c281b8;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c281b8;
        }
        plVar31 = plVar25;
      } while( true );
    }
    plVar31 = plVar6;
LAB_00c281b8:
    lVar33 = *plVar6;
    if (lVar33 == 0) {
      lVar33 = tpidr_el0;
      plVar25 = *(long **)(lVar33 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar33 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
      *(int *)(puVar7 + 4) = param_2;
      puVar17 = puVar7 + 5;
      *puVar17 = CONCAT44(local_88,local_90._4_4_);
      puVar7[6] = CONCAT44(local_80,uStack_84);
      puVar7[7] = CONCAT44(local_78,uStack_7c);
      puVar7[2] = plVar31;
      *puVar7 = 0;
      puVar7[1] = 0;
      *plVar6 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar9 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar9 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar9);
      param_1[2] = param_1[2] + 1;
      uVar22 = 3;
      puVar7[7] = uVar20;
      goto LAB_00c28554;
    }
LAB_00c28248:
    puVar17 = (ulong *)(lVar33 + 0x28);
    *(undefined8 *)(lVar33 + 0x38) = uVar20;
    goto LAB_00c28558;
  case 4:
    pbVar11 = (byte *)*param_5;
    if ((pbVar11 < (byte *)param_5[1]) && (-1 < (char)*pbVar11)) {
      uVar24 = (ulong)*pbVar11;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      auVar35 = FUN_00c09268(param_5);
      uVar24 = auVar35._0_8_;
      if ((auVar35._8_8_ & 1) == 0) {
        return 0;
      }
    }
    if (param_4[1] != '\0') {
      uVar19 = param_4[2];
      uVar21 = *(undefined8 *)(param_4 + 0x18);
      uVar20 = 4;
LAB_00c278c4:
      FUN_00c2165c(param_1,param_2,uVar20,uVar19,uVar24,uVar21);
      return 1;
    }
    uVar20 = *(undefined8 *)(param_4 + 0x18);
    uStack_7c = 0;
    local_78 = 0;
    uStack_84 = 0;
    local_80 = 0;
    local_90._4_4_ = 0;
    local_88 = 0;
    plVar6 = param_1 + 1;
    plVar31 = (long *)*plVar6;
    if (plVar31 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c28240;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c28240;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c28240;
        }
        plVar31 = plVar25;
      } while( true );
    }
    plVar31 = plVar6;
LAB_00c28240:
    lVar33 = *plVar6;
    if (lVar33 != 0) goto LAB_00c28248;
    lVar33 = tpidr_el0;
    plVar25 = *(long **)(lVar33 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar25 = DAT_04859430;
      *(long **)(lVar33 + 0x30) = DAT_04859430;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
    *(int *)(puVar7 + 4) = param_2;
    puVar17 = puVar7 + 5;
    *puVar17 = CONCAT44(local_88,local_90._4_4_);
    puVar7[6] = CONCAT44(local_80,uStack_84);
    puVar7[7] = CONCAT44(local_78,uStack_7c);
    puVar7[2] = plVar31;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar6 = (long)puVar7;
    if (*(long *)*param_1 == 0) {
      puVar9 = puVar7;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar9 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar9);
    param_1[2] = param_1[2] + 1;
    puVar7[7] = uVar20;
    uVar22 = 4;
    goto LAB_00c28554;
  case 5:
    pbVar11 = (byte *)*param_5;
    if (pbVar11 < (byte *)param_5[1]) {
      uVar24 = (ulong)*pbVar11;
      if ((char)*pbVar11 < '\0') goto LAB_00c29490;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      uVar24 = 0;
LAB_00c29490:
      uVar24 = FUN_00c0944c(param_5,uVar24);
      if ((long)uVar24 < 0) {
        return 0;
      }
    }
    uVar34 = (undefined4)uVar24;
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c2952c;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c2952c;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c2952c;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c2952c:
      lVar33 = *plVar6;
      if (lVar33 != 0) {
LAB_00c2967c:
        puVar7 = (undefined8 *)(lVar33 + 0x28);
        *(undefined8 *)(lVar33 + 0x38) = uVar20;
        goto LAB_00c29728;
      }
      lVar33 = tpidr_el0;
      plVar25 = *(long **)(lVar33 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar33 + 0x30) = DAT_04859430;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
      *(int *)(puVar9 + 4) = param_2;
      puVar7 = puVar9 + 5;
      *puVar7 = CONCAT44(local_88,local_90._4_4_);
      puVar9[6] = CONCAT44(local_80,uStack_84);
      puVar9[7] = CONCAT44(local_78,uStack_7c);
      puVar9[2] = plVar31;
      *puVar9 = 0;
      puVar9[1] = 0;
      *plVar6 = (long)puVar9;
      if (*(long *)*param_1 == 0) {
        puVar12 = puVar9;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar12 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar12);
      param_1[2] = param_1[2] + 1;
      uVar22 = 5;
      puVar9[7] = uVar20;
LAB_00c29724:
      *(undefined2 *)(puVar9 + 6) = uVar22;
LAB_00c29728:
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xf0;
      *(undefined4 *)puVar7 = uVar34;
      return 1;
    }
    uVar19 = param_4[2];
    uVar20 = 5;
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar24 = uVar24 & 0xffffffff;
    goto LAB_00c294c4;
  case 6:
    puVar14 = (ulong *)*param_5;
    lVar33 = param_5[1] - (long)puVar14;
    if ((int)(uint)lVar33 < 8) {
      if ((uint)lVar33 < 8) {
        iVar5 = 8;
        do {
          iVar32 = (int)lVar33;
          memcpy(__dest_00,puVar14,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          puVar14 = (ulong *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)puVar14;
          __dest_00 = (undefined8 *)((long)__dest_00 + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(__dest_00,puVar14,(long)iVar5);
        puVar28 = (ulong *)(*param_5 + (long)iVar5);
      }
      else {
        puVar28 = puVar14 + 1;
        puVar17 = puVar14;
      }
      *param_5 = (ulong)puVar28;
      uVar24 = *puVar17;
    }
    else {
      uVar24 = *puVar14;
      *param_5 = (ulong)(puVar14 + 1);
    }
    if (param_4[1] != '\0') {
      uVar19 = param_4[2];
      uVar21 = *(undefined8 *)(param_4 + 0x18);
      uVar20 = 6;
      goto LAB_00c278c4;
    }
    uVar20 = *(undefined8 *)(param_4 + 0x18);
    uStack_7c = 0;
    local_78 = 0;
    uStack_84 = 0;
    local_80 = 0;
    local_90._4_4_ = 0;
    local_88 = 0;
    plVar6 = param_1 + 1;
    plVar31 = (long *)*plVar6;
    if (plVar31 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c2809c;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c2809c;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c2809c;
        }
        plVar31 = plVar25;
      } while( true );
    }
    plVar31 = plVar6;
LAB_00c2809c:
    lVar33 = *plVar6;
    if (lVar33 != 0) goto LAB_00c28248;
    lVar33 = tpidr_el0;
    plVar25 = *(long **)(lVar33 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar25 = DAT_04859430;
      *(long **)(lVar33 + 0x30) = DAT_04859430;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
    *(int *)(puVar7 + 4) = param_2;
    puVar17 = puVar7 + 5;
    *puVar17 = CONCAT44(local_88,local_90._4_4_);
    puVar7[6] = CONCAT44(local_80,uStack_84);
    puVar7[7] = CONCAT44(local_78,uStack_7c);
    puVar7[2] = plVar31;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar6 = (long)puVar7;
    if (*(long *)*param_1 == 0) {
      puVar9 = puVar7;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar9 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar9);
    param_1[2] = param_1[2] + 1;
    puVar7[7] = uVar20;
    uVar22 = 6;
    goto LAB_00c28554;
  case 7:
    puVar13 = (uint *)*param_5;
    lVar33 = param_5[1] - (long)puVar13;
    if ((int)(uint)lVar33 < 4) {
      if ((uint)lVar33 < 4) {
        iVar5 = 4;
        do {
          iVar32 = (int)lVar33;
          memcpy(__dest_01,puVar13,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          puVar13 = (uint *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)puVar13;
          __dest_01 = (undefined8 *)((long)__dest_01 + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(__dest_01,puVar13,(long)iVar5);
        puVar29 = (uint *)(*param_5 + (long)iVar5);
      }
      else {
        puVar29 = puVar13 + 1;
        puVar18 = puVar13;
      }
      *param_5 = (ulong)puVar29;
      uVar4 = *puVar18;
    }
    else {
      uVar4 = *puVar13;
      *param_5 = (ulong)(puVar13 + 1);
    }
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c28124;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c28124;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c28124;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c28124:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar7 + 4) = param_2;
        puVar18 = (uint *)(puVar7 + 5);
        *(ulong *)puVar18 = CONCAT44(local_88,local_90._4_4_);
        puVar7[6] = CONCAT44(local_80,uStack_84);
        puVar7[7] = CONCAT44(local_78,uStack_7c);
        puVar7[2] = plVar31;
        *puVar7 = 0;
        puVar7[1] = 0;
        *plVar6 = (long)puVar7;
        if (*(long *)*param_1 == 0) {
          puVar9 = puVar7;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar9 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar9);
        param_1[2] = param_1[2] + 1;
        uVar22 = 7;
        puVar7[7] = uVar20;
LAB_00c284f8:
        *(undefined2 *)(puVar7 + 6) = uVar22;
        goto LAB_00c284fc;
      }
LAB_00c2812c:
      puVar18 = (uint *)(lVar33 + 0x28);
      *(undefined8 *)(lVar33 + 0x38) = uVar20;
LAB_00c284fc:
      *(byte *)((long)puVar18 + 10) = *(byte *)((long)puVar18 + 10) & 0xf0;
      *puVar18 = uVar4;
      return 1;
    }
    uVar19 = param_4[2];
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar20 = 7;
    uVar24 = (ulong)uVar4;
    goto LAB_00c2960c;
  case 8:
    pbVar11 = (byte *)*param_5;
    if ((pbVar11 < (byte *)param_5[1]) && (-1 < (char)*pbVar11)) {
      uVar24 = (ulong)*pbVar11;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      auVar35 = FUN_00c09268(param_5);
      uVar24 = auVar35._0_8_;
      if ((auVar35._8_8_ & 1) == 0) {
        return 0;
      }
    }
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c282d4;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c282d4;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c282d4;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c282d4:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar9 + 4) = param_2;
        puVar7 = puVar9 + 5;
        *puVar7 = CONCAT44(local_88,local_90._4_4_);
        puVar9[6] = CONCAT44(local_80,uStack_84);
        puVar9[7] = CONCAT44(local_78,uStack_7c);
        puVar9[2] = plVar31;
        *puVar9 = 0;
        puVar9[1] = 0;
        *plVar6 = (long)puVar9;
        if (*(long *)*param_1 == 0) {
          puVar12 = puVar9;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar12 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar12);
        param_1[2] = param_1[2] + 1;
        puVar9[7] = uVar20;
        *(undefined2 *)(puVar9 + 6) = 8;
      }
      else {
        puVar7 = (undefined8 *)(lVar33 + 0x28);
        *(undefined8 *)(lVar33 + 0x38) = uVar20;
      }
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xf0;
      *(bool *)puVar7 = uVar24 != 0;
    }
    else {
      FUN_00c22820(param_1,param_2,8,param_4[2],uVar24 != 0,*(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 9:
    uVar20 = 9;
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    if (param_4[1] != '\0') goto LAB_00c275fc;
LAB_00c2784c:
    uVar20 = FUN_00c23734();
    goto LAB_00c27850;
  case 10:
    if (param_4[1] == '\0') {
      plVar6 = (long *)FUN_00c23f88(param_1,param_2,10,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
    }
    else {
      plVar6 = (long *)FUN_00c24650();
    }
    uVar24 = param_5[7];
    *(int *)(param_5 + 7) = (int)uVar24 + -1;
    if ((int)uVar24 < 1) {
      return 0;
    }
    uVar24 = (**(code **)(*plVar6 + 0x58))(plVar6,param_5);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
    if ((int)param_5[7] < *(int *)((long)param_5 + 0x3c)) {
      *(int *)(param_5 + 7) = (int)param_5[7] + 1;
    }
    if ((uint)param_5[4] == (param_2 << 3 | 4U)) {
      return 1;
    }
    return 0;
  case 0xb:
    if (param_4[1] == '\0') {
      plVar6 = (long *)FUN_00c23f88(param_1,param_2,0xb,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
    }
    else {
      plVar6 = (long *)FUN_00c24650();
    }
    pbVar11 = (byte *)*param_5;
    pbVar26 = (byte *)param_5[1];
    if ((pbVar11 < pbVar26) && (-1 < (char)*pbVar11)) {
      pbVar30 = pbVar11 + 1;
      uVar4 = (uint)*pbVar11;
      *param_5 = (ulong)pbVar30;
    }
    else {
      uVar4 = FUN_00c0954c(param_5);
      if ((int)uVar4 < 0) {
        return 0;
      }
      pbVar30 = (byte *)*param_5;
      pbVar26 = (byte *)param_5[1];
    }
    iVar10 = (int)param_5[3];
    iVar1 = (int)param_5[5];
    iVar2 = *(int *)((long)param_5 + 0x2c);
    param_5[1] = (ulong)(pbVar26 + iVar2);
    iVar5 = (iVar10 - iVar2) + ((int)pbVar30 - (int)pbVar26);
    iVar32 = 0x7fffffff;
    if ((int)uVar4 <= 0x7fffffff - iVar5) {
      iVar32 = iVar5 + uVar4;
    }
    iVar5 = iVar1;
    if (iVar32 <= iVar1) {
      iVar5 = iVar32;
    }
    *(int *)(param_5 + 5) = iVar5;
    iVar32 = (int)param_5[6];
    if (iVar5 <= (int)param_5[6]) {
      iVar32 = iVar5;
    }
    iVar5 = iVar10 - iVar32;
    if (iVar5 == 0 || iVar10 < iVar32) {
      *(undefined4 *)((long)param_5 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_5 + 0x2c) = iVar5;
      param_5[1] = (long)(pbVar26 + iVar2) - (long)iVar5;
    }
    uVar24 = param_5[7];
    *(int *)(param_5 + 7) = (int)uVar24 + -1;
    if ((int)uVar24 < 1) {
      return 0;
    }
    uVar24 = (**(code **)(*plVar6 + 0x58))(plVar6,param_5);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
    uVar24 = param_5[1] + (long)*(int *)((long)param_5 + 0x2c);
    iVar5 = (int)param_5[6];
    if (iVar1 <= (int)param_5[6]) {
      iVar5 = iVar1;
    }
    cVar3 = *(char *)((long)param_5 + 0x24);
    *(int *)(param_5 + 5) = iVar1;
    param_5[1] = uVar24;
    iVar32 = (int)param_5[3] - iVar5;
    if (iVar32 == 0 || (int)param_5[3] < iVar5) {
      *(undefined4 *)((long)param_5 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_5 + 0x2c) = iVar32;
      param_5[1] = uVar24 - (long)iVar32;
    }
    *(undefined1 *)((long)param_5 + 0x24) = 0;
    *(int *)(param_5 + 7) = (int)param_5[7] + 1;
    if (cVar3 == '\0') {
      return 0;
    }
    return 1;
  case 0xc:
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar20 = 0xc;
    if (param_4[1] == '\0') goto LAB_00c2784c;
LAB_00c275fc:
    uVar20 = FUN_00c23b88(param_1,param_2,uVar20,uVar21);
LAB_00c27850:
    uVar24 = FUN_00c0d824(param_5,uVar20);
    if ((uVar24 & 1) == 0) {
      return 0;
    }
    break;
  case 0xd:
    pbVar11 = (byte *)*param_5;
    if (pbVar11 < (byte *)param_5[1]) {
      uVar24 = (ulong)*pbVar11;
      if ((char)*pbVar11 < '\0') goto LAB_00c295d8;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      uVar24 = 0;
LAB_00c295d8:
      uVar24 = FUN_00c0944c(param_5,uVar24);
      if ((long)uVar24 < 0) {
        return 0;
      }
    }
    uVar34 = (undefined4)uVar24;
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c29674;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c29674;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c29674;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c29674:
      lVar33 = *plVar6;
      if (lVar33 != 0) goto LAB_00c2967c;
      lVar33 = tpidr_el0;
      plVar25 = *(long **)(lVar33 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar33 + 0x30) = DAT_04859430;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
      *(int *)(puVar9 + 4) = param_2;
      puVar7 = puVar9 + 5;
      *puVar7 = CONCAT44(local_88,local_90._4_4_);
      puVar9[6] = CONCAT44(local_80,uStack_84);
      puVar9[7] = CONCAT44(local_78,uStack_7c);
      puVar9[2] = plVar31;
      *puVar9 = 0;
      puVar9[1] = 0;
      *plVar6 = (long)puVar9;
      if (*(long *)*param_1 == 0) {
        puVar12 = puVar9;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar12 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar12);
      param_1[2] = param_1[2] + 1;
      puVar9[7] = uVar20;
      uVar22 = 0xd;
      goto LAB_00c29724;
    }
    uVar19 = param_4[2];
    uVar20 = 0xd;
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar24 = uVar24 & 0xffffffff;
LAB_00c2960c:
    FUN_00c210bc(param_1,param_2,uVar20,uVar19,uVar24,uVar21);
    break;
  case 0xe:
    pbVar11 = (byte *)*param_5;
    if (pbVar11 < (byte *)param_5[1]) {
      uVar24 = (ulong)*pbVar11;
      if ((char)*pbVar11 < '\0') goto LAB_00c29780;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      uVar24 = 0;
LAB_00c29780:
      uVar24 = FUN_00c0944c(param_5,uVar24);
      if ((long)uVar24 < 0) {
        return 0;
      }
    }
    uVar8 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar24 & 0xffffffff);
    if ((uVar8 & 1) == 0) {
      (**(code **)(*param_6 + 0x20))(param_6,param_2,uVar24 & 0xffffffff);
    }
    else if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c29848;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c29848;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c29848;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c29848:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar9 + 4) = param_2;
        puVar7 = puVar9 + 5;
        *puVar7 = CONCAT44(local_88,local_90._4_4_);
        puVar9[6] = CONCAT44(local_80,uStack_84);
        puVar9[7] = CONCAT44(local_78,uStack_7c);
        puVar9[2] = plVar31;
        *puVar9 = 0;
        puVar9[1] = 0;
        *plVar6 = (long)puVar9;
        if (*(long *)*param_1 == 0) {
          puVar12 = puVar9;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar12 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar12);
        param_1[2] = param_1[2] + 1;
        puVar9[7] = uVar20;
        *(undefined2 *)(puVar9 + 6) = 0xe;
      }
      else {
        puVar7 = (undefined8 *)(lVar33 + 0x28);
        *(undefined8 *)(lVar33 + 0x38) = uVar20;
      }
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xf0;
      *(int *)puVar7 = (int)uVar24;
    }
    else {
      FUN_00c23438(param_1,param_2,0xe,param_4[2],uVar24 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
    }
    break;
  case 0xf:
    puVar18 = (uint *)*param_5;
    lVar33 = param_5[1] - (long)puVar18;
    if ((int)(uint)lVar33 < 4) {
      if ((uint)lVar33 < 4) {
        iVar5 = 4;
        do {
          iVar32 = (int)lVar33;
          memcpy(puVar7,puVar18,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          puVar18 = (uint *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)puVar18;
          puVar7 = (undefined8 *)((long)puVar7 + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(puVar7,puVar18,(long)iVar5);
        puVar29 = (uint *)(*param_5 + (long)iVar5);
      }
      else {
        puVar29 = puVar18 + 1;
        puVar13 = puVar18;
      }
      *param_5 = (ulong)puVar29;
      uVar4 = *puVar13;
    }
    else {
      uVar4 = *puVar18;
      *param_5 = (ulong)(puVar18 + 1);
    }
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 != (long *)0x0) {
        plVar6 = param_1 + 1;
        do {
          if (param_2 < (int)plVar31[4]) {
            plVar25 = (long *)*plVar31;
            plVar6 = plVar31;
            if (plVar25 == (long *)0x0) {
              goto LAB_00c27e64;
            }
          }
          else {
            if (param_2 <= (int)plVar31[4]) goto LAB_00c27e64;
            plVar6 = plVar31 + 1;
            plVar25 = (long *)*plVar6;
            if (plVar25 == (long *)0x0) goto LAB_00c27e64;
          }
          plVar31 = plVar25;
        } while( true );
      }
      plVar31 = plVar6;
LAB_00c27e64:
      lVar33 = *plVar6;
      if (lVar33 == 0) {
        lVar33 = tpidr_el0;
        plVar25 = *(long **)(lVar33 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar33 + 0x30) = DAT_04859430;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
        *(int *)(puVar7 + 4) = param_2;
        puVar18 = (uint *)(puVar7 + 5);
        *(ulong *)puVar18 = CONCAT44(local_88,local_90._4_4_);
        puVar7[6] = CONCAT44(local_80,uStack_84);
        puVar7[7] = CONCAT44(local_78,uStack_7c);
        puVar7[2] = plVar31;
        *puVar7 = 0;
        puVar7[1] = 0;
        *plVar6 = (long)puVar7;
        if (*(long *)*param_1 == 0) {
          puVar9 = puVar7;
        }
        else {
          *param_1 = *(long *)*param_1;
          puVar9 = (undefined8 *)*plVar6;
        }
        FUN_010108e0(param_1[1],puVar9);
        param_1[2] = param_1[2] + 1;
        puVar7[7] = uVar20;
        uVar22 = 0xf;
        goto LAB_00c284f8;
      }
      goto LAB_00c2812c;
    }
    uVar19 = param_4[2];
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar20 = 0xf;
    uVar24 = (ulong)uVar4;
    goto LAB_00c294c4;
  case 0x10:
    puVar17 = (ulong *)*param_5;
    lVar33 = param_5[1] - (long)puVar17;
    if ((int)(uint)lVar33 < 8) {
      if ((uint)lVar33 < 8) {
        iVar5 = 8;
        do {
          iVar32 = (int)lVar33;
          memcpy(puVar9,puVar17,(long)iVar32);
          *param_5 = *param_5 + (long)iVar32;
          uVar24 = FUN_00c08eb0(param_5);
          if ((uVar24 & 1) == 0) {
            return 0;
          }
          puVar17 = (ulong *)*param_5;
          iVar5 = iVar5 - iVar32;
          lVar33 = param_5[1] - (long)puVar17;
          puVar9 = (undefined8 *)((long)puVar9 + (long)iVar32);
        } while ((int)lVar33 < iVar5);
        memcpy(puVar9,puVar17,(long)iVar5);
        puVar28 = (ulong *)(*param_5 + (long)iVar5);
      }
      else {
        puVar28 = puVar17 + 1;
        puVar14 = puVar17;
      }
      *param_5 = (ulong)puVar28;
      uVar24 = *puVar14;
    }
    else {
      uVar24 = *puVar17;
      *param_5 = (ulong)(puVar17 + 1);
    }
    if (param_4[1] != '\0') {
      uVar19 = param_4[2];
      uVar21 = *(undefined8 *)(param_4 + 0x18);
      uVar20 = 0x10;
      goto LAB_00c27944;
    }
    uVar20 = *(undefined8 *)(param_4 + 0x18);
    uStack_7c = 0;
    local_78 = 0;
    uStack_84 = 0;
    local_80 = 0;
    local_90._4_4_ = 0;
    local_88 = 0;
    plVar6 = param_1 + 1;
    plVar31 = (long *)*plVar6;
    if (plVar31 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c27eec;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c27eec;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c27eec;
        }
        plVar31 = plVar25;
      } while( true );
    }
    plVar31 = plVar6;
LAB_00c27eec:
    lVar33 = *plVar6;
    if (lVar33 != 0) goto LAB_00c28248;
    lVar33 = tpidr_el0;
    plVar25 = *(long **)(lVar33 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar25 = DAT_04859430;
      *(long **)(lVar33 + 0x30) = DAT_04859430;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
    *(int *)(puVar7 + 4) = param_2;
    puVar17 = puVar7 + 5;
    *puVar17 = CONCAT44(local_88,local_90._4_4_);
    puVar7[6] = CONCAT44(local_80,uStack_84);
    puVar7[7] = CONCAT44(local_78,uStack_7c);
    puVar7[2] = plVar31;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar6 = (long)puVar7;
    if (*(long *)*param_1 == 0) {
      puVar9 = puVar7;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar9 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_1[1],puVar9);
    param_1[2] = param_1[2] + 1;
    puVar7[7] = uVar20;
    uVar22 = 0x10;
LAB_00c28554:
    *(undefined2 *)(puVar7 + 6) = uVar22;
LAB_00c28558:
    *(byte *)((long)puVar17 + 10) = *(byte *)((long)puVar17 + 10) & 0xf0;
    *puVar17 = uVar24;
    break;
  case 0x11:
    pbVar11 = (byte *)*param_5;
    if (pbVar11 < (byte *)param_5[1]) {
      uVar24 = (ulong)*pbVar11;
      if ((char)*pbVar11 < '\0') goto LAB_00c29314;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      uVar24 = 0;
LAB_00c29314:
      uVar24 = FUN_00c0944c(param_5,uVar24);
      if ((long)uVar24 < 0) {
        return 0;
      }
    }
    uVar4 = -((uint)uVar24 & 1) ^ (uint)uVar24 >> 1;
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 == (long *)0x0) {
        plVar31 = plVar6;
LAB_00c293b4:
        lVar33 = *plVar6;
        if (lVar33 == 0) {
          lVar33 = tpidr_el0;
          plVar25 = *(long **)(lVar33 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar33 + 0x30) = DAT_04859430;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
          *(int *)(puVar7 + 4) = param_2;
          puVar18 = (uint *)(puVar7 + 5);
          *(ulong *)puVar18 = CONCAT44(local_88,local_90._4_4_);
          puVar7[6] = CONCAT44(local_80,uStack_84);
          puVar7[7] = CONCAT44(local_78,uStack_7c);
          puVar7[2] = plVar31;
          *puVar7 = 0;
          puVar7[1] = 0;
          *plVar6 = (long)puVar7;
          if (*(long *)*param_1 == 0) {
            puVar9 = puVar7;
          }
          else {
            *param_1 = *(long *)*param_1;
            puVar9 = (undefined8 *)*plVar6;
          }
          FUN_010108e0(param_1[1],puVar9);
          param_1[2] = param_1[2] + 1;
          puVar7[7] = uVar20;
          *(undefined2 *)(puVar7 + 6) = 0x11;
        }
        else {
          puVar18 = (uint *)(lVar33 + 0x28);
          *(undefined8 *)(lVar33 + 0x38) = uVar20;
        }
        *(byte *)((long)puVar18 + 10) = *(byte *)((long)puVar18 + 10) & 0xf0;
        *puVar18 = uVar4;
        return 1;
      }
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c293b4;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c293b4;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c293b4;
        }
        plVar31 = plVar25;
      } while( true );
    }
    uVar19 = param_4[2];
    uVar20 = 0x11;
    uVar21 = *(undefined8 *)(param_4 + 0x18);
    uVar24 = (ulong)uVar4;
LAB_00c294c4:
    FUN_00c2057c(param_1,param_2,uVar20,uVar19,uVar24,uVar21);
    break;
  case 0x12:
    pbVar11 = (byte *)*param_5;
    if ((pbVar11 < (byte *)param_5[1]) && (-1 < (char)*pbVar11)) {
      uVar24 = (ulong)*pbVar11;
      *param_5 = (ulong)(pbVar11 + 1);
    }
    else {
      auVar35 = FUN_00c09268(param_5);
      uVar24 = auVar35._0_8_;
      if ((auVar35._8_8_ & 1) == 0) {
        return 0;
      }
    }
    uVar24 = -(uVar24 & 1) ^ uVar24 >> 1;
    if (param_4[1] == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x18);
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      local_80 = 0;
      local_90._4_4_ = 0;
      local_88 = 0;
      plVar6 = param_1 + 1;
      plVar31 = (long *)*plVar6;
      if (plVar31 == (long *)0x0) {
        plVar31 = plVar6;
LAB_00c2836c:
        lVar33 = *plVar6;
        if (lVar33 == 0) {
          lVar33 = tpidr_el0;
          plVar25 = *(long **)(lVar33 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar33 + 0x30) = DAT_04859430;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
          *(int *)(puVar7 + 4) = param_2;
          puVar17 = puVar7 + 5;
          *puVar17 = CONCAT44(local_88,local_90._4_4_);
          puVar7[6] = CONCAT44(local_80,uStack_84);
          puVar7[7] = CONCAT44(local_78,uStack_7c);
          puVar7[2] = plVar31;
          *puVar7 = 0;
          puVar7[1] = 0;
          *plVar6 = (long)puVar7;
          if (*(long *)*param_1 == 0) {
            puVar9 = puVar7;
          }
          else {
            *param_1 = *(long *)*param_1;
            puVar9 = (undefined8 *)*plVar6;
          }
          FUN_010108e0(param_1[1],puVar9);
          param_1[2] = param_1[2] + 1;
          puVar7[7] = uVar20;
          *(undefined2 *)(puVar7 + 6) = 0x12;
        }
        else {
          puVar17 = (ulong *)(lVar33 + 0x28);
          *(undefined8 *)(lVar33 + 0x38) = uVar20;
        }
        *(byte *)((long)puVar17 + 10) = *(byte *)((long)puVar17 + 10) & 0xf0;
        *puVar17 = uVar24;
        return 1;
      }
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar31[4]) {
          plVar25 = (long *)*plVar31;
          plVar6 = plVar31;
          if (plVar25 == (long *)0x0) {
            goto LAB_00c2836c;
          }
        }
        else {
          if (param_2 <= (int)plVar31[4]) goto LAB_00c2836c;
          plVar6 = plVar31 + 1;
          plVar25 = (long *)*plVar6;
          if (plVar25 == (long *)0x0) goto LAB_00c2836c;
        }
        plVar31 = plVar25;
      } while( true );
    }
    uVar19 = param_4[2];
    uVar20 = 0x12;
    uVar21 = *(undefined8 *)(param_4 + 0x18);
LAB_00c27944:
    FUN_00c20b1c(param_1,param_2,uVar20,uVar19,uVar24,uVar21);
  }
  return 1;
}


