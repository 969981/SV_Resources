/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00184bd0; name: FUN_00184bd0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00184bd0(float param_1,float param_2,long *param_3,int param_4,code *param_5,
                 undefined8 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  void *__src;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  float *pfVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  ulong local_4d0;
  long local_4a0;
  long local_498;
  long local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  
  local_4d0 = param_3[2];
  uVar29 = local_4d0 & 0xffffffff;
  if (0 < (int)local_4d0) {
    lVar22 = 0x400;
    uVar16 = uVar29;
    do {
      puVar1 = (undefined4 *)(*param_3 + lVar22);
      uVar11 = (*param_5)(puVar1 + -0x100,*puVar1);
      lVar22 = lVar22 + 0x408;
      uVar16 = uVar16 - 1;
      puVar1[1] = uVar11;
    } while (uVar16 != 0);
  }
  uVar10 = ((int)local_4d0 + -1) * (int)local_4d0;
  uVar26 = uVar10;
  if ((int)uVar10 < 0) {
    uVar26 = uVar10 + 1;
  }
  uVar16 = (long)((ulong)uVar26 << 0x20) >> 0x21;
  FUN_0015c528(&local_4a0,(uVar16 + (long)((int)uVar26 >> 1) * 2) * 8,param_6,0);
  pfVar23 = (float *)(local_498 + 0xfU & 0xfffffffffffffff0);
  if (((ulong)((local_490 + local_498) - (long)pfVar23) / 0x18 < uVar16) &&
     (iVar12 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                            "needmakefit","newsize <= m_capacity"), iVar12 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pfVar3 = (float *)0x0;
  if (2 < uVar10 + 1) {
    pfVar3 = pfVar23;
  }
  if (0 < (int)local_4d0) {
    uVar27 = 0;
    lVar21 = 0;
    lVar22 = 1;
    lVar28 = 0x80c;
    uVar16 = 1;
    if (1 < (long)(int)local_4d0) goto LAB_00184d48;
    while( true ) {
      uVar27 = uVar16;
      lVar22 = lVar22 + 1;
      lVar28 = lVar28 + 0x408;
      if (uVar27 == uVar29) break;
      uVar16 = uVar27 + 1;
      if ((long)uVar16 < (long)(int)local_4d0) {
LAB_00184d48:
        pfVar23 = pfVar3 + lVar21 * 6 + 3;
        lVar24 = 0;
        lVar17 = lVar28;
        do {
          lVar25 = *param_3 + uVar27 * 0x408;
          piVar2 = (int *)(*param_3 + lVar17);
          thunk_FUN_0015f2c0(&local_488,lVar25,piVar2 + -0x101);
          fVar13 = (float)(*param_5)(&local_488,piVar2[-1] + *(int *)(lVar25 + 0x400));
          iVar12 = *(int *)(lVar25 + 0x404);
          iVar8 = *piVar2;
          pfVar23[-2] = fVar13;
          pfVar23[-1] = (float)uVar27;
          *pfVar23 = (float)((int)lVar22 + (int)lVar24);
          lVar24 = lVar24 + 1;
          pfVar23[-3] = (float)((iVar12 - (int)fVar13) + iVar8) * 0.125 + param_1;
          pfVar23[1] = *(float *)(lVar25 + 0x400);
          pfVar23[2] = (float)piVar2[-1];
          lVar17 = lVar17 + 0x408;
          pfVar23 = pfVar23 + 6;
        } while ((lVar22 - uVar29) + lVar24 != 0);
        lVar21 = lVar21 + lVar24;
      }
    }
    if (0x18 < lVar21 * 0x18) {
      lVar22 = (lVar21 * 0x18 >> 3) * -0x5555555555555555;
      uVar29 = lVar22 >> 1;
      do {
        uVar29 = uVar29 - 1;
        uVar16 = uVar29 * 2 | 1;
        if ((long)uVar16 < lVar22) {
          uVar27 = uVar29;
          do {
            uVar18 = uVar16;
            uVar16 = uVar18 + 1;
            if ((long)uVar16 < lVar22) {
              if (pfVar3[uVar16 * 6] <= pfVar3[uVar18 * 6]) {
                uVar16 = uVar18;
              }
              uVar18 = uVar16;
            }
            pfVar23 = pfVar3 + uVar18 * 6;
            pfVar19 = pfVar3 + uVar27 * 6;
            if (*pfVar23 < *pfVar19) break;
            local_488 = *(undefined8 *)pfVar19;
            local_480 = *(undefined8 *)(pfVar19 + 2);
            local_478 = *(undefined8 *)(pfVar19 + 4);
            uVar7 = *(undefined8 *)(pfVar23 + 2);
            uVar20 = *(undefined8 *)(pfVar23 + 4);
            *(undefined8 *)pfVar19 = *(undefined8 *)pfVar23;
            *(undefined8 *)(pfVar19 + 2) = uVar7;
            *(undefined8 *)(pfVar19 + 4) = uVar20;
            uVar16 = uVar18 << 1 | 1;
            *(undefined8 *)pfVar23 = local_488;
            *(undefined8 *)(pfVar23 + 2) = local_480;
            *(undefined8 *)(pfVar23 + 4) = local_478;
            uVar27 = uVar18;
          } while ((long)uVar16 < lVar22);
        }
      } while (0 < (long)uVar29);
    }
    if (0 < lVar21) {
LAB_00184f7c:
      do {
        fVar13 = pfVar3[1];
        fVar5 = pfVar3[2];
        fVar30 = *pfVar3;
        lVar22 = (lVar21 * 0x18 >> 3) * -0x5555555555555555;
        fVar4 = pfVar3[3];
        fVar6 = pfVar3[4];
        fVar9 = pfVar3[5];
        if (lVar21 * 0x18 < 0x19) {
          uVar29 = 0;
        }
        else {
          uVar27 = 1;
          uVar16 = 2;
          uVar18 = 0;
          uVar29 = uVar27;
          if (2 < lVar22) goto LAB_00184ffc;
          while( true ) {
            pfVar19 = pfVar3 + uVar29 * 6;
            pfVar23 = pfVar3 + uVar18 * 6;
            uVar7 = *(undefined8 *)(pfVar19 + 2);
            uVar20 = *(undefined8 *)(pfVar19 + 4);
            uVar27 = uVar29 << 1 | 1;
            *(undefined8 *)pfVar23 = *(undefined8 *)pfVar19;
            *(undefined8 *)(pfVar23 + 2) = uVar7;
            *(undefined8 *)(pfVar23 + 4) = uVar20;
            if (lVar22 <= (long)uVar27) break;
            uVar16 = uVar27 + 1;
            uVar18 = uVar29;
            uVar29 = uVar27;
            if ((long)uVar16 < lVar22) {
LAB_00184ffc:
              uVar29 = uVar16;
              if (pfVar3[uVar16 * 6] <= pfVar3[uVar27 * 6]) {
                uVar29 = uVar27;
              }
            }
          }
        }
        lVar28 = (long)(int)fVar5;
        if ((long)uVar29 < lVar22 + -1) {
          pfVar19 = pfVar3 + (lVar22 + -1) * 6;
          uVar7 = *(undefined8 *)(pfVar19 + 2);
          uVar20 = *(undefined8 *)(pfVar19 + 4);
          pfVar23 = pfVar3 + uVar29 * 6;
          *(undefined8 *)pfVar23 = *(undefined8 *)pfVar19;
          *(undefined8 *)(pfVar23 + 2) = uVar7;
          *(undefined8 *)(pfVar23 + 4) = uVar20;
          if (0 < (long)(uVar29 * 0x18)) {
            uVar29 = (uVar29 * 0x18) / 0x18;
            do {
              lVar22 = uVar29 - 1;
              pfVar23 = pfVar3 + uVar29 * 6;
              uVar29 = lVar22 >> 1;
              pfVar19 = pfVar3 + uVar29 * 6;
              if (*pfVar23 <= *pfVar19) break;
              local_488 = *(undefined8 *)pfVar19;
              local_480 = *(undefined8 *)(pfVar19 + 2);
              local_478 = *(undefined8 *)(pfVar19 + 4);
              uVar7 = *(undefined8 *)(pfVar23 + 2);
              uVar20 = *(undefined8 *)(pfVar23 + 4);
              *(undefined8 *)pfVar19 = *(undefined8 *)pfVar23;
              *(undefined8 *)(pfVar19 + 2) = uVar7;
              *(undefined8 *)(pfVar19 + 4) = uVar20;
              *(undefined8 *)pfVar23 = local_488;
              *(undefined8 *)(pfVar23 + 2) = local_480;
              *(undefined8 *)(pfVar23 + 4) = local_478;
            } while (1 < lVar22);
          }
        }
        lVar17 = (long)(int)fVar4;
        lVar22 = lVar21 + -1;
        lVar25 = *param_3;
        lVar24 = lVar25 + lVar28 * 0x408;
        if ((*(float *)(lVar24 + 0x400) == fVar6) &&
           (*(float *)(lVar25 + lVar17 * 0x408 + 0x400) == fVar9)) {
          if (((int)local_4d0 <= param_4) && (fVar30 < param_2)) break;
          lVar17 = lVar17 * 0x408;
          thunk_FUN_0015f2c0(lVar24,lVar24,lVar25 + lVar17);
          lVar21 = *param_3 + lVar28 * 0x408;
          *(int *)(lVar21 + 0x400) = *(int *)(lVar21 + 0x400) + *(int *)(*param_3 + lVar17 + 0x400);
          *(undefined4 *)(*param_3 + lVar17 + 0x400) = 0;
          *(float *)(*param_3 + lVar28 * 0x408 + 0x404) = fVar13;
          *(undefined4 *)(*param_3 + lVar17 + 0x404) = 0;
          local_4d0 = (ulong)((int)local_4d0 - 1);
joined_r0x00185258:
          lVar21 = lVar22;
joined_r0x00185258:
          if (lVar21 < 1) break;
          goto LAB_00184f7c;
        }
        if ((*(float *)(lVar24 + 0x400) == 0.0) ||
           (lVar14 = lVar25 + lVar17 * 0x408, *(int *)(lVar14 + 0x400) == 0))
        goto joined_r0x00185258;
        lVar17 = lVar25 + lVar17 * 0x408;
        pfVar23 = (float *)(lVar14 + 0x400);
        thunk_FUN_0015f2c0(&local_488,lVar24,lVar17);
        fVar13 = (float)(*param_5)(&local_488,(int)*pfVar23 + (int)*(float *)(lVar24 + 0x400));
        iVar12 = *(int *)(lVar25 + lVar28 * 0x408 + 0x404);
        iVar8 = *(int *)(lVar17 + 0x404);
        pfVar19 = pfVar3 + lVar22 * 6;
        pfVar19[1] = fVar13;
        pfVar19[2] = fVar5;
        pfVar19[3] = fVar4;
        *pfVar19 = (float)((iVar12 - (int)fVar13) + iVar8) * 0.125 + param_1;
        pfVar19[4] = *(float *)(lVar24 + 0x400);
        pfVar19[5] = *pfVar23;
        uVar29 = lVar21 * 0x18 - 0x18;
        if (0 < (long)uVar29) {
          uVar29 = uVar29 / 0x18;
          do {
            lVar28 = uVar29 - 1;
            pfVar23 = pfVar3 + uVar29 * 6;
            uVar29 = lVar28 >> 1;
            pfVar19 = pfVar3 + uVar29 * 6;
            lVar22 = lVar21;
            if (*pfVar23 <= *pfVar19) goto joined_r0x00185258;
            local_488 = *(undefined8 *)pfVar19;
            local_480 = *(undefined8 *)(pfVar19 + 2);
            local_478 = *(undefined8 *)(pfVar19 + 4);
            uVar7 = *(undefined8 *)(pfVar23 + 2);
            uVar20 = *(undefined8 *)(pfVar23 + 4);
            *(undefined8 *)pfVar19 = *(undefined8 *)pfVar23;
            *(undefined8 *)(pfVar19 + 2) = uVar7;
            *(undefined8 *)(pfVar19 + 4) = uVar20;
            *(undefined8 *)pfVar23 = local_488;
            *(undefined8 *)(pfVar23 + 2) = local_480;
            *(undefined8 *)(pfVar23 + 4) = local_478;
          } while (1 < lVar28);
          goto joined_r0x00185258;
        }
      } while (0 < lVar21);
    }
  }
  uVar29 = param_3[2];
  if (0 < (int)uVar29) {
    lVar22 = 0;
    uVar16 = 0;
    uVar26 = 0;
    pvVar15 = (void *)*param_3;
    iVar12 = *(int *)((long)pvVar15 + 0x400);
    __src = pvVar15;
    while( true ) {
      if (iVar12 != 0) {
        if (uVar16 != uVar26) {
          memcpy((void *)((long)pvVar15 + (long)(int)uVar26 * 0x408),__src,0x408);
          uVar29 = param_3[2];
        }
        uVar26 = uVar26 + 1;
      }
      uVar16 = uVar16 + 1;
      lVar22 = lVar22 + 0x408;
      if ((long)(int)uVar29 <= (long)uVar16) break;
      pvVar15 = (void *)*param_3;
      __src = (void *)((long)pvVar15 + lVar22);
      iVar12 = *(int *)((long)__src + 0x400);
    }
  }
  uVar16 = (ulong)(int)local_4d0;
  if ((uVar29 <= uVar16) && ((ulong)param_3[1] < uVar16)) {
    iVar12 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,"needmakefit",
                          "newsize <= m_capacity");
    if (iVar12 != 0) {
      halt_baddata();
    }
    uVar16 = (uVar16 - uVar29) + param_3[2];
  }
  param_3[2] = uVar16;
  if (local_498 != 0) {
    if ((local_4a0 == 0) ||
       ((local_490 + 0xfU & 0xfffffffffffffff0) + local_498 != *(long *)(local_4a0 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_4a0 + 8) = local_498;
    }
  }
  return;
}


