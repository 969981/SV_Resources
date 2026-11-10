/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0337ee5c; name: FUN_0337ee5c
 */


/* WARNING: Removing unreachable block (ram,0x03380084) */

void FUN_0337ee5c(int *param_1,ulong *param_2,uint param_3,ulong *param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *__src;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong **ppuVar16;
  ulong **ppuVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  short *psVar21;
  ulong *puVar22;
  size_t sVar23;
  ulong *puVar24;
  short *psVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  long *plVar29;
  void *pvVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  void *pvVar35;
  long local_160;
  long local_158;
  ulong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  ulong local_e8;
  ulong *local_e0;
  long local_d8;
  long local_78;
  ulong local_70 [2];
  
  uVar13 = *param_2;
  uVar28 = (ulong)param_3;
  puVar19 = param_2;
  if ((uVar13 & 1) == 0) {
    do {
      puVar19 = (ulong *)puVar19[1];
    } while ((*puVar19 & 1) == 0);
  }
  switch((uint)puVar19[2] & 0x1f) {
  case 2:
  case 4:
    puVar19 = param_2;
    if ((uVar13 & 1) == 0) {
      do {
        puVar19 = (ulong *)puVar19[1];
      } while ((*puVar19 & 1) == 0);
    }
    if ((puVar19[2] & 0x1f) != 4) {
      param_2 = (ulong *)0x0;
    }
    for (; (*param_2 & 1) == 0; param_2 = (ulong *)param_2[1]) {
    }
    if ((int)param_2[2] == 0x2004) {
      if (param_5 == 1) {
        plVar29 = *(long **)(param_1 + 2);
        pvVar9 = (void *)*plVar29;
        if (plVar29[1] - (long)pvVar9 < (long)uVar28) {
          plVar7 = (long *)plVar29[7];
          if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337ef78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,param_4,uVar28);
            return;
          }
          memcpy(param_4,pvVar9,plVar29[1] - (long)pvVar9);
          lVar5 = plVar29[1];
        }
        else {
          memcpy(param_4,pvVar9,uVar28);
          lVar5 = *plVar29 + uVar28;
        }
        *plVar29 = lVar5;
      }
      else if (0 < (int)param_3) {
        do {
          local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
          plVar29 = *(long **)(param_1 + 2);
          puVar2 = (undefined1 *)*plVar29;
          lVar5 = plVar29[1];
          if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
            plVar7 = (long *)plVar29[7];
            if (plVar7 == (long *)0x0) {
              memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
              *plVar29 = lVar5;
            }
            else {
              (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
            }
          }
          else {
            local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
            *plVar29 = (long)(puVar2 + 1);
          }
          *(byte *)param_4 = (byte)local_f8;
          param_4 = (ulong *)((long)param_4 + (long)param_5);
          uVar12 = (int)uVar28 - 1;
          uVar28 = (ulong)uVar12;
        } while (uVar12 != 0);
      }
    }
    else {
      if (2 < *param_1) {
        local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
        plVar29 = *(long **)(param_1 + 2);
        puVar2 = (undefined1 *)*plVar29;
        lVar5 = plVar29[1];
        if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
          plVar7 = (long *)plVar29[7];
          if (plVar7 == (long *)0x0) {
            memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
            *plVar29 = lVar5;
          }
          else {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
          }
        }
        else {
          local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
          *plVar29 = (long)(puVar2 + 1);
        }
        puVar19 = local_f8;
        uVar13 = (ulong)((byte)local_f8 >> 1) & 0x3f;
        iVar27 = (int)uVar13;
        if ((char)(byte)local_f8 < '\0') {
          uVar28 = 6;
          do {
            local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
            plVar29 = *(long **)(param_1 + 2);
            puVar2 = (undefined1 *)*plVar29;
            lVar5 = plVar29[1];
            if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
              plVar7 = (long *)plVar29[7];
              if (plVar7 == (long *)0x0) {
                memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
                *plVar29 = lVar5;
              }
              else {
                (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
              }
            }
            else {
              local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
              *plVar29 = (long)(puVar2 + 1);
            }
            uVar31 = uVar28 & 0x3f;
            uVar28 = (ulong)((int)uVar28 + 7);
            uVar13 = ((ulong)local_f8 & 0x7f) << uVar31 | uVar13;
            iVar27 = (int)uVar13;
          } while ((char)(byte)local_f8 < '\0');
        }
        iVar32 = -iVar27;
        if (((ulong)puVar19 & 1) == 0) {
          iVar32 = iVar27;
        }
        if (iVar32 != 4) {
          if ((int)param_3 < 1) {
            return;
          }
          uVar12 = 0;
          do {
            local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
            plVar29 = *(long **)(param_1 + 2);
            puVar2 = (undefined1 *)*plVar29;
            lVar5 = plVar29[1];
            if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
              plVar7 = (long *)plVar29[7];
              if (plVar7 == (long *)0x0) {
                memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
                *plVar29 = lVar5;
              }
              else {
                (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
              }
            }
            else {
              local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
              *plVar29 = (long)(puVar2 + 1);
            }
            puVar19 = local_f8;
            uVar13 = (ulong)((byte)local_f8 >> 1) & 0x3f;
            if ((char)(byte)local_f8 < '\0') {
              uVar28 = 6;
              do {
                local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
                plVar29 = *(long **)(param_1 + 2);
                puVar2 = (undefined1 *)*plVar29;
                lVar5 = plVar29[1];
                if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
                  plVar7 = (long *)plVar29[7];
                  if (plVar7 == (long *)0x0) {
                    memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
                    *plVar29 = lVar5;
                  }
                  else {
                    (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
                  }
                }
                else {
                  local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
                  *plVar29 = (long)(puVar2 + 1);
                }
                uVar31 = uVar28 & 0x3f;
                uVar28 = (ulong)((int)uVar28 + 7);
                uVar13 = ((ulong)local_f8 & 0x7f) << uVar31 | uVar13;
              } while ((char)(byte)local_f8 < '\0');
            }
            uVar28 = -uVar13;
            if (((ulong)puVar19 & 1) == 0) {
              uVar28 = uVar13;
            }
            *param_4 = uVar28;
            uVar12 = uVar12 + 1;
            param_4 = (ulong *)((long)param_4 + (long)param_5);
          } while (uVar12 != param_3);
          return;
        }
      }
      if (0 < (int)param_3) {
        uVar12 = 0;
        do {
          local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
          plVar29 = *(long **)(param_1 + 2);
          puVar2 = (undefined1 *)*plVar29;
          lVar5 = plVar29[1];
          if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
            plVar7 = (long *)plVar29[7];
            if (plVar7 == (long *)0x0) {
              memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
              *plVar29 = lVar5;
            }
            else {
              (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
            }
          }
          else {
            local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
            *plVar29 = (long)(puVar2 + 1);
          }
          puVar19 = local_f8;
          uVar13 = (ulong)((byte)local_f8 >> 1) & 0x3f;
          iVar27 = (int)uVar13;
          if ((char)(byte)local_f8 < '\0') {
            uVar28 = 6;
            do {
              local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
              plVar29 = *(long **)(param_1 + 2);
              puVar2 = (undefined1 *)*plVar29;
              lVar5 = plVar29[1];
              if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
                plVar7 = (long *)plVar29[7];
                if (plVar7 == (long *)0x0) {
                  memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
                  *plVar29 = lVar5;
                }
                else {
                  (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
                }
              }
              else {
                local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
                *plVar29 = (long)(puVar2 + 1);
              }
              uVar31 = uVar28 & 0x3f;
              uVar28 = (ulong)((int)uVar28 + 7);
              uVar13 = ((ulong)local_f8 & 0x7f) << uVar31 | uVar13;
              iVar27 = (int)uVar13;
            } while ((char)(byte)local_f8 < '\0');
          }
          if (((ulong)puVar19 & 1) != 0) {
            iVar27 = -iVar27;
          }
          *param_4 = (long)iVar27;
          uVar12 = uVar12 + 1;
          param_4 = (ulong *)((long)param_4 + (long)param_5);
        } while (uVar12 != param_3);
      }
    }
    break;
  case 3:
    if (0 < (int)param_3) {
      do {
        uVar13 = FUN_0337c444(param_1);
        *param_4 = uVar13;
        param_4 = (ulong *)((long)param_4 + (long)param_5);
        uVar12 = (int)uVar28 - 1;
        uVar28 = (ulong)uVar12;
      } while (uVar12 != 0);
    }
    break;
  case 5:
    if ((char)param_1[1] == '\0') {
      if (param_5 != 4) {
        if ((int)param_3 < 1) {
          return;
        }
        do {
          plVar29 = *(long **)(param_1 + 2);
          __src = (undefined4 *)*plVar29;
          lVar5 = plVar29[1];
          sVar23 = lVar5 - (long)__src;
          if ((long)sVar23 < 4) {
            plVar7 = (long *)plVar29[7];
            if (plVar7 == (long *)0x0) {
              memcpy(&local_f8,__src,sVar23);
              *plVar29 = lVar5;
            }
            else {
              (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,4);
            }
          }
          else {
            local_f8 = (ulong *)CONCAT44(local_f8._4_4_,*__src);
            *plVar29 = (long)(__src + 1);
          }
          if ((char)param_1[4] != '\0') {
            uVar12 = ((uint)local_f8 & 0xff00ff00) >> 8 | ((uint)local_f8 & 0xff00ff) << 8;
            local_f8 = (ulong *)CONCAT44(local_f8._4_4_,uVar12 >> 0x10 | uVar12 << 0x10);
          }
          *(uint *)param_4 = (uint)local_f8;
          param_4 = (ulong *)((long)param_4 + (long)param_5);
          uVar12 = (int)uVar28 - 1;
          uVar28 = (ulong)uVar12;
        } while (uVar12 != 0);
        return;
      }
      plVar29 = *(long **)(param_1 + 2);
      uVar13 = (ulong)(param_3 << 2);
      pvVar9 = (void *)*plVar29;
      if (plVar29[1] - (long)pvVar9 < (long)uVar13) {
        plVar7 = (long *)plVar29[7];
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,param_4,uVar13);
          goto LAB_0337fb34;
        }
        memcpy(param_4,pvVar9,plVar29[1] - (long)pvVar9);
        lVar5 = plVar29[1];
      }
      else {
        memcpy(param_4,pvVar9,uVar13);
        lVar5 = *plVar29 + uVar13;
      }
      *plVar29 = lVar5;
