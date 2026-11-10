/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017fc70; name: FUN_0017fc70
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0017fe4c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t FUN_0017fc70(undefined8 param_1,void *param_2,long param_3,long param_4,ulong *param_5,
                   long param_6,uint param_7,long param_8,float *param_9,undefined8 param_10,
                   uint param_11)

{
  undefined2 *puVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ulong *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined2 *puVar24;
  long lVar25;
  ushort uVar26;
  ushort uVar27;
  undefined2 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  byte *pbVar34;
  ulong uVar35;
  int *piVar36;
  long *plVar37;
  long *plVar38;
  undefined1 uVar39;
  long lVar40;
  ulong uVar41;
  undefined8 *puVar42;
  undefined8 *puVar44;
  undefined8 *puVar43;
  ulong uVar45;
  long *plVar46;
  long *plVar47;
  uint *puVar48;
  int iVar49;
  byte *pbVar50;
  undefined8 *puVar51;
  ulong *puVar52;
  ulong uVar53;
  ulong *puVar54;
  undefined8 **ppuVar55;
  undefined1 *puVar56;
  ulong uVar57;
  ushort *puVar58;
  ulong *puVar59;
  ulong uVar60;
  int iVar61;
  uint uVar62;
  ulong uVar63;
  ulong *puVar64;
  uint uVar65;
  undefined2 *puVar66;
  ulong *puVar67;
  ulong uVar68;
  ulong uVar69;
  long lVar70;
  ulong uVar71;
  ushort *puVar72;
  byte *pbVar73;
  byte *pbVar74;
  long lVar75;
  size_t __n;
  ulong uVar76;
  long lVar77;
  uint uVar78;
  float fVar79;
  float fVar80;
  uint local_b8c;
  ulong local_b30;
  int local_af0;
  long local_ac0;
  long local_ab0;
  ulong local_aa8;
  float local_a94;
  float local_a90;
  float local_a8c;
  byte *local_a88;
  ulong local_a80;
  long local_a78;
  ulong local_a70;
  undefined8 *local_a68;
  long local_a60;
  ulong local_a58 [60];
  long local_878;
  byte *local_870;
  ulong local_868;
  long local_860;
  ulong local_858;
  long local_850;
  ulong local_848 [2];
  ulong local_838 [46];
  long local_6c8;
  long local_6c0;
  long local_6b8;
  undefined8 *local_6b0;
  ulong local_6a8;
  ulong local_6a0;
  long local_698;
  long local_690;
  long local_688;
  long local_680;
  long local_678;
  long local_670;
  long alStack_80 [2];
  
  iVar16 = 1 << (ulong)(param_11 & 0x1f);
  if (0x1f < iVar16) {
    iVar16 = 0x20;
  }
  if (iVar16 < 9) {
    iVar16 = 8;
  }
  iVar61 = 0x3e;
  if (param_11 != 9) {
    iVar61 = iVar16;
  }
  if (param_6 < 1) {
    return 0xffffffffffffffff;
  }
  lVar40 = 0;
  uVar63 = 0;
  iVar16 = 1;
  uVar4 = 0;
  do {
    uVar60 = uVar4;
    uVar57 = param_5[lVar40];
    lVar40 = (long)iVar16;
    iVar16 = iVar16 + 1;
    uVar4 = uVar57 + uVar60;
    if ((long)uVar63 <= (long)uVar57) {
      uVar63 = uVar57;
    }
  } while (lVar40 < param_6);
  if ((long)uVar63 < 0x20) {
    return 0xffffffffffffffff;
  }
  if ((long)uVar4 < 0x60) {
    return 0xffffffffffffffff;
  }
  uVar62 = iVar61 << 1;
  uVar19 = (uint)(uVar4 / 100);
  if ((int)uVar19 < 0x41) {
    uVar19 = 0x40;
  }
  FUN_0015c528(&local_698,(ulong)(iVar61 << 1 | 1) << 9,param_10,0);
  local_6a8 = 0;
  local_6a0 = 0;
  local_6b8 = 0;
  local_6b0 = (undefined8 *)0x0;
  puVar28 = (undefined2 *)(local_690 + 0xfU & 0xfffffffffffffff0);
  uVar29 = (ulong)((local_688 + local_690) - (long)puVar28) >> 9;
  local_6c8 = 0;
  local_6c0 = 0;
  FUN_0015c528(&local_680,(ulong)uVar62 * 0x408,param_10,0);
  puVar30 = (undefined8 *)(local_678 + 0xfU & 0xfffffffffffffff0);
  uVar31 = (local_670 + local_678) - (long)puVar30;
  iVar16 = 0;
  iVar20 = 0;
  uVar32 = uVar31 / 0x408;
LAB_0017feac:
  if (0 < param_6) {
    uVar78 = 0xf309cc5e;
    uVar33 = *param_5;
    local_ac0 = 0;
    do {
      if (0xf < (long)uVar33) {
        uVar41 = (ulong)uVar78;
        uVar78 = uVar78 * 0x10dcd + 0x3039;
        iVar21 = (uVar19 >> 1) + (int)(uVar41 * uVar19 >> 0x20);
        if ((int)uVar33 <= iVar21) {
          iVar21 = (int)uVar33;
        }
        if (0xf < iVar21) {
          pbVar73 = *(byte **)(param_4 + local_ac0 * 8);
          pbVar5 = pbVar73 + uVar33;
          pbVar74 = pbVar73;
          do {
            iVar15 = iVar21;
            if (0xff < iVar21) {
              iVar15 = 0x100;
            }
            iVar49 = iVar21;
            if (0x3f < iVar21) {
              iVar49 = (int)((long)(iVar15 + -0x40) * (ulong)uVar78 >> 0x20) + 0x40;
            }
            if (iVar16 == 0) {
              iVar20 = iVar20 + 1;
            }
            else {
              uVar33 = local_6a0 + 1;
              if (local_6a8 < uVar33) {
                iVar15 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                      "needmakefit","newsize <= m_capacity");
                if (iVar15 != 0) {
                  halt_baddata();
                }
                uVar33 = local_6a0 + 1;
              }
              puVar42 = local_6b0;
              lVar40 = uVar33 - 1;
              puVar51 = local_6b0 + lVar40 * 0x81;
              lVar77 = (long)iVar49;
              local_6a0 = uVar33;
              FUN_0015f0a0(pbVar74,lVar77,puVar51,0x100,0);
              *(int *)(puVar51 + 0x80) = iVar49;
              iVar15 = -1;
              pbVar34 = pbVar74;
              if (pbVar73 < pbVar74) {
                iVar15 = *(int *)((long)puVar42 + (ulong)pbVar74[-1] * 4 + lVar40 * 0x408) -
                         *(int *)((long)puVar42 + (ulong)pbVar74[lVar77 + -1] * 4 + lVar40 * 0x408);
                if (pbVar74 + lVar77 < pbVar5) goto LAB_00180108;
LAB_00180080:
                if (iVar15 < 0) goto joined_r0x00180134;
LAB_0018008c:
                if (pbVar73 < pbVar74) {
                  pbVar50 = pbVar74;
                  do {
                    pbVar34 = pbVar50 + -1;
                    piVar36 = (int *)((long)puVar42 + (ulong)*pbVar34 * 4 + lVar40 * 0x408);
                    iVar15 = *piVar36;
                    if (iVar15 - *(int *)((long)puVar42 +
                                         (ulong)pbVar50[lVar77 + -1] * 4 + lVar40 * 0x408) < 1) {
                      pbVar34 = pbVar50;
                      break;
                    }
                    *piVar36 = iVar15 + 1;
                    *(int *)((long)puVar42 + (ulong)pbVar50[lVar77 + -1] * 4 + lVar40 * 0x408) =
                         *(int *)((long)puVar42 + (ulong)pbVar50[lVar77 + -1] * 4 + lVar40 * 0x408)
                         + -1;
                    pbVar50 = pbVar34;
                  } while (pbVar73 < pbVar34);
                }
              }
              else {
                if (pbVar5 <= pbVar74 + lVar77) goto LAB_00180080;
LAB_00180108:
                if (*(int *)((long)puVar42 + (ulong)pbVar74[lVar77] * 4 + lVar40 * 0x408) -
                    *(int *)((long)puVar42 + (ulong)*pbVar74 * 4 + lVar40 * 0x408) < iVar15)
                goto LAB_0018008c;
joined_r0x00180134:
                for (; pbVar34 + lVar77 < pbVar5; pbVar34 = pbVar34 + 1) {
                  piVar36 = (int *)((long)puVar42 + (ulong)pbVar34[lVar77] * 4 + lVar40 * 0x408);
                  iVar15 = *piVar36;
                  if (iVar15 - *(int *)((long)puVar42 + (ulong)*pbVar34 * 4 + lVar40 * 0x408) < 0)
                  break;
                  *piVar36 = iVar15 + 1;
                  *(int *)((long)puVar42 + (ulong)*pbVar34 * 4 + lVar40 * 0x408) =
                       *(int *)((long)puVar42 + (ulong)*pbVar34 * 4 + lVar40 * 0x408) + -1;
                }
              }
              if (pbVar74 <= pbVar34) {
                pbVar74 = pbVar34;
              }
            }
            pbVar74 = pbVar74 + iVar21;
            uVar65 = uVar78 * 0x10dcd + 0x3039;
            uVar78 = uVar65 * 0x10dcd + 0x3039;
            iVar21 = (uVar19 >> 1) + (int)((ulong)uVar65 * (ulong)uVar19 >> 0x20);
            iVar15 = (int)pbVar5 - (int)pbVar74;
            if (iVar15 <= iVar21) {
              iVar21 = iVar15;
            }
          } while (0xf < iVar21);
        }
      }
      local_ac0 = (long)((int)local_ac0 + 1);
      if (param_6 <= local_ac0) break;
      uVar33 = param_5[local_ac0];
    } while( true );
  }
  iVar16 = iVar16 + 1;
  if (iVar16 != 2) {
    if (iVar16 == 1) {
      FUN_001617e8(&local_6c8,(long)iVar20 * 0x408,param_10);
      local_6b0 = (undefined8 *)(local_6c0 + 0xfU & 0xfffffffffffffff0);
      local_6a8 = (ulong)((local_6b8 + local_6c0) - (long)local_6b0) / 0x408;
    }
    goto LAB_0017feac;
  }
  if ((uVar31 < 0x408) &&
     (iVar16 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                            "needmakefit","newsize <= m_capacity"), iVar16 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar30[1] = 0xa0000000a;
  *puVar30 = 0xa0000000a;
  puVar42 = puVar30 + 2;
  do {
    puVar51 = puVar42 + 2;
    puVar42[1] = 0xa0000000a;
    *puVar42 = 0xa0000000a;
    puVar42 = puVar51;
  } while (puVar51 < puVar30 + 0x80);
  uVar17 = 0xa00;
  *(undefined4 *)(puVar30 + 0x80) = 0xa00;
  if (uVar29 == 0) {
    iVar16 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,"needmakefit",
                          "newsize <= m_capacity");
    if (iVar16 != 0) {
      halt_baddata();
    }
    uVar17 = *(undefined4 *)(puVar30 + 0x80);
  }
  FUN_001849f0(puVar30,uVar17,puVar28);
  uVar31 = local_6a0;
  iVar16 = (int)local_6a0;
  uVar19 = iVar16 * 3;
  FUN_0015c528(&local_a70,-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2,
               param_10,0);
  puVar42 = local_a68;
  uVar31 = -(uVar31 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar31 & 0xffffffff) << 2;
  lVar40 = uVar31 * 2;
  if (0 < (int)local_6a0) {
    lVar77 = 0;
    lVar70 = 0x400;
    do {
      lVar75 = lVar77 * 4;
      *(undefined4 *)((long)puVar42 + lVar75) = 0x7fffffff;
      *(undefined4 *)((long)puVar42 + lVar75 + uVar31) = 0;
      uVar17 = FUN_00184950((undefined4 *)((long)local_6b0 + lVar70) + -0x100,
                            *(undefined4 *)((long)local_6b0 + lVar70));
      *(undefined4 *)((long)puVar42 + lVar75 + lVar40) = uVar17;
      lVar77 = lVar77 + 1;
      lVar70 = lVar70 + 0x408;
    } while (lVar77 < (int)local_6a0);
  }
  if (local_6a0 == 0) {
    uVar33 = 1;
  }
  else {
    uVar33 = 1;
    if (1 < (int)uVar62) {
      do {
        if ((int)local_6a0 < 1) break;
        iVar20 = (int)uVar33 + -1;
        lVar77 = 0;
        iVar21 = 0;
        lVar70 = 0x400;
        iVar15 = 0;
        do {
          iVar18 = FUN_00184a40((undefined4 *)((long)local_6b0 + lVar70) + -0x100,
                                *(undefined4 *)((long)local_6b0 + lVar70),
                                puVar28 + (long)iVar20 * 0x100);
          lVar75 = lVar77 * 4;
          iVar18 = iVar18 - *(int *)((long)puVar42 + lVar75 + (long)iVar16 * 8);
          iVar49 = *(int *)((long)puVar42 + lVar75);
          if (iVar18 < iVar49) {
            *(int *)((long)puVar42 + lVar75) = iVar18;
            *(int *)((long)puVar42 + lVar75 + uVar31) = iVar20;
            iVar49 = *(int *)((long)puVar42 + lVar75);
          }
          iVar18 = (int)lVar77;
          if (iVar49 <= iVar21) {
            iVar18 = iVar15;
            iVar49 = iVar21;
          }
          iVar21 = iVar49;
          lVar77 = lVar77 + 1;
          lVar70 = lVar70 + 0x408;
          iVar15 = iVar18;
        } while (lVar77 < (int)local_6a0);
        if (iVar21 < 0x2001) break;
        if ((uVar32 <= uVar33) &&
           (iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                  "needmakefit","newsize <= m_capacity"), iVar20 != 0)) {
          halt_baddata();
        }
        lVar77 = uVar33 * 0x81;
        memcpy(puVar30 + lVar77,local_6b0 + (long)iVar18 * 0x81,0x408);
        if ((uVar29 <= uVar33) &&
           (iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                  "needmakefit","newsize <= m_capacity"), iVar20 != 0)) {
          halt_baddata();
        }
        lVar70 = uVar33 * 0x81;
        lVar75 = uVar33 * 0x100;
        uVar33 = uVar33 + 1;
        FUN_001849f0(puVar30 + lVar77,*(undefined4 *)(puVar30 + lVar70 + 0x80),puVar28 + lVar75);
        uVar41 = local_6a0 - 1;
        memcpy(local_6b0 + (long)iVar18 * 0x81,local_6b0 + uVar41 * 0x81,0x408);
        lVar77 = uVar41 * 4;
        lVar70 = (long)iVar18 * 4;
        *(undefined4 *)((long)puVar42 + lVar70 + lVar40) =
             *(undefined4 *)((long)puVar42 + lVar77 + lVar40);
        *(undefined4 *)((long)puVar42 + lVar70) = *(undefined4 *)((long)puVar42 + lVar77);
        *(undefined4 *)((long)puVar42 + lVar70 + uVar31) =
             *(undefined4 *)((long)puVar42 + lVar77 + uVar31);
        if (uVar41 == 0) goto LAB_001804fc;
        local_6a0 = uVar41;
      } while ((int)uVar33 < (int)uVar62);
    }
    if (0 < (int)local_6a0) {
      lVar40 = 0;
      lVar77 = 0;
      do {
        puVar51 = puVar30 + (long)*(int *)((long)puVar42 + lVar40 * 4 + uVar31) * 0x81;
        thunk_FUN_0015f2c0(puVar51,puVar51,(long)local_6b0 + lVar77);
        *(int *)(puVar51 + 0x80) =
             *(int *)(puVar51 + 0x80) + *(int *)((long)local_6b0 + lVar77 + 0x400);
        lVar40 = lVar40 + 1;
        lVar77 = lVar77 + 0x408;
      } while (lVar40 < (int)local_6a0);
    }
  }
