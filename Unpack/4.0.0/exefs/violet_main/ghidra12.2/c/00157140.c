/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00157140; name: FUN_00157140
 */


ulong FUN_00157140(undefined8 *param_1,undefined8 *param_2,ushort *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 *param_6,long param_7,int param_8,undefined8 param_9
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  size_t __n;
  ushort *puVar20;
  undefined1 auStack_7ffffffe [2147483518];
  ushort local_80 [16];
  
  if (param_8 == 0) {
    uVar13 = FUN_00157900(param_3,param_4,param_1,(long)param_2 - (long)param_1,param_9);
    return uVar13;
  }
  puVar1 = (undefined8 *)((long)param_6 + param_7);
  puVar20 = param_3;
  if (param_3 < param_4 + -0x10) goto LAB_001571dc;
LAB_001571b8:
  do {
    memcpy(local_80,param_3,(long)param_4 - (long)param_3);
    puVar20 = (ushort *)((long)puVar20 + ((long)local_80 - (long)param_3));
    param_4 = auStack_7ffffffe + 0x8000037e;
    param_3 = local_80;
LAB_001571dc:
    do {
      while( true ) {
        puVar10 = (ushort *)((long)param_3 + 1);
        bVar3 = (byte)*param_3;
        *param_1 = *(undefined8 *)puVar10;
        uVar17 = (ulong)(bVar3 >> 4);
        __n = (ulong)bVar3 & 0xf;
        uVar13 = uVar17 + 4;
        if ((bVar3 & 0x88) != 0) break;
        puVar16 = (undefined8 *)((long)param_1 + __n);
        param_1 = (undefined8 *)((long)puVar16 + uVar13);
        if (param_2 < param_1) {
          FUN_0015c3d0();
          pcVar14 = *(code **)PTR_PTR_047cb868;
          if (pcVar14 == (code *)0x0) goto LAB_001577f0;
          pcVar9 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
          uVar8 = 0x6c4;
          goto LAB_001577e8;
        }
        param_3 = (ushort *)((long)puVar10 + __n) + 1;
        puVar12 = (undefined8 *)((long)puVar16 - (ulong)*(ushort *)((long)puVar10 + __n));
        if (puVar12 < param_6) {
          puVar12 = (undefined8 *)((long)puVar12 + param_7);
          uVar13 = uVar13 & 3;
          lVar15 = (uVar13 - uVar17) + -4;
          do {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
            puVar18 = param_6;
            if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
              puVar18 = (undefined8 *)((long)puVar12 + 1);
            }
            *(undefined1 *)((long)puVar16 + 1) = *(undefined1 *)puVar18;
            puVar12 = param_6;
            if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
              puVar12 = (undefined8 *)((long)puVar18 + 1);
            }
            *(undefined1 *)((long)puVar16 + 2) = *(undefined1 *)puVar12;
            puVar18 = param_6;
            if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
              puVar18 = (undefined8 *)((long)puVar12 + 1);
            }
            *(undefined1 *)((long)puVar16 + 3) = *(undefined1 *)puVar18;
            puVar16 = (undefined8 *)((long)puVar16 + 4);
            puVar12 = param_6;
            if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
              puVar12 = (undefined8 *)((long)puVar18 + 1);
            }
            lVar15 = lVar15 + 4;
          } while (lVar15 != 0);
          if (uVar13 != 0) {
            uVar17 = 0;
            do {
              puVar18 = (undefined8 *)((long)puVar12 + 1);
              *(undefined1 *)((long)puVar16 + uVar17) = *(undefined1 *)puVar12;
              uVar17 = uVar17 + 1;
              puVar12 = param_6;
              if (puVar18 != puVar1) {
                puVar12 = puVar18;
              }
            } while (uVar13 != uVar17);
          }
        }
        else {
LAB_0015719c:
          *puVar16 = *puVar12;
          *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar12 + 1);
        }