LAB_0337fb34:
      if ((char)param_1[4] == '\0') {
        return;
      }
      if ((int)param_3 < 1) {
        return;
      }
      puVar19 = param_4;
      do {
        uVar12 = ((uint)*puVar19 & 0xff00ff00) >> 8 | ((uint)*puVar19 & 0xff00ff) << 8;
        puVar14 = (ulong *)((long)puVar19 + 4);
        *(uint *)puVar19 = uVar12 >> 0x10 | uVar12 << 0x10;
        puVar19 = puVar14;
      } while (puVar14 < (ulong *)((long)param_4 + (long)(int)param_3 * 4));
      return;
    }
    if (param_5 != 8) {
      if ((int)param_3 < 1) {
        return;
      }
      do {
        plVar7 = *(long **)(param_1 + 2);
        plVar29 = (long *)*plVar7;
        if (plVar7[1] - (long)plVar29 < 8) {
          plVar8 = (long *)plVar7[7];
          if (plVar8 == (long *)0x0) {
            memcpy(&local_f8,plVar29,plVar7[1] - (long)plVar29);
            lVar5 = plVar7[1];
            goto LAB_0337f604;
          }
          (**(code **)(*plVar8 + 0x38))(plVar8,plVar7,&local_f8,8);
        }
        else {
          local_f8 = (ulong *)*plVar29;
          lVar5 = *plVar7 + 8;
LAB_0337f604:
          *plVar7 = lVar5;
        }
        if ((char)param_1[4] != '\0') {
          uVar13 = ((ulong)local_f8 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)local_f8 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          local_f8 = (ulong *)(uVar13 >> 0x20 | uVar13 << 0x20);
        }
        *param_4 = (ulong)local_f8;
        param_4 = (ulong *)((long)param_4 + (long)param_5);
        uVar12 = (int)uVar28 - 1;
        uVar28 = (ulong)uVar12;
        if (uVar12 == 0) {
          return;
        }
      } while( true );
    }
    plVar29 = *(long **)(param_1 + 2);
    uVar13 = (ulong)(param_3 << 3);
    pvVar9 = (void *)*plVar29;
    if (plVar29[1] - (long)pvVar9 < (long)uVar13) {
      plVar7 = (long *)plVar29[7];
      if (plVar7 == (long *)0x0) {
        memcpy(param_4,pvVar9,plVar29[1] - (long)pvVar9);
        lVar5 = plVar29[1];
        goto LAB_0337faf4;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,param_4,uVar13);
    }
    else {
      memcpy(param_4,pvVar9,uVar13);
      lVar5 = *plVar29 + uVar13;
LAB_0337faf4:
      *plVar29 = lVar5;
    }
    if (((char)param_1[4] != '\0') && (0 < (int)param_3)) {
      puVar19 = param_4;
      do {
        uVar13 = (*puVar19 & 0xff00ff00ff00ff00) >> 8 | (*puVar19 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        puVar14 = puVar19 + 1;
        *puVar19 = uVar13 >> 0x20 | uVar13 << 0x20;
        puVar19 = puVar14;
      } while (puVar14 < param_4 + (int)param_3);
    }
    break;
  case 6:
    if (0 < (int)param_3) {
      do {
        local_f8 = (ulong *)0x0;
        FUN_0337ecc0(param_1,param_4,&local_f8);
        param_4 = (ulong *)((long)param_4 + (long)param_5);
        uVar12 = (int)uVar28 - 1;
        uVar28 = (ulong)uVar12;
      } while (uVar12 != 0);
    }
    break;
  case 7:
    puVar19 = param_2;
    if ((uVar13 & 1) == 0) {
      do {
        puVar19 = (ulong *)puVar19[1];
      } while ((*puVar19 & 1) == 0);
    }
    puVar14 = param_2;
    if ((puVar19[2] & 0x1f) != 7) {
      puVar14 = (ulong *)0x0;
    }
    local_f8 = (ulong *)0x0;
    _local_f0 = (ulong *)0x8000000000000000;
    lVar5 = tpidr_el0;
    lVar34 = *(long *)(lVar5 + 0x1000b8);
    if (lVar34 == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar34;
    }
    local_e8 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
    if (*(long *)(local_e8 + 8) == 0) {
      local_d8 = 0x80;
      local_78 = 0x80;
      if (local_e8 != 0) {
        local_70[0] = 0x80;
        if (0x7f < *(ulong *)(local_e8 + 0x28)) {
          local_e0 = *(ulong **)(local_e8 + 0x38);
          if (local_e0 + 0x10 <= *(ulong **)(local_e8 + 0x40)) {
            *(ulong **)(local_e8 + 0x38) = local_e0 + 0x10;
            goto LAB_0337ff18;
          }
        }
        local_e0 = (ulong *)FUN_031cf3b4(local_e8,local_70);
        goto LAB_0337ff18;
      }
    }
    else {
      local_e8 = 0;
    }
    local_78 = 0x80;
    local_d8 = 0x80;
    local_e0 = (ulong *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
LAB_0337ff18:
    iVar27 = 0;
    _local_f0 = (ulong *)CONCAT44(0x80000080,local_f0);
    puVar19 = puVar14;
    while (puVar19 != (ulong *)0x0) {
      puVar19 = param_2;
      do {
        uVar12 = (uint)*puVar19;
        if ((uVar12 >> 0x17 & 1) != 0) {
          if (puVar19 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar12,uVar12) & 0x7fffff007fffff;
            puVar19 = (ulong *)puVar19[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                     POPCOUNT((char)(uVar13 >> 8)) +
                                                    POPCOUNT((char)(uVar13 >> 0x10))) + 2];
            if (puVar19 != (ulong *)0x0) {
              puVar19 = (ulong *)(ulong)(uint)((int)*(short *)((long)puVar19 + 2) +
                                              (int)(short)*puVar19);
            }
          }
          break;
        }
        if ((*puVar19 & 1) != 0) {
          puVar19 = (ulong *)0x0;
          break;
        }
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      do {
        uVar13 = *param_2;
        param_2 = (ulong *)param_2[1];
      } while ((uVar13 & 1) == 0);
      iVar27 = (int)puVar19 + iVar27;
      puVar19 = param_2;
    }
    local_f8 = local_e0;
    FUN_0337eb08(param_1,iVar27,&local_f8);
    plVar7 = (long *)0x0;
    plVar29 = (long *)0x0;
    lVar34 = 0;
    lVar26 = (long)param_5;
    puVar19 = (ulong *)0x0;
LAB_0337ffe8:
    plVar29 = plVar29 + 1;
    puVar15 = puVar19;
    if (plVar7 <= plVar29) {
      if (puVar14 == puVar19) goto LAB_033804cc;
      psVar21 = (short *)0x0;
      puVar15 = (ulong *)0x0;
      puVar24 = puVar14;
      do {
        uVar12 = (uint)*puVar24;
        if ((uVar12 >> 0x17 & 1) != 0) {
          uVar13 = CONCAT44(uVar12,uVar12) & 0x7fffff007fffff;
          psVar25 = (short *)puVar24[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                   POPCOUNT((char)(uVar13 >> 8)) +
                                                  POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          if (psVar25 != (short *)0x0) {
            if ((int)psVar25[1] + (int)*psVar25 != 0) {
              psVar21 = psVar25;
              puVar15 = puVar24;
            }
          }
        }
        puVar24 = (ulong *)puVar24[1];
      } while (puVar24 != puVar19);
      if (puVar15 == (ulong *)0x0) goto LAB_033804cc;
      plVar29 = (long *)(psVar21 + 4);
      plVar7 = plVar29 + (long)psVar21[1] + (long)*psVar21;
    }
    uVar12 = (uint)*(undefined8 *)*plVar29;
    puVar19 = puVar15;
    if (((uVar12 >> 0x11 & 1) != 0) &&
       (uVar13 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff,
       (*(ushort *)
         (*plVar29 +
         (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                      POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
      if (*(char *)((long)local_f8 + lVar34) != '\0') {
        puVar24 = (ulong *)*plVar29;
        uVar13 = *puVar24;
        uVar12 = (uint)uVar13;
        puVar15 = puVar24;
        if ((uVar13 & 1) == 0) {
          do {
            puVar15 = (ulong *)puVar15[1];
          } while ((*puVar15 & 1) == 0);
        }
        if ((puVar24 != (ulong *)0x0) && ((puVar15[2] & 0x1f) == 8)) {
          puVar15 = puVar24;
          if ((uVar13 & 1) == 0) {
            do {
              puVar15 = (ulong *)puVar15[1];
            } while ((*puVar15 & 1) == 0);
          }
          puVar22 = puVar24;
          if ((puVar15[2] & 0x1f) != 8) {
            puVar22 = (ulong *)0x0;
          }
          do {
            if ((*puVar22 & 1) != 0) {
              if ((puVar22 != (ulong *)0x0) && (0 < (int)(puVar22[2] >> 8))) {
                puVar15 = puVar24;
                if ((uVar12 >> 0x14 & 1) == 0) goto LAB_0338015c;
                sVar23 = 0;
                if (puVar24 == (ulong *)0x0) goto LAB_033801f8;
                goto LAB_033801d0;
              }
              break;
            }
            puVar22 = (ulong *)puVar22[1];
          } while (puVar22 != (ulong *)0x0);
        }
        if ((uVar12 >> 0x11 & 1) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff;
          uVar13 = (ulong)(ushort)puVar24[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                        POPCOUNT((char)(uVar13 >> 8)) +
                                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2];
        }
        FUN_0337ee5c(param_1,puVar24,uVar28,uVar13 + (long)param_4,param_5);
      }
      goto LAB_033801c4;
    }
    goto LAB_0337ffe8;
  case 8:
    puVar19 = param_2;
    if ((uVar13 & 1) == 0) {
      do {
        puVar19 = (ulong *)puVar19[1];
      } while ((*puVar19 & 1) == 0);
    }
    if ((puVar19[2] & 0x1f) != 8) {
      param_2 = (ulong *)0x0;
    }
    puVar19 = param_2;
    do {
      if ((*puVar19 & 1) != 0) {
        if (puVar19 != (ulong *)0x0) {
          uVar13 = puVar19[2];
          iVar27 = (int)(uVar13 >> 8);
          if (0 < iVar27) goto LAB_0337f15c;
        }
        break;
      }
      puVar19 = (ulong *)puVar19[1];
    } while (puVar19 != (ulong *)0x0);
    do {
      if (((byte)*param_2 >> 1 & 1) != 0) {
        puVar19 = (ulong *)param_2[3];
        goto LAB_0337f20c;
      }
      param_2 = (ulong *)param_2[1];
    } while (param_2 != (ulong *)0x0);
    puVar19 = (ulong *)0x0;
LAB_0337f20c:
    if (0 < (int)param_3) {
      uVar13 = 0;
      do {
        local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
        plVar29 = *(long **)(param_1 + 2);
        puVar2 = (undefined1 *)*plVar29;
        lVar5 = plVar29[1];
        if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
          plVar7 = (long *)plVar29[7];
          if (plVar7 == (long *)0x0) {
            memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
            *plVar29 = lVar5;
          }
          else {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
          }
        }
        else {
          local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
          *plVar29 = (long)(puVar2 + 1);
        }
        puVar14 = local_f8;
        uVar31 = (ulong)((byte)local_f8 >> 1) & 0x3f;
        if ((char)(byte)local_f8 < '\0') {
          uVar33 = 6;
          do {
            local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
            plVar29 = *(long **)(param_1 + 2);
            puVar2 = (undefined1 *)*plVar29;
            lVar5 = plVar29[1];
            if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
              plVar7 = (long *)plVar29[7];
              if (plVar7 == (long *)0x0) {
                memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
                *plVar29 = lVar5;
              }
              else {
                (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
              }
            }
            else {
              local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
              *plVar29 = (long)(puVar2 + 1);
            }
            uVar20 = uVar33 & 0x3f;
            uVar33 = (ulong)((int)uVar33 + 7);
            uVar31 = ((ulong)local_f8 & 0x7f) << uVar20 | uVar31;
          } while ((char)(byte)local_f8 < '\0');
        }
        uVar33 = -uVar31;
        if (((ulong)puVar14 & 1) == 0) {
          uVar33 = uVar31;
        }
        iVar27 = (int)uVar33;
        if (iVar27 < 1) {
          puVar14 = (ulong *)0x0;
          *(ulong *)((long)param_4 + uVar13 * (long)param_5) = 0;
        }
        else {
          puVar14 = puVar19;
          do {
            uVar12 = (uint)*puVar14;
            if ((uVar12 >> 0x14 & 1) != 0) {
              uVar11 = 0;
              if (puVar14 != (ulong *)0x0) {
                uVar12 = uVar12 & 0xfffff;
                uVar11 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                             POPCOUNT((char)(uVar12 >> 8)) +
                                                            POPCOUNT((char)(uVar12 >> 0x10))) + 2];
              }
              goto LAB_0337f368;
            }
            if ((*puVar14 & 1) != 0) {
              uVar11 = 0;
              goto LAB_0337f368;
            }
            puVar14 = (ulong *)puVar14[1];
          } while (puVar14 != (ulong *)0x0);
          uVar11 = 0;
LAB_0337f368:
          puVar14 = (ulong *)(**(code **)(**(long **)(param_1 + 0x1c) + 0x18))
                                       (*(long **)(param_1 + 0x1c),(long)(int)(iVar27 * uVar11));
          puVar15 = puVar19;
          do {
            uVar12 = (uint)*puVar15;
            if ((uVar12 >> 0x14 & 1) != 0) {
              uVar11 = 0;
              if (puVar15 != (ulong *)0x0) {
                uVar12 = uVar12 & 0xfffff;
                uVar11 = (uint)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                             POPCOUNT((char)(uVar12 >> 8)) +
                                                            POPCOUNT((char)(uVar12 >> 0x10))) + 2];
              }
              goto LAB_0337f3c8;
            }
            if ((*puVar15 & 1) != 0) {
              uVar11 = 0;
              goto LAB_0337f3c8;
            }
            puVar15 = (ulong *)puVar15[1];
          } while (puVar15 != (ulong *)0x0);
          uVar11 = 0;
LAB_0337f3c8:
          memset(puVar14,0,(ulong)(uVar11 * iVar27));
          uVar31 = (ulong)*(uint *)(*(long *)(param_1 + 0x2e) + 0x40);
          *(ulong *)((long)param_4 + uVar13 * (long)param_5) = uVar31;
          lVar34 = *(long *)(param_1 + 0x2e);
          local_f8 = puVar19;
          lVar5 = FUN_03379400(lVar34 + 0xd8,&local_f8);
          if (lVar5 == 0) {
            uVar11 = 0;
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = *(uint *)(lVar5 + 4);
            uVar11 = ((int)lVar5 - (int)*(undefined8 *)(lVar34 + 0xe8)) * 0x20000000;
          }
          if ((int)(uVar12 | uVar11) < 0) {
            FUN_0337e9e8(lVar34,*(undefined4 *)(lVar34 + 0xe0),local_f8);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x2e);
          if (puVar19 == (ulong *)0x0) {
            uVar20 = 0;
          }
          else {
            puVar15 = puVar19;
            do {
              uVar20 = *puVar15;
              if (((uint)uVar20 >> 2 & 1) != 0) {
                uVar20 = puVar15[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
                goto LAB_0337f470;
              }
              puVar15 = (ulong *)puVar15[1];
            } while (puVar15 != (ulong *)0x0);
            uVar20 = 0;
          }
LAB_0337f470:
          local_f8 = puVar14;
          _local_f0 = puVar19;
          local_e8 = uVar20;
          if ((uVar20 & 1) == 0) {
            local_e0 = (ulong *)CONCAT44(local_e0._4_4_,iVar27);
            FUN_0337ba38(uVar6,uVar31,&local_f8);
          }
          else {
            piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_e0 = (ulong *)CONCAT44(local_e0._4_4_,iVar27);
            FUN_0337ba38(uVar6,uVar31,&local_f8);
            if ((uVar20 & 1) != 0) {
              plVar7 = (long *)(uVar20 & 0xfffffffffffffffe);
              plVar29 = plVar7 + 1;
              do {
                lVar5 = *plVar29;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar4) {
                  *(int *)plVar29 = (int)lVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
                (**(code **)(*plVar7 + 8))();
              }
            }
          }
        }
        puVar15 = puVar19;
        while( true ) {
          uVar12 = (uint)*puVar15;
          if ((uVar12 >> 0x14 & 1) != 0) break;
          if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_0337f530;
        }
        if (puVar15 != (ulong *)0x0) {
          uVar31 = CONCAT44(uVar12,uVar12) & 0xfffff000fffff;
          uVar10 = (undefined2)
                   puVar15[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                        POPCOUNT((char)(uVar31 >> 0x10))) + 2];
          goto LAB_0337f534;
        }
LAB_0337f530:
        uVar10 = 0;
LAB_0337f534:
        FUN_0337ee5c(param_1,puVar19,uVar33 & 0xffffffff,puVar14,uVar10);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar28);
    }
  }
  return;
  while (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0) {
LAB_0337f15c:
    if (((byte)*param_2 >> 1 & 1) != 0) {
      puVar19 = (ulong *)param_2[3];
      goto LAB_0337f720;
    }
  }
  puVar19 = (ulong *)0x0;
