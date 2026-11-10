/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337c630; name: FUN_0337c630
 */


/* WARNING: Removing unreachable block (ram,0x0337d21c) */

int FUN_0337c630(int *param_1,int param_2,long *param_3,void *param_4)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined4 *__src;
  void *pvVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined2 uVar12;
  size_t sVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  byte *pbVar21;
  long lVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  short *psVar25;
  int iVar26;
  undefined8 *puVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  short *psVar30;
  undefined8 *puVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  ulong *puVar39;
  int iVar40;
  byte bVar41;
  ulong local_2e8;
  ulong local_2e0;
  ulong *local_2d8;
  ulong *local_290;
  undefined8 local_288;
  long local_280;
  ulong *local_278;
  long local_270;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  ulong *local_90;
  ulong *puStack_88;
  ulong local_80;
  int local_78;
  ulong *local_70 [2];
  
  if (param_2 == 0) {
    local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
    plVar33 = *(long **)(param_1 + 2);
    puVar4 = (undefined1 *)*plVar33;
    lVar19 = plVar33[1];
    if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
      plVar8 = (long *)plVar33[7];
      if (plVar8 == (long *)0x0) {
        memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
        *plVar33 = lVar19;
      }
      else {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
      }
    }
    else {
      local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
      *plVar33 = (long)(puVar4 + 1);
    }
    puVar20 = local_290;
    uVar37 = (ulong)((byte)local_290 >> 1) & 0x3f;
    iVar36 = (int)uVar37;
    if ((char)(byte)local_290 < '\0') {
      uVar38 = 6;
      do {
        local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
        plVar33 = *(long **)(param_1 + 2);
        puVar4 = (undefined1 *)*plVar33;
        lVar19 = plVar33[1];
        if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
          plVar8 = (long *)plVar33[7];
          if (plVar8 == (long *)0x0) {
            memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
            *plVar33 = lVar19;
          }
          else {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
          }
        }
        else {
          local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
          *plVar33 = (long)(puVar4 + 1);
        }
        uVar35 = uVar38 & 0x3f;
        uVar38 = (ulong)((int)uVar38 + 7);
        uVar37 = ((ulong)local_290 & 0x7f) << uVar35 | uVar37;
        iVar36 = (int)uVar37;
      } while ((char)(byte)local_290 < '\0');
    }
    param_2 = -iVar36;
    if (((ulong)puVar20 & 1) == 0) {
      param_2 = iVar36;
    }
  }
  if (param_2 == 6) {
    return 0;
  }
  if (param_2 != 5) {
    puVar20 = (ulong *)*param_3;
    if (puVar20 == (ulong *)0x0) {
      local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
      plVar33 = *(long **)(param_1 + 2);
      puVar4 = (undefined1 *)*plVar33;
      lVar19 = plVar33[1];
      if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
        plVar8 = (long *)plVar33[7];
        if (plVar8 == (long *)0x0) {
          memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
          *plVar33 = lVar19;
        }
        else {
          (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
        }
      }
      else {
        local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
        *plVar33 = (long)(puVar4 + 1);
      }
      puVar20 = local_290;
      uVar37 = (ulong)((byte)local_290 >> 1) & 0x3f;
      if ((char)(byte)local_290 < '\0') {
        uVar38 = 6;
        do {
          local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
          plVar33 = *(long **)(param_1 + 2);
          puVar4 = (undefined1 *)*plVar33;
          lVar19 = plVar33[1];
          if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
            plVar8 = (long *)plVar33[7];
            if (plVar8 == (long *)0x0) {
              memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
              *plVar33 = lVar19;
            }
            else {
              (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
            }
          }
          else {
            local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
            *plVar33 = (long)(puVar4 + 1);
          }
          uVar35 = uVar38 & 0x3f;
          uVar38 = (ulong)((int)uVar38 + 7);
          uVar37 = ((ulong)local_290 & 0x7f) << uVar35 | uVar37;
        } while ((char)(byte)local_290 < '\0');
      }
      lVar19 = *(long *)(param_1 + 6);
      uVar38 = -uVar37;
      if (((ulong)puVar20 & 1) == 0) {
        uVar38 = uVar37;
      }
      if (param_1[0x1e] + 1 < param_1[8]) {
        lVar34 = (long)(param_1[0x1e] + 1);
        do {
          local_290 = (ulong *)0x400000008;
          local_288 = 0x1000001;
          FUN_031d9d10(*(undefined8 *)(lVar19 + lVar34 * 8),&local_290);
          param_1[0x1e] = (int)lVar34;
          lVar34 = lVar34 + 1;
          lVar19 = *(long *)(param_1 + 6);
        } while (lVar34 < param_1[8]);
      }
      puVar20 = *(ulong **)
                 (lVar19 + (-(uVar38 >> 0x1f & 1) & 0xfffffff800000000 | (uVar38 & 0xffffffff) << 3)
                 );
      *param_3 = (long)puVar20;
    }
    puVar23 = puVar20;
    if ((*puVar20 & 1) == 0) {
      do {
        puVar23 = (ulong *)puVar23[1];
      } while ((*puVar23 & 1) == 0);
    }
    puVar3 = puVar20;
    if ((puVar23[2] & 0x1f) != 7) {
      puVar3 = (ulong *)0x0;
    }
    if (param_4 == (void *)0x0) {
      puVar23 = puVar3;
      while( true ) {
        uVar17 = (uint)*puVar23;
        if ((uVar17 >> 0x14 & 1) != 0) break;
        if (((*puVar23 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
        goto LAB_0337cac0;
      }
      if (puVar23 != (ulong *)0x0) {
        uVar37 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
        uVar12 = (undefined2)
                 puVar23[(ulong)(byte)(POPCOUNT((char)uVar37) + POPCOUNT((char)(uVar37 >> 8)) +
                                      POPCOUNT((char)(uVar37 >> 0x10))) + 2];
        goto LAB_0337cac4;
      }
LAB_0337cac0:
      uVar12 = 0;
LAB_0337cac4:
      param_4 = (void *)(**(code **)(**(long **)(param_1 + 0x1c) + 0x18))
                                  (*(long **)(param_1 + 0x1c),uVar12);
      puVar23 = puVar3;
      while( true ) {
        uVar17 = (uint)*puVar23;
        if ((uVar17 >> 0x14 & 1) != 0) break;
        if (((*puVar23 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
        goto LAB_0337cb18;
      }
      if (puVar23 != (ulong *)0x0) {
        uVar17 = uVar17 & 0xfffff;
        sVar13 = (size_t)(ushort)puVar23[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                       POPCOUNT((char)(uVar17 >> 8)) +
                                                      POPCOUNT((char)(uVar17 >> 0x10))) + 2];
        goto LAB_0337cb1c;
      }
LAB_0337cb18:
      sVar13 = 0;
LAB_0337cb1c:
      memset(param_4,0,sVar13);
      lVar19 = *(long *)(param_1 + 0x2e);
      puVar23 = (ulong *)*param_3;
      iVar36 = *(int *)(lVar19 + 0x20);
      if (puVar23 != (ulong *)0x0) {
        puVar28 = puVar23;
        do {
          uVar37 = *puVar28;
          if (((uint)uVar37 >> 2 & 1) != 0) {
            uVar37 = puVar28[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2];
            goto LAB_0337cb6c;
          }
          puVar28 = (ulong *)puVar28[1];
        } while (puVar28 != (ulong *)0x0);
      }
      uVar37 = 0;
LAB_0337cb6c:
      iVar26 = iVar36;
      if ((uVar37 & 1) != 0) {
        piVar2 = (int *)((uVar37 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        iVar26 = *(int *)(lVar19 + 0x20);
      }
      iVar16 = iVar26;
      if (iVar26 <= iVar36 + 1) {
        iVar16 = iVar36 + 1;
      }
      if ((int)(*(uint *)(lVar19 + 0x24) & 0x7fffffff) < iVar16) {
        FUN_03375910(lVar19 + 0x18,PTR_PTR_047d1a50,(long)iVar16);
        iVar26 = *(int *)(lVar19 + 0x20);
      }
      uVar17 = iVar16 - iVar26;
      if (uVar17 == 0 || iVar16 < iVar26) {
        if (iVar16 < iVar26) {
          *(int *)(lVar19 + 0x20) = iVar16;
        }
      }
      else {
        puVar29 = (undefined8 *)(*(long *)(lVar19 + 0x18) + (long)iVar26 * 0x10);
        *(int *)(lVar19 + 0x20) = iVar16;
        if (iVar16 != iVar26 + 1) {
          iVar26 = -(uVar17 & 0xfffffffe);
          puVar27 = puVar29;
          do {
            puVar29 = puVar27 + 4;
            *puVar27 = 0;
            puVar27[1] = 0xffffffff00000000;
            iVar26 = iVar26 + 2;
            puVar27[2] = 0;
            puVar27[3] = 0xffffffff00000000;
            puVar27 = puVar29;
          } while (iVar26 != 0);
        }
        if ((uVar17 & 1) != 0) {
          *puVar29 = 0;
          puVar29[1] = 0xffffffff00000000;
        }
      }
      local_290 = puVar23;
      lVar34 = FUN_03379400((long *)(lVar19 + 0xd8),&local_290);
      if (lVar34 == 0) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = *(undefined4 *)(*(long *)(lVar19 + 0xd8) + (long)*(int *)(lVar34 + 4) * 0x10 + 8);
      }
      puVar29 = (undefined8 *)(*(long *)(lVar19 + 0x18) + (long)iVar36 * 0x10);
      *puVar29 = param_4;
      *(undefined4 *)(puVar29 + 1) = uVar15;
      if ((uVar37 & 1) != 0) {
        plVar8 = (long *)(uVar37 & 0xfffffffffffffffe);
        plVar33 = plVar8 + 1;
        do {
          lVar19 = *plVar33;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *(int *)plVar33 = (int)lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    else {
      iVar36 = 0;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        iVar26 = param_1[0x18];
        uVar37 = (long)iVar26 + 1;
        if ((int)(param_1[0x19] & 0x7fffffffU) <= iVar26) {
          FUN_0133bb88(param_1 + 0x16,PTR_PTR_047d1a50,uVar37);
          iVar26 = param_1[0x18];
        }
        *(int *)(*(long *)(param_1 + 0x16) + (long)iVar26 * 4) = iVar36;
        iVar26 = param_1[0x22];
        param_1[0x18] = (int)uVar37;
        if (iVar26 == 0) {
          iVar26 = 0;
          iVar16 = 0;
        }
        else {
          puVar29 = *(undefined8 **)(param_1 + 0x20);
          iVar16 = 0;
          puVar24 = (undefined8 *)0x0;
          puVar27 = puVar29 + (long)iVar26 + -1;
          while( true ) {
            iVar26 = iVar26 + -1;
            if (*(int *)*puVar27 == (int)uVar37 + -1) {
              iVar16 = iVar16 + 1;
              *(int *)*puVar27 = iVar36;
              if (puVar24 == (undefined8 *)0x0) {
                puVar31 = puVar27 + -1;
                puVar27 = puVar24;
              }
              else {
                if (puVar27 != puVar24) {
                  *puVar27 = *puVar24;
                }
                puVar29 = puVar27 + 1;
                puVar31 = puVar24 + -1;
                puVar27 = (undefined8 *)0x0;
              }
            }
            else {
              puVar31 = puVar29;
              if (puVar24 != (undefined8 *)0x0) {
                puVar31 = puVar27 + 1;
                puVar27 = puVar24;
              }
            }
            puVar24 = puVar27;
            puVar27 = puVar31;
            if (iVar26 == 0) break;
            uVar37 = (ulong)(uint)param_1[0x18];
          }
          iVar26 = param_1[0x22];
        }
        iVar40 = param_1[0x26];
        param_1[0x22] = iVar26 - iVar16;
        if (iVar40 == 0) {
          iVar26 = 0;
          iVar16 = 0;
        }
        else {
          puVar29 = *(undefined8 **)(param_1 + 0x24);
          iVar26 = 0;
          puVar27 = (undefined8 *)0x0;
          puVar24 = puVar29 + (long)iVar40 * 2 + -2;
          do {
            if (*(int *)((long)puVar24 + 0xc) == iVar36) {
              iVar26 = iVar26 + 1;
              *(long *)((undefined4 *)*puVar24 +
                       (ulong)(byte)POPCOUNT((byte)*(undefined4 *)*puVar24 & 1) * 2 + 4) = *param_3;
              if (puVar27 == (undefined8 *)0x0) {
                puVar31 = puVar24 + -2;
              }
              else {
                if (puVar24 != puVar27) {
                  uVar9 = puVar27[1];
                  *puVar24 = *puVar27;
                  puVar24[1] = uVar9;
                }
                puVar29 = puVar24 + 2;
                puVar31 = puVar27 + -2;
                puVar27 = (undefined8 *)0x0;
              }
            }
            else {
              puVar31 = puVar29;
              if (puVar27 != (undefined8 *)0x0) {
                puVar31 = puVar24 + 2;
                puVar24 = puVar27;
              }
              puVar27 = puVar24;
            }
            iVar40 = iVar40 + -1;
            puVar24 = puVar31;
          } while (iVar40 != 0);
          iVar16 = param_1[0x26];
        }
        param_1[0x26] = iVar16 - iVar26;
      }
      else {
        local_c0 = 1;
        local_b8 = 0;
        local_b0 = &local_290;
        local_d0 = PTR_DAT_047e34b8 + 0x10;
        local_c8 = 0xffffffff;
        local_98 = 0;
        local_a8 = 0;
        local_a0 = 0x1bf;
        memset(&local_290,0,0x1c0);
        FUN_0322bd4c(&local_d0,"corrupt file",0xc);
        iVar26 = FUN_03226f50(0x484994d5,&local_290,
                              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                              ,0x3df);
        if (iVar26 != 0) {
          CallSupervisor(0x26);
        }
      }
    }
    local_290 = (ulong *)0x0;
    local_288 = 0x8000000000000000;
    lVar19 = tpidr_el0;
    lVar34 = *(long *)(lVar19 + 0x1000b8);
    if (lVar34 == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar19 + 0x1000b8) = lVar34;
    }
    local_280 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
    if (*(long *)(local_280 + 8) == 0) {
      local_270 = 0x80;
      local_70[0] = (ulong *)&DAT_00000080;
      if (local_280 != 0) {
        local_90 = (ulong *)&DAT_00000080;
        if (0x7f < *(ulong *)(local_280 + 0x28)) {
          local_278 = *(ulong **)(local_280 + 0x38);
          if (local_278 + 0x10 <= *(ulong **)(local_280 + 0x40)) {
            *(ulong **)(local_280 + 0x38) = local_278 + 0x10;
            goto LAB_0337d0b4;
          }
        }
        local_278 = (ulong *)FUN_031cf3b4(local_280,&local_90);
        goto LAB_0337d0b4;
      }
    }
    else {
      local_280 = 0;
    }
    local_70[0] = (ulong *)&DAT_00000080;
    local_270 = 0x80;
    local_278 = (ulong *)(**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
LAB_0337d0b4:
    plVar33 = (long *)PTR_PTR_047d1a50;
    iVar26 = 0;
    local_288 = CONCAT44(0x80000080,(undefined4)local_288);
    puVar23 = puVar3;
    while (puVar23 != (ulong *)0x0) {
      puVar23 = puVar20;
      do {
        uVar17 = (uint)*puVar23;
        if ((uVar17 >> 0x17 & 1) != 0) {
          if (puVar23 != (ulong *)0x0) {
            uVar17 = uVar17 & 0x7fffff;
            puVar23 = (ulong *)puVar23[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                     POPCOUNT((char)(uVar17 >> 8)) +
                                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
            if (puVar23 != (ulong *)0x0) {
              puVar23 = (ulong *)(ulong)(uint)((int)*(short *)((long)puVar23 + 2) +
                                              (int)(short)*puVar23);
            }
          }
          break;
        }
        if ((*puVar23 & 1) != 0) {
          puVar23 = (ulong *)0x0;
          break;
        }
        puVar23 = (ulong *)puVar23[1];
      } while (puVar23 != (ulong *)0x0);
      do {
        uVar37 = *puVar20;
        puVar20 = (ulong *)puVar20[1];
      } while ((uVar37 & 1) == 0);
      iVar26 = (int)puVar23 + iVar26;
      puVar23 = puVar20;
    }
    local_290 = local_278;
    FUN_0337eb08(param_1,iVar26,&local_290);
    plVar8 = (long *)0x0;
    plVar32 = (long *)0x0;
    lVar19 = 0;
    puVar20 = (ulong *)0x0;
LAB_0337d180:
    plVar8 = plVar8 + 1;
    puVar23 = puVar20;
    if (plVar32 <= plVar8) {
      if (puVar3 == puVar20) goto LAB_0337e218;
      psVar25 = (short *)0x0;
      puVar23 = (ulong *)0x0;
      puVar28 = puVar3;
      do {
        uVar17 = (uint)*puVar28;
        if ((uVar17 >> 0x17 & 1) != 0) {
          uVar37 = CONCAT44(uVar17,uVar17) & 0x7fffff007fffff;
          psVar30 = (short *)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                   POPCOUNT((char)(uVar37 >> 8)) +
                                                  POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          if (psVar30 != (short *)0x0) {
            if ((int)psVar30[1] + (int)*psVar30 != 0) {
              psVar25 = psVar30;
              puVar23 = puVar28;
            }
          }
        }
        puVar28 = (ulong *)puVar28[1];
      } while (puVar28 != puVar20);
      if (puVar23 == (ulong *)0x0) goto LAB_0337e218;
      plVar8 = (long *)(psVar25 + 4);
      plVar32 = plVar8 + (long)psVar25[1] + (long)*psVar25;
    }
    uVar17 = (uint)*(undefined8 *)*plVar8;
    puVar20 = puVar23;
    if (((uVar17 >> 0x11 & 1) != 0) &&
       (uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff,
       (*(ushort *)
         (*plVar8 +
         (ulong)(byte)(POPCOUNT((char)uVar37) + POPCOUNT((char)(uVar37 >> 8)) +
                      POPCOUNT((char)(uVar37 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
      if (*(char *)((long)local_290 + lVar19) != '\0') {
        puVar28 = (ulong *)*plVar8;
        uVar37 = *puVar28;
        uVar17 = (uint)uVar37;
        puVar23 = puVar28;
        if ((uVar37 & 1) == 0) {
          do {
            puVar23 = (ulong *)puVar23[1];
          } while ((*puVar23 & 1) == 0);
        }
        local_70[0] = puVar28;
        switch((uint)puVar23[2] & 0x1f) {
        case 2:
        case 4:
          puVar23 = puVar28;
          if ((uVar37 & 1) == 0) {
            do {
              puVar23 = (ulong *)puVar23[1];
            } while ((*puVar23 & 1) == 0);
          }
          puVar39 = puVar28;
          if ((puVar23[2] & 0x1f) != 4) {
            puVar39 = (ulong *)0x0;
          }
          for (; (*puVar39 & 1) == 0; puVar39 = (ulong *)puVar39[1]) {
          }
          if ((int)puVar39[2] == 0x2004) {
            local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
            plVar33 = *(long **)(param_1 + 2);
            puVar4 = (undefined1 *)*plVar33;
            lVar34 = plVar33[1];
            if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
              plVar10 = (long *)plVar33[7];
              if (plVar10 == (long *)0x0) {
                memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                *plVar33 = lVar34;
              }
              else {
                (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
              }
            }
            else {
              local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
              *plVar33 = (long)(puVar4 + 1);
            }
            plVar33 = (long *)PTR_PTR_047d1a50;
            uVar17 = (uint)*puVar28;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                            POPCOUNT((char)(uVar37 >> 8)) +
                                                           POPCOUNT((char)(uVar37 >> 0x10))) + 2];
            }
            *(byte *)(uVar37 + (long)param_4) = (byte)local_90;
          }
          else {
            local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
            plVar33 = *(long **)(param_1 + 2);
            puVar4 = (undefined1 *)*plVar33;
            lVar34 = plVar33[1];
            if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
              plVar10 = (long *)plVar33[7];
              if (plVar10 == (long *)0x0) {
                memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                *plVar33 = lVar34;
              }
              else {
                (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
              }
            }
            else {
              local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
              *plVar33 = (long)(puVar4 + 1);
            }
            puVar23 = local_90;
            uVar37 = (ulong)((byte)local_90 >> 1) & 0x3f;
            if ((char)(byte)local_90 < '\0') {
              uVar38 = 6;
              do {
                local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
                plVar33 = *(long **)(param_1 + 2);
                puVar4 = (undefined1 *)*plVar33;
                lVar34 = plVar33[1];
                if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
                  plVar10 = (long *)plVar33[7];
                  if (plVar10 == (long *)0x0) {
                    memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                    *plVar33 = lVar34;
                  }
                  else {
                    (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
                  }
                }
                else {
                  local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
                  *plVar33 = (long)(puVar4 + 1);
                }
                uVar35 = uVar38 & 0x3f;
                uVar38 = (ulong)((int)uVar38 + 7);
                uVar37 = ((ulong)local_90 & 0x7f) << uVar35 | uVar37;
              } while ((char)(byte)local_90 < '\0');
            }
            plVar33 = (long *)PTR_PTR_047d1a50;
            uVar38 = -uVar37;
            if (((ulong)puVar23 & 1) == 0) {
              uVar38 = uVar37;
            }
            uVar17 = (uint)*puVar28;
            if ((uVar17 >> 0x11 & 1) == 0) {
              uVar37 = 0;
            }
            else {
              uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
              uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                            POPCOUNT((char)(uVar37 >> 8)) +
                                                           POPCOUNT((char)(uVar37 >> 0x10))) + 2];
            }
            *(ulong *)(uVar37 + (long)param_4) = uVar38;
          }
          break;
        case 3:
          uVar9 = FUN_0337c444(param_1);
          uVar17 = (uint)*puVar28;
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar37 = 0;
          }
          else {
            uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                          POPCOUNT((char)(uVar37 >> 8)) +
                                                         POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          }
          *(undefined8 *)(uVar37 + (long)param_4) = uVar9;
          break;
        case 5:
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar37 = 0;
          }
          else {
            uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                          POPCOUNT((char)(uVar37 >> 8)) +
                                                         POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          }
          if ((char)param_1[1] == '\0') {
            plVar33 = *(long **)(param_1 + 2);
            __src = (undefined4 *)*plVar33;
            lVar34 = plVar33[1];
            sVar13 = lVar34 - (long)__src;
            if ((long)sVar13 < 4) {
              plVar10 = (long *)plVar33[7];
              if (plVar10 == (long *)0x0) {
                memcpy(&local_90,__src,sVar13);
                *plVar33 = lVar34;
              }
              else {
                (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,4);
              }
            }
            else {
              local_90 = (ulong *)CONCAT44(local_90._4_4_,*__src);
              *plVar33 = (long)(__src + 1);
            }
            plVar33 = (long *)PTR_PTR_047d1a50;
            if ((char)param_1[4] != '\0') {
              uVar17 = ((uint)local_90 & 0xff00ff00) >> 8 | ((uint)local_90 & 0xff00ff) << 8;
              local_90 = (ulong *)CONCAT44(local_90._4_4_,uVar17 >> 0x10 | uVar17 << 0x10);
            }
            *(uint *)((long)param_4 + uVar37) = (uint)local_90;
          }
          else {
            plVar10 = *(long **)(param_1 + 2);
            puVar29 = (undefined8 *)*plVar10;
            if (plVar10[1] - (long)puVar29 < 8) {
              plVar11 = (long *)plVar10[7];
              if (plVar11 == (long *)0x0) {
                memcpy(&local_90,puVar29,plVar10[1] - (long)puVar29);
                *plVar10 = plVar10[1];
              }
              else {
                (**(code **)(*plVar11 + 0x38))(plVar11,plVar10,&local_90,8);
              }
            }
            else {
              local_90 = (ulong *)*puVar29;
              *plVar10 = *plVar10 + 8;
            }
            if ((char)param_1[4] != '\0') {
              uVar38 = ((ulong)local_90 & 0xff00ff00ff00ff00) >> 8 |
                       ((ulong)local_90 & 0xff00ff00ff00ff) << 8;
              uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
              local_90 = (ulong *)(uVar38 >> 0x20 | uVar38 << 0x20);
            }
            *(ulong **)((long)param_4 + uVar37) = local_90;
          }
          break;
        case 6:
          local_90 = (ulong *)0x0;
          uVar37 = 0;
          uVar17 = (uint)*puVar28;
          if ((uVar17 >> 0x11 & 1) != 0) {
            uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                          POPCOUNT((char)(uVar37 >> 8)) +
                                                         POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          }
          FUN_0337ecc0(param_1,uVar37 + (long)param_4,&local_90);
          uVar17 = (uint)*puVar28;
          puVar23 = puVar28;
          if ((*puVar28 & 1) == 0) {
            do {
              puVar23 = (ulong *)puVar23[1];
            } while ((*puVar23 & 1) == 0);
          }
          puVar39 = puVar28;
          if ((puVar23[2] & 0x1f) != 6) {
            puVar39 = (ulong *)0x0;
          }
          puVar23 = puVar39;
          do {
            if (((byte)*puVar23 >> 1 & 1) != 0) {
              if (1 < puVar23[3]) goto switchD_0337d298_default;
              break;
            }
            puVar23 = (ulong *)puVar23[1];
          } while (puVar23 != (ulong *)0x0);
          if ((uVar17 >> 0x11 & 1) == 0) {
            uVar37 = 0;
          }
          else {
            uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                          POPCOUNT((char)(uVar37 >> 8)) +
                                                         POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          }
          iVar26 = *(int *)(uVar37 + (long)param_4);
          if (0 < param_1[0x18]) {
            bVar14 = false;
            lVar34 = 0;
            do {
              if (iVar26 == *(int *)(*(long *)(param_1 + 0x16) + lVar34 * 4)) {
                puVar23 = *(ulong **)
                           (*(long *)(*(long *)(param_1 + 0x2e) + 8) +
                           (long)*(int *)(*(long *)(*(long *)(param_1 + 0x2e) + 0x38) +
                                          (long)iVar26 * 0x10 + 8) * 8);
                if (puVar23 != (ulong *)0x0) {
                  puVar28 = puVar23;
LAB_0337d6f4:
                  uVar37 = *puVar28;
                  if (((uint)uVar37 >> 2 & 1) == 0) goto code_r0x0337d6fc;
                  if ((puVar28[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2] & 1) != 0) {
                    plVar10 = (long *)(puVar28[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2] &
                                      0xfffffffffffffffe);
                    plVar33 = plVar10 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                      if (bVar14) {
                        *(int *)plVar33 = (int)*plVar33 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    bVar41 = POPCOUNT((byte)*puVar39 & 1);
                    puVar39[(ulong)(CONCAT12(bVar41,(ushort)bVar41) & 0xff) + 2] = (ulong)puVar23;
                    do {
                      lVar22 = *plVar33;
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                      if (bVar14) {
                        *(int *)plVar33 = (int)lVar22 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    bVar14 = true;
                    if ((plVar10 != (long *)0x0) && ((int)lVar22 == 1)) {
                      (**(code **)(*plVar10 + 8))();
                      goto LAB_0337d7b0;
                    }
                    goto LAB_0337d7b4;
                  }
                }
LAB_0337d708:
                bVar41 = POPCOUNT((byte)*puVar39 & 1);
                puVar39[(ulong)(CONCAT12(bVar41,(ushort)bVar41) & 0xff) + 2] = (ulong)puVar23;
LAB_0337d7b0:
                bVar14 = true;
              }
LAB_0337d7b4:
              lVar34 = lVar34 + 1;
            } while (lVar34 < param_1[0x18]);
            plVar33 = (long *)PTR_PTR_047d1a50;
            if (bVar14) break;
          }
          iVar16 = param_1[0x26];
          lVar34 = (long)iVar16;
          if ((int)(param_1[0x27] & 0x7fffffffU) <= iVar16) {
            FUN_033806fc(param_1 + 0x24,lVar34 + 1);
            iVar16 = param_1[0x26];
          }
          puVar29 = (undefined8 *)(*(long *)(param_1 + 0x24) + (long)iVar16 * 0x10);
          param_1[0x26] = (int)(lVar34 + 1);
          *puVar29 = puVar39;
          *(int *)(puVar29 + 1) = iVar36;
          *(int *)((long)puVar29 + 0xc) = iVar26;
          plVar33 = (long *)PTR_PTR_047d1a50;
          break;
        case 7:
          if (*param_1 < 2) {
            local_70[0] = (ulong *)0x0;
            uVar37 = 0;
            if (((uint)*puVar28 >> 0x11 & 1) != 0) {
              uVar17 = (uint)*puVar28 & 0x1ffff;
              uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                            POPCOUNT((char)(uVar17 >> 8)) +
                                                           POPCOUNT((char)(uVar17 >> 0x10))) + 2];
            }
            uVar9 = 0;
          }
          else {
            if (((uint)*puVar28 >> 0x11 & 1) == 0) {
              uVar37 = 0;
            }
            else {
              uVar17 = (uint)*puVar28 & 0x1ffff;
              uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                            POPCOUNT((char)(uVar17 >> 8)) +
                                                           POPCOUNT((char)(uVar17 >> 0x10))) + 2];
            }
            uVar9 = 3;
          }
          FUN_0337c630(param_1,uVar9,local_70,uVar37 + (long)param_4);
          break;
        case 8:
          puVar23 = puVar28;
          if ((uVar37 & 1) == 0) {
            do {
              puVar23 = (ulong *)puVar23[1];
            } while ((*puVar23 & 1) == 0);
          }
          puVar39 = puVar28;
          if ((puVar23[2] & 0x1f) != 8) {
            puVar39 = (ulong *)0x0;
          }
          puVar23 = puVar39;
          do {
            if ((*puVar23 & 1) != 0) {
              if (puVar23 != (ulong *)0x0) {
                uVar37 = puVar23[2] >> 8;
                iVar26 = (int)(puVar23[2] >> 8);
                if (0 < iVar26) goto LAB_0337d48c;
              }
              break;
            }
            puVar23 = (ulong *)puVar23[1];
          } while (puVar23 != (ulong *)0x0);
          puVar23 = puVar39;
          do {
            if (((byte)*puVar23 >> 1 & 1) != 0) {
              local_2d8 = (ulong *)puVar23[3];
              goto LAB_0337d5f0;
            }
            puVar23 = (ulong *)puVar23[1];
          } while (puVar23 != (ulong *)0x0);
          local_2d8 = (ulong *)0x0;
LAB_0337d5f0:
          local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
          plVar33 = *(long **)(param_1 + 2);
          puVar4 = (undefined1 *)*plVar33;
          lVar34 = plVar33[1];
          if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
            plVar10 = (long *)plVar33[7];
            if (plVar10 == (long *)0x0) {
              memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
              *plVar33 = lVar34;
            }
            else {
              (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
            }
          }
          else {
            local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
            *plVar33 = (long)(puVar4 + 1);
          }
          puVar23 = local_90;
          uVar37 = (ulong)((byte)local_90 >> 1) & 0x3f;
          if ((char)(byte)local_90 < '\0') {
            uVar38 = 6;
            do {
              local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
              plVar33 = *(long **)(param_1 + 2);
              puVar4 = (undefined1 *)*plVar33;
              lVar34 = plVar33[1];
              if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
                plVar10 = (long *)plVar33[7];
                if (plVar10 == (long *)0x0) {
                  memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                  *plVar33 = lVar34;
                }
                else {
                  (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
                }
              }
              else {
                local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
                *plVar33 = (long)(puVar4 + 1);
              }
              uVar35 = uVar38 & 0x3f;
              uVar38 = (ulong)((int)uVar38 + 7);
              uVar37 = ((ulong)local_90 & 0x7f) << uVar35 | uVar37;
            } while ((char)(byte)local_90 < '\0');
          }
          uVar38 = -uVar37;
          if (((ulong)puVar23 & 1) == 0) {
            uVar38 = uVar37;
          }
          uVar17 = (uint)*puVar28;
          if ((uVar17 >> 0x11 & 1) == 0) {
            local_2e0 = 0;
          }
          else {
            uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
            local_2e0 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                             POPCOUNT((char)(uVar37 >> 8)) +
                                                            POPCOUNT((char)(uVar37 >> 0x10))) + 2];
          }
          if (puVar39 == (ulong *)0x0) {
            local_2e8 = 0;
LAB_0337db38:
            bVar14 = true;
          }
          else {
            do {
              uVar37 = *puVar39;
              if (((uint)uVar37 >> 2 & 1) != 0) {
                local_2e8 = puVar39[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2];
                goto LAB_0337db28;
              }
              puVar39 = (ulong *)puVar39[1];
            } while (puVar39 != (ulong *)0x0);
            local_2e8 = 0;
LAB_0337db28:
            if ((local_2e8 & 1) == 0) goto LAB_0337db38;
            piVar2 = (int *)((local_2e8 & 0xfffffffffffffffe) + 8);
            do {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar14) {
                *piVar2 = *piVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar14 = false;
          }
          if (local_2d8 == (ulong *)0x0) {
            local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
            plVar33 = *(long **)(param_1 + 2);
            puVar4 = (undefined1 *)*plVar33;
            lVar34 = plVar33[1];
            if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
              plVar10 = (long *)plVar33[7];
              if (plVar10 == (long *)0x0) {
                memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                *plVar33 = lVar34;
              }
              else {
                (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
              }
            }
            else {
              local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
              *plVar33 = (long)(puVar4 + 1);
            }
            puVar23 = local_90;
            uVar37 = (ulong)((byte)local_90 >> 1) & 0x3f;
            iVar26 = (int)uVar37;
            if ((char)(byte)local_90 < '\0') {
              uVar35 = 6;
              do {
                local_90 = (ulong *)CONCAT71(local_90._1_7_,0xff);
                plVar33 = *(long **)(param_1 + 2);
                puVar4 = (undefined1 *)*plVar33;
                lVar34 = plVar33[1];
                if (lVar34 - (long)puVar4 == 0 || lVar34 < (long)puVar4) {
                  plVar10 = (long *)plVar33[7];
                  if (plVar10 == (long *)0x0) {
                    memcpy(&local_90,puVar4,lVar34 - (long)puVar4);
                    *plVar33 = lVar34;
                  }
                  else {
                    (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,&local_90,1);
                  }
                }
                else {
                  local_90 = (ulong *)CONCAT71(local_90._1_7_,*puVar4);
                  *plVar33 = (long)(puVar4 + 1);
                }
                uVar37 = ((ulong)local_90 & 0x7f) << (uVar35 & 0x3f) | uVar37;
                iVar26 = (int)uVar37;
                uVar35 = (ulong)((int)uVar35 + 7);
              } while ((char)(byte)local_90 < '\0');
            }
            iVar40 = param_1[0x1e];
            lVar34 = (long)iVar40;
            lVar22 = *(long *)(param_1 + 6);
            iVar16 = -iVar26;
            if (((ulong)puVar23 & 1) == 0) {
              iVar16 = iVar26;
            }
            if (iVar40 < iVar16) {
              do {
                iVar40 = iVar40 + 1;
                lVar1 = lVar34 * 8;
                lVar34 = lVar34 + 1;
                local_90 = (ulong *)0x400000008;
                puStack_88 = (ulong *)0x1000001;
                FUN_031d9d10(*(undefined8 *)(lVar22 + lVar1 + 8),&local_90);
                lVar22 = *(long *)(param_1 + 6);
                param_1[0x1e] = iVar40;
              } while (iVar16 != lVar34);
            }
            local_2d8 = *(ulong **)(lVar22 + (long)iVar16 * 8);
          }
          lVar22 = *(long *)(param_1 + 0x2e);
          local_90 = local_2d8;
          lVar34 = FUN_03379400(lVar22 + 0xd8,&local_90);
          if (lVar34 == 0) {
            uVar18 = 0;
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = *(uint *)(lVar34 + 4);
            uVar18 = ((int)lVar34 - (int)*(undefined8 *)(lVar22 + 0xe8)) * 0x20000000;
          }
          if ((int)(uVar17 | uVar18) < 0) {
            FUN_0337e9e8(lVar22,*(undefined4 *)(lVar22 + 0xe0),local_90);
          }
          puVar23 = local_2d8;
          do {
            uVar17 = (uint)*puVar23;
            if ((uVar17 >> 0x14 & 1) != 0) {
              uVar18 = 0;
              if (puVar23 != (ulong *)0x0) {
                uVar37 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
                uVar18 = (uint)(ushort)puVar23[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                             POPCOUNT((char)(uVar37 >> 8)) +
                                                            POPCOUNT((char)(uVar37 >> 0x10))) + 2];
              }
              goto LAB_0337de24;
            }
            if ((*puVar23 & 1) != 0) {
              uVar18 = 0;
              goto LAB_0337de24;
            }
            puVar23 = (ulong *)puVar23[1];
          } while (puVar23 != (ulong *)0x0);
          uVar18 = 0;
LAB_0337de24:
          iVar26 = (int)uVar38;
          puVar28 = (ulong *)(**(code **)(**(long **)(param_1 + 0x1c) + 0x18))
                                       (*(long **)(param_1 + 0x1c),(long)(int)(iVar26 * uVar18));
          puVar23 = local_2d8;
          do {
            uVar17 = (uint)*puVar23;
            if ((uVar17 >> 0x14 & 1) != 0) {
              uVar18 = 0;
              if (puVar23 != (ulong *)0x0) {
                uVar17 = uVar17 & 0xfffff;
                uVar18 = (uint)(ushort)puVar23[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                             POPCOUNT((char)(uVar17 >> 8)) +
                                                            POPCOUNT((char)(uVar17 >> 0x10))) + 2];
              }
              goto LAB_0337de84;
            }
            if ((*puVar23 & 1) != 0) {
              uVar18 = 0;
              goto LAB_0337de84;
            }
            puVar23 = (ulong *)puVar23[1];
          } while (puVar23 != (ulong *)0x0);
          uVar18 = 0;
LAB_0337de84:
          memset(puVar28,0,(ulong)(uVar18 * iVar26));
          uVar37 = (ulong)*(uint *)(*(long *)(param_1 + 0x2e) + 0x40);
          *(ulong *)((long)param_4 + local_2e0) = uVar37;
          uVar9 = *(undefined8 *)(param_1 + 0x2e);
          if (local_2d8 == (ulong *)0x0) {
            uVar35 = 0;
          }
          else {
            puVar23 = local_2d8;
            do {
              uVar35 = *puVar23;
              if (((uint)uVar35 >> 2 & 1) != 0) {
                uVar35 = puVar23[(uVar35 >> 1 & 1) + (uVar35 & 1) + 2];
                goto LAB_0337def0;
              }
              puVar23 = (ulong *)puVar23[1];
            } while (puVar23 != (ulong *)0x0);
            uVar35 = 0;
          }
LAB_0337def0:
          local_90 = puVar28;
          puStack_88 = local_2d8;
          local_80 = uVar35;
          local_78 = iVar26;
          if ((uVar35 & 1) == 0) {
            FUN_0337ba38(uVar9,uVar37,&local_90);
          }
          else {
            piVar2 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = *piVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            FUN_0337ba38(uVar9,uVar37,&local_90);
            if ((uVar35 & 1) != 0) {
              plVar10 = (long *)(uVar35 & 0xfffffffffffffffe);
              plVar33 = plVar10 + 1;
              do {
                lVar34 = *plVar33;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar7) {
                  *(int *)plVar33 = (int)lVar34 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((plVar10 != (long *)0x0) && ((int)lVar34 == 1)) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
          plVar33 = (long *)PTR_PTR_047d1a50;
          puVar23 = local_2d8;
          while( true ) {
            uVar17 = (uint)*puVar23;
            if ((uVar17 >> 0x14 & 1) != 0) break;
            if (((*puVar23 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
            goto LAB_0337dfb4;
          }
          if (puVar23 != (ulong *)0x0) {
            uVar37 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
            uVar12 = (undefined2)
                     puVar23[(ulong)(byte)(POPCOUNT((char)uVar37) + POPCOUNT((char)(uVar37 >> 8)) +
                                          POPCOUNT((char)(uVar37 >> 0x10))) + 2];
            goto LAB_0337dfb8;
          }
LAB_0337dfb4:
          uVar12 = 0;
LAB_0337dfb8:
          FUN_0337ee5c(param_1,local_2d8,uVar38 & 0xffffffff,puVar28,uVar12);
          if (!bVar14) {
            plVar11 = (long *)(local_2e8 & 0xfffffffffffffffe);
            plVar10 = plVar11 + 1;
            do {
              lVar34 = *plVar10;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *(int *)plVar10 = (int)lVar34 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar34 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
      }
      goto switchD_0337d298_default;
    }
    goto LAB_0337d180;
  }
  local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
  plVar33 = *(long **)(param_1 + 2);
  puVar4 = (undefined1 *)*plVar33;
  lVar19 = plVar33[1];
  if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
    plVar8 = (long *)plVar33[7];
    if (plVar8 == (long *)0x0) {
      memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
      *plVar33 = lVar19;
    }
    else {
      (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
    }
  }
  else {
    local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
    *plVar33 = (long)(puVar4 + 1);
  }
  puVar20 = local_290;
  uVar37 = (ulong)((byte)local_290 >> 1) & 0x3f;
  if ((char)(byte)local_290 < '\0') {
    uVar38 = 6;
    do {
      local_290 = (ulong *)CONCAT71(local_290._1_7_,0xff);
      plVar33 = *(long **)(param_1 + 2);
      puVar4 = (undefined1 *)*plVar33;
      lVar19 = plVar33[1];
      if (lVar19 - (long)puVar4 == 0 || lVar19 < (long)puVar4) {
        plVar8 = (long *)plVar33[7];
        if (plVar8 == (long *)0x0) {
          memcpy(&local_290,puVar4,lVar19 - (long)puVar4);
          *plVar33 = lVar19;
        }
        else {
          (**(code **)(*plVar8 + 0x38))(plVar8,plVar33,&local_290,1);
        }
      }
      else {
        local_290 = (ulong *)CONCAT71(local_290._1_7_,*puVar4);
        *plVar33 = (long)(puVar4 + 1);
      }
      uVar35 = uVar38 & 0x3f;
      uVar38 = (ulong)((int)uVar38 + 7);
      uVar37 = ((ulong)local_290 & 0x7f) << uVar35 | uVar37;
    } while ((char)(byte)local_290 < '\0');
  }
  lVar19 = *(long *)(param_1 + 0x2e);
  uVar38 = -uVar37;
  if (((ulong)puVar20 & 1) == 0) {
    uVar38 = uVar37;
  }
  uVar17 = *(uint *)(*(long *)(lVar19 + 0x18) +
                     (long)*(int *)(*(long *)(param_1 + 0x16) +
                                   (-(uVar38 >> 0x1f & 1) & 0xfffffffc00000000 |
                                   (uVar38 & 0xffffffff) << 2)) * 0x10 + 8);
  if ((int)uVar17 < 0) {
    pbVar21 = *(byte **)(*(long *)(lVar19 + 8) + (long)(int)-uVar17 * 8);
    puVar20 = (ulong *)0x0;
    if (pbVar21 != (byte *)0x0) {
      for (; (*pbVar21 & 1) == 0; pbVar21 = *(byte **)(pbVar21 + 8)) {
      }
      puVar20 = (ulong *)PTR_DAT_047e5c40;
      switch(*(uint *)(pbVar21 + 0x10) & 0x1f) {
      case 0:
        break;
      case 1:
        puVar20 = (ulong *)PTR_DAT_047e5b88;
        break;
      case 2:
        puVar20 = (ulong *)PTR_DAT_047e5c48;
        break;
      case 3:
        puVar20 = (ulong *)PTR_DAT_047e5c50;
        break;
      case 4:
        puVar20 = (ulong *)PTR_DAT_047e5c58;
        break;
      case 5:
        puVar20 = (ulong *)PTR_DAT_047e5c60;
        break;
      case 6:
        puVar20 = (ulong *)PTR_DAT_047e5c68;
        break;
      case 7:
        puVar20 = (ulong *)PTR_DAT_047e5c70;
        break;
      case 8:
        puVar20 = (ulong *)PTR_DAT_047e5c78;
        break;
      default:
        puVar20 = (ulong *)0x0;
        goto LAB_0337d008;
      }
      puVar23 = puVar20;
      do {
        uVar37 = *puVar23;
        if (((uint)uVar37 >> 2 & 1) != 0) goto LAB_0337cff0;
        puVar23 = (ulong *)puVar23[1];
      } while (puVar23 != (ulong *)0x0);
    }
  }
  else {
    puVar20 = *(ulong **)(*(long *)(lVar19 + 8) + (ulong)uVar17 * 8);
    if (puVar20 != (ulong *)0x0) {
      puVar23 = puVar20;
      do {
        uVar37 = *puVar23;
        if (((uint)uVar37 >> 2 & 1) != 0) goto LAB_0337cff0;
        puVar23 = (ulong *)puVar23[1];
      } while (puVar23 != (ulong *)0x0);
    }
  }
LAB_0337d008:
  *param_3 = (long)puVar20;
LAB_0337d00c:
  return *(int *)(*(long *)(param_1 + 0x16) + (long)(int)uVar38 * 4);
LAB_0337cff0:
  if ((puVar23[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2] & 1) != 0) {
    plVar8 = (long *)(puVar23[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2] & 0xfffffffffffffffe);
    plVar33 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar14) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar33 = plVar8 + 1;
    *param_3 = (long)puVar20;
    do {
      lVar19 = *plVar33;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar14) {
        *(int *)plVar33 = (int)lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar19 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
    goto LAB_0337d00c;
  }
  goto LAB_0337d008;
  while (puVar39 = (ulong *)puVar39[1], puVar39 != (ulong *)0x0) {
LAB_0337d48c:
    if (((byte)*puVar39 >> 1 & 1) != 0) {
      puVar23 = (ulong *)puVar39[3];
      goto LAB_0337dbec;
    }
  }
  puVar23 = (ulong *)0x0;
LAB_0337dbec:
  uVar38 = *puVar23;
  uVar18 = (uint)uVar38;
  puVar39 = puVar23;
  if ((uVar38 & 1) == 0) {
    do {
      puVar39 = (ulong *)puVar39[1];
    } while ((*puVar39 & 1) == 0);
  }
  if ((puVar39[2] & 0x1f) == 5) {
    if ((uVar17 >> 0x11 & 1) == 0) {
      uVar38 = 0;
    }
    else {
      uVar38 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
      uVar38 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar38) +
                                                    POPCOUNT((char)(uVar38 >> 8)) +
                                                   POPCOUNT((char)(uVar38 >> 0x10))) + 2];
    }
    puVar23 = (ulong *)(uVar38 + (long)param_4);
    if ((char)param_1[1] == '\0') {
      plVar33 = *(long **)(param_1 + 2);
      uVar38 = (ulong)(uint)(iVar26 << 2);
      pvVar5 = (void *)*plVar33;
      if (plVar33[1] - (long)pvVar5 < (long)uVar38) {
        plVar10 = (long *)plVar33[7];
        if (plVar10 == (long *)0x0) {
          memcpy(puVar23,pvVar5,plVar33[1] - (long)pvVar5);
          lVar34 = plVar33[1];
          goto LAB_0337e1d0;
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,puVar23,uVar38);
      }
      else {
        memcpy(puVar23,pvVar5,uVar38);
        lVar34 = *plVar33 + uVar38;
LAB_0337e1d0:
        *plVar33 = lVar34;
      }
      plVar33 = (long *)PTR_PTR_047d1a50;
      if ((char)param_1[4] != '\0') {
        puVar28 = puVar23;
        do {
          uVar17 = ((uint)*puVar28 & 0xff00ff00) >> 8 | ((uint)*puVar28 & 0xff00ff) << 8;
          puVar39 = (ulong *)((long)puVar28 + 4);
          *(uint *)puVar28 = uVar17 >> 0x10 | uVar17 << 0x10;
          puVar28 = puVar39;
        } while (puVar39 < (ulong *)((long)puVar23 + (uVar37 & 0xffffffff) * 4));
      }
      goto switchD_0337d298_default;
    }
    plVar33 = *(long **)(param_1 + 2);
    uVar38 = (ulong)(uint)(iVar26 << 3);
    pvVar5 = (void *)*plVar33;
    if (plVar33[1] - (long)pvVar5 < (long)uVar38) {
      plVar10 = (long *)plVar33[7];
      if (plVar10 == (long *)0x0) {
        memcpy(puVar23,pvVar5,plVar33[1] - (long)pvVar5);
        lVar34 = plVar33[1];
        goto LAB_0337e184;
      }
      (**(code **)(*plVar10 + 0x38))(plVar10,plVar33,puVar23,uVar38);
    }
    else {
      memcpy(puVar23,pvVar5,uVar38);
      lVar34 = *plVar33 + uVar38;
LAB_0337e184:
      *plVar33 = lVar34;
    }
    plVar33 = (long *)PTR_PTR_047d1a50;
    if ((char)param_1[4] != '\0') {
      puVar28 = puVar23;
      do {
        uVar38 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
        uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
        puVar39 = puVar28 + 1;
        *puVar28 = uVar38 >> 0x20 | uVar38 << 0x20;
        puVar28 = puVar39;
      } while (puVar39 < puVar23 + (uVar37 & 0xffffffff));
    }
    goto switchD_0337d298_default;
  }
  if ((uVar17 >> 0x11 & 1) == 0) {
    uVar37 = 0;
  }
  else {
    uVar37 = CONCAT44(uVar17,uVar17) & 0x1ffff0001ffff;
    uVar37 = (ulong)(ushort)puVar28[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                  POPCOUNT((char)(uVar37 >> 8)) +
                                                 POPCOUNT((char)(uVar37 >> 0x10))) + 2];
  }
  puVar28 = puVar23;
  if ((uVar18 >> 0x14 & 1) == 0) {
    do {
      if (((uVar38 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
      goto LAB_0337e0f4;
      uVar38 = *puVar28;
      uVar18 = (uint)uVar38;
    } while ((uVar18 >> 0x14 & 1) == 0);
LAB_0337e0cc:
    uVar38 = CONCAT44(uVar18,uVar18) & 0xfffff000fffff;
    uVar12 = (undefined2)
             puVar28[(ulong)(byte)(POPCOUNT((char)uVar38) + POPCOUNT((char)(uVar38 >> 8)) +
                                  POPCOUNT((char)(uVar38 >> 0x10))) + 2];
  }
  else {
    if (puVar23 != (ulong *)0x0) goto LAB_0337e0cc;
LAB_0337e0f4:
    uVar12 = 0;
  }
  FUN_0337ee5c(param_1,puVar23,iVar26,uVar37 + (long)param_4,uVar12);
switchD_0337d298_default:
  lVar19 = lVar19 + 1;
  goto LAB_0337d180;
code_r0x0337d6fc:
  puVar28 = (ulong *)puVar28[1];
  if (puVar28 == (ulong *)0x0) goto LAB_0337d708;
  goto LAB_0337d6f4;
LAB_0337e218:
  if (local_278 == local_290) {
    local_288 = local_288 & 0xffffffff00000000;
  }
  if (local_280 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0337e2e4;
  }
  uVar37 = local_270 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_280 + 0x28) < uVar37) ||
     (*(long *)(local_280 + 0x38) != uVar37 + (long)local_278)) {
    if (local_278 == (ulong *)0x0) goto LAB_0337e2e4;
    if (*(ulong *)(local_280 + 0x28) < uVar37 + 0x40) {
      *(int *)(*(long *)(local_280 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_280 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_280 + 0x10) + 0x18))
                (*(long **)(local_280 + 0x10),(long)local_278 - (long)*(int *)((long)local_278 + -4)
                 ,uVar37 + 0x44);
      goto LAB_0337e2e4;
    }
    if (*(long *)(local_280 + 0x38) != uVar37 + (long)local_278) {
      FUN_031cf778();
      goto LAB_0337e2e4;
    }
    *(ulong **)(local_280 + 0x38) = local_278;
  }
  else {
    *(ulong **)(local_280 + 0x38) = local_278;
    if (*(ulong **)(local_280 + 0x48) != local_278) goto LAB_0337e2e4;
  }
  FUN_031cf578();
LAB_0337e2e4:
  uVar37 = local_288;
  local_288 = local_288 & 0xffffffff00000000;
  if ((long)uVar37 < 0) {
    return iVar36;
  }
  if (local_290 == (ulong *)0x0) {
    return iVar36;
  }
  (**(code **)(*plVar33 + 0x20))(plVar33);
  return iVar36;
}


