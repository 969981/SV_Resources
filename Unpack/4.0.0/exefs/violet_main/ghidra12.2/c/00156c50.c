/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00156c50; name: FUN_00156c50
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

long FUN_00156c50(int *param_1,long param_2,long param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  void *__dest;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  size_t __n;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  long local_68;
  
  iVar1 = 0;
  if (0x17 < param_3) {
    iVar1 = param_4;
  }
  if (iVar1 < 1) {
    piVar21 = (int *)((long)param_1 + param_3);
    local_68 = 0x200000004;
    lVar10 = param_2;
    if (param_1 < piVar21) {
      do {
        __n = (long)piVar21 - (long)param_1;
        if (0x3ffff < (long)__n) {
          __n = 0x40000;
        }
        __dest = (void *)FUN_0015c610(&local_68,lVar10);
        memcpy(__dest,param_1,__n);
        param_1 = (int *)((long)param_1 + __n);
        lVar10 = (long)__dest + __n;
      } while (param_1 < piVar21);
    }
    return lVar10 - param_2;
  }
  local_68 = param_5;
  if (iVar1 < 4) {
    if (iVar1 != 1) {
      uVar12 = 0x11;
      uVar14 = 0x13;
      uVar11 = 0xc;
      uVar13 = 0xe;
      goto LAB_00156d20;
    }
    uVar7 = 0xd;
  }
  else {
    uVar12 = 0x14;
    uVar11 = 0xf;
    uVar13 = 0xf;
    uVar14 = 0x14;
LAB_00156d20:
    uVar7 = FUN_00152930(param_3,iVar1,param_5,uVar11,uVar12,uVar13,uVar14);
  }
  puVar6 = PTR_PTR_047cb890;
  uVar22 = (long)param_1 - param_6;
  plVar9 = (long *)(**(code **)PTR_PTR_047cb890)(0x58,0x10);
  if (plVar9 == (long *)0x0) {
    FUN_0015ed40(0x58);
  }
  uVar17 = 1 << (ulong)(uVar7 & 0x1f);
  piVar21 = (int *)((long)param_1 - uVar22);
  plVar9[9] = (long)piVar21;
  plVar9[10] = uVar22 + param_3;
  *(uint *)(plVar9 + 1) = uVar7;
  *(uint *)((long)plVar9 + 0xc) = uVar17;
  uVar15 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3;
  if (uVar15 < 0x41) {
    uVar15 = 0x40;
  }
  lVar10 = (**(code **)puVar6)(uVar15,0x40);
  if (lVar10 == 0) {
    FUN_0015ed40(uVar15);
    *plVar9 = 0;
    iVar8 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\lzb.cpp",0x23e,
                         "OodleLZB_CompressFast_Context","m_tablePos != NULL");
    if (iVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar10 = *plVar9;
  }
  else {
    *plVar9 = lVar10;
  }
  plVar9[4] = uVar22 + param_3;
  plVar9[5] = -1;
  plVar9[8] = (long)param_1;
  plVar9[6] = 0;
  plVar9[7] = 0x40000000;
  plVar9[2] = (long)param_1;
  plVar9[3] = 0;
  FUN_0015cf10(lVar10,-uVar22,(long)*(int *)((long)plVar9 + 0xc) << 3);
  plVar9[6] = 0;
  if (0 < (long)uVar22) {
    sVar5 = (short)param_1;
    if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
      uVar11 = 0xffffffffffffffff;
    }
    else {
      uVar11 = (**(code **)PTR_DAT_047cb878)("LZB Overlap Preload",0);
    }
    if (iVar1 < 3) {
      lVar20 = plVar9[1];
      lVar16 = *plVar9;
      uVar7 = 0x10;
      lVar10 = (uVar22 >> 5) - 1;
      uVar17 = uVar7;
      if (lVar10 < 1) goto LAB_00156e80;
      do {
        lVar19 = (long)(int)uVar7;
        while( true ) {
          iVar8 = *piVar21;
          sVar4 = (short)piVar21;
          piVar21 = (int *)((long)piVar21 + lVar19);
          *(short *)(lVar16 + (ulong)((uint)(iVar8 * -0x61c8864f) >>
                                     (ulong)(0x20U - (int)lVar20 & 0x1f)) * 2) = sVar4 - sVar5;
          lVar10 = lVar10 + -1;
          uVar17 = uVar7;
          if (0 < lVar10) break;
LAB_00156e80:
          if (param_1 <= piVar21) {
            if ((piVar21 != param_1) &&
               (iVar8 = FUN_0015ed20("v:/devel/projects/oodle2/core/lzb_vfast.inl",0x44,
                                     "Encode_LZB_OneChunk_VeryFast_NoSlide_Preload",
                                     "ptr == rawBufStart"), iVar8 != 0)) {
              halt_baddata();
            }
            goto LAB_0015707c;
          }
          lVar19 = (long)((ulong)uVar17 << 0x20) >> 0x21;
          lVar10 = 0;
          if (lVar19 != 0) {
            lVar10 = ((long)param_1 - (long)piVar21) / lVar19;
          }
          uVar7 = (int)uVar17 >> 1;
          if (3 < uVar17) {
            if (lVar10 < 0) {
              lVar10 = lVar10 + 1;
            }
            lVar10 = lVar10 >> 1;
          }
        }
      } while( true );
    }
    if (iVar1 != 3) {
      lVar20 = plVar9[1];
      lVar16 = *plVar9;
      uVar7 = 0;
      uVar17 = 0x10;
      lVar10 = (uVar22 >> 5) - 1;
      uVar18 = uVar17;
      if (lVar10 < 1) goto LAB_00156ff4;
      do {
        lVar19 = (long)(int)uVar17;
        while( true ) {
          uVar18 = uVar7 | ((*piVar21 * -0x61c8864f ^ (uint)(*piVar21 * -0x61c8864f) >> 0xd) &
                           (-1 << (ulong)((int)lVar20 - 2U & 0x1f) ^ 0x3fffffffU)) << 2;
          sVar4 = (short)piVar21;
          uVar7 = uVar7 + 1 & 3;
          piVar21 = (int *)((long)piVar21 + lVar19);
          *(short *)(lVar16 + (ulong)uVar18 * 2) = sVar4 - sVar5;
          lVar10 = lVar10 + -1;
          uVar18 = uVar17;
          if (0 < lVar10) break;
LAB_00156ff4:
          if (param_1 <= piVar21) {
            if (piVar21 == param_1) goto LAB_0015707c;
            iVar8 = FUN_0015ed20("v:/devel/projects/oodle2/core/lzb_fast_normal.inl",0x6a,
                                 "Encode_LZB_OneChunk_Normal_New_Preload","ptr == rawBufStart");
            goto joined_r0x00157078;
          }
          lVar19 = (long)((ulong)uVar18 << 0x20) >> 0x21;
          lVar10 = 0;
          if (lVar19 != 0) {
            lVar10 = ((long)param_1 - (long)piVar21) / lVar19;
          }
          uVar17 = (int)uVar18 >> 1;
          if (3 < uVar18) {
            if (lVar10 < 0) {
              lVar10 = lVar10 + 1;
            }
            lVar10 = lVar10 >> 1;
          }
        }
      } while( true );
    }
    uVar7 = *(uint *)(plVar9 + 1);
    lVar10 = *plVar9;
    uVar22 = uVar22 >> 5;
    uVar17 = 0x10;
    do {
      uVar22 = uVar22 - 1;
      if ((long)uVar22 < 1) {
        if (param_1 <= piVar21) goto LAB_00157028;
        lVar20 = (long)((ulong)uVar17 << 0x20) >> 0x21;
        uVar22 = 0;
        if (lVar20 != 0) {
          uVar22 = ((long)param_1 - (long)piVar21) / lVar20;
        }
        uVar18 = (int)uVar17 >> 1;
        if (3 < uVar17) {
          if ((long)uVar22 < 0) {
            uVar22 = uVar22 + 1;
          }
          uVar22 = (long)uVar22 >> 1;
        }
      }
      else {
        lVar20 = (long)(int)uVar17;
        uVar18 = uVar17;
      }
      iVar8 = *piVar21;
      sVar4 = (short)piVar21;
      piVar21 = (int *)((long)piVar21 + lVar20);
      *(short *)(lVar10 + (ulong)((iVar8 * -0x61c8864f ^ (uint)(iVar8 * -0x61c8864f) >> 0xd) &
                                 ~(-1 << (ulong)(uVar7 & 0x1f))) * 2) = sVar4 - sVar5;
      uVar17 = uVar18;
    } while( true );
  }
LAB_00157098:
  puVar2 = &LAB_0015b890;
  if (iVar1 != 3) {
    puVar2 = &LAB_0015b8b0;
  }
  puVar3 = &LAB_0015b870;
  if (2 < iVar1) {
    puVar3 = puVar2;
  }
  lVar10 = FUN_0015b4b0(puVar3,param_1,param_3,param_2,plVar9,param_6,local_68);
  puVar6 = PTR_PTR_047cb898;
  (**(code **)PTR_PTR_047cb898)(*plVar9);
  if (plVar9[3] != 0) {
    (**(code **)puVar6)();
  }
  (**(code **)puVar6)(plVar9);
  return lVar10;
LAB_00157028:
  if (piVar21 != param_1) {
    iVar8 = FUN_0015ed20("v:/devel/projects/oodle2/core/lzb_fast.inl",0x5f,
                         "Encode_LZB_OneChunk_Fast_NoSlide_Preload","ptr == rawBufStart");
joined_r0x00157078:
    if (iVar8 != 0) {
      halt_baddata();
    }
  }
LAB_0015707c:
  if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb880)(uVar11);
  }
  if (plVar9 == (long *)0x0) {
    return -1;
  }
  goto LAB_00157098;
}