LAB_001571ac:
        if (param_4 + -0x10 <= param_3) goto LAB_001571b8;
      }
      if (8 < __n) {
        if (__n == 0xf) {
          bVar5 = *(byte *)((long)param_3 + 1);
          if ((ulong)bVar5 < 0xc0) {
            puVar10 = param_3 + 1;
            __n = (ulong)bVar5 + 0xf;
          }
          else {
            puVar10 = (ushort *)((long)param_3 + 3);
            __n = ((ulong)((uint)bVar5 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_3[1];
          }
          puVar16 = (undefined8 *)((long)param_1 + __n);
          if (param_2 <= puVar16) {
            if (param_2 < puVar16) {
              FUN_0015c3d0();
              pcVar14 = *(code **)PTR_PTR_047cb868;
              if (pcVar14 == (code *)0x0) goto LAB_001577f0;
              pcVar9 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
              uVar8 = 0x6ee;
              goto LAB_001577e8;
            }
            memmove(param_1,puVar10,__n);
            iVar7 = (int)puVar10 + (int)__n;
            goto joined_r0x001578c8;
          }
          lVar15 = 0;
          do {
            *(undefined8 *)((long)param_1 + lVar15) = *(undefined8 *)((long)puVar10 + lVar15);
            lVar15 = lVar15 + 8;
          } while ((undefined8 *)((long)param_1 + lVar15) < puVar16);
        }
        else {
          if (param_2 <= (undefined8 *)((long)param_1 + __n)) {
            iVar7 = (int)param_2 - (int)param_1;
            memmove(param_1,puVar10,(long)iVar7);
            puVar16 = (undefined8 *)((long)param_1 + (long)iVar7);
            iVar7 = (int)puVar10 + iVar7;
joined_r0x001578c8:
            if (puVar16 == param_2) {
              return (ulong)(uint)(iVar7 - (int)puVar20);
            }
            FUN_0015c3d0();
            pcVar14 = *(code **)PTR_PTR_047cb868;
            if (pcVar14 == (code *)0x0) goto LAB_001577f0;
            pcVar9 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
            uVar8 = 0x7b5;
            goto LAB_001577e8;
          }
          param_1[1] = *(undefined8 *)((long)param_3 + 9);
        }
      }
      puVar16 = (undefined8 *)((long)param_1 + __n);
      puVar10 = (ushort *)((long)puVar10 + __n);
      uVar11 = (ulong)*puVar10;
      if (bVar3 < 0x90) {
        param_1 = (undefined8 *)((long)puVar16 + uVar13);
        if (param_2 < param_1) {
          FUN_0015c3d0();
          pcVar14 = *(code **)PTR_PTR_047cb868;
          if (pcVar14 == (code *)0x0) goto LAB_001577f0;
          pcVar9 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar8 = 0x726;
          goto LAB_001577e8;
        }
        puVar12 = (undefined8 *)((long)puVar16 - uVar11);
        param_3 = puVar10 + 1;
        if (param_6 <= puVar12) goto LAB_0015719c;
        puVar12 = (undefined8 *)((long)puVar12 + param_7);
        uVar13 = uVar13 & 3;
        lVar15 = (uVar13 - uVar17) + -4;
        do {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
          puVar18 = param_6;
          if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
            puVar18 = (undefined8 *)((long)puVar12 + 1);
          }
          *(undefined1 *)((long)puVar16 + 1) = *(undefined1 *)puVar18;
          puVar12 = param_6;
          if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
            puVar12 = (undefined8 *)((long)puVar18 + 1);
          }
          *(undefined1 *)((long)puVar16 + 2) = *(undefined1 *)puVar12;
          puVar18 = param_6;
          if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
            puVar18 = (undefined8 *)((long)puVar12 + 1);
          }
          *(undefined1 *)((long)puVar16 + 3) = *(undefined1 *)puVar18;
          puVar16 = (undefined8 *)((long)puVar16 + 4);
          puVar12 = param_6;
          if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
            puVar12 = (undefined8 *)((long)puVar18 + 1);
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
        if (uVar13 != 0) {
          uVar17 = 0;
          do {
            puVar18 = (undefined8 *)((long)puVar12 + 1);
            *(undefined1 *)((long)puVar16 + uVar17) = *(undefined1 *)puVar12;
            uVar17 = uVar17 + 1;
            puVar12 = param_6;
            if (puVar18 != puVar1) {
              puVar12 = puVar18;
            }
          } while (uVar13 != uVar17);
        }
        goto LAB_001571ac;
      }
      if (uVar17 == 0xf) {
        uVar17 = uVar11 & 0x7f;
        param_3 = (ushort *)((long)puVar10 + 1);
        if ((*puVar10 >> 7 & 1) == 0) {
          uVar6 = *param_3;
          uVar13 = uVar17 + 0x13;
          param_3 = (ushort *)((long)puVar10 + 3);
          if (uVar17 == 0x7f) {
            bVar3 = *(byte *)((long)puVar10 + 3);
            uVar17 = (ulong)bVar3;
            uVar13 = 0x92;
            param_3 = puVar10 + 2;
            if (0xbf < uVar17) {
              uVar13 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92;
              param_3 = (ushort *)((long)puVar10 + 5);
              uVar17 = (ulong)(byte)puVar10[2];
            }
            uVar13 = uVar13 + uVar17;
          }
          if ((undefined8 *)((long)puVar16 + uVar13) <= param_2) {
            puVar12 = (undefined8 *)((long)puVar16 - (ulong)uVar6);
            if ((puVar12 < param_6) &&
               (puVar12 = (undefined8 *)((long)puVar12 + param_7),
               param_6 < (undefined8 *)((long)puVar12 + uVar13 + 8))) {
              uVar17 = uVar13 & 3;
              puVar18 = puVar16;
              if (2 < uVar13 - 1) {
                lVar15 = uVar17 - uVar13;
                puVar19 = puVar16;
                do {
                  *(undefined1 *)puVar19 = *(undefined1 *)puVar12;
                  puVar18 = param_6;
                  if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
                    puVar18 = (undefined8 *)((long)puVar12 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 1) = *(undefined1 *)puVar18;
                  puVar12 = param_6;
                  if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
                    puVar12 = (undefined8 *)((long)puVar18 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 2) = *(undefined1 *)puVar12;
                  puVar18 = (undefined8 *)((long)puVar19 + 4);
                  puVar2 = param_6;
                  if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
                    puVar2 = (undefined8 *)((long)puVar12 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 3) = *(undefined1 *)puVar2;
                  puVar12 = param_6;
                  if ((undefined8 *)((long)puVar2 + 1) != puVar1) {
                    puVar12 = (undefined8 *)((long)puVar2 + 1);
                  }
                  lVar15 = lVar15 + 4;
                  puVar19 = puVar18;
                } while (lVar15 != 0);
              }
              for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                puVar19 = (undefined8 *)((long)puVar12 + 1);
                *(undefined1 *)puVar18 = *(undefined1 *)puVar12;
                puVar12 = param_6;
                if (puVar19 != puVar1) {
                  puVar12 = puVar19;
                }
                puVar18 = (undefined8 *)((long)puVar18 + 1);
              }
            }
            else {
              puVar18 = puVar16;
              do {
                puVar19 = puVar18 + 1;
                *puVar18 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar18 = puVar19;
              } while (puVar19 < (undefined8 *)((long)puVar16 + uVar13));
            }
            goto LAB_00157674;
          }
          FUN_0015c3d0();
          pcVar14 = *(code **)PTR_PTR_047cb868;
          if (pcVar14 == (code *)0x0) goto LAB_001577f0;
          pcVar9 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar8 = 0x78f;
        }
        else {
          uVar13 = (uVar17 >> 3) + 4;
          if (uVar17 >> 3 == 0xf) {
            bVar3 = *(byte *)param_3;
            uVar17 = (ulong)bVar3;
            uVar13 = 0x13;
            param_3 = puVar10 + 1;
            if (0xbf < uVar17) {
              uVar13 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
              param_3 = (ushort *)((long)puVar10 + 3);
              uVar17 = (ulong)(byte)puVar10[1];
            }
            uVar13 = uVar13 + uVar17;
          }
          if ((undefined8 *)((long)puVar16 + uVar13) <= param_2) {
            if ((uVar11 & 7) == 1) {
              puVar12 = puVar1;
              if (puVar16 != param_6) {
                puVar12 = puVar16;
              }
              uVar4 = *(undefined1 *)((long)puVar12 + -1);
              puVar12 = puVar16;
              do {
                puVar18 = (undefined8 *)((long)puVar12 + 4);
                *(uint *)puVar12 = CONCAT13(uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)));
                puVar12 = puVar18;
              } while (puVar18 < (undefined8 *)((long)puVar16 + uVar13));
            }
            else {
              puVar18 = (undefined8 *)((long)puVar16 - (uVar11 & 7));
              puVar12 = (undefined8 *)((long)puVar18 + param_7);
              if (param_6 <= puVar18) {
                puVar12 = puVar18;
              }
              uVar17 = uVar13 & 3;
              puVar18 = puVar16;
              if (2 < uVar13 - 1) {
                lVar15 = uVar17 - uVar13;
                puVar19 = puVar16;
                do {
                  *(undefined1 *)puVar19 = *(undefined1 *)puVar12;
                  puVar18 = param_6;
                  if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
                    puVar18 = (undefined8 *)((long)puVar12 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 1) = *(undefined1 *)puVar18;
                  puVar12 = param_6;
                  if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
                    puVar12 = (undefined8 *)((long)puVar18 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 2) = *(undefined1 *)puVar12;
                  puVar18 = (undefined8 *)((long)puVar19 + 4);
                  puVar2 = param_6;
                  if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
                    puVar2 = (undefined8 *)((long)puVar12 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 3) = *(undefined1 *)puVar2;
                  puVar12 = param_6;
                  if ((undefined8 *)((long)puVar2 + 1) != puVar1) {
                    puVar12 = (undefined8 *)((long)puVar2 + 1);
                  }
                  lVar15 = lVar15 + 4;
                  puVar19 = puVar18;
                } while (lVar15 != 0);
              }
              for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                puVar19 = (undefined8 *)((long)puVar12 + 1);
                *(undefined1 *)puVar18 = *(undefined1 *)puVar12;
                puVar12 = param_6;
                if (puVar19 != puVar1) {
                  puVar12 = puVar19;
                }
                puVar18 = (undefined8 *)((long)puVar18 + 1);
              }
            }
            goto LAB_00157674;
          }
          FUN_0015c3d0();
          pcVar14 = *(code **)PTR_PTR_047cb868;
          if (pcVar14 == (code *)0x0) goto LAB_001577f0;
          pcVar9 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar8 = 0x76a;
        }
