/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2f698; name: FUN_00c2f698
 */


/* WARNING: Removing unreachable block (ram,0x00c2f8a0) */

undefined8 FUN_00c2f698(undefined4 *param_1)

{
  string *psVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  void *__dest;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  char cVar15;
  long *plVar16;
  long *plVar17;
  ulong local_78 [2];
  char *local_68;
  
  psVar1 = (string *)(param_1 + 2);
  param_1[0xc] = *param_1;
  std::string::operator=((string *)(param_1 + 0xe),psVar1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
  param_1[0x16] = param_1[10];
  if (*(char *)(param_1 + 0x22) == '\0') {
    lVar12 = tpidr_el0;
LAB_00c2f760:
    do {
      while( true ) {
        bVar3 = *(byte *)(param_1 + 0x1c);
        if ((4 < bVar3 - 9) && (bVar3 != 0x20)) break;
        FUN_00c2dea0(param_1);
      }
      if (param_1[0x2a] == 1) {
        if (bVar3 != 0x23) {
LAB_00c2f7e8:
          if (*(char *)(param_1 + 0x22) != '\0') break;
          if ((bVar3 != 0) && (0x1e < (byte)(bVar3 - 1))) {
            *param_1 = 0;
            if ((*(byte *)(param_1 + 2) & 1) == 0) {
              *(undefined2 *)psVar1 = 0;
            }
            else {
              **(undefined1 **)(param_1 + 6) = 0;
              bVar3 = *(byte *)(param_1 + 0x1c);
              *(undefined8 *)(param_1 + 4) = 0;
            }
            param_1[0x28] = param_1[0x21];
            uVar13 = (uint)bVar3;
            uVar7 = param_1[0x23];
            uVar2 = param_1[0x24];
            param_1[8] = uVar7;
            param_1[9] = uVar2;
            *(string **)(param_1 + 0x26) = psVar1;
            if (((uVar13 - 0x61 < 0x1a) || (uVar13 == 0x5f)) || ((uVar13 - 0x41 & 0xff) < 0x1a))
            goto LAB_00c30018;
            if (uVar13 == 0x2e) {
              FUN_00c2dea0(param_1);
              if (9 < *(byte *)(param_1 + 0x1c) - 0x30) {
LAB_00c30288:
                uVar7 = 6;
                goto LAB_00c30054;
              }
              FUN_00c2dea0(param_1);
              if (((param_1[0xc] == 2) && (param_1[8] == param_1[0x14])) &&
                 (param_1[9] == param_1[0x16])) {
                uVar7 = param_1[0x23];
                iVar6 = param_1[0x24];
                plVar17 = *(long **)(param_1 + 0x1a);
                plVar16 = *(long **)(lVar12 + 0x30);
                if (plVar16 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar16 = DAT_04859430;
                  *(long **)(lVar12 + 0x30) = DAT_04859430;
                }
                pcVar9 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
                local_78[0] = 0x41;
                local_78[1] = 0x30;
                local_68 = pcVar9;
                memcpy(pcVar9,"Need space between identifier and decimal point.",0x30);
                pcVar9[0x30] = '\0';
                (**(code **)(*plVar17 + 0x10))(plVar17,uVar7,iVar6 + -2,local_78);
                pcVar9 = local_68;
                if (((local_78[0] & 1) != 0) && (local_68 != (char *)0x0)) {
                  plVar16 = *(long **)(lVar12 + 0x30);
                  if (plVar16 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar16 = DAT_04859430;
                    *(long **)(lVar12 + 0x30) = DAT_04859430;
                  }
                  uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                  if (((uVar10 & 1) == 0) ||
                     (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar16,pcVar9,0,8);
                  }
                }
              }
              uVar8 = 0;
              uVar14 = 1;
            }
            else {
              if (uVar13 == 0x30) {
                FUN_00c2dea0(param_1);
                uVar8 = 1;
              }
              else {
                if (9 < uVar13 - 0x30) {
                  if (uVar13 == 0x27) {
                    FUN_00c2dea0(param_1);
                    uVar8 = 0x27;
                  }
                  else {
                    if (uVar13 != 0x22) {
                      if ((char)bVar3 < '\0') {
                        plVar16 = *(long **)(param_1 + 0x1a);
                        FUN_00c0e030(local_78,"Interpreting non ascii codepoint %d.");
                        (**(code **)(*plVar16 + 0x10))(plVar16,uVar7,uVar2,local_78);
                        pcVar9 = local_68;
                        if (((local_78[0] & 1) != 0) && (local_68 != (char *)0x0)) {
                          plVar16 = *(long **)(lVar12 + 0x30);
                          if (plVar16 == (long *)0x0) {
                            if (((DAT_04859438 & 1) == 0) &&
                               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                              DAT_04859430 = DAT_04859418;
                              __cxa_guard_release(&DAT_04859438);
                            }
                            plVar16 = DAT_04859430;
                            *(long **)(lVar12 + 0x30) = DAT_04859430;
                          }
                          uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                          if (((uVar10 & 1) == 0) ||
                             (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                            (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
                          }
                          else {
                            FUN_00c48fe8(plVar16,pcVar9,0,8);
                          }
                        }
                      }
                      FUN_00c2dea0(param_1);
                      goto LAB_00c30288;
                    }
                    FUN_00c2dea0(param_1);
                    uVar8 = 0x22;
                  }
                  FUN_00c2dfc4(param_1,uVar8);
                  uVar7 = 5;
                  goto LAB_00c30054;
                }
                FUN_00c2dea0(param_1);
                uVar8 = 0;
              }
              uVar14 = 0;
            }
            uVar7 = FUN_00c2ebe8(param_1,uVar8,uVar14);
            goto LAB_00c30054;
          }
          plVar16 = *(long **)(lVar12 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          pcVar9 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x30,8);
          local_78[0] = 0x31;
          local_78[1] = 0x2f;
          local_68 = pcVar9;
          memcpy(pcVar9,"Invalid control characters encountered in text.",0x2f);
          pcVar9[0x2f] = '\0';
          (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                    (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],local_78);
          pcVar9 = local_68;
          if (((local_78[0] & 1) != 0) && (local_68 != (char *)0x0)) {
            plVar16 = *(long **)(lVar12 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar16,pcVar9,0,8);
            }
          }
          do {
            do {
              FUN_00c2dea0(param_1);
            } while (*(byte *)(param_1 + 0x1c) - 1 < 0x1f);
            if (*(char *)(param_1 + 0x22) != '\0') goto LAB_00c2f6f4;
          } while (*(byte *)(param_1 + 0x1c) == 0);
          goto LAB_00c2f760;
        }
LAB_00c2f7c4:
        do {
          FUN_00c2dea0(param_1);
          if (*(char *)(param_1 + 0x1c) == '\0') goto LAB_00c2fc08;
        } while (*(char *)(param_1 + 0x1c) != '\n');
      }
      else {
        if ((param_1[0x2a] != 0) || (bVar3 != 0x2f)) goto LAB_00c2f7e8;
        FUN_00c2dea0(param_1);
        if (*(char *)(param_1 + 0x1c) != '*') {
          if (*(char *)(param_1 + 0x1c) == '/') goto LAB_00c2f7c4;
          *param_1 = 6;
          std::string::assign((char *)psVar1);
          iVar6 = param_1[0x24];
          param_1[8] = param_1[0x23];
          param_1[9] = iVar6 + -1;
          goto LAB_00c300f4;
        }
        FUN_00c2dea0(param_1);
        iVar6 = param_1[0x24];
        uVar7 = param_1[0x23];
LAB_00c2f8bc:
        do {
          bVar3 = *(byte *)(param_1 + 0x1c);
          if (0x29 < bVar3) {
            if (bVar3 == 0x2a) {
              FUN_00c2dea0(param_1);
              cVar15 = *(char *)(param_1 + 0x1c);
              if (cVar15 == '/') break;
            }
            else {
              if (bVar3 != 0x2f) {
LAB_00c2fa24:
                FUN_00c2dea0(param_1);
                goto LAB_00c2f8bc;
              }
              FUN_00c2dea0(param_1);
              cVar15 = *(char *)(param_1 + 0x1c);
              if (cVar15 == '*') {
                plVar16 = *(long **)(lVar12 + 0x30);
                if (plVar16 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar16 = DAT_04859430;
                  *(long **)(lVar12 + 0x30) = DAT_04859430;
                }
                pcVar9 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
                local_78[0] = 0x41;
                local_78[1] = 0x3c;
                local_68 = pcVar9;
                memcpy(pcVar9,"\"/*\" inside block comment.  Block comments cannot be nested.",0x3c)
                ;
                pcVar9[0x3c] = '\0';
                (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                          (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],local_78);
                pcVar9 = local_68;
                if (((local_78[0] & 1) != 0) && (local_68 != (char *)0x0)) {
                  plVar16 = *(long **)(lVar12 + 0x30);
                  if (plVar16 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar16 = DAT_04859430;
                    *(long **)(lVar12 + 0x30) = DAT_04859430;
                  }
                  uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                  if (((uVar10 & 1) == 0) ||
                     (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar16,pcVar9,0,8);
                  }
                }
                goto LAB_00c2f8bc;
              }
            }
            if (cVar15 == '\0') {
LAB_00c2fb18:
              plVar16 = *(long **)(lVar12 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar12 + 0x30) = DAT_04859430;
              }
              __dest = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,0x30,8);
              local_78[0] = 0x31;
              local_78[1] = 0x21;
              local_68 = __dest;
              memcpy(__dest,"End-of-file inside block comment.",0x21);
              *(undefined1 *)((long)__dest + 0x21) = 0;
              (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                        (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],local_78);
              pcVar9 = local_68;
              if (((local_78[0] & 1) != 0) && (local_68 != (void *)0x0)) {
                plVar16 = *(long **)(lVar12 + 0x30);
                if (plVar16 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar16 = DAT_04859430;
                  *(long **)(lVar12 + 0x30) = DAT_04859430;
                }
                uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
                }
                else {
                  FUN_00c48fe8(plVar16,pcVar9,0,8);
                }
              }
              plVar17 = *(long **)(param_1 + 0x1a);
              plVar16 = *(long **)(lVar12 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar12 + 0x30) = DAT_04859430;
              }
              local_68 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x20,8);
              uVar4 = s_Comment_started_here__03c839e5._0_8_;
              local_78[0] = 0x21;
              local_78[1] = 0x17;
              uVar14 = CONCAT71(s_Comment_started_here__03c839e5._16_7_,
                                s_Comment_started_here__03c839e5[0xf]);
              uVar8 = CONCAT17(s_Comment_started_here__03c839e5[0xf],
                               s_Comment_started_here__03c839e5._8_7_);
              local_68[0x17] = '\0';
              *(undefined8 *)local_68 = uVar4;
              *(undefined8 *)(local_68 + 8) = uVar8;
              *(undefined8 *)(local_68 + 0xf) = uVar14;
              (**(code **)(*plVar17 + 0x10))(plVar17,uVar7,iVar6 + -2,local_78);
              pcVar9 = local_68;
              if (((local_78[0] & 1) != 0) && (local_68 != (char *)0x0)) {
                plVar16 = *(long **)(lVar12 + 0x30);
                if (plVar16 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar16 = DAT_04859430;
                  *(long **)(lVar12 + 0x30) = DAT_04859430;
                }
                uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar16 + 0x18))(plVar16,pcVar9,0,8);
                }
                else {
                  FUN_00c48fe8(plVar16,pcVar9,0,8);
                }
              }
              goto LAB_00c2fc08;
            }
            goto LAB_00c2f8bc;
          }
          if (bVar3 != 10) {
            if (bVar3 != 0) goto LAB_00c2fa24;
            goto LAB_00c2fb18;
          }
          do {
            FUN_00c2dea0(param_1);
            bVar3 = *(byte *)(param_1 + 0x1c);
            if (0x2a < bVar3) goto LAB_00c2f8bc;
          } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) != 0);
        } while (((ulong)bVar3 != 0x2a) || (FUN_00c2dea0(param_1), *(char *)(param_1 + 0x1c) != '/')
                );
      }
      FUN_00c2dea0(param_1);
LAB_00c2fc08:
    } while (*(char *)(param_1 + 0x22) == '\0');
  }
LAB_00c2f6f4:
  *param_1 = 1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    *(undefined2 *)psVar1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
  }
  iVar6 = param_1[0x24];
  uVar8 = 0;
  param_1[8] = param_1[0x23];
  param_1[9] = iVar6;
LAB_00c2f724:
  param_1[10] = iVar6;
  return uVar8;
LAB_00c30018:
  do {
    do {
      FUN_00c2dea0(param_1);
      bVar3 = *(byte *)(param_1 + 0x1c);
    } while ((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a);
  } while ((bVar3 == 0x5f) || ((byte)(bVar3 - 0x30) < 10));
  uVar7 = 2;
LAB_00c30054:
  *param_1 = uVar7;
  if (param_1[0x21] != param_1[0x28]) {
    std::string::append(*(char **)(param_1 + 0x26),
                        *(long *)(param_1 + 0x1e) + (long)(int)param_1[0x28]);
  }
  param_1[0x28] = 0xffffffff;
  iVar6 = param_1[0x24];
  *(undefined8 *)(param_1 + 0x26) = 0;
LAB_00c300f4:
  uVar8 = 1;
  goto LAB_00c2f724;
}


