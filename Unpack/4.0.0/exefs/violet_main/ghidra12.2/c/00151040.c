/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00151040; name: FUN_00151040
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00151040(ulong *param_1,uint *param_2,long param_3,long param_4,ulong param_5,ulong param_6,
            void *param_7,long param_8,int param_9,int param_10,int param_11,uint param_12)

{
  void *pvVar1;
  void *__dest;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  undefined1 uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  size_t sVar24;
  undefined8 in_stack_ffffffffffffff10;
  char *pcVar25;
  undefined4 uVar26;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  long local_70;
  int local_68;
  
  uVar26 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  FUN_0015cf00(param_2,0x10);
  iVar7 = (int)param_1[5] + 1;
  *(int *)(param_1 + 5) = iVar7;
  if (iVar7 < 1000) {
    uVar19 = param_5 - param_4;
    uVar9 = *param_1;
    uVar5 = param_1[1];
    if (0x3ffff < (long)uVar19) {
      uVar19 = 0x40000;
    }
    if ((long)param_6 <= (long)uVar19) {
      uVar19 = param_6;
    }
    uVar20 = uVar9;
    if (uVar5 != 0x3fffffffffffffff) {
      uVar20 = uVar9 & 0x3ffff;
      uVar4 = (long)(int)uVar19;
      if ((long)(0x40000 - uVar20) <= (long)(int)uVar19) {
        uVar4 = 0x40000 - uVar20;
      }
      uVar19 = uVar4;
      if ((long)(uVar5 - uVar9) <= (long)uVar4) {
        uVar19 = uVar5 - uVar9;
      }
    }
    if (param_8 == 0) {
      return 1;
    }
    uVar14 = (uint)uVar19;
    if (uVar14 == 0) {
      return 1;
    }
    pvVar8 = param_7;
    if ((uVar20 == 0) && (param_1[2] != uVar9)) {
      if (param_8 < 2) {
        return 1;
      }
      param_1[2] = uVar9;
      pvVar8 = (void *)FUN_0015c660(param_1 + 6,param_7);
      if (pvVar8 == (void *)0x0) {
        FUN_0015c3d0();
        pcVar17 = *(code **)PTR_PTR_047cb868;
        if (pcVar17 == (code *)0x0) goto LAB_0015185c;
        pcVar12 = "OODLE ERROR : LZ corruption : invalid header..\n";
        uVar10 = 0x2d8;
      }
      else {
        uVar15 = *(uint *)(&DAT_03cb6698 + (long)*(int *)((long)param_1 + 0x34) * 4);
        if ((param_9 == 1) && ((0x3f18U >> (ulong)(uVar15 & 0x1f) & 1) == 0)) {
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0015185c;
          pcVar12 = 
          "OODLE ERROR : Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n";
          uVar10 = 0x2e0;
        }
        else {
          uVar16 = 0x4e7 >> (ulong)(uVar15 & 0x1f);
          if ((uVar16 & 1) == 0) {
            iVar7 = 0xa8;
          }
          else if (*(code **)(PTR_DAT_047cb870 + 0x20) == (code *)0x0) {
            iVar7 = -1;
          }
          else {
            iVar7 = (**(code **)(PTR_DAT_047cb870 + 0x20))(uVar15);
            iVar7 = iVar7 + 0xa8;
          }
          if ((0x3b00U >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
            uVar21 = uVar14;
            if (0x1ffff < (int)uVar14) {
              uVar21 = 0x20000;
            }
            uVar3 = 0x20000;
            if (0xffffffff < (long)(uVar19 << 0x20)) {
              uVar3 = uVar21;
            }
            uVar21 = 0;
            if ((uVar15 | 2) != 0xb) {
              uVar21 = uVar3;
            }
            iVar7 = uVar21 + uVar3 * 2 + iVar7 + 0xd020;
          }
          if (iVar7 <= *(int *)((long)param_1 + 0x4c)) {
            if ((uVar16 & 1) != 0) {
              if (*(code **)(PTR_DAT_047cb870 + 0x30) == (code *)0x0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                pcVar12 = "OODLE ERROR : Legacy LZ VTable not installed";
                uVar10 = 0x2f3;
                goto LAB_00151854;
              }
              (**(code **)(PTR_DAT_047cb870 + 0x30))(param_1 + 0xc);
            }
            if (((int)param_1[8] != 0) && (param_1[3] = *param_1, (uVar16 & 1) != 0)) {
              if (*(code **)(PTR_DAT_047cb870 + 0x38) == (code *)0x0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                pcVar12 = "OODLE ERROR : Legacy LZ VTable not installed";
                uVar10 = 0x307;
                goto LAB_00151854;
              }
              (**(code **)(PTR_DAT_047cb870 + 0x38))(param_1 + 0xc);
            }
            if ((2 < param_11) && (*(code **)PTR_PTR_047cb868 != (code *)0x0)) {
              pcVar12 = "";
              if ((int)param_1[8] != 0) {
                pcVar12 = "reset";
              }
              pcVar25 = "";
              if (*(int *)((long)param_1 + 0x3c) != 0) {
                pcVar25 = "memcpy";
              }
              (**(code **)PTR_PTR_047cb868)
                        (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x315,
                         "CHUNK header @ %ld  , compressor %d=%s %s %s\n",param_1[2],uVar15,
                         (&PTR_DAT_04483f98)[(int)uVar15],pcVar12,pcVar25);
              uVar26 = (undefined4)((ulong)pcVar25 >> 0x20);
            }
            goto LAB_00151124;
          }
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0015185c;
          pcVar12 = 
          "OODLE ERROR : Heterogenous compressor file with insufficient decoder memory size!\n";
          uVar10 = 0x2e9;
        }
      }
    }
    else {
LAB_00151124:
      iVar7 = *(int *)((long)param_1 + 0x34);
      uVar15 = *(uint *)(&DAT_03cb6698 + (long)iVar7 * 4);
      if ((param_1[2] == 0) && ((int)param_1[8] == 0)) {
        uVar16 = (int)param_5 - ((uint)(param_5 >> 1) & 0x55555555);
        uVar16 = (uVar16 & 0x33333333) + (uVar16 >> 2 & 0x33333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if ((1 < uVar16) && ((long)uVar5 <= (long)param_5)) goto LAB_0015114c;
LAB_001518c4:
        if (uVar16 < 2) {
          if ((0x3b00U >> (ulong)(uVar15 & 0x1f) & 1) == 0) {
            if (iVar7 == 2) {
              if (0xffff < (long)param_5) goto LAB_00151aec;
              FUN_0015c3d0();
              pcVar17 = *(code **)PTR_PTR_047cb868;
              if (pcVar17 == (code *)0x0) goto LAB_0015185c;
              pcVar12 = "OODLE ERROR : you didn\'t give me enough window!\n";
              uVar10 = 0x353;
            }
            else {
              if (*(code **)(PTR_DAT_047cb870 + 0x40) != (code *)0x0) {
                uVar9 = (**(code **)(PTR_DAT_047cb870 + 0x40))(uVar15,param_5);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
LAB_00151aec:
                uVar18 = 1;
                goto LAB_00151154;
              }
              FUN_0015c3d0();
              pcVar17 = *(code **)PTR_PTR_047cb868;
              if (pcVar17 == (code *)0x0) goto LAB_0015185c;
              pcVar12 = "OODLE ERROR : Legacy LZ VTable not installed";
              uVar10 = 0x35b;
            }
          }
          else {
            FUN_0015c3d0();
            pcVar17 = *(code **)PTR_PTR_047cb868;
            if (pcVar17 == (code *)0x0) goto LAB_0015185c;
            pcVar12 = "OODLE ERROR : only legacy compressors do sliding window!\n";
            uVar10 = 0x34c;
          }
        }
        else {
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0015185c;
          pcVar12 = "OODLE ERROR : sliding window must be pow2!\n";
          uVar10 = 0x340;
        }
      }
      else {
        if ((long)param_5 < (long)uVar5) {
          uVar16 = (int)param_5 - ((uint)(param_5 >> 1) & 0x55555555);
          uVar16 = (uVar16 & 0x33333333) + (uVar16 >> 2 & 0x33333333);
          uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          goto LAB_001518c4;
        }
LAB_0015114c:
        uVar18 = 0;
LAB_00151154:
        __dest = (void *)(param_3 + param_4);
        param_8 = (long)param_7 + param_8;
        iVar23 = (int)param_7;
        if (*(int *)((long)param_1 + 0x3c) != 0) {
          sVar24 = (size_t)(int)uVar14;
          param_2[2] = uVar14;
          param_2[3] = uVar14;
          if ((long)sVar24 <= param_8 - (long)pvVar8) {
            if ((2 < param_11) && (*(code **)PTR_PTR_047cb868 != (code *)0x0)) {
              (**(code **)PTR_PTR_047cb868)
                        (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x389,
                         " decoder memcpy %d\n",uVar19 & 0xffffffff);
            }
            if ((param_12 & 1) != 0) {
              memmove(__dest,pvVar8,sVar24);
            }
            *(undefined4 *)(param_1 + 5) = 0;
            *param_1 = *param_1 + sVar24;
            *param_2 = uVar14;
            param_2[1] = ((int)pvVar8 + uVar14) - iVar23;
            if (*(code **)(PTR_DAT_047cb870 + 0x38) == (code *)0x0) {
              return 1;
            }
            (**(code **)(PTR_DAT_047cb870 + 0x38))(param_1 + 0xc);
            return 1;
          }
          goto LAB_0015148c;
        }
        if ((iVar7 != 6) && (iVar7 != 0xc)) {
          if (iVar7 != 10 && 0x3fff < (int)uVar14) {
            uVar14 = 0x4000;
          }
          uVar19 = (ulong)uVar14;
        }
        uVar14 = (uint)uVar19;
        if ((iVar7 == 0xc) || (iVar7 == 6)) {
          uVar11 = *(undefined4 *)((long)param_1 + 0x44);
LAB_00151254:
          iVar6 = FUN_0015cd50(pvVar8,param_8,&local_80,uVar11,uVar19 & 0xffffffff);
        }
        else {
          uVar11 = *(undefined4 *)((long)param_1 + 0x44);
          if (iVar7 == 10) goto LAB_00151254;
          iVar6 = FUN_0015cab0(pvVar8,param_8,&local_80,uVar11,uVar19 & 0xffffffff);
        }
        if (iVar6 < 1) {
          if (0xf < param_8 - (long)pvVar8) {
            return 0;
          }
LAB_0015148c:
          *param_2 = 0;
          param_2[1] = (int)pvVar8 - iVar23;
          return 1;
        }
        param_2[2] = uVar14;
        param_2[3] = local_80 + iVar6;
        if ((2 < param_11) && (*(code **)PTR_PTR_047cb868 != (code *)0x0)) {
          (**(code **)PTR_PTR_047cb868)
                    (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x3ff,
                     "QH : %d , %d , %08X\n",uVar19 & 0xffffffff,local_80,local_7c);
        }
        if (uVar14 < local_80) {
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0015185c;
          pcVar12 = "OODLE ERROR : LZ corruption : qh.compLen > qh_rawLen!\n";
          uVar10 = 0x40f;
          goto LAB_00151854;
        }
        pvVar1 = (void *)((long)pvVar8 + (long)iVar6);
        lVar22 = (long)(int)local_80;
        if (param_8 - (long)pvVar1 < lVar22) goto LAB_0015148c;
        if ((((param_10 == 0) || ((int)local_80 < 1)) || (*(int *)((long)param_1 + 0x44) == 0)) ||
           (iVar6 = FUN_0015c990(pvVar1,lVar22), iVar6 == local_7c)) {
          uVar15 = 0x4e7 >> (ulong)(uVar15 & 0x1f);
          local_84 = 0;
          pvVar8 = pvVar1;
          if (local_68 != 0) {
            if ((uVar15 & 1) != 0) {
              if (*(code **)(PTR_DAT_047cb870 + 0x48) == (code *)0x0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                pcVar12 = "OODLE ERROR : Legacy LZ Vtable not installed";
                uVar10 = 0x445;
                goto LAB_00151854;
              }
              uVar19 = (**(code **)(PTR_DAT_047cb870 + 0x48))
                                 (iVar7,param_1 + 0xc,pvVar1,param_8,&local_84);
              if ((uVar19 & 1) == 0) {
                return 0;
              }
            }
            pvVar8 = (void *)((long)pvVar1 + (long)(int)local_84);
          }
          uVar11 = SUB84(pvVar8,0);
          if (local_80 == uVar14) {
            if ((param_12 & 1) != 0) {
              memmove(__dest,pvVar8,(long)(int)uVar14);
            }
            uVar19 = *param_1 + (long)(int)uVar14;
            *param_1 = uVar19;
            if ((long)uVar19 <= (long)param_1[1]) {
              uVar15 = (uVar11 + uVar14) - iVar23;
              goto LAB_001516c8;
            }
            FUN_0015c3d0();
            pcVar17 = *(code **)PTR_PTR_047cb868;
            if (pcVar17 == (code *)0x0) goto LAB_0015185c;
            pcVar12 = "OODLE ERROR : LZ corruption : overrun!\n";
            uVar10 = 0x475;
          }
          else {
            sVar24 = (size_t)(int)uVar14;
            uVar19 = *param_1;
            if (local_80 == local_84) {
              if ((long)param_1[1] < (long)(uVar19 + sVar24)) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                pcVar12 = "OODLE ERROR : LZ corruption : overrun!\n";
                uVar10 = 0x48d;
              }
              else if (local_78 == 0) {
                if (local_84 == 0) {
LAB_00151bd0:
                  if ((param_12 & 1) != 0) {
                    memset(__dest,local_7c,sVar24);
                  }
LAB_00151be4:
                  *(undefined4 *)(param_1 + 5) = 0;
                  *param_1 = *param_1 + sVar24;
                  *param_2 = uVar14;
                  param_2[1] = uVar11 - iVar23;
                  return 1;
                }
                if ((uVar15 & 1) == 0) {
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = 
                  "OODLE ERROR : LZ corruption : huffman->gotNumSymbols == 1 path is legacy only!\n"
                  ;
                  uVar10 = 0x4d9;
                }
                else {
                  if (*(code **)((long)PTR_DAT_047cb870 + 0x50) != (code *)0x0) {
                    local_7c = (**(code **)((long)PTR_DAT_047cb870 + 0x50))(param_1 + 0xc);
                    if (local_7c < 0) {
                      return 0;
                    }
                    goto LAB_00151bd0;
                  }
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : Legacy LZ Vtable not installed";
                  uVar10 = 0x4d0;
                }
              }
              else {
                if ((param_12 >> 1 & 1) == 0) goto LAB_00151be4;
                if (local_70 < 2) {
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : corruption : matchOff > 1\n";
                  uVar10 = 0x49c;
                }
                else {
                  if (local_70 <= (long)(uVar19 - param_1[3])) {
                    if (local_70 < (long)sVar24) {
                      FUN_0015c410(__dest,local_70,sVar24);
                    }
                    else {
                      memcpy(__dest,(void *)((long)__dest - local_70),sVar24);
                    }
                    goto LAB_00151be4;
                  }
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : LZ corruption : wholematch offset too large!\n";
                  uVar10 = 0x4a8;
                }
              }
            }
            else {
              lVar13 = uVar19 - param_1[3];
              lVar2 = (long)__dest + sVar24;
              switch(iVar7 - 2U >> 1 | iVar7 << 0x1f) {
              case 0:
                iVar7 = FUN_00157140(__dest,lVar2,pvVar8,param_8,&local_80,param_3,param_5,uVar18,
                                     (long)__dest - lVar13);
                break;
              default:
                if ((uVar15 & 1) == 0) {
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : LZ corruption : DecodeOneQ invalid decodeType!\n";
                  uVar10 = 0x530;
                }
                else {
                  if (*(code **)((long)PTR_DAT_047cb870 + 0x58) != (code *)0x0) {
                    iVar7 = (**(code **)((long)PTR_DAT_047cb870 + 0x58))
                                      (iVar7,param_1 + 0xc,__dest,lVar2,pvVar8,(long)pvVar1 + lVar22
                                       ,param_8,param_1 + 6,&local_80,param_3,param_5,uVar18,lVar13,
                                       0);
                    break;
                  }
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : Legacy LZ Vtable not installed";
                  uVar10 = 0x522;
                }
                goto LAB_00151854;
              case 2:
                iVar7 = FUN_00164db0(__dest,lVar2,pvVar8,local_80,param_8,lVar13,param_1[10],
                                     param_1[0xb],CONCAT44(uVar26,param_12));
                break;
              case 4:
                iVar7 = FUN_0018a8f0(__dest,lVar2,pvVar8,local_80,param_8,lVar13,param_1[10],
                                     param_1[0xb],CONCAT44(uVar26,param_12));
                break;
              case 5:
                iVar7 = FUN_001a7fc0(__dest,lVar2,pvVar8,local_80,param_8,lVar13,param_1[10],
                                     param_1[0xb],CONCAT44(uVar26,param_12));
              }
              if (iVar7 < 0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                pcVar12 = "OODLE ERROR : LZ corruption : DecodeOneQuantum fail!\n";
                uVar10 = 0x536;
              }
              else {
                uVar19 = *param_1;
                *param_1 = uVar19 + sVar24;
                if ((long)param_1[1] < (long)(uVar19 + sVar24)) {
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : LZ corruption : overrun!\n";
                  uVar10 = 0x544;
                }
                else {
                  if (local_84 + iVar7 == local_80) {
                    uVar15 = iVar7 + (uVar11 - iVar23);
LAB_001516c8:
                    *(undefined4 *)(param_1 + 5) = 0;
                    *param_2 = uVar14;
                    param_2[1] = uVar15;
                    return 1;
                  }
                  FUN_0015c3d0();
                  pcVar17 = *(code **)PTR_PTR_047cb868;
                  if (pcVar17 == (code *)0x0) goto LAB_0015185c;
                  pcVar12 = "OODLE ERROR : LZ corruption : not complen!\n";
                  uVar10 = 0x54b;
                }
              }
            }
          }
        }
        else {
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0015185c;
          pcVar12 = "OODLE ERROR : LZ corruption : crc check fail.\n";
          uVar10 = 0x435;
        }
      }
    }
  }
  else {
    FUN_0015c3d0();
    pcVar17 = *(code **)PTR_PTR_047cb868;
    if (pcVar17 == (code *)0x0) goto LAB_0015185c;
    pcVar12 = "OODLE ERROR : 1000 calls without progress!\n";
    uVar10 = 0x27b;
  }
LAB_00151854:
  (*pcVar17)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar10,pcVar12);
LAB_0015185c:
  FUN_0015c3f0();
  return 0;
}