LAB_001577e8:
        (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\lzb.cpp",uVar8,pcVar9);
LAB_001577f0:
        FUN_0015c3f0();
        return 0xffffffff;
      }
      if (param_2 < (undefined8 *)((long)puVar16 + uVar13)) {
        FUN_0015c3d0();
        pcVar14 = *(code **)PTR_PTR_047cb868;
        if (pcVar14 == (code *)0x0) goto LAB_001577f0;
        pcVar9 = "OODLE ERROR : LZ corruption : LZB match past end\n";
        uVar8 = 0x743;
        goto LAB_001577e8;
      }
      puVar12 = (undefined8 *)((long)puVar16 - uVar11);
      param_3 = puVar10 + 1;
      if (puVar12 < param_6) {
        puVar12 = (undefined8 *)((long)puVar12 + param_7);
        uVar11 = uVar13 & 3;
        lVar15 = (uVar11 - uVar17) + -4;
        puVar18 = puVar16;
        do {
          *(undefined1 *)puVar18 = *(undefined1 *)puVar12;
          puVar19 = param_6;
          if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
            puVar19 = (undefined8 *)((long)puVar12 + 1);
          }
          *(undefined1 *)((long)puVar18 + 1) = *(undefined1 *)puVar19;
          puVar12 = param_6;
          if ((undefined8 *)((long)puVar19 + 1) != puVar1) {
            puVar12 = (undefined8 *)((long)puVar19 + 1);
          }
          *(undefined1 *)((long)puVar18 + 2) = *(undefined1 *)puVar12;
          puVar19 = param_6;
          if ((undefined8 *)((long)puVar12 + 1) != puVar1) {
            puVar19 = (undefined8 *)((long)puVar12 + 1);
          }
          *(undefined1 *)((long)puVar18 + 3) = *(undefined1 *)puVar19;
          puVar18 = (undefined8 *)((long)puVar18 + 4);
          puVar12 = param_6;
          if ((undefined8 *)((long)puVar19 + 1) != puVar1) {
            puVar12 = (undefined8 *)((long)puVar19 + 1);
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
        if (uVar11 != 0) {
          uVar17 = 0;
          do {
            puVar19 = (undefined8 *)((long)puVar12 + 1);
            *(undefined1 *)((long)puVar18 + uVar17) = *(undefined1 *)puVar12;
            uVar17 = uVar17 + 1;
            puVar12 = param_6;
            if (puVar19 != puVar1) {
              puVar12 = puVar19;
            }
          } while (uVar11 != uVar17);
        }
LAB_00157674:
        param_1 = (undefined8 *)((long)puVar16 + uVar13);
        if (param_4 + -0x10 <= param_3) break;
        goto LAB_001571dc;
      }
      *puVar16 = *puVar12;
      puVar16[1] = puVar12[1];
      if (uVar13 < 0x11) goto LAB_00157674;
      *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar12 + 2);
      param_1 = (undefined8 *)((long)puVar16 + uVar13);
    } while (param_3 < param_4 + -0x10);
  } while( true );
}


