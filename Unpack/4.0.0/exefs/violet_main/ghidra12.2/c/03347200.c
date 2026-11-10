/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03347200; name: FUN_03347200
 */


/* WARNING: Removing unreachable block (ram,0x03347834) */

undefined8 FUN_03347200(long param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  void *__dest;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  short *psVar14;
  ulong *puVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 *puVar18;
  short *psVar19;
  ulong uVar20;
  undefined4 uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  ulong *local_78;
  char *local_70;
  ulong *local_68;
  
  if (param_2 != (ulong *)0x0) {
    for (; (*param_2 & 1) == 0; param_2 = (ulong *)param_2[1]) {
    }
  }
  lVar23 = *(long *)(param_1 + 0x60);
  local_68 = (ulong *)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar23 + 0x20));
  local_78 = param_2;
  lVar6 = FUN_03335274(lVar23 + 0x28,&local_78,&local_68);
  iVar8 = *(int *)(*(long *)(lVar23 + 0x28) + ((lVar6 << 0x20) >> 0x1c) + 8);
  if (iVar8 == (int)local_68) {
    iVar8 = *(int *)(lVar23 + 0x20);
    lVar6 = (long)iVar8;
    if ((int)(*(uint *)(lVar23 + 0x24) & 0x7fffffff) <= iVar8) {
      FUN_030fe388((long *)(lVar23 + 0x18),PTR_PTR_047d1a50,lVar6 + 1);
      iVar8 = *(int *)(lVar23 + 0x20);
    }
    puVar18 = (undefined8 *)(*(long *)(lVar23 + 0x18) + (long)iVar8 * 0x10);
    *(int *)(lVar23 + 0x20) = (int)(lVar6 + 1);
    *puVar18 = 0;
    puVar18[1] = 0x8000000000000000;
    iVar8 = *(int *)(lVar23 + 0x50);
    lVar6 = (long)iVar8;
    if ((int)(*(uint *)(lVar23 + 0x54) & 0x7fffffff) <= iVar8) {
      FUN_0133bb88(lVar23 + 0x48,PTR_PTR_047d1a50,lVar6 + 1);
      iVar8 = *(int *)(lVar23 + 0x50);
    }
    *(int *)(*(long *)(lVar23 + 0x48) + (long)iVar8 * 4) = (int)local_68;
    *(int *)(lVar23 + 0x50) = (int)(lVar6 + 1);
  }
  else {
    lVar6 = *(long *)(lVar23 + 0x18);
    if (lVar6 != 0) {
      plVar22 = (long *)(lVar6 + (long)iVar8 * 0x10);
      plVar24 = plVar22 + 1;
      if ((int)*plVar24 < 1) {
        return 0;
      }
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*plVar22 + lVar6 * 4);
        iVar8 = *(int *)(param_1 + 0x20);
        if (iVar8 <= *(int *)(param_1 + 0x28) * 2) {
          FUN_0334a3a0((long *)(param_1 + 0x18),iVar8 << 1);
          iVar8 = *(int *)(param_1 + 0x20);
        }
        uVar5 = (iVar1 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar1 * -0x61c8864f & 0xff00ffU) << 8;
        uVar5 = iVar8 - 1U & (uVar5 >> 0x10 | uVar5 << 0x10);
        lVar23 = *(long *)(param_1 + 0x18);
        piVar16 = (int *)(lVar23 + (long)(int)uVar5 * 4);
        if (*piVar16 == -1) {
LAB_033473b8:
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *piVar16 = iVar1;
          lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + (long)iVar1 * 8);
          if (*(char *)(param_1 + 0x78) == '\0') {
            bVar4 = *(char *)(lVar23 + 0x34) == '\0';
          }
          else {
            bVar4 = true;
          }
          *(bool *)(param_1 + 0x78) = bVar4;
          if (*(char *)(param_1 + 0x79) == '\0') {
            bVar4 = *(char *)(lVar23 + 0x34) != '\0';
          }
          else {
            bVar4 = true;
          }
          *(bool *)(param_1 + 0x79) = bVar4;
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
        else {
          if (*piVar16 != iVar1) {
            do {
              uVar5 = uVar5 + 1 & iVar8 - 1U;
              iVar2 = *(int *)(lVar23 + (long)(int)uVar5 * 4);
              if (iVar2 == -1) {
                piVar16 = (int *)(lVar23 + (long)(int)uVar5 * 4);
                goto LAB_033473b8;
              }
            } while (iVar2 != iVar1);
            piVar16 = (int *)(lVar23 + (long)(int)uVar5 * 4);
          }
          *piVar16 = iVar1;
        }
        lVar6 = lVar6 + 1;
        if ((int)*plVar24 <= lVar6) {
          return 0;
        }
      } while( true );
    }
  }
  uVar10 = *param_2;
  puVar12 = param_2;
  if ((uVar10 & 1) == 0) {
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
  }
  if ((param_2 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
    uVar13 = 0;
    puVar12 = param_2;
    uVar17 = uVar10;
    if (((uint)uVar10 >> 0x15 & 1) != 0) goto LAB_03347478;
    do {
      uVar20 = 0;
      while( true ) {
        uVar13 = uVar20 | uVar13;
        if (((uVar17 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0)) {
          if (((uint)uVar13 >> 5 & 1) != 0) goto LAB_03347884;
          puVar12 = param_2;
          if (((uint)uVar10 >> 0x1c & 1) == 0) goto LAB_033474c4;
          goto LAB_033474d8;
        }
        uVar17 = *puVar12;
        if (((uint)uVar17 >> 0x15 & 1) == 0) break;
LAB_03347478:
        uVar20 = CONCAT44((int)uVar17,(int)uVar17) & 0x1fffff001fffff;
        uVar20 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                                      POPCOUNT((char)(uVar20 >> 0x10))) + 2];
      }
    } while( true );
  }
  goto LAB_03347884;