LAB_0337f720:
  puVar14 = puVar19;
  if ((*puVar19 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if ((puVar14[2] & 0x1f) != 5) {
    if ((int)param_3 < 1) {
      return;
    }
    uVar13 = 0;
    do {
      puVar14 = puVar19;
      while( true ) {
        uVar12 = (uint)*puVar14;
        if ((uVar12 >> 0x14 & 1) != 0) break;
        if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
        goto LAB_0337f7dc;
      }
      if (puVar14 != (ulong *)0x0) {
        uVar31 = CONCAT44(uVar12,uVar12) & 0xfffff000fffff;
        uVar10 = (undefined2)
                 puVar14[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                      POPCOUNT((char)(uVar31 >> 0x10))) + 2];
        goto LAB_0337f7e0;
      }
LAB_0337f7dc:
      uVar10 = 0;
LAB_0337f7e0:
      FUN_0337ee5c(param_1,puVar19,iVar27,(ulong *)((long)param_4 + uVar13 * (long)param_5),uVar10);
      uVar13 = uVar13 + 1;
      if (uVar13 == uVar28) {
        return;
      }
    } while( true );
  }
  if (iVar27 == 4) {
    local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
    plVar29 = *(long **)(param_1 + 2);
    puVar2 = (undefined1 *)*plVar29;
    lVar5 = plVar29[1];
    if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
      plVar7 = (long *)plVar29[7];
      if (plVar7 == (long *)0x0) {
        memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
        *plVar29 = lVar5;
      }
      else {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
      }
    }
    else {
      local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
      *plVar29 = (long)(puVar2 + 1);
    }
    puVar19 = local_f8;
    uVar31 = (ulong)((byte)local_f8 >> 1) & 0x3f;
    iVar32 = (int)uVar31;
    if ((char)(byte)local_f8 < '\0') {
      uVar33 = 6;
      do {
        local_f8 = (ulong *)CONCAT71(local_f8._1_7_,0xff);
        plVar29 = *(long **)(param_1 + 2);
        puVar2 = (undefined1 *)*plVar29;
        lVar5 = plVar29[1];
        if (lVar5 - (long)puVar2 == 0 || lVar5 < (long)puVar2) {
          plVar7 = (long *)plVar29[7];
          if (plVar7 == (long *)0x0) {
            memcpy(&local_f8,puVar2,lVar5 - (long)puVar2);
            *plVar29 = lVar5;
          }
          else {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,1);
          }
        }
        else {
          local_f8 = (ulong *)CONCAT71(local_f8._1_7_,*puVar2);
          *plVar29 = (long)(puVar2 + 1);
        }
        uVar20 = uVar33 & 0x3f;
        uVar33 = (ulong)((int)uVar33 + 7);
        uVar31 = ((ulong)local_f8 & 0x7f) << uVar20 | uVar31;
        iVar32 = (int)uVar31;
      } while ((char)(byte)local_f8 < '\0');
    }
    iVar27 = -iVar32;
    if (((ulong)puVar19 & 1) == 0) {
      iVar27 = iVar32;
    }
  }
  if ((char)param_1[1] == '\0') {
    _local_f0 = (ulong *)((ulong)_local_f0 & 0xffffffff);
    if ((int)param_3 < 1) {
      return;
    }
    uVar31 = (ulong)(uint)(iVar27 << 2);
    uVar13 = -(uVar13 >> 0x27 & 1) & 0xfffffffc00000000 | (uVar13 >> 8 & 0xffffffff) << 2;
    if (iVar27 < 1) {
      do {
        plVar29 = *(long **)(param_1 + 2);
        pvVar9 = (void *)*plVar29;
        if (plVar29[1] - (long)pvVar9 < (long)uVar31) {
          plVar7 = (long *)plVar29[7];
          if (plVar7 == (long *)0x0) {
            memcpy(&local_f8,pvVar9,plVar29[1] - (long)pvVar9);
            lVar5 = plVar29[1];
            goto LAB_0337fea4;
          }
          (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,uVar31);
        }
        else {
          memcpy(&local_f8,pvVar9,uVar31);
          lVar5 = *plVar29 + uVar31;
LAB_0337fea4:
          *plVar29 = lVar5;
        }
        memcpy(param_4,&local_f8,uVar13);
        param_4 = (ulong *)((long)param_4 + (long)param_5);
        uVar12 = (int)uVar28 - 1;
        uVar28 = (ulong)uVar12;
        if (uVar12 == 0) {
          return;
        }
      } while( true );
    }
    uVar12 = 0;
    do {
      plVar29 = *(long **)(param_1 + 2);
      pvVar9 = (void *)*plVar29;
      if (plVar29[1] - (long)pvVar9 < (long)uVar31) {
        plVar7 = (long *)plVar29[7];
        if (plVar7 == (long *)0x0) {
          memcpy(&local_f8,pvVar9,plVar29[1] - (long)pvVar9);
          lVar5 = plVar29[1];
          goto LAB_0337fe00;
        }
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,uVar31);
      }
      else {
        memcpy(&local_f8,pvVar9,uVar31);
        lVar5 = *plVar29 + uVar31;
LAB_0337fe00:
        *plVar29 = lVar5;
      }
      if ((char)param_1[4] != '\0') {
        ppuVar17 = &local_f8;
        do {
          uVar11 = (*(uint *)ppuVar17 & 0xff00ff00) >> 8 | (*(uint *)ppuVar17 & 0xff00ff) << 8;
          ppuVar16 = (ulong **)((long)ppuVar17 + 4);
          *(uint *)ppuVar17 = uVar11 >> 0x10 | uVar11 << 0x10;
          ppuVar17 = ppuVar16;
        } while (ppuVar16 < (ulong **)((long)&local_f8 + (long)iVar27 * 4));
      }
      memcpy(param_4,&local_f8,uVar13);
      uVar12 = uVar12 + 1;
      param_4 = (ulong *)((long)param_4 + (long)param_5);
      if (uVar12 == param_3) {
        return;
      }
    } while( true );
  }
  local_e0 = (ulong *)0x0;
  if ((int)param_3 < 1) {
    return;
  }
  uVar31 = (ulong)(uint)(iVar27 << 3);
  uVar13 = -(uVar13 >> 0x27 & 1) & 0xfffffff800000000 | (uVar13 >> 8 & 0xffffffff) << 3;
  if (iVar27 < 1) {
    do {
      plVar29 = *(long **)(param_1 + 2);
      pvVar9 = (void *)*plVar29;
      if (plVar29[1] - (long)pvVar9 < (long)uVar31) {
        plVar7 = (long *)plVar29[7];
        if (plVar7 == (long *)0x0) {
          memcpy(&local_f8,pvVar9,plVar29[1] - (long)pvVar9);
          lVar5 = plVar29[1];
          goto LAB_0337fd54;
        }
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,uVar31);
      }
      else {
        memcpy(&local_f8,pvVar9,uVar31);
        lVar5 = *plVar29 + uVar31;
LAB_0337fd54:
        *plVar29 = lVar5;
      }
      memcpy(param_4,&local_f8,uVar13);
      param_4 = (ulong *)((long)param_4 + (long)param_5);
      uVar12 = (int)uVar28 - 1;
      uVar28 = (ulong)uVar12;
      if (uVar12 == 0) {
        return;
      }
    } while( true );
  }
  uVar12 = 0;
  do {
    plVar29 = *(long **)(param_1 + 2);
    pvVar9 = (void *)*plVar29;
    if (plVar29[1] - (long)pvVar9 < (long)uVar31) {
      plVar7 = (long *)plVar29[7];
      if (plVar7 == (long *)0x0) {
        memcpy(&local_f8,pvVar9,plVar29[1] - (long)pvVar9);
        lVar5 = plVar29[1];
        goto LAB_0337fcb0;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,plVar29,&local_f8,uVar31);
    }
    else {
      memcpy(&local_f8,pvVar9,uVar31);
      lVar5 = *plVar29 + uVar31;
LAB_0337fcb0:
      *plVar29 = lVar5;
    }
    if ((char)param_1[4] != '\0') {
      ppuVar17 = &local_f8;
      do {
        uVar28 = ((ulong)*ppuVar17 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)*ppuVar17 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        ppuVar16 = ppuVar17 + 1;
        *ppuVar17 = (ulong *)(uVar28 >> 0x20 | uVar28 << 0x20);
        ppuVar17 = ppuVar16;
      } while (ppuVar16 < &local_f8 + iVar27);
    }
    memcpy(param_4,&local_f8,uVar13);
    uVar12 = uVar12 + 1;
    param_4 = (ulong *)((long)param_4 + (long)param_5);
    if (uVar12 == param_3) {
      return;
    }
  } while( true );
  while( true ) {
    puVar15 = (ulong *)puVar15[1];
    sVar23 = 0;
    if (puVar15 == (ulong *)0x0) goto LAB_033801f8;
    uVar13 = *puVar15;
    uVar12 = (uint)uVar13;
    if ((uVar12 >> 0x14 & 1) != 0) break;
LAB_0338015c:
    if ((uVar13 & 1) != 0) {
      sVar23 = 0;
      goto LAB_033801f8;
    }
  }
