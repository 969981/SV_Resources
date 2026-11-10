/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00399c6c; name: FUN_00399c6c
 */


long * FUN_00399c6c(long *param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  void *__src;
  byte bVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x26;
  undefined2 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_58 [8];
  
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00399ca4 to 00399cab has its CatchHandler @ 0039a0c8 */
  uVar5 = FUN_0039a45c(auStack_58,pbVar2,uVar5);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x26 = uVar11 - 1 & uVar5;
    }
    else {
      unaff_x26 = uVar5;
      if (uVar11 <= uVar5) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar5 / uVar11;
        }
        unaff_x26 = uVar5 - uVar10 * uVar11;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar7, plVar9 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar8 < 2) {
        if (__n == 0) {
          do {
            if (plVar9[1] != uVar5 && (plVar9[1] & uVar11 - 1) != unaff_x26) break;
            uVar8 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
            if ((*(byte *)(plVar9 + 2) & 1) != 0) {
              uVar8 = plVar9[3];
            }
            if (uVar8 == 0) goto LAB_00399fe8;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            if (plVar9[1] != uVar5 && (plVar9[1] & uVar11 - 1) != unaff_x26) break;
            bVar3 = *(byte *)(plVar9 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar9[3];
            }
            if (sVar1 == __n) {
              if ((bVar3 & 1) == 0) {
                uVar8 = 0;
                while (*(byte *)((long)plVar9 + uVar8 + 0x11) == pbVar2[uVar8]) {
                  uVar8 = uVar8 + 1;
                  if (bVar3 >> 1 == uVar8) goto LAB_00399fe8;
                }
              }
              else {
                iVar4 = memcmp((void *)plVar9[4],pbVar2,__n);
                if (iVar4 == 0) goto LAB_00399fe8;
              }
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar8 = plVar9[1];
          if (uVar8 != uVar5) {
            if (uVar11 <= uVar8) {
              uVar10 = 0;
              if (uVar11 != 0) {
                uVar10 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar10 * uVar11;
            }
            if (uVar8 != unaff_x26) break;
          }
          uVar8 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
          if ((*(byte *)(plVar9 + 2) & 1) != 0) {
            uVar8 = plVar9[3];
          }
          if (uVar8 == 0) goto LAB_00399fe8;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar8 != uVar5) {
            if (uVar11 <= uVar8) {
              uVar10 = 0;
              if (uVar11 != 0) {
                uVar10 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar10 * uVar11;
            }
            if (uVar8 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar9 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar9[3];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              uVar8 = 0;
              while (*(byte *)((long)plVar9 + uVar8 + 0x11) == pbVar2[uVar8]) {
                uVar8 = uVar8 + 1;
                if (bVar3 >> 1 == uVar8) goto LAB_00399fe8;
              }
            }
            else {
              iVar4 = memcmp((void *)plVar9[4],pbVar2,__n);
              if (iVar4 == 0) goto LAB_00399fe8;
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  if ((*param_2 & 1) == 0) {
    lVar15 = *(long *)(param_2 + 8);
    lVar14 = *(long *)param_2;
    plVar9[4] = *(long *)(param_2 + 0x10);
    plVar9[3] = lVar15;
    plVar9[2] = lVar14;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar8 < 0x17) {
      __dest = (void *)((long)plVar9 + 0x11);
      *(char *)(plVar9 + 2) = (char)((int)uVar8 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 0039a080 to 0039a087 has its CatchHandler @ 0039a088 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
      plVar9[3] = uVar8;
      plVar9[4] = (long)__dest;
      plVar9[2] = uVar10 | 1;
    }
    memcpy(__dest,__src,uVar8 + 1);
  }
  plVar9[5] = 0;
  *plVar9 = 0;
  plVar9[1] = uVar5;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
                    /* try { // try from 00399e4c to 00399e53 has its CatchHandler @ 0039a094 */
    FUN_0039a8bc(param_1,uVar8);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x26 = uVar11 - 1 & uVar5;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      if (uVar5 < uVar11) {
        unaff_x26 = uVar5;
        goto LAB_00399e84;
      }
      uVar8 = 0;
      if (uVar11 != 0) {
        uVar8 = uVar5 / uVar11;
      }
      unaff_x26 = uVar5 - uVar8 * uVar11;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if (plVar6 == (long *)0x0) goto LAB_00399f88;
LAB_00399e90:
    *plVar9 = *plVar6;
  }
  else {
LAB_00399e84:
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar6 != (long *)0x0) goto LAB_00399e90;
LAB_00399f88:
    plVar6 = param_1 + 2;
    *plVar9 = *plVar6;
    *plVar6 = (long)plVar9;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar6;
    if (*plVar9 == 0) goto LAB_00399fdc;
    uVar5 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar5 = uVar5 & uVar11 - 1;
    }
    else if (uVar11 <= uVar5) {
      uVar8 = 0;
      if (uVar11 != 0) {
        uVar8 = uVar5 / uVar11;
      }
      uVar5 = uVar5 - uVar8 * uVar11;
    }
    plVar6 = (long *)(*param_1 + uVar5 * 8);
  }
  *plVar6 = (long)plVar9;
LAB_00399fdc:
  param_1[3] = param_1[3] + 1;
LAB_00399fe8:
  return plVar9 + 5;
}