LAB_03347870:
  if (param_2[1] != 0) {
    FUN_03347200(param_1,param_2[1],param_3);
  }
  goto LAB_03347884;
  while (uVar10 = *puVar12, ((uint)uVar10 >> 0x1c & 1) == 0) {
LAB_033474c4:
    if (((uVar10 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
    goto LAB_033474dc;
  }
LAB_033474d8:
  if (puVar12 == (ulong *)0x0) {
LAB_033474dc:
    iVar8 = (int)param_3[1];
    if (iVar8 <= (int)param_3[2] * 2) {
      FUN_0334a624(param_3,iVar8 << 1);
      iVar8 = (int)param_3[1];
    }
    uVar5 = (int)param_2 * -0x61c8864f;
    uVar9 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar5 = iVar8 - 1U & (uVar5 + (uVar5 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9);
    lVar6 = *param_3;
    puVar18 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8);
    if ((ulong *)*puVar18 == (ulong *)0xffffffffffffffff) {
LAB_03347580:
      *(int *)(param_3 + 2) = (int)param_3[2] + 1;
      *puVar18 = param_2;
      puVar12 = param_2;
      while (uVar10 = *puVar12, ((uint)uVar10 >> 3 & 1) == 0) {
        if (((uVar10 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
        goto LAB_033475d4;
      }
      if (puVar12 != (ulong *)0x0) {
        local_68 = (ulong *)puVar12[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
        goto LAB_033475d8;
      }
LAB_033475d4:
      local_68 = (ulong *)0x0;
LAB_033475d8:
      if (*(int *)(param_1 + 0x7c) == 0) {
        plVar22 = (long *)(param_1 + 0x30);
        puVar12 = param_2;
        do {
          uVar10 = *puVar12;
          if (((uint)uVar10 >> 4 & 1) != 0) {
            uVar21 = (undefined4)puVar12[(ulong)(byte)POPCOUNT((byte)uVar10 & 0xf) + 2];
            goto LAB_0334767c;
          }
        } while (((uVar10 & 9) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
        uVar21 = 0;
LAB_0334767c:
        uVar5 = FUN_0334a968(plVar22,&local_68);
        if (*(uint *)(param_1 + 0x38) == uVar5) {
          uVar9 = uVar5;
          if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= (int)uVar5) {
            FUN_0334108c(plVar22,PTR_PTR_047d1a50,(long)(int)(uVar5 + 1));
            uVar9 = *(uint *)(param_1 + 0x38);
          }
          puVar11 = local_68;
          lVar6 = *plVar22;
          puVar12 = (ulong *)(lVar6 + (long)(int)uVar9 * 0x10);
          *puVar12 = 0;
          puVar3 = PTR_PTR_047d1a50;
          if (local_68 != (ulong *)0x0) {
            sVar7 = strlen((char *)local_68);
            sVar7 = (size_t)((int)sVar7 + 1);
            __dest = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar7);
            memcpy(__dest,puVar11,sVar7);
            *puVar12 = (ulong)__dest | 1;
          }
          *(undefined4 *)(lVar6 + (long)(int)uVar9 * 0x10 + 8) = uVar21;
          *(uint *)(param_1 + 0x38) = uVar5 + 1;
        }
        uVar21 = *(undefined4 *)(*plVar22 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
      }
      else {
        puVar12 = param_2;
        do {
          uVar10 = *puVar12;
          if (((uint)uVar10 >> 4 & 1) != 0) {
            uVar21 = (undefined4)puVar12[(ulong)(byte)POPCOUNT((byte)uVar10 & 0xf) + 2];
            goto LAB_0334775c;
          }
        } while (((uVar10 & 9) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
        uVar21 = 0;
      }
LAB_0334775c:
      puVar12 = local_68;
      local_78 = local_68;
      if (local_68 == (ulong *)0x0) {
        local_70 = (char *)0x0;
      }
      else {
        sVar7 = strlen((char *)local_68);
        local_70 = (char *)((long)puVar12 + sVar7);
      }
      FUN_033478b8(param_1,&local_78,uVar21);
      plVar24 = (long *)0x0;
      plVar22 = (long *)0x0;
      puVar12 = (ulong *)0x0;
LAB_03347798:
      plVar22 = plVar22 + 1;
      puVar11 = puVar12;
      if (plVar24 <= plVar22) {
        if (param_2 == puVar12) goto LAB_03347870;
        psVar14 = (short *)0x0;
        puVar11 = (ulong *)0x0;
        puVar15 = param_2;
        do {
          uVar5 = (uint)*puVar15;
          if ((uVar5 >> 0x17 & 1) != 0) {
            uVar10 = CONCAT44(uVar5,uVar5) & 0x7fffff007fffff;
            psVar19 = (short *)puVar15[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                     POPCOUNT((char)(uVar10 >> 8)) +
                                                    POPCOUNT((char)(uVar10 >> 0x10))) + 2];
            if (psVar19 != (short *)0x0) {
              if ((int)psVar19[1] + (int)*psVar19 != 0) {
                psVar14 = psVar19;
                puVar11 = puVar15;
              }
            }
          }
          puVar15 = (ulong *)puVar15[1];
        } while (puVar15 != puVar12);
        if (puVar11 == (ulong *)0x0) goto LAB_03347870;
        plVar22 = (long *)(psVar14 + 4);
        plVar24 = plVar22 + (long)psVar14[1] + (long)*psVar14;
      }
      uVar5 = (uint)*(undefined8 *)*plVar22;
      puVar12 = puVar11;
      if (((uVar5 >> 0x11 & 1) != 0) &&
         (uVar10 = CONCAT44(uVar5,uVar5) & 0x1ffff0001ffff,
         (*(ushort *)
           (*plVar22 +
           (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                        POPCOUNT((char)(uVar10 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
        FUN_03347200(param_1,*plVar22,param_3);
      }
      goto LAB_03347798;
    }
    if ((ulong *)*puVar18 != param_2) {
      do {
        uVar5 = uVar5 + 1 & iVar8 - 1U;
        puVar12 = *(ulong **)(lVar6 + (long)(int)uVar5 * 8);
        if (puVar12 == (ulong *)0xffffffffffffffff) {
          puVar18 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8);
          goto LAB_03347580;
        }
      } while (puVar12 != param_2);
      puVar18 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8);
    }
    *puVar18 = param_2;
  }
LAB_03347884:
  *(int *)(*(long *)(param_1 + 0x60) + 0x50) = *(int *)(*(long *)(param_1 + 0x60) + 0x50) + -1;
  return 0;
}