LAB_001804fc:
  lVar25 = local_670;
  lVar75 = local_678;
  lVar70 = local_680;
  local_670 = local_6b8;
  lVar77 = local_6c0;
  lVar40 = local_6c8;
  local_6c8 = local_680;
  local_6c0 = local_678;
  local_680 = lVar40;
  local_678 = lVar77;
  local_6b8 = lVar25;
  local_6b0 = puVar30;
  local_6a8 = uVar32;
  local_6a0 = uVar33;
  if (local_a68 == (undefined8 *)0x0) {
joined_r0x0018062c:
    if (local_678 == 0) goto LAB_0018064c;
LAB_001805a0:
    local_a68 = (undefined8 *)0x0;
    if ((local_680 == 0) ||
       ((local_670 + 0xfU & 0xfffffffffffffff0) + local_678 != *(long *)(local_680 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
      bVar14 = local_a68 != (undefined8 *)0x0;
    }
    else {
      *(long *)(local_680 + 8) = local_678;
      bVar14 = false;
    }
    local_678 = 0;
    if (bVar14) {
      local_678 = 0;
      if ((local_a70 == 0) ||
         ((local_a60 + 0xfU & 0xfffffffffffffff0) + (long)local_a68 != *(long *)(local_a70 + 8))) {
        (**(code **)PTR_PTR_047cb898)();
      }
      else {
        *(undefined8 **)(local_a70 + 8) = local_a68;
      }
      goto LAB_0018064c;
    }
  }
  else {
    if ((local_a70 == 0) ||
       ((local_a60 + 0xfU & 0xfffffffffffffff0) + (long)local_a68 != *(long *)(local_a70 + 8))) {
      (**(code **)PTR_PTR_047cb898)(local_a68);
      goto joined_r0x0018062c;
    }
    *(undefined8 **)(local_a70 + 8) = local_a68;
    if (lVar77 != 0) goto LAB_001805a0;
LAB_0018064c:
    local_a68 = (undefined8 *)0x0;
    if (local_678 != 0) {
      if ((local_680 == 0) ||
         ((local_670 + 0xfU & 0xfffffffffffffff0) + local_678 != *(long *)(local_680 + 8))) {
        (**(code **)PTR_PTR_047cb898)();
      }
      else {
        *(long *)(local_680 + 8) = local_678;
      }
      local_678 = 0;
    }
  }
  if ((int)local_6a0 != 0) {
    if (iVar61 < (int)local_6a0) {
      uVar22 = FUN_00184bc0();
      FUN_00184bd0(0x40000000,0,&local_6b0,iVar61,uVar22,param_10);
    }
    if ((int)local_6a0 != 1) {
      memset(local_848,0,0x180);
      local_858 = 0;
      local_850 = 0;
      local_860 = 0;
      FUN_001617e8(&local_860,(uVar4 + param_6) * 6 & 0x7ffffffffffffffe,param_10);
      if (0 < param_6) {
        lVar40 = 0;
        iVar16 = 1;
        uVar32 = *param_5;
        uVar31 = local_858;
        if (uVar32 != 0) goto LAB_0018079c;
        while (lVar40 = (long)iVar16, lVar40 < param_6) {
          while( true ) {
            iVar16 = iVar16 + 1;
            uVar32 = param_5[lVar40];
            if (uVar32 == 0) break;
LAB_0018079c:
            uVar33 = uVar32 + 2;
            if (-1 < (long)(uVar32 + 1)) {
              uVar33 = uVar32 + 1;
            }
            uVar32 = ((uVar33 & 0xfffffffffffffffe) + ((long)uVar33 >> 1)) * 4;
            local_848[lVar40 * 3] = uVar31;
            local_848[lVar40 * 3 + 1] = uVar32 / 0xc;
            uVar31 = uVar31 + uVar32;
            lVar40 = (long)iVar16;
            if (param_6 <= lVar40) goto LAB_001807dc;
          }
        }
      }
LAB_001807dc:
      local_b8c = (int)((float)param_1 * 55.0 * 8.0 * 256.0) + 0xf00;
      if (0x63fe < local_b8c) {
        local_b8c = 0x63ff;
      }
      FUN_0015c528(&local_a70,uVar63 * 9,param_10,0);
      puVar42 = local_a68;
      local_870 = (byte *)0x0;
      local_868 = 0;
      puVar30 = local_a68 + uVar63;
      local_878 = 0;
      FUN_001617e8(&local_878,(ulong)(iVar61 + 8U & 0x7ffffff8) << 9,param_10);
      pbVar74 = local_870;
      uVar12 = _UNK_03cac0d8;
      uVar22 = _DAT_03cac0d0;
      uVar41 = local_868 >> 1;
      uVar33 = 0;
      local_af0 = 0;
      uVar31 = 0;
      uVar32 = 0;
      do {
        local_b30 = local_6a0;
        if ((uVar29 < local_6a0) &&
           (iVar16 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                  "needmakefit","newsize <= m_capacity"), iVar16 != 0)) {
          halt_baddata();
        }
        iVar16 = (int)local_6a0 + -1;
        if (-1 < iVar16) {
          puVar66 = puVar28 + (long)iVar16 * 0x100;
          lVar40 = (long)iVar16 * 0x408 + 0x400;
          puVar51 = local_6b0;
          do {
            FUN_001849f0((undefined4 *)((long)puVar51 + lVar40) + -0x100,
                         *(undefined4 *)((long)puVar51 + lVar40),puVar66);
            uVar19 = FUN_00184a40((undefined4 *)((long)local_6b0 + lVar40) + -0x100,
                                  *(undefined4 *)((long)local_6b0 + lVar40),puVar66);
            puVar51 = local_6b0;
            if ((uint)(*(int *)((long)local_6b0 + lVar40) * 0x7f3) <= uVar19) {
              local_b30 = local_b30 - 1;
              memcpy(puVar66,puVar28 + local_b30 * 0x100,0x200);
            }
            iVar16 = iVar16 + -1;
            puVar66 = puVar66 + -0x100;
            lVar40 = lVar40 + -0x408;
          } while (-1 < iVar16);
        }
        if (local_b30 < 0x3f) {
          if ((uVar29 <= local_b30) &&
             (iVar16 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                    "needmakefit","newsize <= m_capacity"), iVar16 != 0)) {
            halt_baddata();
          }
          puVar51 = (undefined8 *)(puVar28 + local_b30 * 0x100);
          local_b30 = local_b30 + 1;
          puVar51[1] = uVar12;
          *puVar51 = uVar22;
          puVar43 = puVar51 + 2;
          do {
            puVar44 = puVar43 + 2;
            puVar43[1] = uVar12;
            *puVar43 = uVar22;
            puVar43 = puVar44;
          } while (puVar44 < puVar51 + 0x40);
        }
        iVar16 = (int)local_b30;
        uVar19 = iVar16 + 7U & 0xfffffff8;
        uVar71 = (ulong)(int)(uVar19 * 0x100);
        if (((uVar31 <= uVar71) && (uVar41 < uVar71)) &&
           (iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                  "needmakefit","newsize <= m_capacity"), iVar20 != 0)) {
          halt_baddata();
        }
        pbVar5 = (byte *)0x0;
        if (uVar19 * 0x100 != 0) {
          pbVar5 = pbVar74;
        }
        uVar31 = (ulong)iVar16;
        if (0 < iVar16) {
          uVar53 = local_b30 & 3;
          uVar68 = 0;
          uVar62 = 0;
          lVar40 = 0;
          uVar45 = (local_b30 & 0xffffffff) - 1;
          uVar23 = 0;
          puVar66 = puVar28;
          if (uVar45 < 3) goto LAB_00180b08;
          do {
            lVar77 = 0;
            pbVar73 = pbVar5 + uVar23 + 4;
            puVar24 = puVar66;
            do {
              *(undefined2 *)(pbVar73 + -4) = *puVar24;
              *(undefined2 *)(pbVar73 + -2) = puVar24[0x100];
              *(undefined2 *)pbVar73 = puVar24[0x200];
              puVar1 = puVar24 + 0x300;
              lVar77 = lVar77 + 4;
              puVar24 = puVar24 + 0x400;
              *(undefined2 *)(pbVar73 + 2) = *puVar1;
              pbVar73 = pbVar73 + 8;
            } while ((local_b30 & 0xffffffff) - uVar53 != lVar77);
            uVar62 = (uint)uVar68;
            while( true ) {
              if (uVar53 != 0) {
                lVar70 = lVar77 << 9;
                pbVar73 = pbVar5 + (lVar77 + (int)uVar62) * 2;
                uVar68 = uVar53;
                do {
                  uVar68 = uVar68 - 1;
                  *(undefined2 *)pbVar73 = *(undefined2 *)((long)puVar66 + lVar70);
                  lVar70 = lVar70 + 0x200;
                  pbVar73 = pbVar73 + 2;
                } while (uVar68 != 0);
              }
              if (iVar16 < (int)uVar19) {
                uVar68 = uVar31;
                if ((-iVar16 & 7U) != 0) {
                  uVar69 = (ulong)(uint)-iVar16 & 7;
                  do {
                    (pbVar5 + uVar68 * 2 + uVar23)[0] = 0;
                    (pbVar5 + uVar68 * 2 + uVar23)[1] = 0xe;
                    uVar68 = uVar68 + 1;
                    uVar69 = uVar69 - 1;
                  } while (uVar69 != 0);
                }
                if (6 < ~uVar31 + (long)(int)uVar19) {
                  lVar77 = uVar68 - (long)(int)uVar19;
                  pbVar73 = pbVar5 + (uVar68 + (long)(int)uVar62) * 2 + 8;
                  do {
                    pbVar73[-8] = 0;
                    pbVar73[-7] = 0xe;
                    pbVar73[-6] = 0;
                    pbVar73[-5] = 0xe;
                    pbVar73[-4] = 0;
                    pbVar73[-3] = 0xe;
                    pbVar73[-2] = 0;
                    pbVar73[-1] = 0xe;
                    pbVar73[0] = 0;
                    pbVar73[1] = 0xe;
                    pbVar73[2] = 0;
                    pbVar73[3] = 0xe;
                    pbVar73[4] = 0;
                    pbVar73[5] = 0xe;
                    pbVar73[6] = 0;
                    pbVar73[7] = 0xe;
                    lVar77 = lVar77 + 8;
                    pbVar73 = pbVar73 + 0x10;
                  } while (lVar77 != 0);
                }
              }
              lVar40 = lVar40 + 1;
              puVar66 = puVar66 + 1;
              uVar62 = uVar62 + uVar19;
              uVar68 = (ulong)uVar62;
              if (lVar40 == 0x100) goto LAB_00180c74;
              uVar23 = -(ulong)(uVar62 >> 0x1f) & 0xfffffffe00000000 | uVar68 << 1;
              if (2 < uVar45) break;
LAB_00180b08:
              lVar77 = 0;
            }
          } while( true );
        }
        if (iVar16 < (int)uVar19) {
          iVar20 = 0;
          lVar40 = 0;
          lVar77 = 0;
          while( true ) {
            uVar23 = uVar31;
            if ((-iVar16 & 7U) != 0) {
              uVar45 = (ulong)(uint)-iVar16 & 7;
              do {
                (pbVar5 + uVar23 * 2 + (long)iVar20 * 2)[0] = 0;
                (pbVar5 + uVar23 * 2 + (long)iVar20 * 2)[1] = 0xe;
                uVar23 = uVar23 + 1;
                uVar45 = uVar45 - 1;
              } while (uVar45 != 0);
            }
            if (6 < ~uVar31 + (long)(int)uVar19) {
              lVar70 = uVar23 - (long)(int)uVar19;
              pbVar73 = pbVar5 + (uVar23 + lVar77) * 2 + 8;
              do {
                pbVar73[-8] = 0;
                pbVar73[-7] = 0xe;
                pbVar73[-6] = 0;
                pbVar73[-5] = 0xe;
                pbVar73[-4] = 0;
                pbVar73[-3] = 0xe;
                pbVar73[-2] = 0;
                pbVar73[-1] = 0xe;
                pbVar73[0] = 0;
                pbVar73[1] = 0xe;
                pbVar73[2] = 0;
                pbVar73[3] = 0xe;
                pbVar73[4] = 0;
                pbVar73[5] = 0xe;
                pbVar73[6] = 0;
                pbVar73[7] = 0xe;
                lVar70 = lVar70 + 8;
                pbVar73 = pbVar73 + 0x10;
              } while (lVar70 != 0);
            }
            lVar40 = lVar40 + 1;
            iVar20 = (int)lVar77 + uVar19;
            if (lVar40 == 0x100) break;
            lVar77 = (long)iVar20;
          }
        }
LAB_00180c74:
        lVar40 = uVar31 - local_6a0;
        uVar23 = uVar31;
        if ((local_6a0 <= uVar31) && (local_6a8 < uVar31)) {
          iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                "needmakefit","newsize <= m_capacity");
          if (iVar20 != 0) {
            halt_baddata();
          }
          uVar23 = lVar40 + local_6a0;
        }
        puVar51 = (undefined8 *)0x0;
        if (uVar23 != 0) {
          puVar51 = local_6b0;
        }
        local_6a0 = uVar23;
        memset(puVar51,0,uVar23 * 0x408);
        if (param_6 < 1) {
          iVar20 = 0;
          uVar23 = uVar32;
        }
        else {
          iVar20 = 0;
          uVar45 = local_b30 & 3;
          lVar77 = 0;
          lVar40 = 0;
          uVar23 = *param_5;
          if (uVar23 != 0) goto LAB_00180dac;
LAB_00180d90:
          lVar77 = (long)((int)lVar77 + 1);
          uVar23 = uVar32;
          if (lVar77 < param_6) {
            while( true ) {
              lVar40 = lVar77 * 8;
              uVar23 = param_5[lVar77];
              if (uVar23 == 0) break;
LAB_00180dac:
              pbVar73 = *(byte **)(param_4 + lVar40);
              if ((uVar32 <= uVar23 && (uVar63 & 0x1fffffffffffffff) < uVar23) &&
                 (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar21 != 0)) {
                halt_baddata();
              }
              if (((uVar33 <= uVar23) && (uVar63 < uVar23)) &&
                 (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar21 != 0)) {
                halt_baddata();
              }
              bVar6 = *pbVar73;
              if (iVar16 < 1) {
                uVar26 = 0x7fff;
                uVar39 = 0xff;
              }
              else {
                lVar40 = 0;
                if ((local_b30 & 0xffffffff) - 1 < 3) {
                  uVar26 = 0x7fff;
                  iVar21 = -1;
                  uVar39 = 0xff;
                }
                else {
                  puVar58 = (ushort *)(pbVar5 + (long)(int)(uVar19 * bVar6) * 2 + 4);
                  uVar26 = 0x7fff;
                  iVar21 = -1;
                  puVar72 = (ushort *)((ulong)&local_680 | 4);
                  do {
                    uVar8 = puVar58[-2];
                    puVar72[-2] = uVar8;
                    uVar27 = uVar8;
                    if (uVar26 <= uVar8) {
                      uVar27 = uVar26;
                    }
                    uVar9 = puVar58[-1];
                    iVar49 = (int)lVar40;
                    iVar15 = iVar49;
                    if (uVar26 <= uVar8) {
                      iVar15 = iVar21;
                    }
                    puVar72[-1] = uVar9;
                    uVar8 = uVar9;
                    if (uVar27 <= uVar9) {
                      uVar8 = uVar27;
                    }
                    uVar7 = *puVar58;
                    if (uVar27 > uVar9) {
                      iVar15 = iVar49 + 1;
                    }
                    *puVar72 = uVar7;
                    iVar18 = iVar49 + 2;
                    if (uVar8 <= uVar7) {
                      iVar18 = iVar15;
                    }
                    uVar26 = puVar58[1];
                    if (uVar8 <= uVar7) {
                      uVar7 = uVar8;
                    }
                    lVar40 = lVar40 + 4;
                    puVar72[1] = uVar26;
                    puVar72 = puVar72 + 4;
                    uVar39 = (undefined1)(iVar49 + 3);
                    iVar21 = iVar49 + 3;
                    if (uVar7 <= uVar26) {
                      uVar39 = (undefined1)iVar18;
                      uVar26 = uVar7;
                      iVar21 = iVar18;
                    }
                    puVar58 = puVar58 + 4;
                  } while ((local_b30 & 0xffffffff) - uVar45 != lVar40);
                }
                if (uVar45 != 0) {
                  uVar32 = uVar45;
                  uVar27 = uVar26;
                  do {
                    lVar70 = lVar40 * 2;
                    uVar8 = *(ushort *)(pbVar5 + lVar70 + (long)(int)(uVar19 * bVar6) * 2);
                    iVar15 = (int)lVar40;
                    uVar26 = uVar8;
                    if (uVar27 <= uVar8) {
                      iVar15 = iVar21;
                      uVar26 = uVar27;
                    }
                    iVar21 = iVar15;
                    uVar39 = (undefined1)iVar21;
                    lVar40 = lVar40 + 1;
                    uVar32 = uVar32 - 1;
                    *(ushort *)((long)&local_680 + lVar70) = uVar8;
                    uVar27 = uVar26;
                  } while (uVar32 != 0);
                }
              }
              if (iVar16 < (int)uVar19) {
                uVar32 = uVar31;
                if ((-iVar16 & 7U) != 0) {
                  uVar33 = (ulong)(uint)-iVar16 & 7;
                  do {
                    *(undefined2 *)((long)&local_680 + uVar32 * 2) = 0xe00;
                    uVar32 = uVar32 + 1;
                    uVar33 = uVar33 - 1;
                  } while (uVar33 != 0);
                }
                if (6 < ~uVar31 + (long)(int)uVar19) {
                  lVar40 = uVar32 - (long)(int)uVar19;
                  puVar51 = (undefined8 *)(((ulong)&local_680 | 8) + uVar32 * 2);
                  do {
                    puVar51[-1] = 0xe000e000e000e00;
                    *puVar51 = 0xe000e000e000e00;
                    lVar40 = lVar40 + 8;
                    puVar51 = puVar51 + 2;
                  } while (lVar40 != 0);
                }
              }
              *puVar42 = 0;
              *(undefined1 *)puVar30 = uVar39;
              FUN_0015fcb0(puVar42,puVar30,pbVar73 + 1,pbVar73,pbVar73 + uVar23,&local_680,pbVar5,
                           local_b30 & 0xffffffff,uVar19,uVar26,local_b8c & 0xffff);
              iVar20 = iVar20 + 1;
              uVar32 = uVar23;
              uVar33 = uVar23;
              if (local_af0 != 2) {
                iVar21 = (int)uVar23 + -1;
                if (-1 < iVar21) {
                  uVar23 = (ulong)*(byte *)((long)puVar30 + (long)iVar21);
                  uVar53 = 1L << (uVar23 & 0x3f);
                  lVar40 = (long)iVar21;
                  do {
                    iVar21 = (int)uVar23;
                    *(int *)((long)local_6b0 + (ulong)pbVar73[lVar40] * 4 + (long)iVar21 * 0x408) =
                         *(int *)((long)local_6b0 +
                                 (ulong)pbVar73[lVar40] * 4 + (long)iVar21 * 0x408) + 1;
                    *(int *)(local_6b0 + (long)iVar21 * 0x81 + 0x80) =
                         *(int *)(local_6b0 + (long)iVar21 * 0x81 + 0x80) + 1;
                    if ((puVar42[lVar40] & uVar53) != 0) {
                      uVar23 = (ulong)*(byte *)((long)puVar30 + lVar40 + -1);
                      uVar53 = 1L << (uVar23 & 0x3f);
                      iVar20 = iVar20 + 1;
                    }
                    bVar14 = 0 < lVar40;
                    lVar40 = lVar40 + -1;
                  } while (bVar14);
                }
                break;
              }
              uVar53 = uVar23 - 1;
              uVar68 = uVar23;
              if (-1 < (long)uVar53) {
                uVar76 = (ulong)*(byte *)((long)puVar30 + uVar53);
                uVar62 = (uint)*(byte *)((long)puVar30 + uVar53);
                uVar35 = 1L << (uVar76 & 0x3f);
                uVar69 = puVar42[uVar53] & uVar35;
                while( true ) {
                  if (uVar69 != 0) {
                    uVar76 = local_838[lVar77 * 3];
                    uVar69 = uVar76 + 1;
                    if ((local_848[lVar77 * 3 + 1] < uVar69) &&
                       (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h"
                                              ,0x3f,"needmakefit","newsize <= m_capacity"),
                       iVar21 != 0)) {
                      halt_baddata();
                    }
                    local_838[lVar77 * 3] = uVar69;
                    piVar36 = (int *)(local_848[lVar77 * 3] + uVar76 * 0xc);
                    *piVar36 = (int)uVar53;
                    piVar36[1] = (int)uVar68 - (int)uVar53;
                    piVar36[2] = uVar62;
                    uVar76 = (ulong)*(byte *)((long)puVar30 + (uVar53 - 1));
                    uVar35 = 1L << (uVar76 & 0x3f);
                    iVar20 = iVar20 + 1;
                    uVar68 = uVar53;
                  }
                  if ((long)(uVar53 - 1) < 0) break;
                  uVar53 = uVar53 - 1;
                  uVar62 = (uint)uVar76;
                  uVar69 = puVar42[uVar53] & uVar35;
                }
              }
              uVar69 = local_838[lVar77 * 3];
              uVar53 = uVar69 + 1;
              if ((local_848[lVar77 * 3 + 1] < uVar53) &&
                 (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar21 != 0)) {
                halt_baddata();
              }
              local_838[lVar77 * 3] = uVar53;
              plVar46 = (long *)local_848[lVar77 * 3];
              plVar37 = (long *)((long)plVar46 + uVar69 * 0xc);
              *(undefined4 *)plVar37 = 0;
              *(int *)((long)plVar37 + 4) = (int)uVar68;
              *(uint *)(plVar37 + 1) = (uint)*(byte *)((long)puVar30 + (uVar68 - 1));
              if (plVar37 <= plVar46) break;
              do {
                plVar47 = (long *)((long)plVar46 + 0xc);
                local_a88 = (byte *)*plVar46;
                lVar40 = plVar46[1];
                local_a80 = CONCAT44(local_a80._4_4_,(int)lVar40);
                lVar70 = *plVar37;
                *(int *)(plVar46 + 1) = (int)plVar37[1];
                *plVar46 = lVar70;
                *(int *)(plVar37 + 1) = (int)lVar40;
                plVar38 = (long *)((long)plVar37 + -0xc);
                *plVar37 = (long)local_a88;
                plVar37 = plVar38;
                plVar46 = plVar47;
              } while (plVar47 < plVar38);
              lVar77 = (long)((int)lVar77 + 1);
              if (param_6 <= lVar77) goto LAB_00181280;
            }
            goto LAB_00180d90;
          }
        }