LAB_033801d0:
  uVar13 = CONCAT44(uVar12,uVar12) & 0xfffff000fffff;
  sVar23 = (size_t)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                 POPCOUNT((char)(uVar13 >> 8)) +
                                                POPCOUNT((char)(uVar13 >> 0x10))) + 2];
LAB_033801f8:
  lVar18 = *(long *)(lVar5 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar18;
  }
  iVar27 = (int)sVar23 * param_3;
  local_158 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
  if ((*(long *)(local_158 + 8) == 0) && (local_78 = (long)iVar27, local_158 != 0)) {
    local_70[0] = local_78 + 0x3fU & 0xffffffffffffffc0;
    if (local_70[0] <= *(ulong *)(local_158 + 0x28)) {
      pvVar9 = *(void **)(local_158 + 0x38);
      if (local_70[0] + (long)pvVar9 <= *(ulong *)(local_158 + 0x40)) {
        *(ulong *)(local_158 + 0x38) = local_70[0] + (long)pvVar9;
        goto LAB_033802d4;
      }
    }
    pvVar9 = (void *)FUN_031cf3b4(local_158,local_70);
  }
  else {
    local_160 = (long)iVar27;
    local_78 = local_160;
    pvVar9 = (void *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    local_158 = 0;
  }
LAB_033802d4:
  local_160 = (long)iVar27;
  FUN_0337ee5c(param_1,puVar24,uVar28,pvVar9,sVar23);
  if (0 < (int)param_3) {
    uVar12 = (uint)*puVar24;
    if ((uVar12 >> 0x11 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff;
      uVar13 = (ulong)(ushort)puVar24[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                    POPCOUNT((char)(uVar13 >> 8)) +
                                                   POPCOUNT((char)(uVar13 >> 0x10))) + 2];
    }
    pvVar30 = (void *)(uVar13 + (long)param_4);
    pvVar35 = pvVar9;
    iVar27 = -(param_3 & 0xfffffffc);
    if (2 < param_3 - 1) {
      do {
        memcpy(pvVar30,pvVar35,sVar23);
        memcpy((void *)((long)pvVar30 + lVar26),(void *)((long)pvVar35 + sVar23),sVar23);
        pvVar35 = (void *)((long)((long)pvVar35 + sVar23) + sVar23);
        pvVar30 = (void *)(lVar26 + (long)pvVar30 + lVar26);
        memcpy(pvVar30,pvVar35,sVar23);
        pvVar35 = (void *)((long)pvVar35 + sVar23);
        pvVar30 = (void *)((long)pvVar30 + lVar26);
        memcpy(pvVar30,pvVar35,sVar23);
        pvVar35 = (void *)((long)pvVar35 + sVar23);
        pvVar30 = (void *)(lVar26 + (long)pvVar30);
        iVar27 = iVar27 + 4;
      } while (iVar27 != 0);
    }
    if ((param_3 & 3) != 0) {
      uVar12 = param_3 & 3;
      do {
        memcpy(pvVar30,pvVar35,sVar23);
        pvVar35 = (void *)((long)pvVar35 + sVar23);
        pvVar30 = (void *)((long)pvVar30 + lVar26);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (local_158 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pvVar9,local_160);
    goto LAB_033801c4;
  }
  uVar13 = local_160 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_158 + 0x28) < uVar13) ||
     (*(long *)(local_158 + 0x38) != uVar13 + (long)pvVar9)) {
    if (pvVar9 == (void *)0x0) goto LAB_033801c4;
    if (*(ulong *)(local_158 + 0x28) < uVar13 + 0x40) {
      *(int *)(*(long *)(local_158 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_158 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_158 + 0x10) + 0x18))
                (*(long **)(local_158 + 0x10),(long)pvVar9 - (long)*(int *)((long)pvVar9 + -4),
                 uVar13 + 0x44);
      goto LAB_033801c4;
    }
    if (*(long *)(local_158 + 0x38) != uVar13 + (long)pvVar9) {
      FUN_031cf778();
      goto LAB_033801c4;
    }
    *(void **)(local_158 + 0x38) = pvVar9;
  }
  else {
    *(void **)(local_158 + 0x38) = pvVar9;
    if (*(void **)(local_158 + 0x48) != pvVar9) goto LAB_033801c4;
  }
  FUN_031cf578();
