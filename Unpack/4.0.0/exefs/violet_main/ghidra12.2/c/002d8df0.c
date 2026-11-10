/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d8df0; name: FUN_002d8df0
 */


undefined8
FUN_002d8df0(long *param_1,ulong *param_2,ulong *param_3,ulong param_4,byte param_5,long param_6,
            uint param_7)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void *__s;
  byte *__s_00;
  ostream *poVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_180 [8];
  ostream aoStack_178 [264];
  ulong local_70;
  ulong uStack_68;
  
  if ((int)param_1[1] == 0) {
    return 0;
  }
  uStack_68 = param_3[1];
  local_70 = *param_3;
  if (local_70 == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uVar15 = *param_2;
    if (local_70 <= uVar15) goto LAB_002d8e5c;
  }
  else {
    uVar15 = *param_2;
    if (local_70 <= uVar15) {
LAB_002d8e5c:
      uVar9 = local_70;
      if (uVar15 + param_2[1] <= local_70 + uStack_68) {
        cVar5 = *(char *)*param_1;
        if ((local_70 != uVar15) && (cVar5 != '\0')) {
          return 0;
        }
        if (((char *)*param_1)[1] != '\0') {
          if (local_70 + uStack_68 != uVar15 + param_2[1]) {
            return 0;
          }
          param_5 = 1;
          *(undefined1 *)((long)param_1 + 0x11) = 1;
        }
        if (-1 < (int)param_7) {
          uVar15 = (ulong)(param_7 << 1);
          *(uint *)((long)param_1 + 0xc) = param_7 << 1;
          *(byte *)(param_1 + 2) = param_5 & 1;
          if (param_7 == 0) {
            uVar15 = 2;
            *(undefined4 *)((long)param_1 + 0xc) = 2;
          }
          __s = (void *)FUN_0049e7b0(PTR_FUN_047cba38,
                                     -(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3);
          param_1[0x18] = (long)__s;
          memset(__s,0,(long)*(int *)((long)param_1 + 0xc) << 3);
          *(undefined1 *)(param_1 + 0x19) = 0;
          param_1[3] = uVar9;
          __s_00 = (byte *)*param_2;
          uVar15 = param_2[1];
          plVar17 = param_1 + 5;
          *(int *)plVar17 = 0;
          param_1[4] = (long)(__s_00 + uVar15);
          plVar16 = param_1 + 10;
          *(int *)plVar16 = 0;
          uVar9 = 0xffffffff;
          plVar14 = plVar16;
          if (__s_00 + uVar15 <= __s_00) goto LAB_002d8f90;
          do {
            uVar9 = (ulong)*__s_00;
            plVar14 = plVar16;
LAB_002d8f90:
            do {
              plVar16 = plVar17;
              plVar17 = plVar14;
              uVar7 = FUN_002d89f0(param_1,plVar16,plVar17,uVar9,&local_70,__s_00);
              *(int *)plVar16 = 0;
              pbVar10 = (byte *)param_1[4];
              if (uVar7 != 0) {
                do {
                  puVar1 = (uint *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar7 * 8);
                  uVar4 = *puVar1;
                  uVar2 = uVar4 & 7;
                  if (uVar2 == 3) {
                    iVar6 = *(int *)(*(long *)(*param_1 + 0x60) + (long)(int)uVar7 * 8 + 4);
                    if (iVar6 < *(int *)((long)param_1 + 0xc)) {
                      *(byte **)(param_1[0x18] + (long)iVar6 * 8) = pbVar10;
                    }
                  }
                  else if (uVar2 != 6) {
                    if (uVar2 == 5) {
                      *(byte **)(param_1[0x18] + 8) = pbVar10;
                      *(undefined1 *)(param_1 + 0x19) = 1;
                    }
                    else {
                      FUN_002cc810(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x21f);
                    /* try { // try from 002d9260 to 002d927b has its CatchHandler @ 002d9324 */
                      poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                                         (aoStack_178,"Unexpected opcode in short circuit: ",0x24);
                      std::ostream::operator<<(poVar8,*puVar1 & 7);
                      FUN_002cc97c(auStack_180);
                    }
LAB_002d9284:
                    if ((int)*plVar17 != 0) {
                      lVar12 = plVar17[3];
                      do {
                        plVar14 = *(long **)(lVar12 + 8);
                        if ((plVar14 != (long *)0x0) &&
                           (lVar13 = *plVar14, iVar6 = (int)lVar13 + -1, *(int *)plVar14 = iVar6,
                           iVar6 == 0 || (int)lVar13 < 1)) {
                          *plVar14 = param_1[0x17];
                          param_1[0x17] = (long)plVar14;
                        }
                        lVar12 = lVar12 + 0x10;
                      } while (lVar12 != plVar17[3] + (long)(int)*plVar17 * 0x10);
                    }
                    if ((char)param_1[0x19] == '\0') {
                      return 0;
                    }
                    if ((int)param_7 < 1) {
                      return 1;
                    }
                    lVar12 = 0;
                    do {
                      plVar17 = (long *)(param_6 + lVar12);
                      lVar13 = *(long *)(param_1[0x18] + lVar12);
                      lVar3 = ((long *)(param_1[0x18] + lVar12))[1];
                      lVar12 = lVar12 + 0x10;
                      *plVar17 = lVar13;
                      plVar17[1] = lVar3 - lVar13;
                    } while ((ulong)param_7 * 0x10 != lVar12);
                    return 1;
                  }
                  uVar7 = uVar4 >> 4;
                } while( true );
              }
              if (pbVar10 < __s_00) goto LAB_002d9284;
              if ((char)param_1[0x19] == '\0') {
                if (cVar5 == '\0' && (param_4 & 1) == 0) {
                  if ((__s_00 < pbVar10) && ((int)*plVar17 == 0)) {
                    lVar12 = *param_1;
                    if (*(long *)(lVar12 + 0x18) != 0) {
                      if (*(long *)(lVar12 + 0x18) == 1) {
                        __s_00 = memchr(__s_00,*(int *)(lVar12 + 0x20),(long)pbVar10 - (long)__s_00)
                        ;
                      }
                      else {
                        __s_00 = (byte *)FUN_002d3628(lVar12,__s_00);
                      }
                      if (__s_00 == (byte *)0x0) {
                        __s_00 = (byte *)param_1[4];
                      }
                    }
                  }
                }
                else if (__s_00 != (byte *)*param_2) goto LAB_002d8fc4;
                plVar14 = (long *)param_1[0x17];
                if (plVar14 == (long *)0x0) {
                  lVar12 = param_1[0x12];
                  lVar13 = param_1[0x13];
                  uVar15 = 0;
                  if (lVar13 - lVar12 != 0) {
                    uVar15 = (lVar13 - lVar12) * 0x20 - 1;
                  }
                  uVar9 = param_1[0x16] + param_1[0x15];
                  if (uVar15 == uVar9) {
                    FUN_002d9434(param_1 + 0x11);
                    uVar9 = param_1[0x15] + param_1[0x16];
                    lVar12 = param_1[0x12];
                    lVar13 = param_1[0x13];
                  }
                  if (lVar13 == lVar12) {
                    puVar11 = (undefined8 *)0x0;
                  }
                  else {
                    puVar11 = (undefined8 *)
                              (*(long *)(lVar12 + (uVar9 >> 5 & 0x7fffffffffffff8)) +
                              (uVar9 & 0xff) * 0x10);
                  }
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  uVar15 = param_1[0x15] + param_1[0x16];
                  param_1[0x16] = param_1[0x16] + 1;
                  plVar14 = (long *)(*(long *)(param_1[0x12] + (uVar15 >> 5 & 0x7fffffffffffff8)) +
                                    (uVar15 & 0xff) * 0x10);
                  *(int *)plVar14 = 1;
                  lVar12 = FUN_0049e7b0(PTR_FUN_047cba38,(long)*(int *)((long)param_1 + 0xc) << 3);
                  plVar14[1] = lVar12;
                }
                else {
                  param_1[0x17] = *plVar14;
                  *(int *)plVar14 = 1;
                }
                memmove((void *)plVar14[1],(void *)param_1[0x18],
                        (long)*(int *)((long)param_1 + 0xc) << 3);
                *(byte **)plVar14[1] = __s_00;
                uVar15 = 0xffffffff;
                if (__s_00 < (byte *)param_1[4]) {
                  uVar15 = (ulong)*__s_00;
                }
                FUN_002d856c(param_1,plVar17,(int)param_1[1],uVar15,&local_70,__s_00,plVar14);
                lVar12 = *plVar14;
                iVar6 = (int)lVar12 + -1;
                *(int *)plVar14 = iVar6;
                if (iVar6 == 0 || (int)lVar12 < 1) {
                  *plVar14 = param_1[0x17];
                  param_1[0x17] = (long)plVar14;
                }
              }
LAB_002d8fc4:
              if ((int)*plVar17 == 0) goto LAB_002d9284;
              if (__s_00 == (byte *)0x0) {
                FUN_002d89f0(param_1,plVar17,plVar16,-(uint)(param_1[4] == 0),&local_70,0);
                *(int *)plVar17 = 0;
                plVar17 = plVar16;
                goto LAB_002d9284;
              }
              __s_00 = __s_00 + 1;
              uVar9 = 0xffffffff;
              plVar14 = plVar16;
            } while ((byte *)param_1[4] <= __s_00);
          } while( true );
        }
        FUN_002cc810(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x1db);
                    /* try { // try from 002d91dc to 002d91f3 has its CatchHandler @ 002d9328 */
        poVar8 = std::__put_character_sequence<char,std::char_traits<char>>
                           (aoStack_178,"Bad args: nsubmatch=",0x14);
        std::ostream::operator<<(poVar8,param_7);
        goto LAB_002d8ea0;
      }
    }
  }
  FUN_002cc810(auStack_180,"external/com_github_google_re2/re2/nfa.cc",0x1cc);
                    /* try { // try from 002d8e90 to 002d8e9f has its CatchHandler @ 002d932c */
  std::__put_character_sequence<char,std::char_traits<char>>
            (aoStack_178,"context does not contain text",0x1d);
LAB_002d8ea0:
  FUN_002cc97c(auStack_180);
  return 0;
}