LAB_00181280:
        if (local_af0 == 2) {
          bVar14 = false;
          goto joined_r0x001813ec;
        }
        FUN_00185410(&local_6b0);
        if (((int)local_6a0 == 1) ||
           (FUN_001853a0(param_1,&local_6b0,param_8,iVar61,param_10), (int)local_6a0 == 1))
        goto LAB_00181308;
        if (4000 < iVar20) {
          if ((local_b8c >> 9 & 0x7f) < 0x19) {
            local_b8c = local_b8c << 1;
            local_af0 = local_af0 + -1;
          }
          else {
            local_b8c = 0x63ff;
          }
        }
        local_af0 = local_af0 + 1;
        uVar31 = uVar71;
        uVar32 = uVar23;
      } while( true );
    }
  }
  __n = 0xffffffffffffffff;
  uVar4 = local_858;
  goto joined_r0x00181a54;
joined_r0x00181800:
  uVar78 = uVar78 - 1;
  puVar59 = puVar59 + -1;
  if (uVar78 != 0) {
    uVar65 = uVar78 * 2 | 1;
    puVar64 = puVar59;
    do {
      puVar67 = puVar54 + uVar65;
      if (puVar67 + 1 <= puVar52) {
        if (*(int *)((long)puVar67 + 0xc) < *(int *)((long)puVar54 + (ulong)uVar65 * 8 + 4)) {
          uVar65 = uVar65 + 1;
          puVar67 = puVar67 + 1;
        }
        else {
        }
      }
      if (*(int *)((long)puVar64 + 4) <= *(int *)((long)puVar67 + 4)) break;
      uVar65 = uVar65 << 1 | 1;
      uVar29 = *puVar64;
      *puVar64 = *puVar67;
      *puVar67 = uVar29;
      puVar64 = puVar67;
    } while (uVar65 < uVar62);
    goto joined_r0x00181800;
  }
  do {
    uVar29 = 1;
    do {
      iVar61 = (int)uVar29;
      puVar64 = puVar54 + uVar29;
      if (puVar64 + 1 <= puVar52) {
        if (*(int *)((long)puVar64 + 0xc) < *(int *)((long)puVar54 + uVar29 * 8 + 4)) {
          iVar61 = iVar61 + 1;
          puVar64 = puVar64 + 1;
        }
        else {
        }
      }
      if (*(int *)((long)puVar59 + 4) <= *(int *)((long)puVar64 + 4)) break;
      uVar62 = iVar61 << 1 | 1;
      uVar31 = *puVar59;
      *puVar59 = *puVar64;
      uVar29 = (ulong)uVar62;
      *puVar64 = uVar31;
      puVar59 = puVar64;
    } while (uVar62 < (uint)uVar63);
    uVar29 = *puVar54;
    uVar62 = (uint)uVar63 - 1;
    uVar63 = (ulong)uVar62;
    *puVar54 = *puVar52;
    *puVar52 = uVar29;
    puVar52 = puVar52 + -1;
    puVar59 = puVar54;
  } while (1 < uVar62);
  plVar37 = alStack_80;