LAB_033801c4:
  lVar34 = lVar34 + 1;
  goto LAB_0337ffe8;
LAB_033804cc:
  if (local_e0 == local_f8) {
    _local_f0 = (ulong *)((ulong)_local_f0 & 0xffffffff00000000);
  }
  if (local_e8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_03380598;
  }
  uVar13 = local_d8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_e8 + 0x28) < uVar13) ||
     (*(long *)(local_e8 + 0x38) != uVar13 + (long)local_e0)) {
    if (local_e0 == (ulong *)0x0) goto LAB_03380598;
    if (*(ulong *)(local_e8 + 0x28) < uVar13 + 0x40) {
      *(int *)(*(long *)(local_e8 + 0x30) + 0x20) = *(int *)(*(long *)(local_e8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_e8 + 0x10) + 0x18))
                (*(long **)(local_e8 + 0x10),(long)local_e0 - (long)*(int *)((long)local_e0 + -4),
                 uVar13 + 0x44);
      goto LAB_03380598;
    }
    if (*(long *)(local_e8 + 0x38) != uVar13 + (long)local_e0) {
      FUN_031cf778();
      goto LAB_03380598;
    }
    *(ulong **)(local_e8 + 0x38) = local_e0;
  }
  else {
    *(ulong **)(local_e8 + 0x38) = local_e0;
    if (*(ulong **)(local_e8 + 0x48) != local_e0) goto LAB_03380598;
  }
  FUN_031cf578();
LAB_03380598:
  uVar13 = (ulong)_local_f0;
  _local_f0 = (ulong *)((ulong)_local_f0 & 0xffffffff00000000);
  if ((long)uVar13 < 0) {
    return;
  }
  if (local_f8 == (ulong *)0x0) {
    return;
  }
  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  return;
}


