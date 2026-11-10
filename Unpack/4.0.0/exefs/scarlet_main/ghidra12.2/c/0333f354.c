/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333f354; name: FUN_0333f354
 */


void FUN_0333f354(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  void *__dest;
  char *__s;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  short *psVar14;
  ulong *puVar15;
  ulong uVar16;
  short *psVar17;
  long *plVar18;
  undefined8 uVar19;
  char *pcVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined4 local_10c;
  ulong local_108;
  ulong *local_100;
  undefined *local_f8;
  ulong local_f0 [16];
  undefined4 local_70;
  
code_r0x0333f354:
  do {
    uVar9 = *param_2;
    uVar8 = (uint)uVar9;
    puVar12 = param_2;
    if ((uVar9 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    switch((uint)puVar12[2] & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      goto switchD_0333f3bc_caseD_0;
    case 6:
      if ((uVar8 >> 1 & 1) == 0) {
        do {
          param_2 = (ulong *)param_2[1];
          if (param_2 == (ulong *)0x0) {
            return;
          }
        } while (((byte)*param_2 >> 1 & 1) == 0);
      }
      param_2 = (ulong *)param_2[3];
      if (param_2 == (ulong *)0x0) {
        return;
      }
      break;
    case 7:
      uVar13 = 0;
      puVar12 = param_2;
      if ((uVar8 >> 0x15 & 1) != 0) goto LAB_0333f44c;
      do {
        uVar16 = 0;
        while( true ) {
          uVar13 = uVar16 | uVar13;
          if (((uVar9 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0)) {
            if (((uint)uVar13 >> 5 & 1) != 0) {
              return;
            }
            plVar18 = (long *)*param_1;
            iVar21 = (int)plVar18[1];
            if (iVar21 < 1) goto LAB_0333f5bc;
            lVar24 = *plVar18;
            lVar23 = 0;
            goto LAB_0333f4e8;
          }
          uVar9 = *puVar12;
          if (((uint)uVar9 >> 0x15 & 1) == 0) break;
LAB_0333f44c:
          uVar8 = (uint)uVar9 & 0x1fffff;
          uVar16 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                        POPCOUNT((char)(uVar8 >> 0x10))) + 2];
        }
      } while( true );
    case 8:
      puVar12 = param_2;
      if ((uVar8 >> 1 & 1) == 0) {
        do {
          puVar12 = (ulong *)puVar12[1];
          if (puVar12 == (ulong *)0x0) {
            return;
          }
        } while (((byte)*puVar12 >> 1 & 1) == 0);
      }
      if (puVar12[3] == 0) {
        return;
      }
      if ((uVar8 >> 1 & 1) == 0) {
        do {
          param_2 = (ulong *)param_2[1];
          if (param_2 == (ulong *)0x0) {
            param_2 = (ulong *)0x0;
            goto code_r0x0333f354;
          }
        } while (((byte)*param_2 >> 1 & 1) == 0);
      }
      param_2 = (ulong *)param_2[3];
      break;
    default:
      local_f0[0] = 0;
      local_100 = (ulong *)0x0;
      local_f8 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                   0x1b,"Bad type visitor switch",&local_100);
      goto switchD_0333f3bc_caseD_0;
    }
  } while( true );
  while( true ) {
    if (*(ulong **)(lVar24 + lVar23 * 0x20 + 0x10) == param_2) {
      return;
    }
    lVar23 = lVar23 + 1;
    if (iVar21 <= lVar23) break;
LAB_0333f4e8:
    uVar9 = *(ulong *)(lVar24 + lVar23 * 0x20);
    if (1 < uVar9) {
      pcVar6 = (char *)(uVar9 & 0xfffffffffffffffe);
      if (pcVar6 == (char *)0x0) {
        iVar4 = 0;
      }
      else {
        sVar5 = strlen(pcVar6);
        iVar4 = (int)sVar5;
      }
      puVar12 = param_2;
      do {
        uVar9 = *puVar12;
        if (((uint)uVar9 >> 3 & 1) != 0) {
          if (puVar12 != (ulong *)0x0) {
            __s = (char *)puVar12[(ulong)(byte)POPCOUNT((byte)uVar9 & 7) + 2];
            pcVar20 = __s;
            if (__s == (char *)0x0) {
LAB_0333f57c:
              __s = (char *)0x0;
              pcVar10 = (char *)0x0;
            }
            else {
              sVar5 = strlen(__s);
              pcVar10 = __s + sVar5;
            }
            goto LAB_0333f584;
          }
          break;
        }
        if ((uVar9 & 1) != 0) {
          pcVar20 = (char *)0x0;
          goto LAB_0333f57c;
        }
        puVar12 = (ulong *)puVar12[1];
      } while (puVar12 != (ulong *)0x0);
      pcVar10 = (char *)0x0;
      __s = (char *)0x0;
      pcVar20 = (char *)0x0;
LAB_0333f584:
      if (((long)iVar4 == (long)pcVar10 - (long)pcVar20) &&
         (iVar4 = memcmp(pcVar6,__s,(long)iVar4), iVar4 == 0)) {
        return;
      }
    }
  }
LAB_0333f5bc:
  lVar23 = (long)iVar21 + 1;
  if ((int)(*(uint *)((long)plVar18 + 0xc) & 0x7fffffff) <= iVar21) {
    FUN_03340ab8(plVar18,lVar23);
    iVar21 = (int)plVar18[1];
  }
  puVar1 = (undefined8 *)(*plVar18 + (long)iVar21 * 0x20);
  *(int *)(plVar18 + 1) = (int)lVar23;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  local_100 = local_f0;
  local_f8 = (undefined *)0x8000008000000001;
  local_70 = 1;
  local_f0[0] = local_f0[0] & 0xffffffffffffff00;
  uVar19 = param_1[1];
  pcVar6 = (char *)FUN_031e12d8(param_2,&local_100,0,0);
  puVar2 = PTR_PTR_047d1a50;
  local_108 = 0;
  if (pcVar6 != (char *)0x0) {
    sVar5 = strlen(pcVar6);
    sVar5 = (size_t)((int)sVar5 + 1);
    __dest = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar5);
    memcpy(__dest,pcVar6,sVar5);
    local_108 = (ulong)__dest | 1;
  }
  puVar12 = param_2;
  do {
    uVar9 = *puVar12;
    if (((uint)uVar9 >> 4 & 1) != 0) {
      local_10c = (undefined4)puVar12[(ulong)(byte)POPCOUNT((byte)uVar9 & 0xf) + 2];
      goto LAB_0333f6f8;
    }
    if ((uVar9 & 9) != 0) {
      local_10c = 0;
      goto LAB_0333f6f8;
    }
    puVar12 = (ulong *)puVar12[1];
  } while (puVar12 != (ulong *)0x0);
  local_10c = 0;
