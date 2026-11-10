/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034f8f0; name: FUN_0034f8f0
 */


long FUN_0034f8f0(uint *param_1,long *param_2,long *param_3)

{
  uint *__src;
  ulong uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  void *pvVar8;
  void *__dest;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *__src_00;
  long *plVar13;
  char *__src_01;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  size_t sVar18;
  undefined1 auStack_80 [32];
  
  bVar7 = *param_2 == 0;
  uVar12 = param_2[1] & 0xff;
  if (!bVar7) {
    uVar12 = param_2[1];
  }
  if (uVar12 != 0) {
    __src = param_1 + 8;
    uVar12 = 0;
    do {
      lVar15 = (long)param_2 + 9;
      if (!bVar7) {
        lVar15 = param_2[2];
      }
      uVar6 = *(undefined1 *)(lVar15 + uVar12);
      if (*param_1 < 2) {
        if (*(ulong *)(param_1 + 0x408) < 0x1000) {
          *(undefined1 *)((long)param_1 + *(ulong *)(param_1 + 0x408) + 0x20) = uVar6;
          lVar15 = *(long *)(param_1 + 0x408);
          uVar11 = lVar15 + 1;
          *(ulong *)(param_1 + 0x408) = uVar11;
          if (uVar11 < 2) {
            if (uVar11 != 0) goto LAB_0034facc;
          }
          else {
            cVar5 = *(char *)((long)param_1 + lVar15 + 0x1f);
            if (cVar5 == '\n') {
              if (*(char *)((long)param_1 + lVar15 + 0x20) == '\r') goto LAB_0034fa10;
LAB_0034facc:
              if (*(char *)((long)param_1 + lVar15 + 0x20) != '\n') goto LAB_0034f984;
              param_1[0x40a] = 1;
              param_1[0x40b] = 0;
              uVar4 = *param_1;
            }
            else {
              if ((cVar5 != '\r') || (*(char *)((long)param_1 + lVar15 + 0x20) != '\n'))
              goto LAB_0034facc;
LAB_0034fa10:
              uVar4 = *param_1;
            }
            if (uVar4 == 0) {
              if (param_1[1] == 0) {
                if ((char)*__src == 'H') {
                  if ((lVar15 == 0) || (*(char *)((long)param_1 + 0x21) != 'T')) {
                    FUN_003673f0(auStack_80,"Expected \'T\'");
                    uVar10 = 0x30;
                  }
                  else if ((uVar11 == 2) || (*(char *)((long)param_1 + 0x22) != 'T')) {
                    FUN_003673f0(auStack_80,"Expected \'T\'");
                    uVar10 = 0x32;
                  }
                  else if ((uVar11 == 3) || (*(char *)((long)param_1 + 0x23) != 'P')) {
                    FUN_003673f0(auStack_80,"Expected \'P\'");
                    uVar10 = 0x34;
                  }
                  else if ((uVar11 == 4) || ((char)param_1[9] != '/')) {
                    FUN_003673f0(auStack_80,"Expected \'/\'");
                    uVar10 = 0x36;
                  }
                  else if ((uVar11 == 5) || (*(char *)((long)param_1 + 0x25) != '1')) {
                    FUN_003673f0(auStack_80,"Expected \'1\'");
                    uVar10 = 0x38;
                  }
                  else if ((uVar11 == 6) || (*(char *)((long)param_1 + 0x26) != '.')) {
                    FUN_003673f0(auStack_80,"Expected \'.\'");
                    uVar10 = 0x3a;
                  }
                  else if ((uVar11 == 7) || ((*(byte *)((long)param_1 + 0x27) & 0xfe) != 0x30)) {
                    FUN_003673f0(auStack_80,"Expected HTTP/1.0 or HTTP/1.1");
                    uVar10 = 0x3d;
                  }
                  else if ((uVar11 == 8) || ((char)param_1[10] != ' ')) {
                    FUN_003673f0(auStack_80,"Expected \' \'");
                    uVar10 = 0x40;
                  }
                  else if ((uVar11 == 9) || (8 < *(byte *)((long)param_1 + 0x29) - 0x31)) {
                    FUN_003673f0(auStack_80,"Expected status code");
                    uVar10 = 0x42;
                  }
                  else if ((uVar11 == 10) || (9 < *(byte *)((long)param_1 + 0x2a) - 0x30)) {
                    FUN_003673f0(auStack_80,"Expected status code");
                    uVar10 = 0x44;
                  }
                  else if ((uVar11 == 0xb) || (9 < *(byte *)((long)param_1 + 0x2b) - 0x30)) {
                    FUN_003673f0(auStack_80,"Expected status code");
                    uVar10 = 0x46;
                  }
                  else {
                    **(int **)(param_1 + 2) =
                         (uint)*(byte *)((long)param_1 + 0x2a) * 10 +
                         (uint)*(byte *)((long)param_1 + 0x29) * 100 +
                         (uint)*(byte *)((long)param_1 + 0x2b) + -0x14d0;
                    if ((uVar11 != 0xc) && ((char)param_1[0xb] == ' ')) goto LAB_0034ff5c;
                    FUN_003673f0(auStack_80,"Expected \' \'");
                    uVar10 = 0x4a;
                  }
                }
                else {
                  FUN_003673f0(auStack_80,"Expected \'H\'");
                  uVar10 = 0x2e;
                }
LAB_0034ff48:
                lVar15 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                      uVar10,auStack_80,0,0);
joined_r0x0034ff58:
                if (lVar15 != 0) {
                  return lVar15;
                }
              }
              else {
                if (param_1[1] != 1) goto LAB_00350368;
                puVar17 = __src;
                do {
                  __src_00 = (uint *)((long)param_1 + lVar15 + 0x21);
                  if (uVar11 == 0) break;
                  __src_00 = (uint *)((long)puVar17 + 1);
                  uVar4 = *puVar17;
                  uVar11 = uVar11 - 1;
                  puVar17 = __src_00;
                } while ((char)uVar4 != ' ');
                if (__src_00 == (uint *)((long)param_1 + lVar15 + 0x21)) {
                  FUN_003673f0(auStack_80,"No method on HTTP request line");
                  uVar10 = 0x5c;
                  goto LAB_0034ff48;
                }
                pvVar8 = (void *)FUN_0038c780((long)__src_00 - (long)__src);
                memcpy(pvVar8,__src,(long)__src_00 + ~(ulong)__src);
                *(undefined1 *)((long)pvVar8 + (long)__src_00 + ~(ulong)__src) = 0;
                **(undefined8 **)(param_1 + 2) = pvVar8;
                puVar17 = __src_00;
                do {
                  puVar16 = puVar17;
                  if ((uint *)((long)param_1 + lVar15 + 0x21) == puVar16) goto LAB_0034fe04;
                  puVar17 = (uint *)((long)puVar16 + 1);
                } while ((char)*puVar16 != ' ');
                if ((uint *)((long)param_1 + lVar15 + 0x21) == puVar17) {
LAB_0034fe04:
                  FUN_003673f0(auStack_80,"No path on HTTP request line");
                  uVar10 = 100;
LAB_0034fe20:
                  lVar15 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                        uVar10,auStack_80,0,0);
                  goto joined_r0x0034ff58;
                }
                pvVar8 = (void *)FUN_0038c780((long)puVar17 - (long)__src_00);
                memcpy(pvVar8,__src_00,(long)puVar17 + ~(ulong)__src_00);
                *(undefined1 *)((long)pvVar8 + (long)puVar17 + ~(ulong)__src_00) = 0;
                *(void **)(*(long *)(param_1 + 2) + 8) = pvVar8;
                if (*(char *)puVar17 != 'H') {
                  FUN_003673f0(auStack_80,"Expected \'H\'");
                  uVar10 = 0x68;
                  goto LAB_0034fe20;
                }
                if (((uint *)((long)param_1 + lVar15 + 0x20) == puVar17) ||
                   (*(char *)((long)puVar16 + 2) != 'T')) {
                  FUN_003673f0(auStack_80,"Expected \'T\'");
                  uVar10 = 0x6a;
                  goto LAB_0034fe20;
                }
                if (((uint *)((long)param_1 + lVar15 + 0x1f) == puVar17) ||
                   (*(char *)((long)puVar16 + 3) != 'T')) {
                  FUN_003673f0(auStack_80,"Expected \'T\'");
                  uVar10 = 0x6c;
                  goto LAB_0034fe20;
                }
                if (((uint *)((long)param_1 + lVar15 + 0x1e) == puVar17) ||
                   ((char)puVar16[1] != 'P')) {
                  FUN_003673f0(auStack_80,"Expected \'P\'");
                  uVar10 = 0x6e;
                  goto LAB_0034fe20;
                }
                if (((uint *)((long)param_1 + lVar15 + 0x1d) == puVar17) ||
                   (*(char *)((long)puVar16 + 5) != '/')) {
                  FUN_003673f0(auStack_80,"Expected \'/\'");
                  uVar10 = 0x70;
                  goto LAB_0034fe20;
                }
                if ((uint *)((long)param_1 + lVar15 + 0x1a) == puVar17) {
                  FUN_003673f0(auStack_80,"End of line in HTTP version string");
                  uVar10 = 0x75;
                  goto LAB_0034fe20;
                }
                cVar5 = (char)puVar16[2];
                if (*(char *)((long)puVar16 + 6) == '2') {
                  if (cVar5 == '0') {
                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 2;
                    goto LAB_0034ff5c;
                  }
                  FUN_003673f0(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                  uVar10 = 0x86;
                  goto LAB_0034fe20;
                }
                if (*(char *)((long)puVar16 + 6) != '1') {
                  FUN_003673f0(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                  uVar10 = 0x8a;
                  goto LAB_0034fe20;
                }
                if (cVar5 == '1') {
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 1;
                }
                else {
                  if (cVar5 != '0') {
                    FUN_003673f0(auStack_80,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0");
                    uVar10 = 0x7f;
                    goto LAB_0034fe20;
                  }
                  *(undefined4 *)(*(long *)(param_1 + 2) + 0x10) = 0;
                }
              }
LAB_0034ff5c:
              *param_1 = 1;
              param_1[0x408] = 0;
              param_1[0x409] = 0;
            }
            else {
              if (uVar4 == 1) {
                if (uVar11 == *(ulong *)(param_1 + 0x40a)) {
                  *param_1 = 2;
                  param_1[0x408] = 0;
                  param_1[0x409] = 0;
                  if (param_3 != (long *)0x0) {
                    *param_3 = uVar12 + 1;
                  }
                  goto LAB_0034f984;
                }
                cVar5 = (char)param_1[8];
                if ((cVar5 == '\t') || (cVar5 == ' ')) {
                  FUN_003673f0(auStack_80,"Continued header lines not supported yet");
                  lVar15 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc",
                                        0xa8,auStack_80,0,0);
joined_r0x0034fccc:
                  if (lVar15 != 0) {
                    free((void *)0x0);
                    free((void *)0x0);
                    return lVar15;
                  }
                  goto LAB_00350088;
                }
                pcVar2 = (char *)((long)(param_1 + 8) + uVar11);
                uVar1 = 0;
                do {
                  sVar18 = uVar1;
                  if (uVar11 == sVar18) {
                    FUN_003673f0(auStack_80,"Didn\'t find \':\' in header string");
                    lVar15 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc"
                                          ,0xb1,auStack_80,0,0);
                    goto joined_r0x0034fccc;
                  }
                  uVar1 = sVar18 + 1;
                } while (*(char *)((long)__src + sVar18) != ':');
                pvVar8 = (void *)FUN_0038c780(uVar1);
                memcpy(pvVar8,__src,sVar18);
                *(undefined1 *)((long)pvVar8 + sVar18) = 0;
                if (uVar11 != uVar1) {
                  __src_01 = (char *)((long)__src + uVar1);
                  lVar15 = lVar15 - sVar18;
                  do {
                    if (*__src_01 != ' ' && *__src_01 != '\t') {
                      uVar11 = (long)pcVar2 - (long)__src_01;
                      sVar18 = uVar11 - *(ulong *)(param_1 + 0x40a);
                      if (uVar11 < *(ulong *)(param_1 + 0x40a)) goto LAB_00350368;
                      goto LAB_0034ffc0;
                    }
                    __src_01 = __src_01 + 1;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
                sVar18 = -*(long *)(param_1 + 0x40a);
                __src_01 = pcVar2;
                if (*(long *)(param_1 + 0x40a) != 0) goto LAB_00350368;
LAB_0034ffc0:
                __dest = (void *)FUN_0038c780(sVar18 + 1);
                memcpy(__dest,__src_01,sVar18);
                *(undefined1 *)((long)__dest + sVar18) = 0;
                if (param_1[1] == 1) {
                  plVar13 = (long *)(*(long *)(param_1 + 2) + 0x18);
                  plVar14 = (long *)(*(long *)(param_1 + 2) + 0x20);
                  lVar15 = *plVar13;
                  if (lVar15 == *(long *)(param_1 + 6)) goto LAB_00350048;
LAB_00350028:
                  lVar9 = *plVar14;
                }
                else {
                  if (param_1[1] != 0) {
                    plVar13 = (long *)0x0;
                    plVar14 = (long *)0x0;
                    lVar15 = lRam0000000000000000;
                    if (lRam0000000000000000 == *(long *)(param_1 + 6)) goto LAB_00350048;
                    goto LAB_00350028;
                  }
                  plVar13 = (long *)(*(long *)(param_1 + 2) + 8);
                  plVar14 = (long *)(*(long *)(param_1 + 2) + 0x10);
                  lVar15 = *plVar13;
                  if (lVar15 != *(long *)(param_1 + 6)) goto LAB_00350028;
LAB_00350048:
                  uVar11 = (ulong)(lVar15 * 3) >> 1;
                  if (uVar11 < lVar15 + 1U) {
                    uVar11 = lVar15 + 1;
                  }
                  *(ulong *)(param_1 + 6) = uVar11;
                  lVar9 = FUN_0038c7f0(*plVar14,uVar11 << 4);
                  *plVar14 = lVar9;
                  lVar15 = *plVar13;
                }
                puVar3 = (undefined8 *)(lVar9 + lVar15 * 0x10);
                *plVar13 = lVar15 + 1;
                *puVar3 = pvVar8;
                puVar3[1] = __dest;
              }
              else if (uVar4 == 2) {
LAB_00350368:
                    /* WARNING: Subroutine does not return */
                abort();
              }
LAB_00350088:
              param_1[0x408] = 0;
              param_1[0x409] = 0;
            }
          }
        }
        else {
          FUN_003673f0(auStack_80,"HTTP header max line length exceeded");
          lVar15 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x133,
                                auStack_80,0,0);
          if (lVar15 != 0) {
            return lVar15;
          }
        }
      }
      else {
        if (*param_1 != 2) goto LAB_00350368;
        if (param_1[1] == 1) {
          plVar13 = (long *)(*(long *)(param_1 + 2) + 0x28);
          plVar14 = (long *)(*(long *)(param_1 + 2) + 0x30);
          lVar15 = *plVar13;
          if (lVar15 == *(long *)(param_1 + 4)) goto LAB_0034fa58;
LAB_0034fa9c:
          lVar9 = *plVar14;
        }
        else {
          if (param_1[1] != 0) goto LAB_00350368;
          plVar13 = (long *)(*(long *)(param_1 + 2) + 0x18);
          plVar14 = (long *)(*(long *)(param_1 + 2) + 0x20);
          lVar15 = *plVar13;
          if (lVar15 != *(long *)(param_1 + 4)) goto LAB_0034fa9c;
LAB_0034fa58:
          uVar11 = 8;
          if (0xf < (ulong)(lVar15 * 3)) {
            uVar11 = (ulong)(lVar15 * 3) >> 1;
          }
          *(ulong *)(param_1 + 4) = uVar11;
          lVar9 = FUN_0038c7f0(*plVar14);
          *plVar14 = lVar9;
          lVar15 = *plVar13;
        }
        *(undefined1 *)(lVar9 + lVar15) = uVar6;
        *plVar13 = *plVar13 + 1;
      }
LAB_0034f984:
      bVar7 = *param_2 == 0;
      uVar12 = uVar12 + 1;
      uVar11 = param_2[1] & 0xff;
      if (!bVar7) {
        uVar11 = param_2[1];
      }
    } while (uVar12 < uVar11);
  }
  return 0;
}


