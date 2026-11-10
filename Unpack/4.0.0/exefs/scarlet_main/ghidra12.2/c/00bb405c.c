/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb405c; name: FUN_00bb405c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00bb405c(long param_1,string *param_2,long *****param_3,long *****param_4)

{
  string sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long ******pppppplVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *******ppppppplVar9;
  long *plVar10;
  string *psVar11;
  byte *pbVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long ******local_90;
  long ******local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *****local_78;
  long *****ppppplStack_70;
  undefined8 local_68;
  long *******local_60;
  long ******pppppplStack_58;
  
  if (((byte)*param_2 & 1) == 0) {
    bVar2 = (byte)*param_2 >> 1;
    uVar7 = (ulong)bVar2;
    if (bVar2 != 0) {
      psVar11 = param_2;
      do {
        psVar11 = psVar11 + 1;
        sVar1 = *psVar11;
        if (((sVar1 != (string)0x2e) && (sVar1 != (string)0x5f)) &&
           (((byte)sVar1 < 0x30 ||
            ((0x39 < (byte)sVar1 &&
             (((byte)sVar1 < 0x41 || ((0x5a < (byte)sVar1 && (0x19 < (byte)((char)sVar1 + 0x9fU)))))
             )))))) goto LAB_00bb4318;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 8);
    if (lVar8 != 0) {
      pbVar12 = *(byte **)(param_2 + 0x10);
      do {
        bVar2 = *pbVar12;
        if (((bVar2 != 0x2e) && (bVar2 != 0x5f)) &&
           ((bVar2 < 0x30 ||
            ((0x39 < bVar2 && ((bVar2 < 0x41 || ((0x5a < bVar2 && (0x19 < (byte)(bVar2 + 0x9f)))))))
            )))) goto LAB_00bb4318;
        lVar8 = lVar8 + -1;
        pbVar12 = pbVar12 + 1;
      } while (lVar8 != 0);
    }
  }
  ppppppplVar16 = (long *******)(param_1 + 0x20);
  ppppppplVar15 = (long *******)*ppppppplVar16;
  ppppppplVar14 = ppppppplVar16;
  if (ppppppplVar15 != (long *******)0x0) {
    ppppppplVar17 = ppppppplVar16;
    do {
      local_88 = (long ******)(ulong)(*(byte *)(ppppppplVar15 + 4) >> 1);
      local_90 = (long ******)((long)ppppppplVar15 + 0x21);
      if ((*(byte *)(ppppppplVar15 + 4) & 1) != 0) {
        local_88 = ppppppplVar15[5];
        local_90 = ppppppplVar15[6];
      }
      iVar4 = FUN_028a8144(param_2,&local_90);
      ppppppplVar14 = ppppppplVar15;
      if (-1 < iVar4) {
        ppppppplVar14 = ppppppplVar17;
      }
      ppppppplVar15 = (long *******)ppppppplVar15[-1 < iVar4];
      ppppppplVar17 = ppppppplVar14;
    } while (ppppppplVar15 != (long *******)0x0);
  }
  if (ppppppplVar14 != *(long ********)(param_1 + 0x18)) {
    ppppppplVar15 = (long *******)*ppppppplVar14;
    ppppppplVar17 = ppppppplVar14;
    if ((long *******)*ppppppplVar14 == (long *******)0x0) {
      do {
        ppppppplVar14 = (long *******)ppppppplVar17[2];
        bVar3 = (long *******)*ppppppplVar14 == ppppppplVar17;
        ppppppplVar17 = ppppppplVar14;
      } while (bVar3);
    }
    else {
      do {
        ppppppplVar14 = ppppppplVar15;
        ppppppplVar15 = (long *******)ppppppplVar14[1];
      } while ((long *******)ppppppplVar14[1] != (long *******)0x0);
    }
  }
  local_78 = param_3;
  ppppplStack_70 = param_4;
  if (ppppppplVar14 == ppppppplVar16) {
    std::string::string((string *)&local_90,param_2);
    if ((long *******)*ppppppplVar16 != (long *******)0x0) {
      ppppppplVar14 = (long *******)(param_1 + 0x20);
      ppppppplVar15 = (long *******)*ppppppplVar16;
      do {
        bVar2 = *(byte *)(ppppppplVar15 + 4);
        pppppplStack_58 = ppppppplVar15[5];
        local_60 = (long *******)ppppppplVar15[6];
        if ((bVar2 & 1) == 0) {
          local_60 = (long *******)((long)ppppppplVar15 + 0x21);
          pppppplStack_58 = (long ******)(ulong)(bVar2 >> 1);
        }
        iVar4 = FUN_028a8144(&local_90,&local_60);
        if (iVar4 < 0) {
          ppppppplVar16 = (long *******)*ppppppplVar15;
          if (ppppppplVar16 == (long *******)0x0) {
            ppppppplVar16 = ppppppplVar15;
            goto LAB_00bb455c;
          }
          ppppppplVar14 = ppppppplVar15;
        }
        else {
          pppppplStack_58 = (long ******)((ulong)local_90 >> 1 & 0x7f);
          local_60 = (long *******)((ulong)&local_90 | 1);
          if (((ulong)local_90 & 1) != 0) {
            pppppplStack_58 = local_88;
            local_60 = (long *******)CONCAT44(uStack_7c,local_80);
          }
          iVar4 = FUN_028a8144(ppppppplVar15 + 4,&local_60);
          if (-1 < iVar4) goto LAB_00bb4390;
          ppppppplVar14 = ppppppplVar15 + 1;
          ppppppplVar16 = (long *******)*ppppppplVar14;
          if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4390;
        }
        ppppppplVar15 = ppppppplVar16;
      } while( true );
    }
    ppppppplVar15 = ppppppplVar16;
    goto LAB_00bb455c;
  }
  ppppppplVar15 = ppppppplVar14 + 4;
  uVar7 = FUN_00bb524c(ppppppplVar15,param_2);
  if ((uVar7 & 1) != 0) {
    local_68 = 0;
    local_90 = (long ******)CONCAT44(local_90._4_4_,2);
    local_80 = 0x6e;
    local_88 = (long ******)0x3ca6a41;
    local_78 = (long *****)0x0;
    ppppplStack_70 = (long *****)0x0;
    std::string::append((char *)&local_78);
    psVar11 = *(string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      psVar11 = param_2 + 1;
    }
    std::string::append((char *)&local_78,(ulong)psVar11);
    std::string::append((char *)&local_78);
    bVar2 = *(byte *)(ppppppplVar14 + 4);
    pppppplVar5 = ppppppplVar14[6];
LAB_00bb4464:
    if ((bVar2 & 1) == 0) {
      pppppplVar5 = (long ******)((long)ppppppplVar15 + 1);
    }
    std::string::append((char *)&local_78,(ulong)pppppplVar5);
    std::string::append((char *)&local_78);
LAB_00bb4484:
    FUN_00bb0e90(&local_90);
    FUN_00bb0d74(&local_90);
    return 0;
  }
  ppppppplVar15 = (long *******)ppppppplVar14[1];
  if ((long *******)ppppppplVar14[1] == (long *******)0x0) {
    ppppppplVar15 = ppppppplVar14 + 2;
    ppppppplVar17 = (long *******)*ppppppplVar15;
    if ((long *******)*ppppppplVar17 != ppppppplVar14) {
      do {
        pppppplVar5 = *ppppppplVar15;
        ppppppplVar15 = (long *******)(pppppplVar5 + 2);
        ppppppplVar17 = (long *******)*ppppppplVar15;
      } while (*ppppppplVar17 != pppppplVar5);
    }
  }
  else {
    do {
      ppppppplVar17 = ppppppplVar15;
      ppppppplVar15 = (long *******)*ppppppplVar17;
    } while ((long *******)*ppppppplVar17 != (long *******)0x0);
  }
  if (ppppppplVar17 != ppppppplVar16) {
    ppppppplVar15 = ppppppplVar17 + 4;
    uVar7 = FUN_00bb524c(param_2,ppppppplVar15);
    if ((uVar7 & 1) != 0) {
      local_68 = 0;
      local_90 = (long ******)CONCAT44(local_90._4_4_,2);
      local_80 = 0x7b;
      local_88 = (long ******)0x3ca6a41;
      local_78 = (long *****)0x0;
      ppppplStack_70 = (long *****)0x0;
      std::string::append((char *)&local_78);
      psVar11 = *(string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        psVar11 = param_2 + 1;
      }
      std::string::append((char *)&local_78,(ulong)psVar11);
      std::string::append((char *)&local_78);
      bVar2 = *(byte *)(ppppppplVar17 + 4);
      pppppplVar5 = ppppppplVar17[6];
      goto LAB_00bb4464;
    }
  }
  std::string::string((string *)&local_90,param_2);
  ppppppplVar14 = ppppppplVar17;
  if (ppppppplVar17 == ppppppplVar16) {
LAB_00bb4530:
    if (*(long ********)(param_1 + 0x18) != ppppppplVar17) {
      ppppppplVar15 = (long *******)*ppppppplVar17;
      if ((long *******)*ppppppplVar17 == (long *******)0x0) {
        ppppppplVar15 = ppppppplVar17;
        do {
          ppppppplVar14 = (long *******)ppppppplVar15[2];
          bVar3 = (long *******)*ppppppplVar14 == ppppppplVar15;
          ppppppplVar15 = ppppppplVar14;
        } while (bVar3);
      }
      else {
        do {
          ppppppplVar14 = ppppppplVar15;
          ppppppplVar15 = (long *******)ppppppplVar14[1];
        } while ((long *******)ppppppplVar14[1] != (long *******)0x0);
      }
      pppppplStack_58 = (long ******)((ulong)local_90 >> 1 & 0x7f);
      local_60 = (long *******)((ulong)&local_90 | 1);
      if (((ulong)local_90 & 1) != 0) {
        pppppplStack_58 = local_88;
        local_60 = (long *******)CONCAT44(uStack_7c,local_80);
      }
      iVar4 = FUN_028a8144(ppppppplVar14 + 4,&local_60);
      if (-1 < iVar4) {
        if ((long *******)*ppppppplVar16 != (long *******)0x0) {
          ppppppplVar15 = (long *******)(param_1 + 0x20);
          ppppppplVar14 = (long *******)*ppppppplVar16;
          do {
            bVar2 = *(byte *)(ppppppplVar14 + 4);
            pppppplStack_58 = ppppppplVar14[5];
            local_60 = (long *******)ppppppplVar14[6];
            if ((bVar2 & 1) == 0) {
              local_60 = (long *******)((long)ppppppplVar14 + 0x21);
              pppppplStack_58 = (long ******)(ulong)(bVar2 >> 1);
            }
            iVar4 = FUN_028a8144(&local_90,&local_60);
            if (iVar4 < 0) {
              ppppppplVar16 = (long *******)*ppppppplVar14;
              if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4854;
              ppppppplVar15 = ppppppplVar14;
            }
            else {
              pppppplStack_58 = (long ******)((ulong)local_90 >> 1 & 0x7f);
              local_60 = (long *******)((ulong)&local_90 | 1);
              if (((ulong)local_90 & 1) != 0) {
                pppppplStack_58 = local_88;
                local_60 = (long *******)CONCAT44(uStack_7c,local_80);
              }
              iVar4 = FUN_028a8144(ppppppplVar14 + 4,&local_60);
              if (-1 < iVar4) goto LAB_00bb4740;
              ppppppplVar17 = ppppppplVar14 + 1;
              ppppppplVar16 = (long *******)*ppppppplVar17;
              ppppppplVar15 = ppppppplVar17;
              if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4858;
            }
            ppppppplVar14 = ppppppplVar16;
          } while( true );
        }
LAB_00bb4848:
        ppppppplVar14 = ppppppplVar16;
        ppppppplVar17 = ppppppplVar16;
        goto LAB_00bb4858;
      }
    }
    if (*ppppppplVar17 == (long ******)0x0) {
      ppppppplVar14 = ppppppplVar17;
      goto LAB_00bb4858;
    }
    ppppppplVar15 = ppppppplVar14 + 1;
LAB_00bb4740:
    ppppppplVar16 = (long *******)*ppppppplVar15;
  }
  else {
    bVar2 = *(byte *)(ppppppplVar17 + 4);
    pppppplStack_58 = ppppppplVar17[5];
    local_60 = (long *******)ppppppplVar17[6];
    if ((bVar2 & 1) == 0) {
      local_60 = (long *******)((long)ppppppplVar17 + 0x21);
      pppppplStack_58 = (long ******)(ulong)(bVar2 >> 1);
    }
    iVar4 = FUN_028a8144(&local_90,&local_60);
    if (iVar4 < 0) goto LAB_00bb4530;
    pppppplStack_58 = (long ******)((ulong)local_90 >> 1 & 0x7f);
    local_60 = (long *******)((ulong)&local_90 | 1);
    if (((ulong)local_90 & 1) != 0) {
      pppppplStack_58 = local_88;
      local_60 = (long *******)CONCAT44(uStack_7c,local_80);
    }
    iVar4 = FUN_028a8144(ppppppplVar17 + 4,&local_60);
    if (iVar4 < 0) {
      ppppppplVar15 = ppppppplVar17 + 1;
      ppppppplVar9 = (long *******)*ppppppplVar15;
      if (ppppppplVar9 == (long *******)0x0) {
        ppppppplVar13 = ppppppplVar17 + 2;
        ppppppplVar14 = (long *******)*ppppppplVar13;
        if ((long *******)*ppppppplVar14 != ppppppplVar17) {
          do {
            pppppplVar5 = *ppppppplVar13;
            ppppppplVar13 = (long *******)(pppppplVar5 + 2);
            ppppppplVar14 = (long *******)*ppppppplVar13;
          } while (*ppppppplVar14 != pppppplVar5);
        }
      }
      else {
        ppppppplVar13 = ppppppplVar9;
        do {
          ppppppplVar14 = ppppppplVar13;
          ppppppplVar13 = (long *******)*ppppppplVar14;
        } while ((long *******)*ppppppplVar14 != (long *******)0x0);
      }
      if (ppppppplVar14 != ppppppplVar16) {
        pppppplStack_58 = (long ******)(ulong)(*(byte *)(ppppppplVar14 + 4) >> 1);
        local_60 = (long *******)((long)ppppppplVar14 + 0x21);
        if ((*(byte *)(ppppppplVar14 + 4) & 1) != 0) {
          pppppplStack_58 = ppppppplVar14[5];
          local_60 = (long *******)ppppppplVar14[6];
        }
        iVar4 = FUN_028a8144(&local_90,&local_60);
        if (iVar4 < 0) {
          ppppppplVar9 = (long *******)*ppppppplVar15;
          goto LAB_00bb490c;
        }
        if ((long *******)*ppppppplVar16 != (long *******)0x0) {
          ppppppplVar15 = (long *******)(param_1 + 0x20);
          ppppppplVar14 = (long *******)*ppppppplVar16;
          do {
            bVar2 = *(byte *)(ppppppplVar14 + 4);
            pppppplStack_58 = ppppppplVar14[5];
            local_60 = (long *******)ppppppplVar14[6];
            if ((bVar2 & 1) == 0) {
              local_60 = (long *******)((long)ppppppplVar14 + 0x21);
              pppppplStack_58 = (long ******)(ulong)(bVar2 >> 1);
            }
            iVar4 = FUN_028a8144(&local_90,&local_60);
            if (iVar4 < 0) {
              ppppppplVar16 = (long *******)*ppppppplVar14;
              if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4854;
              ppppppplVar15 = ppppppplVar14;
            }
            else {
              pppppplStack_58 = (long ******)((ulong)local_90 >> 1 & 0x7f);
              local_60 = (long *******)((ulong)&local_90 | 1);
              if (((ulong)local_90 & 1) != 0) {
                pppppplStack_58 = local_88;
                local_60 = (long *******)CONCAT44(uStack_7c,local_80);
              }
              iVar4 = FUN_028a8144(ppppppplVar14 + 4,&local_60);
              if (-1 < iVar4) goto LAB_00bb4740;
              ppppppplVar17 = ppppppplVar14 + 1;
              ppppppplVar16 = (long *******)*ppppppplVar17;
              ppppppplVar15 = ppppppplVar17;
              if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4858;
            }
            ppppppplVar14 = ppppppplVar16;
          } while( true );
        }
        goto LAB_00bb4848;
      }
LAB_00bb490c:
      if (ppppppplVar9 == (long *******)0x0) {
        ppppppplVar14 = ppppppplVar17;
      }
      else {
        ppppppplVar15 = ppppppplVar14;
      }
      goto LAB_00bb4740;
    }
    ppppppplVar15 = (long *******)&local_60;
    local_60 = ppppppplVar17;
    ppppppplVar16 = ppppppplVar17;
  }
  ppppppplVar17 = ppppppplVar15;
  if (ppppppplVar16 == (long *******)0x0) goto LAB_00bb4858;
LAB_00bb48e0:
  if ((((ulong)local_90 & 1) != 0) && (lVar8 = CONCAT44(uStack_7c,local_80), lVar8 != 0)) {
    lVar6 = tpidr_el0;
    plVar10 = *(long **)(lVar6 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00bb4a18:
      plVar10 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
LAB_00bb4944:
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,0,8);
    }
  }
  return 1;
LAB_00bb4318:
  local_68 = 0;
  local_90 = (long ******)CONCAT44(local_90._4_4_,2);
  local_80 = 0x5f;
  local_88 = (long ******)0x3ca6a41;
  local_78 = (long *****)0x0;
  ppppplStack_70 = (long *****)0x0;
  std::string::append((char *)&local_78);
  psVar11 = *(string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    psVar11 = param_2 + 1;
  }
  std::string::append((char *)&local_78,(ulong)psVar11);
  goto LAB_00bb4484;
LAB_00bb4390:
  ppppppplVar16 = ppppppplVar14;
LAB_00bb455c:
  if (*ppppppplVar16 == (long ******)0x0) {
    lVar8 = tpidr_el0;
    plVar10 = *(long **)(lVar8 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    pppppplVar5 = (long ******)(**(code **)(*plVar10 + 0x10))(plVar10,0x48,8);
    std::string::string((string *)(pppppplVar5 + 4),(string *)&local_90);
    pppppplVar5[2] = (long *****)ppppppplVar15;
    pppppplVar5[7] = local_78;
    pppppplVar5[8] = ppppplStack_70;
    *pppppplVar5 = (long *****)0x0;
    pppppplVar5[1] = (long *****)0x0;
    *ppppppplVar16 = pppppplVar5;
    if (**(long **)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      pppppplVar5 = *ppppppplVar16;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x20),pppppplVar5);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  if (((ulong)local_90 & 1) == 0) {
    return 1;
  }
  lVar8 = CONCAT44(uStack_7c,local_80);
  if (lVar8 == 0) {
    return 1;
  }
  lVar6 = tpidr_el0;
  plVar10 = *(long **)(lVar6 + 0x30);
  if (plVar10 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    goto LAB_00bb4a18;
  }
  goto LAB_00bb4944;
LAB_00bb4854:
  ppppppplVar17 = ppppppplVar14;
LAB_00bb4858:
  lVar8 = tpidr_el0;
  plVar10 = *(long **)(lVar8 + 0x30);
  if (plVar10 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar10 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  pppppplVar5 = (long ******)(**(code **)(*plVar10 + 0x10))(plVar10,0x48,8);
  std::string::string((string *)(pppppplVar5 + 4),(string *)&local_90);
  pppppplVar5[2] = (long *****)ppppppplVar14;
  pppppplVar5[7] = local_78;
  pppppplVar5[8] = ppppplStack_70;
  *pppppplVar5 = (long *****)0x0;
  pppppplVar5[1] = (long *****)0x0;
  *ppppppplVar17 = pppppplVar5;
  if (**(long **)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
    pppppplVar5 = *ppppppplVar17;
  }
  FUN_010108e0(*(undefined8 *)(param_1 + 0x20),pppppplVar5);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  goto LAB_00bb48e0;
}