LAB_001815a8:
  puVar54 = (ulong *)plVar37[-3];
  puVar52 = (ulong *)plVar37[-2];
  uVar62 = *(uint *)(plVar37 + -1);
  plVar37 = plVar37 + -3;
joined_r0x001817f0:
  if (uVar62 == 0) goto LAB_0018196c;
  uVar63 = (ulong)uVar62;
  goto joined_r0x0018159c;
LAB_00181308:
  local_b30 = 1;
  bVar14 = true;
joined_r0x001813ec:
  if (local_870 != (byte *)0x0) {
    if ((local_878 == 0) ||
       (local_870 + (local_868 + 0xf & 0xfffffffffffffff0) != *(byte **)(local_878 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(byte **)(local_878 + 8) = local_870;
    }
    local_870 = (byte *)0x0;
  }
  if (local_a68 != (undefined8 *)0x0) {
    if ((local_a70 == 0) ||
       ((local_a60 + 0xfU & 0xfffffffffffffff0) + (long)local_a68 != *(long *)(local_a70 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(undefined8 **)(local_a70 + 8) = local_a68;
    }
    local_a68 = (undefined8 *)0x0;
  }
  if (bVar14) {
LAB_00181a04:
    __n = 0xffffffffffffffff;
    pbVar74 = local_870;
    uVar4 = 0;
  }
  else {
    FUN_0015cf00(&local_a70,0x1f8);
    uVar19 = (uint)local_b30;
    if (0 < (int)uVar19) {
      uVar63 = local_b30 & 3;
      if ((local_b30 & 0xffffffff) - 1 < 3) {
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        plVar37 = &local_a60;
        do {
          iVar16 = (int)uVar29;
          *(int *)(plVar37 + -2) = iVar16;
          *(int *)(plVar37 + -1) = iVar16 + 1;
          uVar29 = uVar29 + 4;
          *(int *)plVar37 = iVar16 + 2;
          *(int *)(plVar37 + 1) = iVar16 + 3;
          plVar37 = plVar37 + 4;
        } while ((local_b30 & 0xffffffff) - uVar63 != uVar29);
      }
      if (uVar63 != 0) {
        puVar52 = local_a58 + (uVar29 - 3);
        do {
          *(int *)puVar52 = (int)uVar29;
          uVar63 = uVar63 - 1;
          uVar29 = (ulong)((int)uVar29 + 1);
          puVar52 = puVar52 + 1;
        } while (uVar63 != 0);
      }
    }
    if (param_6 < 1) {
      iVar16 = 0;
    }
    else {
      lVar40 = 0;
      iVar16 = 0;
      do {
        uVar63 = local_838[lVar40 * 3];
        iVar16 = iVar16 + (int)uVar63;
        if (0 < (int)uVar63) {
          uVar31 = local_848[lVar40 * 3];
          uVar29 = uVar63 & 3;
          if ((uVar63 & 0xffffffff) - 1 < 3) {
            lVar77 = 0;
          }
          else {
            lVar77 = 0;
            piVar36 = (int *)(uVar31 + 0x20);
            do {
              *(int *)((long)local_a58 + ((long)piVar36[-6] * 2 + -5) * 4) =
                   *(int *)((long)local_a58 + ((long)piVar36[-6] * 2 + -5) * 4) + 1;
              *(int *)((long)local_a58 + ((long)piVar36[-3] * 2 + -5) * 4) =
                   *(int *)((long)local_a58 + ((long)piVar36[-3] * 2 + -5) * 4) + 1;
              *(int *)((long)local_a58 + ((long)*piVar36 * 2 + -5) * 4) =
                   *(int *)((long)local_a58 + ((long)*piVar36 * 2 + -5) * 4) + 1;
              piVar2 = piVar36 + 3;
              piVar36 = piVar36 + 0xc;
              lVar77 = lVar77 + 4;
              *(int *)((long)local_a58 + ((long)*piVar2 * 2 + -5) * 4) =
                   *(int *)((long)local_a58 + ((long)*piVar2 * 2 + -5) * 4) + 1;
            } while ((uVar63 & 0xffffffff) - uVar29 != lVar77);
          }
          if (uVar29 != 0) {
            piVar36 = (int *)(uVar31 + lVar77 * 0xc + 8);
            do {
              uVar29 = uVar29 - 1;
              *(int *)((long)local_a58 + ((long)*piVar36 * 2 + -5) * 4) =
                   *(int *)((long)local_a58 + ((long)*piVar36 * 2 + -5) * 4) + 1;
              piVar36 = piVar36 + 3;
            } while (uVar29 != 0);
          }
        }
        lVar40 = (long)((int)lVar40 + 1);
      } while (lVar40 < param_6);
    }
    if (1 < uVar19) {
      puVar52 = local_a58 + ((ulong)(uVar19 - 1) - 3);
      uVar63 = local_b30 & 0xffffffff;
      plVar37 = alStack_80;
      do {
        plVar46 = plVar37;
        uVar62 = (int)(uVar63 >> 1) + ((uint)uVar63 >> 2);
        uVar63 = (ulong)uVar62;
        plVar37 = plVar46 + -3;
      } while (uVar62 != 0);
      *(undefined4 *)(plVar46 + -4) = 0;
      if (uVar19 != 0) {
        puVar54 = &local_a70;
        uVar63 = local_b30 & 0xffffffff;
        uVar62 = uVar19;
joined_r0x0018159c:
        if (1 < uVar62) {
LAB_0018160c:
          uVar62 = (uint)uVar63;
          if (uVar62 == 2) {
            if (*(int *)((long)puVar52 + 4) <= *(int *)((long)puVar54 + 4)) goto LAB_001815a8;
            uVar63 = *puVar54;
            *puVar54 = *puVar52;
            *puVar52 = uVar63;
            puVar54 = (ulong *)plVar37[-3];
            puVar52 = (ulong *)plVar37[-2];
            uVar62 = *(uint *)(plVar37 + -1);
          }
          else {
            uVar78 = uVar62 >> 1;
            puVar59 = puVar54 + uVar78;
            iVar21 = *(int *)((long)puVar59 + 4U);
            iVar61 = *(int *)((long)puVar54 + 4);
            iVar20 = *(int *)((long)puVar52 + 4);
            if (iVar61 < iVar21) {
              if (iVar21 <= iVar20) {
LAB_001816e8:
                uVar29 = *puVar54;
                *puVar54 = *puVar52;
                goto LAB_00181770;
              }
              if (iVar61 <= iVar20) {
                uVar29 = *puVar59;
                *puVar59 = *puVar54;
                *puVar54 = uVar29;
                goto LAB_00181764;
              }
              uVar29 = *puVar54;
              *puVar54 = *puVar59;
              *puVar59 = uVar29;
            }
            else if (iVar21 < iVar20) {
              if (iVar61 <= iVar20) {
                uVar29 = *puVar54;
                *puVar54 = *puVar59;
                *puVar59 = uVar29;
                goto LAB_001816e8;
              }
LAB_00181764:
              uVar29 = *puVar59;
              *puVar59 = *puVar52;
LAB_00181770:
              *puVar52 = uVar29;
            }
            if (4 < uVar62) {
              if (plVar37 == alStack_80) goto joined_r0x00181800;
              uVar63 = *puVar59;
              *puVar59 = *puVar54;
              uVar29 = uVar63 >> 0x20;
              *puVar54 = uVar63;
              puVar59 = puVar54;
              puVar64 = puVar52;
              while( true ) {
                do {
                  piVar36 = (int *)((long)puVar64 + -4);
                  puVar64 = puVar64 + -1;
                } while (*piVar36 < (int)uVar29);
                puVar67 = puVar59;
                if (puVar64 <= puVar59) break;
                do {
                  puVar59 = puVar67;
                  puVar67 = puVar59 + 1;
                } while ((int)uVar29 < *(int *)((long)puVar59 + 0xc));
                if (puVar64 <= puVar67) break;
                uVar63 = *puVar67;
                *puVar67 = *puVar64;
                *puVar64 = uVar63;
                uVar29 = (ulong)*(uint *)((long)puVar54 + 4);
                puVar59 = puVar67;
              }
              uVar63 = *puVar54;
              *puVar54 = *puVar59;
              *puVar59 = uVar63;
              puVar64 = puVar59;
              do {
                puVar67 = puVar64 + 1;
                iVar61 = (int)(uVar63 >> 0x20);
                if (puVar52 <= puVar67) break;
                piVar36 = (int *)((long)puVar64 + 0xc);
                puVar64 = puVar67;
              } while (iVar61 <= *piVar36);
              do {
                puVar64 = puVar59 + -1;
                if (puVar64 <= puVar54) break;
                piVar36 = (int *)((long)puVar59 - 4);
                puVar59 = puVar64;
              } while (*piVar36 <= iVar61);
              iVar61 = (int)((ulong)((long)puVar52 - (long)puVar67) >> 3);
              uVar62 = iVar61 + 1;
              iVar20 = (int)((ulong)((long)puVar64 - (long)puVar54) >> 3);
              uVar78 = iVar20 + 1;
              bVar14 = uVar78 <= uVar62;
              puVar59 = puVar52;
              puVar10 = puVar67;
              if (bVar14) {
                uVar62 = iVar20 + 1;
                puVar59 = puVar64;
                puVar10 = puVar54;
              }
              *plVar37 = (long)puVar10;
              plVar37[1] = (long)puVar59;
              if (bVar14) {
                uVar78 = iVar61 + 1;
              }
              uVar63 = (ulong)uVar78;
              if (bVar14) {
                puVar64 = puVar52;
              }
              *(uint *)(plVar37 + 2) = uVar62;
              if (bVar14) {
                puVar54 = puVar67;
              }
              plVar37 = plVar37 + 3;
              puVar52 = puVar64;
              if (uVar78 < 2) goto LAB_001815a8;
              goto LAB_0018160c;
            }
            if (uVar62 == 3) goto LAB_001815a8;
            iVar61 = *(int *)((long)puVar54 + 0xc);
            if (*(int *)((long)puVar59 + 4U) <= iVar61) {
              if (*(int *)((long)puVar54 + 4) < iVar61) {
                uVar63 = *puVar54;
                *puVar54 = puVar54[1];
                puVar54[1] = uVar63;
                puVar54 = (ulong *)plVar37[-3];
                puVar52 = (ulong *)plVar37[-2];
                uVar62 = *(uint *)(plVar37 + -1);
                goto joined_r0x001817f0;
              }
              goto LAB_001815a8;
            }
            if (*(int *)((long)puVar52 + 4) < iVar61) {
              uVar63 = puVar54[1];
              puVar54[1] = *puVar59;
              *puVar59 = uVar63;
              puVar54 = (ulong *)plVar37[-3];
              puVar52 = (ulong *)plVar37[-2];
              uVar62 = *(uint *)(plVar37 + -1);
            }
            else {
              uVar63 = *puVar59;
              *puVar59 = puVar54[1];
              puVar54[1] = uVar63;
              uVar63 = *puVar59;
              *puVar59 = *puVar52;
              *puVar52 = uVar63;
              puVar54 = (ulong *)plVar37[-3];
              puVar52 = (ulong *)plVar37[-2];
              uVar62 = *(uint *)(plVar37 + -1);
            }
          }
joined_r0x001817f0:
          plVar37 = plVar37 + -3;
          goto joined_r0x001817f0;
        }
        goto LAB_001815a8;
      }
    }
LAB_0018196c:
    if (0 < (int)uVar19) {
      if (uVar19 == 1) {
        lVar40 = 0;
      }
      else {
        lVar40 = 0;
        ppuVar55 = &local_a68;
        do {
          iVar20 = (int)lVar40;
          *(int *)((long)&local_680 + (long)*(int *)(ppuVar55 + -1) * 4) = iVar20;
          iVar61 = *(int *)ppuVar55;
          lVar40 = lVar40 + 2;
          ppuVar55 = ppuVar55 + 2;
          *(int *)((long)&local_680 + (long)iVar61 * 4) = iVar20 + 1;
        } while ((local_b30 & 0xffffffff) - (local_b30 & 1) != lVar40);
      }
      if ((local_b30 & 1) != 0) {
        *(int *)((long)&local_680 + (long)(int)local_a58[lVar40 + -3] * 4) = (int)lVar40;
      }
    }
    iVar61 = uVar19 + 1;
    do {
      iVar20 = iVar61 + -2;
      iVar61 = iVar61 + -1;
    } while (*(int *)((long)local_a58 + ((long)iVar20 * 2 + -5) * 4) == 0);
    if (iVar61 == 1) goto LAB_00181a04;
    iVar20 = iVar16 + (int)param_6;
    if (iVar20 * 6 < 0xc000) {
      uVar63 = (ulong)iVar16;
      FUN_0015c528(&local_878,uVar4 + 0x20 + uVar4 + uVar63 + (long)(iVar20 * 2),param_10,0);
      pbVar5 = local_870;
      pbVar74 = local_870 + uVar4 + 0x20;
      puVar72 = (ushort *)(local_870 + 1);
      *local_870 = (byte)iVar61 ^ 0x80;
      local_a80 = uVar4;
      param_7 = param_7 & 0xffffffef;
      local_a78 = 0;
      local_a88 = pbVar74;
      if (iVar61 < 1) {
        fVar80 = 1.0;
      }
      else if (param_6 < 1) {
        fVar80 = 1.0;
        __n = 0xffffffffffffffff;
        iVar16 = iVar61;
        do {
          local_a78 = 0;
          local_a8c = 1.0737418e+09;
          lVar40 = FUN_00174f30(param_1,0x53800000,puVar72,pbVar74,0,0,param_7,param_8,&local_a8c,
                                param_10,param_11,0);
          if ((lVar40 < 0) || (fVar80 = fVar80 + local_a8c, *param_9 <= fVar80))
          goto joined_r0x0018256c;
          puVar72 = (ushort *)((long)puVar72 + lVar40);
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      else {
        fVar80 = 1.0;
        iVar16 = 0;
        __n = 0xffffffffffffffff;
        do {
          lVar40 = 0;
          local_a78 = 0;
          iVar21 = (int)local_838[0];
          while( true ) {
            if (0 < iVar21) {
              lVar77 = 0;
              lVar70 = *(long *)(param_4 + lVar40 * 8);
              piVar36 = (int *)(local_848[lVar40 * 3] + 8);
              iVar15 = *(int *)((long)&local_680 + (long)*piVar36 * 4);
              while( true ) {
                if (iVar15 == iVar16) {
                  lVar75 = lVar70 + piVar36[-2];
                  FUN_00183f20(&local_a88,local_a78,lVar75,lVar75 + piVar36[-1]);
                }
                if ((long)iVar21 <= lVar77 + 1) break;
                lVar77 = lVar77 + 1;
                piVar36 = piVar36 + 3;
                iVar15 = *(int *)((long)&local_680 + (long)*piVar36 * 4);
              }
            }
            lVar40 = (long)((int)lVar40 + 1);
            if (param_6 <= lVar40) break;
            iVar21 = (int)local_838[lVar40 * 3];
          }
          pbVar73 = (byte *)0x0;
          if (local_a78 != 0) {
            pbVar73 = local_a88;
          }
          local_a8c = 1.0737418e+09;
          lVar40 = FUN_00174f30(param_1,0x53800000,puVar72,pbVar74,pbVar73,(long)(int)local_a78,
                                param_7,param_8,&local_a8c,param_10,param_11,0);
          if ((lVar40 < 0) || (fVar80 = fVar80 + local_a8c, *param_9 <= fVar80))
          goto joined_r0x0018256c;
          iVar16 = iVar16 + 1;
          puVar72 = (ushort *)((long)puVar72 + lVar40);
        } while (iVar61 != iVar16);
      }
      pbVar73 = pbVar74 + uVar4;
      uVar29 = (ulong)iVar20;
      pbVar34 = pbVar73 + uVar29;
      if (param_6 < 1) {
        uVar57 = 0;
        uVar60 = 0;
        local_ab0 = 0;
        iVar20 = 0;
        iVar16 = 0;
      }
      else {
        local_ab0 = 0;
        local_aa8 = 0;
        lVar40 = uVar60 * 2 + uVar57 * 2;
        lVar77 = 0;
        iVar16 = 0;
        iVar20 = 0;
        uVar31 = 0;
        iVar21 = (int)local_838[0];
        while( true ) {
          if (0 < iVar21) {
            piVar36 = (int *)(local_848[lVar77 * 3] + 8);
            lVar70 = 0;
            iVar15 = iVar20;
            do {
              uVar17 = *(undefined4 *)((long)&local_680 + (long)*piVar36 * 4);
              if ((uVar29 < uVar31 + lVar70 + 1) &&
                 (iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar20 != 0)) {
                halt_baddata();
              }
              bVar6 = (char)uVar17 + 1;
              pbVar5[lVar70 + uVar31 + lVar40 + uVar29 + 0x20] = bVar6;
              iVar49 = 0x1f - (int)LZCOUNT(piVar36[-1]);
              if (piVar36[-1] == 0) {
                iVar49 = -1;
              }
              if ((uVar63 < local_ab0 + lVar70 + 1U) &&
                 (iVar20 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar20 != 0)) {
                halt_baddata();
              }
              iVar20 = iVar49;
              if (iVar49 <= iVar15) {
                iVar20 = iVar15;
              }
              pbVar5[lVar70 + local_ab0 + lVar40 + uVar29 * 2 + 0x20] = (byte)iVar49;
              if ((uVar29 < local_aa8 + lVar70 + 1) &&
                 (iVar15 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                        "needmakefit","newsize <= m_capacity"), iVar15 != 0)) {
                halt_baddata();
              }
              pbVar5[lVar70 + local_aa8 + lVar40 + 0x20] = bVar6 | (byte)(iVar49 << 4);
              lVar70 = lVar70 + 1;
              iVar16 = iVar49 + iVar16;
              piVar36 = piVar36 + 3;
              iVar15 = iVar20;
            } while (lVar70 < iVar21);
            local_aa8 = local_aa8 + lVar70;
            local_ab0 = local_ab0 + lVar70;
            uVar31 = uVar31 + lVar70;
          }
          uVar57 = uVar31 + 1;
          if ((uVar29 < uVar57) &&
             (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                    "needmakefit","newsize <= m_capacity"), iVar21 != 0)) {
            halt_baddata();
          }
          uVar60 = local_aa8 + 1;
          pbVar34[uVar31] = 0;
          if ((uVar29 < uVar60) &&
             (iVar21 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                    "needmakefit","newsize <= m_capacity"), iVar21 != 0)) {
            halt_baddata();
          }
          pbVar73[local_aa8] = 0;
          lVar77 = (long)((int)lVar77 + 1);
          if (param_6 <= lVar77) break;
          iVar21 = (int)local_838[lVar77 * 3];
          uVar31 = uVar57;
          local_aa8 = uVar60;
        }
      }
      puVar58 = puVar72 + 1;
      lVar40 = (long)iVar16 + 7;
      lVar77 = (long)iVar16 + 0xe;
      if (-1 < lVar40) {
        lVar77 = lVar40;
      }
      local_a8c = 1.0737418e+09;
      pbVar50 = (byte *)0x0;
      if (uVar57 != 0) {
        pbVar50 = pbVar34;
      }
      lVar40 = FUN_00174f30(param_1,0x53800000,puVar58,pbVar74,pbVar50,uVar29,param_7,param_8,
                            &local_a8c,param_10,param_11,0);
      if (lVar40 < 1) {
LAB_00182560:
        __n = 0xffffffffffffffff;
      }
      else {
        local_a90 = 1.0737418e+09;
        pbVar50 = (byte *)0x0;
        if (local_ab0 != 0) {
          pbVar50 = pbVar34 + uVar29;
        }
        lVar70 = FUN_00174f30(param_1,0x53800000,(long)puVar58 + lVar40,pbVar74,pbVar50,uVar63,
                              param_7,param_8,&local_a90,param_10,param_11,0);
        if (lVar70 < 1) goto LAB_00182560;
        lVar77 = (lVar77 >> 3) + 0x10;
        local_a94 = local_a8c + local_a90;
        bVar14 = false;
        puVar52 = (ulong *)((long)puVar58 + lVar40 + lVar70);
        puVar54 = puVar52;
        if ((iVar61 < 0x10) && (iVar20 < 0x10)) {
          pbVar34 = (byte *)0x0;
          if (uVar60 != 0) {
            pbVar34 = pbVar73;
          }
          lVar40 = FUN_00174f30(param_1,0x53800000,puVar58,pbVar74,pbVar34,uVar29,param_7,param_8,
                                &local_a94,param_10,param_11,0);
          bVar14 = 0 < lVar40;
          puVar54 = (ulong *)((long)puVar58 + lVar40);
          if (lVar40 < 1) {
            puVar54 = puVar52;
          }
        }
        fVar80 = fVar80 + 2.0 + local_a94;
        if ((*param_9 <= fVar80 + (float)lVar77) || ((long)pbVar74 - (long)puVar54 < lVar77))
        goto LAB_00182560;
        pbVar73 = pbVar74;
        puVar52 = puVar54;
        if (param_6 < 1) {
          uVar60 = 0;
          uVar57 = 0;
          lVar77 = 0x3f;
          lVar40 = 0x3f;
        }
        else {
          lVar70 = 0;
          bVar11 = false;
          uVar57 = 0;
          uVar60 = 0;
          lVar40 = 0x3f;
          lVar77 = 0x3f;
          puVar59 = local_838;
          while( true ) {
            if (0 < (int)local_838[0]) {
              lVar75 = 0;
              lVar25 = 4;
              do {
                uVar62 = *(uint *)(local_848[lVar70 * 3] + lVar25);
                uVar19 = 0x1f - (int)LZCOUNT(uVar62);
                if (uVar62 == 0) {
                  uVar19 = 0xffffffff;
                }
                uVar29 = (ulong)(uVar62 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU));
                if (bVar11) {
                  lVar40 = lVar40 - (int)uVar19;
                  uVar57 = uVar57 << ((ulong)uVar19 & 0x3f) | uVar29;
                  *(ulong *)(pbVar73 + -8) = uVar57 << (lVar40 + 1U & 0x3f);
                  pbVar73 = pbVar73 + -((long)(0x3fU - lVar40) >> 3);
                  lVar40 = (0x3fU - lVar40 & 0xfffffffffffffff8) + lVar40;
                }
                else {
                  lVar77 = lVar77 - (int)uVar19;
                  uVar60 = uVar60 << ((ulong)uVar19 & 0x3f) | uVar29;
                  uVar29 = uVar60 << (lVar77 + 1U & 0x3f);
                  uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  *puVar52 = uVar29 >> 0x20 | uVar29 << 0x20;
                  puVar52 = (ulong *)((long)puVar52 + ((long)(0x3fU - lVar77) >> 3));
                  lVar77 = (0x3fU - lVar77 & 0xfffffffffffffff8) + lVar77;
                }
                lVar75 = lVar75 + 1;
                bVar11 = (bool)(bVar11 ^ 1);
                lVar25 = lVar25 + 0xc;
              } while (lVar75 < (int)*puVar59);
            }
            lVar70 = (long)((int)lVar70 + 1);
            bVar11 = (bool)(bVar11 ^ bVar14);
            if (param_6 <= lVar70) break;
            puVar59 = local_838 + lVar70 * 3;
            local_838[0]._0_4_ = (int)*puVar59;
          }
        }
        uVar29 = uVar60 << (lVar77 + 1U & 0x3f);
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        *puVar52 = uVar29 >> 0x20 | uVar29 << 0x20;
        uVar29 = 0x3fU - lVar77 & 0xfffffffffffffff8;
        puVar56 = (undefined1 *)((long)puVar52 + ((long)(0x3fU - lVar77) >> 3));
        lVar70 = uVar29 + lVar77;
        if (0 < 0x3f - lVar70) {
          uVar31 = (ulong)((int)lVar70 + 1) & 7;
          lVar70 = lVar70 - uVar31;
          if (7 < 0x3f - lVar70) {
            uVar60 = uVar60 << uVar31;
            uVar29 = ((uVar31 - lVar77) - uVar29) + 0x37;
            if (((uint)uVar29 >> 3 & 1) == 0) {
              uVar31 = 0x37 - lVar70;
              lVar70 = lVar70 + 8;
              *puVar56 = (char)(uVar60 >> (uVar31 & 0x3f));
              uVar60 = uVar60 & *(uint *)(PTR_DAT_047cb910 + uVar31 * 4);
              puVar56 = puVar56 + 1;
            }
            if (7 < uVar29) {
              lVar77 = -lVar70;
              puVar48 = (uint *)(PTR_DAT_047cb910 + (0x16 - lVar70) * 4 + 0x84);
              do {
                *puVar56 = (char)(uVar60 >> (lVar77 + 0x37U & 0x3f));
                uVar19 = *puVar48;
                uVar29 = lVar77 + 0x2f;
                lVar77 = lVar77 + -0x10;
                puVar56[1] = (char)((uVar60 & uVar19) >> (uVar29 & 0x3f));
                puVar56 = puVar56 + 2;
                uVar60 = uVar60 & uVar19 & (ulong)puVar48[-8];
                puVar48 = puVar48 + -0x10;
              } while (7 < (long)uVar29);
              lVar70 = -lVar77;
            }
          }
        }
        pbVar34 = pbVar73 + -((long)(0x3fU - lVar40) >> 3);
        uVar60 = 0x3fU - lVar40 & 0xfffffffffffffff8;
        *(ulong *)(pbVar73 + -8) = uVar57 << (lVar40 + 1U & 0x3f);
        puVar13 = PTR_DAT_047cb910;
        lVar77 = uVar60 + lVar40;
        if (0 < 0x3f - lVar77) {
          uVar29 = (ulong)((int)lVar77 + 1) & 7;
          lVar77 = lVar77 - uVar29;
          if (7 < 0x3f - lVar77) {
            uVar60 = ((uVar29 - lVar40) - uVar60) + 0x37;
            uVar57 = uVar57 << uVar29;
            if (((uint)uVar60 >> 3 & 1) == 0) {
              uVar29 = 0x37 - lVar77;
              lVar77 = lVar77 + 8;
              pbVar34 = pbVar34 + -1;
              *pbVar34 = (byte)(uVar57 >> (uVar29 & 0x3f));
              uVar57 = uVar57 & *(uint *)(puVar13 + uVar29 * 4);
            }
            if (7 < uVar60) {
              uVar60 = 0x3f - lVar77;
              puVar48 = (uint *)(puVar13 + (0x16 - lVar77) * 4 + 0x84);
              do {
                uVar29 = uVar60 - 8;
                uVar60 = uVar60 - 0x10;
                pbVar34[-1] = (byte)(uVar57 >> (uVar29 & 0x3f));
                uVar19 = *puVar48;
                pbVar34 = pbVar34 + -2;
                *pbVar34 = (byte)((uVar57 & uVar19) >> (uVar60 & 0x3f));
                puVar3 = puVar48 + -8;
                puVar48 = puVar48 + -0x10;
                uVar57 = uVar57 & uVar19 & (ulong)*puVar3;
              } while (7 < (long)uVar60);
            }
          }
        }
        lVar40 = 0x4d - lVar70;
        if (-1 < 0x46 - lVar70) {
          lVar40 = 0x46 - lVar70;
        }
        memmove(puVar56 + (lVar40 >> 3),pbVar34,(long)pbVar74 - (long)pbVar34);
        puVar56 = puVar56 + (lVar40 >> 3) + (((long)pbVar74 - (long)pbVar34) - (long)puVar54);
        uVar26 = (ushort)puVar56 | 0x8000;
        if (!bVar14) {
          uVar26 = (ushort)puVar56;
        }
        *puVar72 = uVar26;
        fVar79 = (float)(**(code **)(param_8 + 0x38))(uVar63,uVar4);
        fVar80 = fVar80 + (float)(long)puVar56 + fVar79 * (float)param_1;
        if (*param_9 <= fVar80) goto LAB_00182560;
        __n = (long)puVar54 + ((long)puVar56 - (long)pbVar5);
        if (param_3 - (long)param_2 < (long)__n) {
          FUN_0015c3d0();
          if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
            (**(code **)PTR_PTR_047cb868)
                      (0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",0xf4a,
                       "OODLE ERROR : not enough comp space");
          }
          FUN_0015c3f0();
          __n = 0xffffffffffffffff;
        }
        else {
          *param_9 = fVar80;
          memcpy(param_2,pbVar5,__n);
        }
      }
joined_r0x0018256c:
      pbVar74 = (byte *)0x0;
      uVar4 = local_858;
      if (local_870 != (byte *)0x0) {
        if ((local_878 == 0) ||
           (local_870 + (local_868 + 0xf & 0xfffffffffffffff0) != *(byte **)(local_878 + 8))) {
          (**(code **)PTR_PTR_047cb898)();
        }
        else {
          *(byte **)(local_878 + 8) = local_870;
        }
        local_870 = (byte *)0x0;
        pbVar74 = local_870;
        uVar4 = local_858;
      }
    }
    else {
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",0xd93,
                   "OODLE ERROR : WARNING: Too many indices for decoder scratch!\n");
      }
      FUN_0015c3f0();
      __n = 0xffffffffffffffff;
      pbVar74 = local_870;
      uVar4 = local_858;
    }
  }
  local_870 = pbVar74;
  if (local_858 != 0) {
    if ((local_860 == 0) ||
       ((local_850 + 0xfU & 0xfffffffffffffff0) + local_858 != *(long *)(local_860 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(ulong *)(local_860 + 8) = local_858;
    }
    local_858 = 0;
    uVar4 = local_858;
  }
joined_r0x00181a54:
  local_858 = uVar4;
  if (local_6c0 != 0) {
    if ((local_6c8 == 0) ||
       ((local_6b8 + 0xfU & 0xfffffffffffffff0) + local_6c0 != *(long *)(local_6c8 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_6c8 + 8) = local_6c0;
    }
  }
  local_6c0 = 0;
  if (local_690 != 0) {
    if ((local_698 == 0) ||
       ((local_688 + 0xfU & 0xfffffffffffffff0) + local_690 != *(long *)(local_698 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_698 + 8) = local_690;
    }
  }
  return __n;
}