LAB_0333f6f8:
  FUN_03340498(uVar19,&local_108,&local_10c);
  if ((local_108 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_108 - 1,0);
  }
  plVar22 = (long *)0x0;
  plVar18 = (long *)0x0;
  puVar12 = (ulong *)0x0;
  do {
    plVar18 = plVar18 + 1;
    puVar11 = puVar12;
    if (plVar22 <= plVar18) {
      if (puVar12 == param_2) {
LAB_0333f810:
        if (param_2[1] != 0) {
          FUN_0333f354(param_1);
        }
        puVar3 = local_f8;
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        if ((-1 < (long)puVar3) && (local_100 != (ulong *)0x0)) {
          (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20);
        }
switchD_0333f3bc_caseD_0:
        return;
      }
      psVar14 = (short *)0x0;
      puVar11 = (ulong *)0x0;
      puVar15 = param_2;
      do {
        uVar8 = (uint)*puVar15;
        if ((uVar8 >> 0x17 & 1) != 0) {
          uVar9 = CONCAT44(uVar8,uVar8) & 0x7fffff007fffff;
          psVar17 = (short *)puVar15[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                   POPCOUNT((char)(uVar9 >> 8)) +
                                                  POPCOUNT((char)(uVar9 >> 0x10))) + 2];
          if (psVar17 != (short *)0x0) {
            if ((int)psVar17[1] + (int)*psVar17 != 0) {
              psVar14 = psVar17;
              puVar11 = puVar15;
            }
          }
        }
        puVar15 = (ulong *)puVar15[1];
      } while (puVar15 != puVar12);
      if (puVar11 == (ulong *)0x0) goto LAB_0333f810;
      plVar18 = (long *)(psVar14 + 4);
      plVar22 = plVar18 + (long)psVar14[1] + (long)*psVar14;
    }
    uVar8 = (uint)*(undefined8 *)*plVar18;
    if ((uVar8 >> 0x11 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar9 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
      uVar7 = *(ushort *)
               (*plVar18 +
               (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                            POPCOUNT((char)(uVar9 >> 0x10))) * 8 + 0x12);
    }
    puVar12 = puVar11;
    if ((uVar7 & 0x30) != 0) {
      FUN_0333f354(param_1,*plVar18);
    }
  } while( true );
}


