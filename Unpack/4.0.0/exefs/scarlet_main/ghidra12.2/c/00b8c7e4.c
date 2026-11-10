/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8c7e4; name: FUN_00b8c7e4
 */


/* WARNING: Type propagation algorithm not settling */

long **** FUN_00b8c7e4(string *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long ****pppplVar13;
  byte *pbVar14;
  ulong uVar15;
  long ***ppplVar16;
  long ******pppppplVar17;
  ulong *puVar18;
  long lVar19;
  long **pplVar20;
  long **pplVar21;
  char *pcVar22;
  long lVar23;
  char *pcVar24;
  undefined8 *puVar25;
  long *plVar26;
  ulong uVar27;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  byte bVar28;
  string sVar29;
  long ***ppplVar30;
  long *plVar31;
  ulong uVar32;
  string *psVar33;
  long *******ppppppplVar34;
  byte *pbVar35;
  long **pplVar36;
  string *psVar37;
  uint uVar38;
  undefined4 *puVar39;
  long **pplVar40;
  long ***ppplVar41;
  long *******ppppppplVar42;
  long *******ppppppplVar43;
  long lVar44;
  undefined8 uVar45;
  undefined4 uVar46;
  string *psVar47;
  long lVar48;
  undefined8 uVar49;
  long lVar50;
  long *plVar51;
  string *psVar52;
  long lVar53;
  undefined4 uVar54;
  long ****pppplVar55;
  long ****pppplVar56;
  long lVar57;
  long ***ppplVar58;
  long *plVar59;
  long ****pppplVar60;
  long ****pppplVar61;
  int *piVar62;
  size_t sVar63;
  undefined4 uVar64;
  long ***ppplVar65;
  long ***ppplVar66;
  undefined8 *puVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  string *local_230;
  string *local_228;
  char *local_220;
  undefined1 auStack_218 [40];
  long *******local_1f0;
  long *******local_1e8;
  long local_1e0;
  long *******local_1d8;
  long *******local_1d0;
  long local_1c8;
  uint local_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined6 local_1b8;
  undefined2 uStack_1b2;
  undefined8 local_1b0;
  char acStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  string local_190 [16];
  ulong local_180;
  byte local_178 [16];
  string *local_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_148;
  ulong uStack_140;
  string *local_138;
  undefined *local_130;
  undefined8 uStack_128;
  long local_120;
  ushort local_118 [4];
  ulong local_110;
  ulong local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  string *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_69;
  
  pppplVar60 = *(long *****)(param_1 + 8);
  ppplVar66 = (long ***)((ulong)((long)pppplVar60[0x32] - (long)pppplVar60[0x31]) >> 3);
  ppplVar30 = pppplVar60[0x2c];
  lVar3 = tpidr_el0;
  uVar54 = (undefined4)((ulong)((long)pppplVar60[0x13] - (long)pppplVar60[0x12]) >> 3);
  uVar69 = (undefined4)((ulong)((long)pppplVar60[0x16] - (long)pppplVar60[0x15]) >> 3);
  uVar64 = (undefined4)((ulong)((long)pppplVar60[0x1c] - (long)pppplVar60[0x1b]) >> 3);
  uVar68 = (undefined4)((ulong)((long)pppplVar60[0x19] - (long)pppplVar60[0x18]) >> 3);
  uVar46 = (undefined4)((ulong)((long)pppplVar60[0x2f] - (long)pppplVar60[0x2e]) >> 3);
  uVar70 = (undefined4)((ulong)((long)pppplVar60[0x35] - (long)pppplVar60[0x34]) >> 4);
  if (pppplVar60[0x2d] <= ppplVar30) {
    ppplVar65 = pppplVar60[0x2b];
    sVar63 = (long)ppplVar30 - (long)ppplVar65;
    uVar15 = ((long)sVar63 >> 2) * 0x6db6db6db6db6db7 + 1;
    if (0x924924924924924 < uVar15) goto LAB_00b9410c;
    lVar48 = (long)pppplVar60[0x2d] - (long)ppplVar65 >> 2;
    uVar27 = lVar48 * -0x2492492492492492;
    if (uVar15 <= uVar27) {
      uVar15 = uVar27;
    }
    if (0x492492492492491 < (ulong)(lVar48 * 0x6db6db6db6db6db7)) {
      uVar15 = 0x924924924924924;
    }
    if (uVar15 == 0) {
      lVar48 = 0;
LAB_00b8c96c:
      puVar39 = (undefined4 *)(lVar48 + ((long)sVar63 >> 2) * 4);
      *puVar39 = uVar54;
      puVar39[1] = uVar69;
      puVar39[4] = uVar46;
      puVar39[5] = (int)ppplVar66;
      puVar39[2] = uVar68;
      puVar39[3] = uVar64;
      puVar39[6] = uVar70;
      if (0 < (long)sVar63) {
        memcpy((long ***)((long)puVar39 - sVar63),ppplVar65,sVar63);
      }
      pppplVar60[0x2b] = (long ***)((long)puVar39 - sVar63);
      pppplVar60[0x2c] = (long ***)(puVar39 + 7);
      pppplVar60[0x2d] = (long ***)(lVar48 + uVar15 * 0x1c);
      if (ppplVar65 != (long ***)0x0) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar65,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,ppplVar65,0,8);
        }
      }
      goto LAB_00b8ca0c;
    }
    if (uVar15 < 0x924924924924925) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      lVar48 = (**(code **)(*plVar31 + 0x10))(plVar31,uVar15 * 0x1c,8);
      goto LAB_00b8c96c;
    }
LAB_00b94108:
    FUN_01f6e360();
LAB_00b9410c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  *(undefined4 *)ppplVar30 = uVar54;
  *(undefined4 *)((long)ppplVar30 + 4) = uVar69;
  *(undefined4 *)(ppplVar30 + 1) = uVar68;
  *(undefined4 *)((long)ppplVar30 + 0xc) = uVar64;
  *(undefined4 *)(ppplVar30 + 2) = uVar46;
  *(int *)((long)ppplVar30 + 0x14) = (int)ppplVar66;
  *(undefined4 *)(ppplVar30 + 3) = uVar70;
  pppplVar60[0x2c] = (long ***)((long)ppplVar30 + 0x1c);
LAB_00b8ca0c:
  pppplVar60 = (long ****)FUN_00b7a704(*(long *****)(param_1 + 8),0xa8);
  *(long *****)(param_1 + 0x50) = pppplVar60;
  *(undefined1 *)(pppplVar60 + 0x10) = 0;
  puVar1 = PTR_DAT_047dac68;
  if ((*(byte *)(param_2 + 0x11) >> 2 & 1) == 0) {
    ppplVar30 = *(long ****)PTR_DAT_047dac68;
    if (ppplVar30 == (long ***)0x0) {
      FUN_00bb5d70();
      ppplVar30 = *(long ****)puVar1;
    }
    pppplVar60[0x14] = ppplVar30;
  }
  else {
    pppplVar55 = *(long *****)(param_1 + 8);
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    ppplVar65 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,0x30,8);
    pplVar36 = (long **)(PTR_DAT_047dac70 + 0x10);
    ppplVar65[2] = (long **)0x0;
    ppplVar65[3] = (long **)0x0;
    ppplVar65[4] = (long **)0x0;
    ppplVar65[5] = (long **)0x0;
    *ppplVar65 = pplVar36;
    ppplVar65[1] = (long **)0x0;
    ppplVar30 = pppplVar55[0x16];
    if (ppplVar30 < pppplVar55[0x17]) {
      *ppplVar30 = (long **)ppplVar65;
      pppplVar55[0x16] = ppplVar30 + 1;
    }
    else {
      ppplVar16 = pppplVar55[0x15];
      sVar63 = (long)ppplVar30 - (long)ppplVar16;
      uVar15 = ((long)sVar63 >> 3) + 1;
      if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
      lVar48 = (long)pppplVar55[0x17] - (long)ppplVar16;
      uVar27 = lVar48 >> 2;
      if (uVar15 <= uVar27) {
        uVar15 = uVar27;
      }
      if (0xffffffffffffffe < (ulong)(lVar48 >> 3)) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        ppplVar30 = (long ***)0x0;
      }
      else {
        if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        ppplVar30 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
      }
      ppplVar66 = ppplVar30 + uVar15;
      ppplVar30[(long)sVar63 >> 3] = (long **)ppplVar65;
      if (0 < (long)sVar63) {
        memcpy(ppplVar30,ppplVar16,sVar63);
      }
      pppplVar55[0x15] = ppplVar30;
      pppplVar55[0x16] = ppplVar30 + ((long)sVar63 >> 3) + 1;
      pppplVar55[0x17] = ppplVar66;
      if (ppplVar16 != (long ***)0x0) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar16,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,ppplVar16,0,8);
        }
      }
    }
    ppplVar30 = *(long ****)(param_2 + 200);
    if (ppplVar30 == (long ***)0x0) {
      ppplVar30 = *(long ****)(*(long *)PTR_DAT_047dac78 + 200);
    }
    if (ppplVar30 != ppplVar65) {
      (*(code *)(*ppplVar65)[7])(ppplVar65);
      FUN_00bbd7c0(ppplVar65,ppplVar30);
    }
    pppplVar60[0x14] = ppplVar65;
  }
  pppplVar55 = *(long *****)(param_1 + 8);
  plVar31 = *(long **)(lVar3 + 0x30);
  if (plVar31 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar31 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  pppplVar13 = (long ****)(**(code **)(*plVar31 + 0x10))(plVar31,0x128,8);
  FUN_00b77294();
  ppplVar30 = pppplVar55[0x19];
  if (ppplVar30 == pppplVar55[0x1a]) {
    ppplVar65 = pppplVar55[0x18];
    sVar63 = (long)ppplVar30 - (long)ppplVar65;
    uVar15 = ((long)sVar63 >> 3) + 1;
    if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
    lVar48 = (long)pppplVar55[0x1a] - (long)ppplVar65;
    uVar27 = lVar48 >> 2;
    if (uVar15 <= uVar27) {
      uVar15 = uVar27;
    }
    if (0xffffffffffffffe < (ulong)(lVar48 >> 3)) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      ppplVar30 = (long ***)0x0;
    }
    else {
      if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      ppplVar30 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
    }
    ppplVar66 = ppplVar30 + uVar15;
    ppplVar30[(long)sVar63 >> 3] = (long **)pppplVar13;
    if (0 < (long)sVar63) {
      memcpy(ppplVar30,ppplVar65,sVar63);
    }
    pppplVar55[0x18] = ppplVar30;
    pppplVar55[0x19] = ppplVar30 + ((long)sVar63 >> 3) + 1;
    pppplVar55[0x1a] = ppplVar66;
    if (ppplVar65 != (long ***)0x0) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar65,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,ppplVar65,0,8);
      }
    }
  }
  else {
    *ppplVar30 = (long **)pppplVar13;
    pppplVar55[0x19] = ppplVar30 + 1;
  }
  *(long *****)(param_1 + 0x58) = pppplVar13;
  (*(long *****)(param_1 + 0x50))[0x13] = (long ***)pppplVar13;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    local_e8 = (string *)((ulong)local_e8 & 0xffffffffffff0000);
    FUN_00b8a120(param_1,&local_e8,param_2,9,"Missing field: FileDescriptorProto.name.");
    pcVar22 = local_d8;
    if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
  }
  pbVar14 = *(byte **)(param_2 + 0xd0);
  bVar28 = *pbVar14;
  if ((bVar28 & 1) == 0) {
    if (bVar28 >> 1 != 0) goto LAB_00b8cdc8;
LAB_00b8ce50:
    *(undefined4 *)((long)*(long *****)(param_1 + 0x50) + 0x7c) = 2;
  }
  else {
    if (*(long *)(pbVar14 + 8) == 0) goto LAB_00b8ce50;
LAB_00b8cdc8:
    uVar32 = *(ulong *)(pbVar14 + 8);
    uVar27 = (ulong)(bVar28 >> 1);
    uVar15 = uVar27;
    if ((bVar28 & 1) != 0) {
      uVar15 = uVar32;
    }
    if (uVar15 == 6) {
      iVar10 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,0x3c41973);
      if (iVar10 == 0) goto LAB_00b8ce50;
      pbVar14 = *(byte **)(param_2 + 0xd0);
      bVar28 = *pbVar14;
      uVar32 = *(ulong *)(pbVar14 + 8);
      uVar27 = (ulong)(bVar28 >> 1);
    }
    if ((bVar28 & 1) != 0) {
      uVar27 = uVar32;
    }
    if (uVar27 == 6) {
      iVar10 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,0x3c690c8);
      puVar39 = (undefined4 *)((long)*(long *****)(param_1 + 0x50) + 0x7c);
      if (iVar10 != 0) goto LAB_00b8ce68;
      *puVar39 = 3;
    }
    else {
      puVar39 = (undefined4 *)((long)*(long *****)(param_1 + 0x50) + 0x7c);
LAB_00b8ce68:
      *puVar39 = 0;
      uVar49 = *(undefined8 *)(param_2 + 0x18);
      std::operator+("Unrecognized syntax: ",*(string **)(param_2 + 0xd0));
      FUN_00b89f94(param_1,uVar49,param_2,9,&local_e8);
      pcVar22 = local_d8;
      if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,pcVar22,0,8);
        }
      }
    }
  }
  ppplVar30 = (long ***)FUN_00b7a414(*(long *****)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *pppplVar60 = ppplVar30;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    local_e8 = (string *)((ulong)local_e8 & 0xffffffffffff0000);
    ppplVar30 = (long ***)FUN_00b7a414(*(long *****)(param_1 + 8),&local_e8);
    pcVar22 = local_d8;
    pppplVar60[1] = ppplVar30;
    if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
  }
  else {
    ppplVar30 = (long ***)FUN_00b7a414(*(long *****)(param_1 + 8),*(undefined8 *)(param_2 + 0x20));
    pppplVar60[1] = ppplVar30;
  }
  pppplVar60[2] = (long ***)*(long *****)param_1;
  ppplVar30 = *pppplVar60;
  pppplVar55 = *(long *****)(param_1 + 8);
  if (((ulong)*ppplVar30 & 1) == 0) {
    pplVar36 = (long **)((long)ppplVar30 + 1);
  }
  else {
    pplVar36 = ppplVar30[2];
  }
  bVar28 = *(byte *)pplVar36;
  if (bVar28 == 0) {
    ppplVar30 = (long ***)0x0;
  }
  else {
    ppplVar30 = (long ***)0x0;
    pplVar40 = pplVar36;
    do {
      pplVar40 = (long **)((long)pplVar40 + 1);
      ppplVar30 = (long ***)((long)ppplVar30 * 5 + (ulong)bVar28);
      bVar28 = *(byte *)pplVar40;
    } while (bVar28 != 0);
  }
  ppplVar65 = pppplVar55[0x24];
  pppplVar13 = pppplVar55 + 0x23;
  if (ppplVar65 != (long ***)0x0) {
    uVar15 = (long)ppplVar65 - 1;
    if (((ulong)ppplVar65 & uVar15) == 0) {
      ppplVar66 = (long ***)(uVar15 & (ulong)ppplVar30);
      pplVar40 = (*pppplVar13)[(long)ppplVar66];
      if (pplVar40 != (long **)0x0) {
        do {
          pplVar40 = (long **)*pplVar40;
          if ((pplVar40 == (long **)0x0) ||
             ((long ***)pplVar40[1] != ppplVar30 &&
              (long ***)((ulong)pplVar40[1] & uVar15) != ppplVar66)) goto LAB_00b8d070;
          iVar10 = strcmp((char *)pplVar40[2],(char *)pplVar36);
        } while (iVar10 != 0);
        goto LAB_00b8d040;
      }
    }
    else {
      ppplVar66 = ppplVar30;
      if (ppplVar65 <= ppplVar30) {
        uVar15 = 0;
        if (ppplVar65 != (long ***)0x0) {
          uVar15 = (ulong)ppplVar30 / (ulong)ppplVar65;
        }
        ppplVar66 = (long ***)((long)ppplVar30 - uVar15 * (long)ppplVar65);
      }
      pplVar40 = (*pppplVar13)[(long)ppplVar66];
      if (pplVar40 != (long **)0x0) {
        do {
          pplVar40 = (long **)*pplVar40;
          if (pplVar40 == (long **)0x0) goto LAB_00b8d070;
          ppplVar16 = (long ***)pplVar40[1];
          if (ppplVar16 != ppplVar30) {
            if (ppplVar65 <= ppplVar16) {
              uVar15 = 0;
              if (ppplVar65 != (long ***)0x0) {
                uVar15 = (ulong)ppplVar16 / (ulong)ppplVar65;
              }
              ppplVar16 = (long ***)((long)ppplVar16 - uVar15 * (long)ppplVar65);
            }
            if (ppplVar16 != ppplVar66) goto LAB_00b8d070;
          }
          iVar10 = strcmp((char *)pplVar40[2],(char *)pplVar36);
        } while (iVar10 != 0);
LAB_00b8d040:
        FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                     "A file with this name is already in the pool.");
        FUN_00b7836c(*(long *****)(param_1 + 8));
        return (long ****)0x0;
      }
    }
  }
LAB_00b8d070:
  plVar31 = *(long **)(lVar3 + 0x30);
  if (plVar31 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar31 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  ppplVar16 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
  ppplVar16[2] = pplVar36;
  ppplVar16[3] = (long **)pppplVar60;
  *ppplVar16 = (long **)0x0;
  ppplVar16[1] = (long **)ppplVar30;
  if ((ppplVar65 == (long ***)0x0) ||
     (*(float *)(pppplVar55 + 0x27) * (float)ppplVar65 < (float)((long)pppplVar55[0x26] + 1))) {
    ppplVar66 = (long ***)
                ((ulong)(ppplVar65 < (long ***)0x3 || ((ulong)ppplVar65 & (long)ppplVar65 - 1U) != 0
                        ) | (long)ppplVar65 << 1);
    ppplVar65 = (long ***)
                (long)((float)((long)pppplVar55[0x26] + 1) / *(float *)(pppplVar55 + 0x27));
    if (ppplVar65 <= ppplVar66) {
      ppplVar65 = ppplVar66;
    }
    if ((long)ppplVar65 - 1U == 0) {
      ppplVar65 = (long ***)0x2;
    }
    else if (((ulong)ppplVar65 & (long)ppplVar65 - 1U) != 0) {
      ppplVar65 = (long ***)std::__next_prime((ulong)ppplVar65);
    }
    ppplVar66 = pppplVar55[0x24];
    if (ppplVar66 < ppplVar65) {
      ppplVar41 = ppplVar65;
LAB_00b8d138:
      FUN_00babd3c(pppplVar13,ppplVar41);
    }
    else if (ppplVar65 < ppplVar66) {
      ppplVar41 = (long ***)(long)((float)pppplVar55[0x26] / *(float *)(pppplVar55 + 0x27));
      if ((ppplVar66 < (long ***)0x3) ||
         (uVar15 = (long)ppplVar66 - ((ulong)ppplVar66 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        ppplVar41 = (long ***)std::__next_prime((ulong)ppplVar41);
      }
      else if ((long ***)0x1 < ppplVar41) {
        ppplVar41 = (long ***)(1L << (-LZCOUNT((long)ppplVar41 + -1) & 0x3fU));
      }
      if (ppplVar41 <= ppplVar65) {
        ppplVar41 = ppplVar65;
      }
      if (ppplVar41 < ppplVar66) goto LAB_00b8d138;
    }
    ppplVar65 = pppplVar55[0x24];
    if (((ulong)ppplVar65 & (long)ppplVar65 - 1U) == 0) {
      ppplVar66 = (long ***)((long)ppplVar65 - 1U & (ulong)ppplVar30);
    }
    else if (ppplVar30 < ppplVar65) {
      ppplVar66 = ppplVar30;
    }
    else {
      uVar15 = 0;
      if (ppplVar65 != (long ***)0x0) {
        uVar15 = (ulong)ppplVar30 / (ulong)ppplVar65;
      }
      ppplVar66 = (long ***)((long)ppplVar30 - uVar15 * (long)ppplVar65);
    }
  }
  ppplVar41 = *pppplVar13;
  ppplVar30 = (long ***)ppplVar41[(long)ppplVar66];
  if (ppplVar30 == (long ***)0x0) {
    *ppplVar16 = (long **)pppplVar55[0x25];
    pppplVar55[0x25] = ppplVar16;
    ppplVar41[(long)ppplVar66] = (long **)(pppplVar55 + 0x25);
    if (*ppplVar16 != (long **)0x0) {
      ppplVar30 = (long ***)(*ppplVar16)[1];
      if (((ulong)ppplVar65 & (long)ppplVar65 - 1U) == 0) {
        ppplVar30 = (long ***)((ulong)ppplVar30 & (long)ppplVar65 - 1U);
      }
      else if (ppplVar65 <= ppplVar30) {
        uVar15 = 0;
        if (ppplVar65 != (long ***)0x0) {
          uVar15 = (ulong)ppplVar30 / (ulong)ppplVar65;
        }
        ppplVar30 = (long ***)((long)ppplVar30 - uVar15 * (long)ppplVar65);
      }
      ppplVar30 = *pppplVar13 + (long)ppplVar30;
      goto LAB_00b8d274;
    }
  }
  else {
    *ppplVar16 = *ppplVar30;
LAB_00b8d274:
    *ppplVar30 = (long **)ppplVar16;
  }
  pppplVar55[0x26] = (long ***)((long)pppplVar55[0x26] + 1);
  ppplVar66 = *pppplVar60;
  if (((ulong)*ppplVar66 & 1) == 0) {
    pplVar36 = (long **)((long)ppplVar66 + 1);
  }
  else {
    pplVar36 = ppplVar66[2];
  }
  ppplVar66 = pppplVar55[0x32];
  if (ppplVar66 < pppplVar55[0x33]) {
    *ppplVar66 = pplVar36;
    pppplVar55[0x32] = ppplVar66 + 1;
  }
  else {
    ppplVar30 = pppplVar55[0x31];
    sVar63 = (long)ppplVar66 - (long)ppplVar30;
    uVar15 = ((long)sVar63 >> 3) + 1;
    if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
    lVar48 = (long)pppplVar55[0x33] - (long)ppplVar30;
    uVar27 = lVar48 >> 2;
    if (uVar15 <= uVar27) {
      uVar15 = uVar27;
    }
    if (0xffffffffffffffe < (ulong)(lVar48 >> 3)) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      ppplVar66 = (long ***)0x0;
    }
    else {
      if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      ppplVar66 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
    }
    ppplVar66[(long)sVar63 >> 3] = pplVar36;
    if (0 < (long)sVar63) {
      memcpy(ppplVar66,ppplVar30,sVar63);
    }
    pppplVar55[0x31] = ppplVar66;
    pppplVar55[0x32] = ppplVar66 + ((long)sVar63 >> 3) + 1;
    pppplVar55[0x33] = ppplVar66 + uVar15;
    if (ppplVar30 != (long ***)0x0) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar30,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,ppplVar30,0,8);
      }
    }
  }
  ppplVar66 = pppplVar60[1];
  if ((*(byte *)ppplVar66 & 1) == 0) {
    if (*(byte *)ppplVar66 >> 1 != 0) goto LAB_00b8d3e8;
  }
  else if (ppplVar66[1] != (long **)0x0) {
LAB_00b8d3e8:
    FUN_00b8b774(param_1,ppplVar66,param_2,pppplVar60);
  }
  local_1d0 = (long *******)0x0;
  local_1c8 = 0;
  *(undefined4 *)(pppplVar60 + 3) = *(undefined4 *)(param_2 + 0x30);
  local_1d8 = (long *******)&local_1d0;
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x30) << 3);
  pppplVar60[4] = ppplVar66;
  psVar47 = param_1 + 0x80;
  FUN_00bae668(*(long *****)psVar47);
  *(long *****)(param_1 + 0x88) = (long ****)0x0;
  *(string **)(param_1 + 0x78) = psVar47;
  *(long *****)(param_1 + 0x80) = (long ****)0x0;
  local_1e8 = (long *******)0x0;
  local_1e0 = 0;
  iVar10 = *(int *)(param_2 + 0x50);
  local_1f0 = (long *******)&local_1e8;
  if (0 < iVar10) {
    lVar48 = 0;
    do {
      iVar11 = *(int *)(*(long *)(param_2 + 0x58) + lVar48 * 4 + 8);
      ppppppplVar34 = (long *******)&local_1e8;
      if (local_1e8 != (long *******)0x0) {
        ppppppplVar43 = local_1e8;
        do {
          if (iVar11 < *(int *)((long)ppppppplVar43 + 0x1c)) {
            ppppppplVar42 = (long *******)*ppppppplVar43;
            ppppppplVar34 = ppppppplVar43;
            if (ppppppplVar42 == (long *******)0x0) {
              goto LAB_00b8d4cc;
            }
          }
          else {
            if (iVar11 <= *(int *)((long)ppppppplVar43 + 0x1c)) goto LAB_00b8d4cc;
            ppppppplVar34 = ppppppplVar43 + 1;
            ppppppplVar42 = (long *******)*ppppppplVar34;
            if (ppppppplVar42 == (long *******)0x0) goto LAB_00b8d4cc;
          }
          ppppppplVar43 = ppppppplVar42;
        } while( true );
      }
      ppppppplVar43 = (long *******)&local_1e8;
LAB_00b8d4cc:
      if (*ppppppplVar34 == (long ******)0x0) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        pppppplVar17 = (long ******)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
        *(int *)((long)pppppplVar17 + 0x1c) = iVar11;
        pppppplVar17[2] = (long *****)ppppppplVar43;
        *pppppplVar17 = (long *****)0x0;
        pppppplVar17[1] = (long *****)0x0;
        *ppppppplVar34 = pppppplVar17;
        if ((long *******)*local_1f0 != (long *******)0x0) {
          pppppplVar17 = *ppppppplVar34;
          local_1f0 = (long *******)*local_1f0;
        }
        FUN_010108e0(local_1e8,pppppplVar17);
        local_1e0 = local_1e0 + 1;
        iVar10 = *(int *)(param_2 + 0x50);
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < iVar10);
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar48 = 0;
    do {
      psVar52 = *(string **)(*(long *)(param_2 + 0x38) + lVar48 * 8 + 8);
      ppppppplVar34 = (long *******)&local_1d0;
      if (local_1d0 != (long *******)0x0) {
        ppppppplVar43 = local_1d0;
        do {
          bVar28 = *(byte *)(ppppppplVar43 + 4);
          local_e0 = (string *)ppppppplVar43[5];
          local_e8 = (string *)ppppppplVar43[6];
          if ((bVar28 & 1) == 0) {
            local_e8 = (string *)((long)ppppppplVar43 + 0x21);
            local_e0 = (string *)(ulong)(bVar28 >> 1);
          }
          iVar10 = FUN_028a8144(psVar52,&local_e8);
          if (iVar10 < 0) {
            ppppppplVar42 = (long *******)*ppppppplVar43;
            ppppppplVar34 = ppppppplVar43;
            if (ppppppplVar42 == (long *******)0x0) {
              goto LAB_00b8d688;
            }
          }
          else {
            local_e0 = (string *)(ulong)((byte)*psVar52 >> 1);
            local_e8 = psVar52 + 1;
            if (((byte)*psVar52 & 1) != 0) {
              local_e0 = *(string **)(psVar52 + 8);
              local_e8 = *(string **)(psVar52 + 0x10);
            }
            iVar10 = FUN_028a8144(ppppppplVar43 + 4,&local_e8);
            if (-1 < iVar10) goto LAB_00b8d688;
            ppppppplVar34 = ppppppplVar43 + 1;
            ppppppplVar42 = (long *******)*ppppppplVar34;
            if (ppppppplVar42 == (long *******)0x0) goto LAB_00b8d688;
          }
          ppppppplVar43 = ppppppplVar42;
        } while( true );
      }
      ppppppplVar43 = (long *******)&local_1d0;
LAB_00b8d688:
      if (*ppppppplVar34 == (long ******)0x0) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        pppppplVar17 = (long ******)(**(code **)(*plVar31 + 0x10))(plVar31,0x38,8);
        std::string::string((string *)(pppppplVar17 + 4),psVar52);
        *pppppplVar17 = (long *****)0x0;
        pppppplVar17[1] = (long *****)0x0;
        pppppplVar17[2] = (long *****)ppppppplVar43;
        *ppppppplVar34 = pppppplVar17;
        if ((long *******)*local_1d8 != (long *******)0x0) {
          local_1d8 = (long *******)*local_1d8;
          pppppplVar17 = *ppppppplVar34;
        }
        FUN_010108e0(local_1d0,pppppplVar17);
        local_1c8 = local_1c8 + 1;
      }
      else {
        uVar49 = *(undefined8 *)(param_2 + 0x18);
        std::operator+("Import \"",
                       *(string **)(*(long *)(param_2 + 0x38) + ((lVar48 << 0x20) >> 0x1d) + 8));
        puVar18 = (ulong *)std::string::append((char *)&local_230);
        local_e0 = (string *)puVar18[1];
        local_d8 = (char *)puVar18[2];
        local_e8 = (string *)*puVar18;
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        FUN_00b89f94(param_1,uVar49,param_2,9,&local_e8);
        pcVar22 = local_d8;
        if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,pcVar22,0,8);
          }
        }
        pcVar22 = local_220;
        if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,pcVar22,0,8);
          }
        }
      }
      pbVar14 = *(byte **)(*(long *)(param_2 + 0x38) + lVar48 * 8 + 8);
      local_e8 = *(string **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        local_e8 = (string *)(pbVar14 + 1);
      }
      lVar19 = FUN_00ba6514(*(long *****)(param_1 + 8) + 0x23,&local_e8);
      if (lVar19 == 0) {
        pppplVar55 = (long ****)0x0;
LAB_00b8d824:
        if ((*(long *****)param_1)[3] != (long ***)0x0) {
          pppplVar55 = (long ****)FUN_00b7b2f8((*(long *****)param_1)[3],pbVar14);
        }
      }
      else {
        pppplVar55 = *(long *****)(lVar19 + 0x18);
        if (pppplVar55 == (long ****)0x0) goto LAB_00b8d824;
      }
      pppplVar13 = *(long *****)param_1;
      if (pppplVar55 == (long ****)0x0) {
        if (*(char *)((long)pppplVar13 + 0x29) == '\0') {
          if ((*(char *)((long)pppplVar13 + 0x2a) == '\0') && (local_1e8 != (long *******)0x0)) {
            ppppppplVar34 = (long *******)&local_1e8;
            ppppppplVar43 = local_1e8;
            do {
              if (lVar48 <= *(int *)((long)ppppppplVar43 + 0x1c)) {
                ppppppplVar34 = ppppppplVar43;
              }
              ppppppplVar43 =
                   (long *******)ppppppplVar43[*(int *)((long)ppppppplVar43 + 0x1c) < lVar48];
            } while (ppppppplVar43 != (long *******)0x0);
            if (((long ********)ppppppplVar34 != &local_1e8) &&
               (*(int *)((long)ppppppplVar34 + 0x1c) <= lVar48)) goto LAB_00b8d954;
          }
          local_e0 = (string *)0x0;
          local_d8 = (char *)0x0;
          local_e8 = (string *)0x0;
          if (pppplVar13[1] == (long ***)0x0) {
            std::operator+("Import \"",
                           *(string **)(*(long *)(param_2 + 0x38) + ((lVar48 << 0x20) >> 0x1d) + 8))
            ;
          }
          else {
            std::operator+("Import \"",
                           *(string **)(*(long *)(param_2 + 0x38) + ((lVar48 << 0x20) >> 0x1d) + 8))
            ;
          }
          puVar67 = (undefined8 *)std::string::append((char *)&local_230);
          lVar19 = (long)local_d8;
          uVar49 = *(undefined8 *)((long)puVar67 + 2);
          uVar5 = *(undefined2 *)puVar67;
          local_1b8 = (undefined6)((ulong)puVar67[1] >> 0x10);
          local_1c0 = (uint)uVar49;
          uStack_1bc = (undefined2)((ulong)uVar49 >> 0x20);
          uStack_1ba = (undefined2)((ulong)uVar49 >> 0x30);
          *puVar67 = 0;
          puVar67[1] = 0;
          pcVar22 = (char *)puVar67[2];
          puVar67[2] = 0;
          if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar57 = FUN_00c4e600(), *(int *)(lVar57 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,lVar19,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,lVar19,0,8);
            }
          }
          pcVar24 = local_220;
          local_e8 = (string *)CONCAT62(local_e8._2_6_,uVar5);
          *(ulong *)((long)((ulong)&local_e8 | 2) + 6) = CONCAT62(local_1b8,uStack_1ba);
          *(ulong *)((ulong)&local_e8 | 2) = CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,local_1c0));
          local_d8 = pcVar22;
          if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pcVar24,0,8);
            }
          }
          FUN_00b89f94(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,&local_e8);
          pcVar22 = local_d8;
          if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pcVar22,0,8);
            }
          }
          pppplVar55 = (long ****)0x0;
        }
        else {
LAB_00b8d954:
          pppplVar55 = (long ****)
                       FUN_00b8b554(param_1,*(undefined8 *)
                                             (*(long *)(param_2 + 0x38) + lVar48 * 8 + 8));
        }
      }
      else if (*(char *)(pppplVar13 + 5) != '\0') {
        pbVar14 = *(byte **)(param_2 + 0x18);
        pppplVar13 = pppplVar13 + 7;
        pppplVar61 = (long ****)*pppplVar13;
        if (pppplVar61 == (long ****)0x0) {
LAB_00b8d8e4:
          pppplVar56 = pppplVar13;
        }
        else {
          pppplVar56 = pppplVar13;
          do {
            local_e0 = (string *)(ulong)(*pbVar14 >> 1);
            local_e8 = (string *)(pbVar14 + 1);
            if ((*pbVar14 & 1) != 0) {
              local_e0 = *(string **)(pbVar14 + 8);
              local_e8 = *(string **)(pbVar14 + 0x10);
            }
            iVar10 = FUN_028a8144(pppplVar61 + 4,&local_e8);
            if (iVar10 >= 0) {
              pppplVar56 = pppplVar61;
            }
            pppplVar61 = (long ****)pppplVar61[iVar10 < 0];
          } while (pppplVar61 != (long ****)0x0);
          if (pppplVar56 == pppplVar13) goto LAB_00b8d8e4;
          local_e0 = (string *)(ulong)(*(byte *)(pppplVar56 + 4) >> 1);
          local_e8 = (string *)((long)pppplVar56 + 0x21);
          if ((*(byte *)(pppplVar56 + 4) & 1) != 0) {
            local_e0 = (string *)pppplVar56[5];
            local_e8 = (string *)pppplVar56[6];
          }
          iVar10 = FUN_028a8144(pbVar14,&local_e8);
          if (iVar10 < 0) goto LAB_00b8d8e4;
        }
        if ((pppplVar56 != *(long *****)param_1 + 7) && (*(int *)(pppplVar55 + 5) == 0)) {
          if (*(string **)psVar47 != (string *)0x0) {
            psVar52 = param_1 + 0x80;
            psVar37 = *(string **)psVar47;
            do {
              pppplVar13 = *(long *****)(psVar37 + 0x20);
              if (pppplVar55 <= pppplVar13 && pppplVar13 != pppplVar55) {
                psVar33 = *(string **)psVar37;
                psVar52 = psVar37;
                if (psVar33 == (string *)0x0) {
                  goto LAB_00b8db04;
                }
              }
              else {
                if (pppplVar55 <= pppplVar13) goto LAB_00b8db04;
                psVar52 = psVar37 + 8;
                psVar33 = *(string **)psVar52;
                if (psVar33 == (string *)0x0) goto LAB_00b8db04;
              }
              psVar37 = psVar33;
            } while( true );
          }
          psVar52 = psVar47;
          psVar37 = psVar47;
LAB_00b8db04:
          if (*(long *****)psVar52 == (long ****)0x0) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            pppplVar13 = (long ****)(**(code **)(*plVar31 + 0x10))(plVar31,0x28,8);
            *pppplVar13 = (long ***)0x0;
            pppplVar13[1] = (long ***)0x0;
            pppplVar13[2] = (long ***)psVar37;
            pppplVar13[4] = (long ***)pppplVar55;
            *(long *****)psVar52 = pppplVar13;
            if ((long ****)**(long *****)(param_1 + 0x78) != (long ****)0x0) {
              *(long ****)(param_1 + 0x78) = **(long *****)(param_1 + 0x78);
              pppplVar13 = *(long *****)psVar52;
            }
            FUN_010108e0(*(long *****)(param_1 + 0x80),pppplVar13);
            *(long *****)(param_1 + 0x88) = (long ****)((long)*(long *****)(param_1 + 0x88) + 1);
          }
        }
      }
      pppplVar60[4][lVar48] = (long **)pppplVar55;
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(param_2 + 0x30));
  }
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x40) << 2);
  pppplVar60[6] = ppplVar66;
  if (*(int *)(param_2 + 0x40) < 1) {
    iVar10 = 0;
  }
  else {
    lVar48 = 0;
    iVar10 = 0;
    do {
      uVar38 = *(uint *)(*(long *)(param_2 + 0x48) + lVar48 * 4 + 8);
      if (((int)uVar38 < 0) || (*(int *)(param_2 + 0x30) <= (int)uVar38)) {
        FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                     "Invalid public dependency index.");
      }
      else {
        *(uint *)((long)pppplVar60[6] + (long)iVar10 * 4) = uVar38;
        psVar52 = *(string **)psVar47;
        if (psVar52 != (string *)0x0) {
          pppplVar55 = (long ****)pppplVar60[4][uVar38];
          psVar33 = psVar52;
          psVar37 = psVar47;
          do {
            if (*(long *****)(psVar33 + 0x20) >= pppplVar55) {
              psVar37 = psVar33;
            }
            psVar33 = *(string **)
                       (psVar33 + (ulong)(*(long *****)(psVar33 + 0x20) < pppplVar55) * 8);
          } while (psVar33 != (string *)0x0);
          if ((psVar37 != psVar47) && (*(long *****)(psVar37 + 0x20) <= pppplVar55)) {
            pppplVar55 = *(long *****)(psVar37 + 8);
            if (*(long *****)(psVar37 + 8) == (long ****)0x0) {
              psVar33 = psVar37 + 0x10;
              pppplVar13 = *(long *****)psVar33;
              if ((string *)*pppplVar13 != psVar37) {
                do {
                  pppplVar55 = *(long *****)psVar33;
                  psVar33 = (string *)(pppplVar55 + 2);
                  pppplVar13 = *(long *****)psVar33;
                } while ((long ****)*pppplVar13 != pppplVar55);
              }
            }
            else {
              do {
                pppplVar13 = pppplVar55;
                pppplVar55 = (long ****)*pppplVar13;
              } while ((long ****)*pppplVar13 != (long ****)0x0);
            }
            if (*(string **)(param_1 + 0x78) == psVar37) {
              *(long *****)(param_1 + 0x78) = pppplVar13;
            }
            *(long *****)(param_1 + 0x88) = (long ****)((long)*(long *****)(param_1 + 0x88) + -1);
            FUN_01336080(psVar52,psVar37);
            if (psVar37 != (string *)0x0) {
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
              if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
              }
              else {
                FUN_00c48fe8(plVar31,psVar37,0,8);
              }
            }
          }
        }
        iVar10 = iVar10 + 1;
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(param_2 + 0x40));
  }
  *(int *)(pppplVar60 + 5) = iVar10;
  FUN_00bae668(*(long *****)(param_1 + 0x68));
  *(string **)(param_1 + 0x60) = param_1 + 0x68;
  *(long *****)(param_1 + 0x68) = (long ****)0x0;
  *(long *****)(param_1 + 0x70) = (long ****)0x0;
  if (0 < *(int *)(pppplVar60 + 3)) {
    lVar48 = 0;
    do {
      FUN_00b8b3b8(param_1,pppplVar60[4][lVar48]);
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(pppplVar60 + 3));
  }
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x50) << 2);
  pppplVar60[8] = ppplVar66;
  if (*(int *)(param_2 + 0x50) < 1) {
    iVar10 = 0;
  }
  else {
    lVar48 = 0;
    iVar10 = 0;
    do {
      iVar11 = *(int *)(*(long *)(param_2 + 0x58) + lVar48 * 4 + 8);
      if ((iVar11 < 0) || (*(int *)(param_2 + 0x30) <= iVar11)) {
        FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                     "Invalid weak dependency index.");
      }
      else {
        *(int *)((long)pppplVar60[8] + (long)iVar10 * 4) = iVar11;
        iVar10 = iVar10 + 1;
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(param_2 + 0x50));
  }
  *(int *)(pppplVar60 + 7) = iVar10;
  *(undefined4 *)(pppplVar60 + 9) = *(undefined4 *)(param_2 + 0x68);
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x68) * 0xa8);
  pppplVar60[10] = ppplVar66;
  if ((0 < *(int *)(param_2 + 0x68)) &&
     (FUN_00b94918(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0,ppplVar66),
     1 < *(int *)(param_2 + 0x68))) {
    lVar48 = 0xa8;
    lVar19 = 2;
    do {
      FUN_00b94918(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar19 * 8),0,
                   (long)pppplVar60[10] + lVar48);
      lVar48 = lVar48 + 0xa8;
      bVar9 = lVar19 < *(int *)(param_2 + 0x68);
      lVar19 = lVar19 + 1;
    } while (bVar9);
  }
  *(undefined4 *)(pppplVar60 + 0xb) = *(undefined4 *)(param_2 + 0x80);
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x80) * 0x38);
  pppplVar60[0xc] = ppplVar66;
  if ((0 < *(int *)(param_2 + 0x80)) &&
     (FUN_00b97bec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + 8),0,ppplVar66),
     1 < *(int *)(param_2 + 0x80))) {
    lVar48 = 0x38;
    lVar19 = 2;
    do {
      FUN_00b97bec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + lVar19 * 8),0,
                   (long)pppplVar60[0xc] + lVar48);
      lVar48 = lVar48 + 0x38;
      bVar9 = lVar19 < *(int *)(param_2 + 0x80);
      lVar19 = lVar19 + 1;
    } while (bVar9);
  }
  *(undefined4 *)(pppplVar60 + 0xd) = *(undefined4 *)(param_2 + 0x98);
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0x98) * 0x30);
  pppplVar60[0xe] = ppplVar66;
  if (0 < *(int *)(param_2 + 0x98)) {
    pplVar36 = (long **)(PTR_DAT_047dabf8 + 0x10);
    lVar48 = 0;
    pplVar40 = (long **)(PTR_DAT_047dac00 + 0x10);
    do {
      lVar19 = *(long *)(*(long *)(param_2 + 0xa0) + lVar48 * 8 + 8);
      ppplVar30 = ppplVar66 + lVar48 * 6;
      pplVar20 = (long **)FUN_00b7a414(*(long *****)(param_1 + 8),(*(long *****)(param_1 + 0x50))[1]
                                      );
      if ((*(byte *)pplVar20 & 1) == 0) {
        if (*(byte *)pplVar20 >> 1 != 0) goto LAB_00b8e560;
      }
      else if (pplVar20[1] != (long *)0x0) {
LAB_00b8e560:
        std::string::append((ulong)pplVar20,'\x01');
      }
      pbVar35 = *(byte **)(lVar19 + 0x18);
      pbVar14 = *(byte **)(pbVar35 + 0x10);
      if ((*pbVar35 & 1) == 0) {
        pbVar14 = pbVar35 + 1;
      }
      std::string::append((char *)pplVar20,(ulong)pbVar14);
      FUN_00b8c44c(param_1,*(undefined8 *)(lVar19 + 0x18),pplVar20,lVar19);
      pplVar21 = (long **)FUN_00b7a414(*(long *****)(param_1 + 8),*(undefined8 *)(lVar19 + 0x18));
      *ppplVar30 = pplVar21;
      ppplVar65 = ppplVar66 + lVar48 * 6 + 1;
      *ppplVar65 = pplVar20;
      ppplVar66[lVar48 * 6 + 2] = (long **)*(long *****)(param_1 + 0x50);
      *(undefined4 *)(ppplVar66 + lVar48 * 6 + 4) = *(undefined4 *)(lVar19 + 0x28);
      pplVar20 = (long **)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(lVar19 + 0x28) * 0x38);
      ppplVar66[lVar48 * 6 + 5] = pplVar20;
      if (0 < *(int *)(lVar19 + 0x28)) {
        lVar57 = 1;
        lVar44 = 0x31;
        while( true ) {
          puVar2 = (undefined1 *)((long)pplVar20 + lVar44);
          lVar53 = *(long *)(*(long *)(lVar19 + 0x30) + lVar57 * 8);
          uVar49 = FUN_00b7a414(*(long *****)(param_1 + 8),*(undefined8 *)(lVar53 + 0x18));
          puVar67 = (undefined8 *)(puVar2 + -0x31);
          *puVar67 = uVar49;
          *(long ****)(puVar2 + -0x21) = ppplVar30;
          pcVar22 = (char *)FUN_00b7a414(*(long *****)(param_1 + 8),*ppplVar65);
          std::string::append((ulong)pcVar22,'\x01');
          pbVar35 = (byte *)*puVar67;
          pbVar14 = *(byte **)(pbVar35 + 0x10);
          if ((*pbVar35 & 1) == 0) {
            pbVar14 = pbVar35 + 1;
          }
          std::string::append(pcVar22,(ulong)pbVar14);
          *(char **)(puVar2 + -0x29) = pcVar22;
          FUN_00b8c44c(param_1,*(undefined8 *)(lVar53 + 0x18),pcVar22,lVar53);
          *(undefined8 *)(puVar2 + -0x11) = 0;
          *(undefined8 *)(puVar2 + -0x19) = 0;
          if ((*(byte *)(lVar53 + 0x10) >> 3 & 1) == 0) {
            *(undefined8 *)(puVar2 + -9) = 0;
          }
          else {
            lVar50 = *(long *)(lVar53 + 0x30);
            if (lVar50 == 0) {
              lVar50 = *(long *)(*(long *)PTR_DAT_047dac80 + 0x30);
            }
            psVar52 = *(string **)(puVar2 + -0x29);
            pppplVar55 = *(long *****)(param_1 + 8);
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            ppplVar41 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,0x58,8);
            ppplVar41[2] = (long **)0x0;
            ppplVar41[3] = (long **)0x0;
            ppplVar41[4] = (long **)0x0;
            ppplVar41[9] = (long **)0x0;
            *(undefined1 *)(ppplVar41 + 10) = 0;
            ppplVar41[5] = (long **)0x0;
            ppplVar41[6] = (long **)0x0;
            *ppplVar41 = pplVar36;
            ppplVar41[1] = (long **)(ppplVar41 + 2);
            ppplVar41[7] = (long **)0x0;
            ppplVar41[8] = (long **)0x0;
            ppplVar16 = pppplVar55[0x16];
            if (ppplVar16 < pppplVar55[0x17]) {
              *ppplVar16 = (long **)ppplVar41;
              pppplVar55[0x16] = ppplVar16 + 1;
            }
            else {
              ppplVar58 = pppplVar55[0x15];
              sVar63 = (long)ppplVar16 - (long)ppplVar58;
              uVar15 = ((long)sVar63 >> 3) + 1;
              if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
              lVar23 = (long)pppplVar55[0x17] - (long)ppplVar58;
              uVar27 = lVar23 >> 2;
              if (uVar15 <= uVar27) {
                uVar15 = uVar27;
              }
              if (0xffffffffffffffe < (ulong)(lVar23 >> 3)) {
                uVar15 = 0x1fffffffffffffff;
              }
              if (uVar15 == 0) {
                ppplVar16 = (long ***)0x0;
              }
              else {
                if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                ppplVar16 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
              }
              ppplVar16[(long)sVar63 >> 3] = (long **)ppplVar41;
              if (0 < (long)sVar63) {
                memcpy(ppplVar16,ppplVar58,sVar63);
              }
              pppplVar55[0x15] = ppplVar16;
              pppplVar55[0x16] = ppplVar16 + ((long)sVar63 >> 3) + 1;
              pppplVar55[0x17] = ppplVar16 + uVar15;
              if (ppplVar58 != (long ***)0x0) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar58,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,ppplVar58,0,8);
                }
              }
            }
            local_e8 = (string *)0x0;
            local_e0 = (string *)0x0;
            local_d8 = (char *)0x0;
            uVar15 = FUN_00c11da8(lVar50,&local_e8);
            if ((uVar15 & 1) == 0) {
              if (((ulong)local_e8 & 1) == 0) {
                local_e8 = (string *)((ulong)local_e8 & 0xffffffffffff0000);
              }
              else {
                *local_d8 = '\0';
                local_e0 = (string *)0x0;
              }
            }
            FUN_00c10f68(ppplVar41,&local_e8);
            pcVar22 = local_d8;
            if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
              if (((uVar15 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
                (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
              }
              else {
                FUN_00c48fe8(plVar31,pcVar22,0,8);
              }
            }
            *(long ****)(puVar2 + -9) = ppplVar41;
            if (0 < *(int *)(ppplVar41 + 8)) {
              std::string::string((string *)&local_e8,psVar52);
              std::string::string((string *)&local_d0,psVar52);
              local_b8 = (undefined4)lVar50;
              uStack_b4 = (undefined4)((ulong)lVar50 >> 0x20);
              uStack_b0 = ppplVar41;
              FUN_00bae78c(param_1 + 0x18,&local_e8);
              if (((local_d0 & 1) != 0) && (lVar50 = CONCAT44(uStack_bc,local_c0), lVar50 != 0)) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar50,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar50,0,8);
                }
              }
              pcVar22 = local_d8;
              if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar50 = FUN_00c4e600(), *(int *)(lVar50 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,pcVar22,0,8);
                }
              }
            }
          }
          puVar2[-1] = *(undefined1 *)(lVar53 + 0x38);
          *puVar2 = *(undefined1 *)(lVar53 + 0x39);
          FUN_00b9a504(param_1,*(undefined8 *)(puVar2 + -0x29),ppplVar30,
                       *(undefined8 *)(puVar2 + -0x31),lVar53,7,puVar67);
          if (*(int *)(lVar19 + 0x28) <= lVar57) break;
          lVar57 = lVar57 + 1;
          lVar44 = lVar44 + 0x38;
          pplVar20 = ppplVar66[lVar48 * 6 + 5];
        }
      }
      if ((*(byte *)(lVar19 + 0x10) >> 2 & 1) == 0) {
        ppplVar66[lVar48 * 6 + 3] = (long **)0x0;
      }
      else {
        lVar57 = *(long *)(lVar19 + 0x38);
        if (lVar57 == 0) {
          lVar57 = *(long *)(*(long *)PTR_DAT_047dac88 + 0x38);
        }
        psVar52 = (string *)*ppplVar65;
        pppplVar55 = *(long *****)(param_1 + 8);
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        ppplVar41 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,0x58,8);
        ppplVar41[2] = (long **)0x0;
        ppplVar41[3] = (long **)0x0;
        ppplVar41[4] = (long **)0x0;
        ppplVar41[9] = (long **)0x0;
        *(undefined1 *)(ppplVar41 + 10) = 0;
        ppplVar41[5] = (long **)0x0;
        ppplVar41[6] = (long **)0x0;
        *ppplVar41 = pplVar40;
        ppplVar41[1] = (long **)(ppplVar41 + 2);
        ppplVar41[7] = (long **)0x0;
        ppplVar41[8] = (long **)0x0;
        ppplVar16 = pppplVar55[0x16];
        if (ppplVar16 < pppplVar55[0x17]) {
          *ppplVar16 = (long **)ppplVar41;
          pppplVar55[0x16] = ppplVar16 + 1;
        }
        else {
          ppplVar58 = pppplVar55[0x15];
          sVar63 = (long)ppplVar16 - (long)ppplVar58;
          uVar15 = ((long)sVar63 >> 3) + 1;
          if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
          lVar44 = (long)pppplVar55[0x17] - (long)ppplVar58;
          uVar27 = lVar44 >> 2;
          if (uVar15 <= uVar27) {
            uVar15 = uVar27;
          }
          if (0xffffffffffffffe < (ulong)(lVar44 >> 3)) {
            uVar15 = 0x1fffffffffffffff;
          }
          if (uVar15 == 0) {
            ppplVar16 = (long ***)0x0;
          }
          else {
            if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            ppplVar16 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
          }
          ppplVar16[(long)sVar63 >> 3] = (long **)ppplVar41;
          if (0 < (long)sVar63) {
            memcpy(ppplVar16,ppplVar58,sVar63);
          }
          pppplVar55[0x15] = ppplVar16;
          pppplVar55[0x16] = ppplVar16 + ((long)sVar63 >> 3) + 1;
          pppplVar55[0x17] = ppplVar16 + uVar15;
          if (ppplVar58 != (long ***)0x0) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar58,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,ppplVar58,0,8);
            }
          }
        }
        local_e8 = (string *)0x0;
        local_e0 = (string *)0x0;
        local_d8 = (char *)0x0;
        uVar15 = FUN_00c11da8(lVar57,&local_e8);
        if ((uVar15 & 1) == 0) {
          if (((ulong)local_e8 & 1) == 0) {
            local_e8 = (string *)((ulong)local_e8 & 0xffffffffffff0000);
          }
          else {
            *local_d8 = '\0';
            local_e0 = (string *)0x0;
          }
        }
        FUN_00c10f68(ppplVar41,&local_e8);
        pcVar22 = local_d8;
        if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,pcVar22,0,8);
          }
        }
        ppplVar66[lVar48 * 6 + 3] = (long **)ppplVar41;
        if (0 < *(int *)(ppplVar41 + 8)) {
          std::string::string((string *)&local_e8,psVar52);
          std::string::string((string *)&local_d0,psVar52);
          local_b8 = (undefined4)lVar57;
          uStack_b4 = (undefined4)((ulong)lVar57 >> 0x20);
          uStack_b0 = ppplVar41;
          FUN_00bae78c(param_1 + 0x18,&local_e8);
          if (((local_d0 & 1) != 0) && (lVar57 = CONCAT44(uStack_bc,local_c0), lVar57 != 0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,lVar57,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,lVar57,0,8);
            }
          }
          pcVar22 = local_d8;
          if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar57 = FUN_00c4e600(), *(int *)(lVar57 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pcVar22,0,8);
            }
          }
        }
      }
      FUN_00b9a504(param_1,*ppplVar65,0,*ppplVar30,lVar19,6,ppplVar30);
      lVar48 = lVar48 + 1;
      if (*(int *)(param_2 + 0x98) <= lVar48) break;
      ppplVar66 = pppplVar60[0xe];
    } while( true );
  }
  *(undefined4 *)(pppplVar60 + 0xf) = *(undefined4 *)(param_2 + 0xb0);
  ppplVar66 = (long ***)FUN_00b7a704(*(long *****)(param_1 + 8),*(int *)(param_2 + 0xb0) * 0x90);
  pppplVar60[0x11] = ppplVar66;
  if ((0 < *(int *)(param_2 + 0xb0)) &&
     (FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + 8),0,ppplVar66,1),
     1 < *(int *)(param_2 + 0xb0))) {
    lVar48 = 0x90;
    lVar19 = 2;
    do {
      FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar19 * 8),0,
                   (long)pppplVar60[0x11] + lVar48,1);
      lVar48 = lVar48 + 0x90;
      bVar9 = lVar19 < *(int *)(param_2 + 0xb0);
      lVar19 = lVar19 + 1;
    } while (bVar9);
  }
  if ((*(byte *)(param_2 + 0x11) >> 1 & 1) == 0) {
    pppplVar60[0x12] = (long ***)0x0;
  }
  else {
    lVar48 = *(long *)(param_2 + 0xc0);
    if (lVar48 == 0) {
      lVar48 = *(long *)(*(long *)PTR_DAT_047dac78 + 0xc0);
    }
    ppplVar66 = pppplVar60[1];
    local_228 = (string *)0x0;
    local_220 = (char *)0x0;
    local_230 = (string *)0x0;
    if ((*(byte *)ppplVar66 & 1) == 0) {
      psVar52 = (string *)(ulong)(*(byte *)ppplVar66 >> 1);
      pplVar36 = (long **)((long)ppplVar66 + 1);
    }
    else {
      psVar52 = (string *)ppplVar66[1];
      pplVar36 = ppplVar66[2];
    }
    if ((string *)0xffffffffffffffef < psVar52 + 6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (psVar52 + 6 < (string *)0x17) {
      local_230 = (string *)(ulong)(byte)((int)psVar52 << 1);
      pcVar22 = (char *)((ulong)&local_230 | 1);
      if (psVar52 != (string *)0x0) goto LAB_00b8f5d8;
    }
    else {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      pcVar22 = (char *)(**(code **)(*plVar31 + 0x10))
                                  (plVar31,(ulong)(psVar52 + 0x16) & 0xfffffffffffffff0,8);
      local_230 = (string *)((ulong)(psVar52 + 0x16) & 0xfffffffffffffff0 | 1);
      local_228 = psVar52;
      local_220 = pcVar22;
LAB_00b8f5d8:
      memcpy(pcVar22,pplVar36,(size_t)psVar52);
    }
    pcVar22[(long)psVar52] = '\0';
    std::string::append((char *)&local_230,0x3c1efcc);
    psVar52 = (string *)*pppplVar60;
    pppplVar55 = *(long *****)(param_1 + 8);
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    ppplVar30 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,0x88,8);
    FUN_00bcf2c4();
    ppplVar66 = pppplVar55[0x16];
    if (ppplVar66 < pppplVar55[0x17]) {
      *ppplVar66 = (long **)ppplVar30;
      pppplVar55[0x16] = ppplVar66 + 1;
    }
    else {
      ppplVar65 = pppplVar55[0x15];
      sVar63 = (long)ppplVar66 - (long)ppplVar65;
      uVar15 = ((long)sVar63 >> 3) + 1;
      if (uVar15 >> 0x3d != 0) goto LAB_00b9410c;
      lVar19 = (long)pppplVar55[0x17] - (long)ppplVar65;
      uVar27 = lVar19 >> 2;
      if (uVar15 <= uVar27) {
        uVar15 = uVar27;
      }
      if (0xffffffffffffffe < (ulong)(lVar19 >> 3)) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        ppplVar66 = (long ***)0x0;
      }
      else {
        if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        ppplVar66 = (long ***)(**(code **)(*plVar31 + 0x10))(plVar31,uVar15 << 3,8);
      }
      ppplVar66[(long)sVar63 >> 3] = (long **)ppplVar30;
      if (0 < (long)sVar63) {
        memcpy(ppplVar66,ppplVar65,sVar63);
      }
      pppplVar55[0x15] = ppplVar66;
      pppplVar55[0x16] = ppplVar66 + ((long)sVar63 >> 3) + 1;
      pppplVar55[0x17] = ppplVar66 + uVar15;
      if (ppplVar65 != (long ***)0x0) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,ppplVar65,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,ppplVar65,0,8);
        }
      }
    }
    local_e8 = (string *)0x0;
    local_e0 = (string *)0x0;
    local_d8 = (char *)0x0;
    uVar15 = FUN_00c11da8(lVar48,&local_e8);
    if ((uVar15 & 1) == 0) {
      if (((ulong)local_e8 & 1) == 0) {
        local_e8 = (string *)((ulong)local_e8 & 0xffffffffffff0000);
      }
      else {
        *local_d8 = '\0';
        local_e0 = (string *)0x0;
      }
    }
    FUN_00c10f68(ppplVar30,&local_e8);
    pcVar22 = local_d8;
    if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    pppplVar60[0x12] = ppplVar30;
    if (0 < *(int *)(ppplVar30 + 0xe)) {
      std::string::string((string *)&local_e8,(string *)&local_230);
      std::string::string((string *)&local_d0,psVar52);
      local_b8 = (undefined4)lVar48;
      uStack_b4 = (undefined4)((ulong)lVar48 >> 0x20);
      uStack_b0 = ppplVar30;
      FUN_00bae78c(param_1 + 0x18,&local_e8);
      if (((local_d0 & 1) != 0) && (lVar48 = CONCAT44(uStack_bc,local_c0), lVar48 != 0)) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,lVar48,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,lVar48,0,8);
        }
      }
      pcVar22 = local_d8;
      if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
        plVar31 = *(long **)(lVar3 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
        }
        else {
          FUN_00c48fe8(plVar31,pcVar22,0,8);
        }
      }
    }
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    if (pppplVar60[0x12] != (long ***)0x0) goto LAB_00b8f83c;
  }
  puVar1 = PTR_DAT_047dac18;
  ppplVar66 = *(long ****)PTR_DAT_047dac18;
  if (ppplVar66 == (long ***)0x0) {
    FUN_00bb5d70();
    ppplVar66 = *(long ****)puVar1;
  }
  pppplVar60[0x12] = ppplVar66;
LAB_00b8f83c:
  if (0 < *(int *)(pppplVar60 + 9)) {
    lVar19 = 0;
    lVar48 = 0;
    do {
      FUN_00b9d258(param_1,(long)pppplVar60[10] + lVar19,
                   *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar48 * 8 + 8));
      lVar48 = lVar48 + 1;
      lVar19 = lVar19 + 0xa8;
    } while (lVar48 < *(int *)(pppplVar60 + 9));
  }
  if (0 < *(int *)(pppplVar60 + 0xf)) {
    lVar19 = 0;
    lVar48 = 0;
    do {
      FUN_00b9def4(param_1,(long)pppplVar60[0x11] + lVar19,
                   *(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar48 * 8 + 8));
      lVar48 = lVar48 + 1;
      lVar19 = lVar19 + 0x90;
    } while (lVar48 < *(int *)(pppplVar60 + 0xf));
  }
  puVar7 = PTR_DAT_047dac48;
  puVar1 = PTR_DAT_047dabe8;
  if (0 < *(int *)(pppplVar60 + 0xb)) {
    lVar48 = 0;
    do {
      ppplVar66 = pppplVar60[0xc];
      if (ppplVar66[lVar48 * 7 + 4] == (long **)0x0) {
        pplVar36 = *(long ***)puVar7;
        if (pplVar36 == (long **)0x0) {
          FUN_00bb5d70();
          pplVar36 = *(long ***)puVar7;
        }
        ppplVar66[lVar48 * 7 + 4] = pplVar36;
      }
      piVar62 = (int *)((long)ppplVar66 + lVar48 * 0x38 + 0x2c);
      iVar10 = *piVar62;
      if (0 < iVar10) {
        lVar19 = 0;
        lVar57 = 0x20;
        do {
          pplVar36 = ppplVar66[lVar48 * 7 + 6];
          if (*(long *)((long)pplVar36 + lVar57) == 0) {
            lVar44 = *(long *)puVar1;
            if (lVar44 == 0) {
              FUN_00bb5d70();
              lVar44 = *(long *)puVar1;
            }
            *(long *)((long)pplVar36 + lVar57) = lVar44;
            iVar10 = *piVar62;
          }
          lVar19 = lVar19 + 1;
          lVar57 = lVar57 + 0x28;
        } while (lVar19 < iVar10);
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(pppplVar60 + 0xb));
  }
  puVar1 = PTR_DAT_047dac10;
  if (0 < *(int *)(pppplVar60 + 0xd)) {
    lVar48 = 0;
    do {
      ppplVar66 = pppplVar60[0xe];
      lVar19 = *(long *)(*(long *)(param_2 + 0xa0) + lVar48 * 8 + 8);
      if (ppplVar66[lVar48 * 6 + 3] == (long **)0x0) {
        pplVar36 = *(long ***)puVar1;
        if (pplVar36 == (long **)0x0) {
          FUN_00bb5d70();
          pplVar36 = *(long ***)puVar1;
        }
        ppplVar66[lVar48 * 6 + 3] = pplVar36;
      }
      if (0 < *(int *)(ppplVar66 + lVar48 * 6 + 4)) {
        lVar44 = 0;
        lVar57 = 0;
        do {
          FUN_00ba14c0(param_1,(long)ppplVar66[lVar48 * 6 + 5] + lVar44,
                       *(undefined8 *)(*(long *)(lVar19 + 0x30) + lVar57 * 8 + 8));
          lVar57 = lVar57 + 1;
          lVar44 = lVar44 + 0x38;
        } while (lVar57 < *(int *)(ppplVar66 + lVar48 * 6 + 4));
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)(pppplVar60 + 0xd));
  }
  if (param_1[0x30] == (string)0x0) {
    local_230 = param_1;
    FUN_00c32f7c(auStack_218);
    if (local_230 == (string *)0x0) {
      local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
      local_c0 = 0;
      uStack_bc = 0;
      local_d8 = (char *)CONCAT44(local_d8._4_4_,0x15a4);
      local_e0 = (string *)0x3c35325;
      local_d0 = 0;
      local_c8 = 0;
      std::string::append((char *)&local_d0);
      FUN_00bb0e90(&local_e8);
      FUN_00bb0d74(&local_e8);
    }
    uVar4 = s_uninterpreted_option_03be1643._8_8_;
    uVar49 = s_uninterpreted_option_03be1643._0_8_;
    psVar52 = *(string **)(param_1 + 0x18);
    if (psVar52 != *(string **)(param_1 + 0x20)) {
      pcVar22 = (char *)((ulong)&local_e8 | 1);
      puVar1 = PTR_DAT_047dac90 + 0x10;
      do {
        pppplVar55 = *(long *****)(psVar52 + 0x30);
        pppplVar13 = *(long *****)(psVar52 + 0x38);
        local_228 = psVar52;
        lVar48 = (*(code *)(*pppplVar13)[0x17])(pppplVar13);
        local_e8 = (string *)CONCAT71(local_e8._1_7_,0x28);
        *(undefined8 *)pcVar22 = uVar49;
        *(undefined8 *)(pcVar22 + 8) = uVar4;
        pcVar22[0x10] = 't';
        pcVar22[0x11] = 'i';
        pcVar22[0x12] = 'o';
        pcVar22[0x13] = 'n';
        local_d8._0_6_ = (uint6)(uint5)local_d8;
        iVar10 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar48 + 0x10) + 0x98),lVar48,&local_e8,2);
        if (((iVar10 == 0) || (*(char *)(extraout_x1 + 0x44) != '\0')) ||
           (lVar48 = extraout_x1, extraout_x1 == 0)) {
          local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
          local_e0 = (string *)0x3c35325;
          local_d8 = (char *)CONCAT44(local_d8._4_4_,0x15b8);
          local_c8 = 0;
          local_c0 = 0;
          uStack_bc = 0;
          local_d0 = 0;
          std::string::append((char *)&local_d0);
          std::string::append((char *)&local_d0);
          FUN_00bb0e90(&local_e8);
          FUN_00bb0d74(&local_e8);
          lVar48 = 0;
        }
        plVar31 = (long *)(*(code *)(*pppplVar13)[0x16])(pppplVar13);
        (**(code **)(*plVar31 + 0x38))(plVar31,pppplVar13,lVar48);
        lVar48 = (*(code *)(*pppplVar55)[0x17])();
        local_e8 = (string *)CONCAT71(local_e8._1_7_,0x28);
        *(undefined8 *)pcVar22 = uVar49;
        *(undefined8 *)(pcVar22 + 8) = uVar4;
        pcVar22[0x10] = 't';
        pcVar22[0x11] = 'i';
        pcVar22[0x12] = 'o';
        pcVar22[0x13] = 'n';
        local_d8._0_6_ = (uint6)(uint5)local_d8;
        iVar10 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar48 + 0x10) + 0x98),lVar48,&local_e8,2);
        if (((iVar10 == 0) || (*(char *)(extraout_x1_00 + 0x44) != '\0')) ||
           (lVar48 = extraout_x1_00, extraout_x1_00 == 0)) {
          local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
          local_e0 = (string *)0x3c35325;
          local_d8 = (char *)CONCAT44(local_d8._4_4_,0x15c0);
          local_c8 = 0;
          local_c0 = 0;
          uStack_bc = 0;
          local_d0 = 0;
          std::string::append((char *)&local_d0);
          std::string::append((char *)&local_d0);
          FUN_00bb0e90(&local_e8);
          FUN_00bb0d74(&local_e8);
          lVar48 = 0;
        }
        plVar31 = (long *)(*(code *)(*pppplVar55)[0x16])(pppplVar55);
        iVar10 = (**(code **)(*plVar31 + 0x30))(plVar31,pppplVar55,lVar48);
        if (0 < iVar10) {
          iVar11 = 0;
          do {
            plVar31 = (long *)(*(code *)(*pppplVar55)[0x16])(pppplVar55);
            pcVar24 = (char *)(**(code **)(*plVar31 + 0x1a0))(plVar31,pppplVar55,lVar48,iVar11);
            local_220 = pcVar24;
            if (*(int *)(pcVar24 + 0x20) == 0) {
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              local_d8 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
              uVar6 = s_Option_must_have_a_name__03c9e377._16_8_;
              uVar45 = s_Option_must_have_a_name__03c9e377._8_8_;
              local_e8 = (string *)&DAT_00000021;
              local_e0 = (string *)&DAT_00000018;
              *(undefined8 *)local_d8 = s_Option_must_have_a_name__03c9e377._0_8_;
              *(undefined8 *)(local_d8 + 8) = uVar45;
              *(undefined8 *)(local_d8 + 0x10) = uVar6;
              local_d8[0x18] = '\0';
LAB_00b91cdc:
              FUN_00b89f94(local_230,local_228 + 0x18,pcVar24,7,&local_e8);
              pcVar24 = local_d8;
              if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,pcVar24,0,8);
                }
              }
LAB_00b91cec:
              local_228 = (string *)0x0;
              local_220 = (char *)0x0;
              goto LAB_00b91cf8;
            }
            pbVar14 = *(byte **)(*(long *)(*(long *)(pcVar24 + 0x28) + 8) + 0x18);
            uVar15 = (ulong)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar15 = *(ulong *)(pbVar14 + 8);
            }
            if ((uVar15 == 0x14) &&
               (iVar12 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,0x3be1643)
               , iVar12 == 0)) {
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              pcVar24 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x40,8);
              local_e8 = (string *)&DAT_00000041;
              local_e0 = (string *)0x39;
              local_d8 = pcVar24;
              memcpy(pcVar24,"Option must not use reserved name \"uninterpreted_option\".",0x39);
              pcVar24[0x39] = '\0';
              pcVar24 = local_220;
              goto LAB_00b91cdc;
            }
            psVar37 = local_230;
            lVar19 = (*(code *)(*pppplVar13)[0x17])(pppplVar13);
            iVar12 = FUN_00bab644(psVar37,*(long *****)psVar37,*(undefined8 *)(lVar19 + 8));
            puVar67 = extraout_x1_01;
            if (iVar12 != 1) {
              puVar67 = (undefined8 *)(*(code *)(*pppplVar13)[0x17])(pppplVar13);
            }
            if (puVar67 == (undefined8 *)0x0) {
              local_e8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
              local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
              local_e0 = (string *)0x3c35325;
              local_d8._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
              local_d8 = (char *)CONCAT44(local_d8._4_4_,0x160f);
              local_c8 = 0;
              local_c0 = 0;
              uStack_bc = 0;
              local_d0 = 0;
              std::string::append((char *)&local_d0);
              FUN_00bb0e90(&local_e8);
              FUN_00bb0d74(&local_e8);
            }
            local_f8 = (long *)0x0;
            local_f0 = (long *)0x0;
            local_100 = (long *)0x0;
            local_118[0] = 0;
            if (0 < *(int *)(local_220 + 0x20)) {
              uVar38 = 0;
              lVar19 = 1;
              lVar57 = 0;
              do {
                lVar44 = *(long *)(*(long *)(local_220 + 0x28) + lVar19 * 8);
                uVar15 = (ulong)(uVar38 >> 1);
                if ((uVar38 & 1) != 0) {
                  uVar15 = local_110;
                }
                psVar37 = *(string **)(lVar44 + 0x18);
                if (uVar15 != 0) {
                  std::string::append((char *)local_118);
                  lVar44 = *(long *)(*(long *)(local_220 + 0x28) + lVar19 * 8);
                }
                if (*(char *)(lVar44 + 0x20) == '\0') {
                  psVar33 = *(string **)(psVar37 + 0x10);
                  if (((byte)*psVar37 & 1) == 0) {
                    psVar33 = psVar37 + 1;
                  }
                  std::string::append((char *)local_118,(ulong)psVar33);
                  iVar12 = FUN_00b7cb3c(*(undefined8 *)(puVar67[2] + 0x98),puVar67,psVar37,2);
                  if (iVar12 != 0) {
                    lVar44 = extraout_x1_03;
                    if (*(char *)(extraout_x1_03 + 0x44) != '\0') {
                      lVar44 = 0;
                    }
                    if (lVar44 != 0) goto LAB_00b8ff88;
                  }
LAB_00b903b8:
                  if (*(char *)((long)*(long *****)local_230 + 0x29) != '\0') {
LAB_00b90560:
                    FUN_00ba3d10(local_220,pppplVar13);
                    bVar9 = true;
                    goto LAB_00b90c14;
                  }
                  if (((byte)local_230[0xb0] & 1) == 0) {
                    if ((byte)local_230[0xb0] >> 1 != 0) goto LAB_00b903dc;
                  }
                  else if (*(long *****)(local_230 + 0xb8) != (long ****)0x0) {
LAB_00b903dc:
                    std::operator+("Option \"",(string *)local_118);
                    puVar18 = (ulong *)std::string::append((char *)local_178);
                    uStack_158 = puVar18[1];
                    local_150 = puVar18[2];
                    local_160 = *puVar18;
                    puVar18[1] = 0;
                    puVar18[2] = 0;
                    *puVar18 = 0;
                    psVar37 = local_230 + 0xb1;
                    if (((byte)local_230[0xb0] & 1) != 0) {
                      psVar37 = *(string **)(local_230 + 0xc0);
                    }
                    puVar18 = (ulong *)std::string::append((char *)&local_160,(ulong)psVar37);
                    uStack_140 = puVar18[1];
                    local_138 = (string *)puVar18[2];
                    local_148 = *puVar18;
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    puVar18[2] = 0;
                    puVar67 = (undefined8 *)std::string::append((char *)&local_148);
                    uStack_128 = puVar67[1];
                    local_120 = puVar67[2];
                    local_130 = (undefined *)*puVar67;
                    puVar67[1] = 0;
                    puVar67[2] = 0;
                    *puVar67 = 0;
                    std::string::string(local_190,(string *)local_118,1,0xffffffffffffffff,
                                        (allocator *)local_118);
                    uVar15 = (ulong)local_190 | 1;
                    if (((byte)local_190[0] & 1) != 0) {
                      uVar15 = local_180;
                    }
                    puVar67 = (undefined8 *)std::string::append((char *)&local_130,uVar15);
                    local_1b0 = (string *)puVar67[2];
                    uVar45 = *puVar67;
                    local_1c0 = (uint)uVar45;
                    uStack_1bc = (undefined2)((ulong)uVar45 >> 0x20);
                    uStack_1ba = (undefined2)((ulong)uVar45 >> 0x30);
                    local_1b8 = (undefined6)puVar67[1];
                    uStack_1b2 = (undefined2)((ulong)puVar67[1] >> 0x30);
                    *puVar67 = 0;
                    puVar67[1] = 0;
                    puVar67[2] = 0;
                    puVar67 = (undefined8 *)std::string::append((char *)&local_1c0);
                    local_e0 = (string *)puVar67[1];
                    local_d8 = (char *)puVar67[2];
                    local_e8 = (string *)*puVar67;
                    puVar67[1] = 0;
                    puVar67[2] = 0;
                    *puVar67 = 0;
                    FUN_00b89f94(local_230,local_228 + 0x18,local_220,7,&local_e8);
                    pcVar24 = local_d8;
                    if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar15 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,pcVar24,0,8);
                      }
                    }
                    psVar37 = local_1b0;
                    if (((local_1c0 & 1) != 0) && (local_1b0 != (string *)0x0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar15 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,psVar37,0,8);
                      }
                    }
                    uVar15 = local_180;
                    if ((((byte)local_190[0] & 1) != 0) && (local_180 != 0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar27 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,uVar15,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,uVar15,0,8);
                      }
                    }
                    lVar19 = local_120;
                    if ((((ulong)local_130 & 1) != 0) && (local_120 != 0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar15 & 1) == 0) ||
                         (lVar57 = FUN_00c4e600(), *(int *)(lVar57 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,lVar19,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,lVar19,0,8);
                      }
                    }
                    psVar37 = local_138;
                    if (((local_148 & 1) != 0) && (local_138 != (string *)0x0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar15 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,psVar37,0,8);
                      }
                    }
                    uVar15 = local_150;
                    if (((local_160 & 1) != 0) && (local_150 != 0)) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar27 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,uVar15,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,uVar15,0,8);
                      }
                    }
                    psVar37 = local_168;
                    if ((local_178[0] & 1) != 0) goto joined_r0x00b90550;
                    goto LAB_00b90c10;
                  }
                  std::operator+("Option \"",(string *)local_118);
                  puVar67 = (undefined8 *)std::string::append((char *)&local_1c0);
                  local_e0 = (string *)puVar67[1];
                  local_d8 = (char *)puVar67[2];
                  local_e8 = (string *)*puVar67;
                  puVar67[1] = 0;
                  puVar67[2] = 0;
                  *puVar67 = 0;
                  FUN_00b89f94(local_230,local_228 + 0x18,local_220,7,&local_e8);
                  pcVar24 = local_d8;
joined_r0x00b90cec:
                  local_d8 = pcVar24;
                  if ((((ulong)local_e8 & 1) != 0) && (pcVar24 != (char *)0x0)) {
                    plVar31 = *(long **)(lVar3 + 0x30);
                    if (plVar31 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar31 = DAT_04859430;
                      *(long **)(lVar3 + 0x30) = DAT_04859430;
                    }
                    uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                    if (((uVar15 & 1) == 0) ||
                       (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                      (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
                    }
                    else {
                      FUN_00c48fe8(plVar31,pcVar24,0,8);
                    }
                  }
                  psVar37 = local_1b0;
                  if ((local_1c0 & 1) != 0) {
joined_r0x00b90550:
                    if (psVar37 != (string *)0x0) {
                      plVar31 = *(long **)(lVar3 + 0x30);
                      if (plVar31 == (long *)0x0) {
                        if (((DAT_04859438 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                          DAT_04859430 = DAT_04859418;
                          __cxa_guard_release(&DAT_04859438);
                        }
                        plVar31 = DAT_04859430;
                        *(long **)(lVar3 + 0x30) = DAT_04859430;
                      }
                      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                      if (((uVar15 & 1) == 0) ||
                         (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                        (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
                      }
                      else {
                        FUN_00c48fe8(plVar31,psVar37,0,8);
                      }
                    }
                  }
                  goto LAB_00b90c10;
                }
                std::operator+("(",psVar37);
                puVar25 = (undefined8 *)std::string::append((char *)&local_1c0);
                local_e0 = (string *)puVar25[1];
                local_d8 = (char *)puVar25[2];
                local_e8 = (string *)*puVar25;
                puVar25[1] = 0;
                puVar25[2] = 0;
                *puVar25 = 0;
                pcVar24 = pcVar22;
                if (((ulong)local_e8 & 1) != 0) {
                  pcVar24 = local_d8;
                }
                std::string::append((char *)local_118,(ulong)pcVar24);
                pcVar24 = local_d8;
                if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                  plVar31 = *(long **)(lVar3 + 0x30);
                  if (plVar31 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar31 = DAT_04859430;
                    *(long **)(lVar3 + 0x30) = DAT_04859430;
                  }
                  uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                  if (((uVar15 & 1) == 0) ||
                     (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
                    (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar31,pcVar24,0,8);
                  }
                }
                psVar33 = local_1b0;
                if (((local_1c0 & 1) != 0) && (local_1b0 != (string *)0x0)) {
                  plVar31 = *(long **)(lVar3 + 0x30);
                  if (plVar31 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar31 = DAT_04859430;
                    *(long **)(lVar3 + 0x30) = DAT_04859430;
                  }
                  uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                  if (((uVar15 & 1) == 0) ||
                     (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
                    (**(code **)(*plVar31 + 0x18))(plVar31,psVar33,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar31,psVar33,0,8);
                  }
                }
                iVar12 = FUN_00b9fce0(local_230,psVar37,local_228,0,0);
                lVar44 = extraout_x1_02;
                if (iVar12 != 2) {
                  lVar44 = lVar57;
                }
                if (lVar44 == 0) goto LAB_00b903b8;
LAB_00b8ff88:
                plVar31 = local_100;
                if (*(undefined8 **)(lVar44 + 0x50) != puVar67) {
                  if (*(char *)(*(undefined8 **)(lVar44 + 0x50) + 5) != '\0') goto LAB_00b90560;
                  std::operator+("Option field \"",(string *)local_118);
                  puVar25 = (undefined8 *)std::string::append((char *)&local_148);
                  uStack_128 = puVar25[1];
                  local_120 = puVar25[2];
                  local_130 = (undefined *)*puVar25;
                  puVar25[1] = 0;
                  puVar25[2] = 0;
                  *puVar25 = 0;
                  pbVar35 = (byte *)*puVar67;
                  pbVar14 = *(byte **)(pbVar35 + 0x10);
                  if ((*pbVar35 & 1) == 0) {
                    pbVar14 = pbVar35 + 1;
                  }
                  puVar67 = (undefined8 *)std::string::append((char *)&local_130,(ulong)pbVar14);
                  local_1b0 = (string *)puVar67[2];
                  uVar45 = *puVar67;
                  local_1c0 = (uint)uVar45;
                  uStack_1bc = (undefined2)((ulong)uVar45 >> 0x20);
                  uStack_1ba = (undefined2)((ulong)uVar45 >> 0x30);
                  local_1b8 = (undefined6)puVar67[1];
                  uStack_1b2 = (undefined2)((ulong)puVar67[1] >> 0x30);
                  *puVar67 = 0;
                  puVar67[1] = 0;
                  puVar67[2] = 0;
                  puVar67 = (undefined8 *)std::string::append((char *)&local_1c0);
                  local_e0 = (string *)puVar67[1];
                  local_d8 = (char *)puVar67[2];
                  local_e8 = (string *)*puVar67;
                  puVar67[1] = 0;
                  puVar67[2] = 0;
                  *puVar67 = 0;
                  FUN_00b89f94(local_230,local_228 + 0x18,local_220,7,&local_e8);
                  pcVar24 = local_d8;
                  if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                    plVar31 = *(long **)(lVar3 + 0x30);
                    if (plVar31 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar31 = DAT_04859430;
                      *(long **)(lVar3 + 0x30) = DAT_04859430;
                    }
                    uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                    if (((uVar15 & 1) == 0) ||
                       (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                      (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
                    }
                    else {
                      FUN_00c48fe8(plVar31,pcVar24,0,8);
                    }
                  }
                  psVar37 = local_1b0;
                  if (((local_1c0 & 1) != 0) && (local_1b0 != (string *)0x0)) {
                    plVar31 = *(long **)(lVar3 + 0x30);
                    if (plVar31 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar31 = DAT_04859430;
                      *(long **)(lVar3 + 0x30) = DAT_04859430;
                    }
                    uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                    if (((uVar15 & 1) == 0) ||
                       (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                      (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
                    }
                    else {
                      FUN_00c48fe8(plVar31,psVar37,0,8);
                    }
                  }
                  lVar19 = local_120;
                  if ((((ulong)local_130 & 1) != 0) && (local_120 != 0)) {
                    plVar31 = *(long **)(lVar3 + 0x30);
                    if (plVar31 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar31 = DAT_04859430;
                      *(long **)(lVar3 + 0x30) = DAT_04859430;
                    }
                    uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                    if (((uVar15 & 1) == 0) ||
                       (lVar57 = FUN_00c4e600(), *(int *)(lVar57 + 0x12c8) < 1)) {
                      (**(code **)(*plVar31 + 0x18))(plVar31,lVar19,0,8);
                    }
                    else {
                      FUN_00c48fe8(plVar31,lVar19,0,8);
                    }
                  }
                  psVar37 = local_138;
                  if ((local_148 & 1) != 0) goto joined_r0x00b90550;
                  goto LAB_00b90c10;
                }
                iVar12 = *(int *)(local_220 + 0x20);
                if (lVar19 + -1 < (long)iVar12 + -1) {
                  if ((*(uint *)(lVar44 + 0x3c) & 0xfffffffe) == 10) {
                    if (*(int *)(lVar44 + 0x40) != 3) {
                      if (local_f8 == local_f0) {
                        sVar63 = (long)local_f8 - (long)local_100;
                        uVar15 = ((long)sVar63 >> 3) + 1;
                        if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        uVar27 = (long)local_f0 - (long)local_100 >> 2;
                        if (uVar15 <= uVar27) {
                          uVar15 = uVar27;
                        }
                        if (0xffffffffffffffe < (ulong)((long)local_f0 - (long)local_100 >> 3)) {
                          uVar15 = 0x1fffffffffffffff;
                        }
                        if (uVar15 == 0) {
                          plVar51 = (long *)0x0;
                        }
                        else {
                          if (uVar15 >> 0x3d != 0) goto LAB_00b94108;
                          plVar51 = *(long **)(lVar3 + 0x30);
                          if (plVar51 == (long *)0x0) {
                            if (((DAT_04859438 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                              DAT_04859430 = DAT_04859418;
                              __cxa_guard_release(&DAT_04859438);
                            }
                            plVar51 = DAT_04859430;
                            *(long **)(lVar3 + 0x30) = DAT_04859430;
                          }
                          plVar51 = (long *)(**(code **)(*plVar51 + 0x10))(plVar51,uVar15 << 3,8);
                        }
                        plVar26 = plVar51 + uVar15;
                        plVar59 = plVar51 + ((long)sVar63 >> 3) + 1;
                        plVar51[(long)sVar63 >> 3] = lVar44;
                        if (0 < (long)sVar63) {
                          memcpy(plVar51,plVar31,sVar63);
                        }
                        local_100 = plVar51;
                        local_f8 = plVar59;
                        local_f0 = plVar26;
                        if (plVar31 != (long *)0x0) {
                          plVar51 = *(long **)(lVar3 + 0x30);
                          if (plVar51 == (long *)0x0) {
                            if (((DAT_04859438 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                              DAT_04859430 = DAT_04859418;
                              __cxa_guard_release(&DAT_04859438);
                            }
                            plVar51 = DAT_04859430;
                            *(long **)(lVar3 + 0x30) = DAT_04859430;
                          }
                          uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
                          if (((uVar15 & 1) == 0) ||
                             (lVar57 = FUN_00c4e600(), *(int *)(lVar57 + 0x12c8) < 1)) {
                            (**(code **)(*plVar51 + 0x18))(plVar51,plVar31,0,8);
                          }
                          else {
                            FUN_00c48fe8(plVar51,plVar31,0,8);
                          }
                        }
                      }
                      else {
                        *local_f8 = lVar44;
                        local_f8 = local_f8 + 1;
                      }
                      puVar67 = *(undefined8 **)(lVar44 + 0x68);
                      iVar12 = *(int *)(local_220 + 0x20);
                      goto LAB_00b900f0;
                    }
                    std::operator+("Option field \"",(string *)local_118);
                  }
                  else {
                    std::operator+("Option \"",(string *)local_118);
                  }
                  puVar67 = (undefined8 *)std::string::append((char *)&local_1c0);
                  local_e0 = (string *)puVar67[1];
                  local_d8 = (char *)puVar67[2];
                  local_e8 = (string *)*puVar67;
                  puVar67[1] = 0;
                  puVar67[2] = 0;
                  *puVar67 = 0;
                  FUN_00b89f94(local_230,local_228 + 0x18,local_220,7,&local_e8);
                  pcVar24 = local_d8;
                  goto joined_r0x00b90cec;
                }
LAB_00b900f0:
                if (iVar12 <= lVar19) goto LAB_00b9057c;
                uVar38 = (uint)(byte)local_118[0]._0_1_;
                lVar19 = lVar19 + 1;
                lVar57 = lVar44;
              } while( true );
            }
            lVar44 = 0;
LAB_00b9057c:
            plVar51 = local_f8;
            plVar31 = local_100;
            if (*(int *)(lVar44 + 0x40) == 3) {
LAB_00b905cc:
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,8,8);
              *plVar31 = 0;
              uVar15 = FUN_00ba42a8(&local_230,lVar44,plVar31);
              if ((uVar15 & 1) == 0) {
                bVar9 = false;
              }
              else {
                plVar51 = local_f8;
                if (local_f8 != local_100) {
                  do {
                    plVar26 = *(long **)(lVar3 + 0x30);
                    if (plVar26 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar26 = DAT_04859430;
                      *(long **)(lVar3 + 0x30) = DAT_04859430;
                    }
                    plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,8,8);
                    *plVar26 = 0;
                    plVar59 = plVar51 + -1;
                    lVar19 = *plVar59;
                    if (*(int *)(lVar19 + 0x3c) == 10) {
                      uVar45 = FUN_00c00f38(plVar26,*(undefined4 *)(lVar19 + 0x38));
                      FUN_00bff6d8(uVar45,plVar31);
                    }
                    else {
                      if (*(int *)(lVar19 + 0x3c) != 0xb) {
                        local_1c0 = 3;
                        local_1b8 = 0x3c35325;
                        uStack_1b2 = 0;
                        local_1b0 = (string *)CONCAT44(local_1b0._4_4_,0x169d);
                        acStack_1a8[0] = '\0';
                        local_1a0 = 0;
                        uStack_198 = 0;
                        std::string::append(acStack_1a8);
                        snprintf((char *)&local_e8,0x80,"%d",(ulong)*(uint *)(plVar51[-1] + 0x3c));
                        local_69 = 0;
                        std::string::append(acStack_1a8);
                        FUN_00bb0e90(&local_1c0);
                        FUN_00bb0d74(&local_1c0);
                        if (*plVar26 != 0) {
                          FUN_00bfee44(plVar26);
                        }
                        plVar51 = *(long **)(lVar3 + 0x30);
                        if (plVar51 == (long *)0x0) {
                          if (((DAT_04859438 & 1) == 0) &&
                             (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                            DAT_04859430 = DAT_04859418;
                            __cxa_guard_release(&DAT_04859438);
                          }
                          plVar51 = DAT_04859430;
                          *(long **)(lVar3 + 0x30) = DAT_04859430;
                        }
                        uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
                        if (((uVar15 & 1) == 0) ||
                           (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                          (**(code **)(*plVar51 + 0x18))(plVar51,plVar26,0,8);
                        }
                        else {
                          FUN_00c48fe8(plVar51,plVar26,0,8);
                        }
                        bVar9 = false;
                        goto joined_r0x00b90ad0;
                      }
                      uStack_128 = FUN_00c00b88(plVar26,*(undefined4 *)(lVar19 + 0x38));
                      local_1c0 = (uint)&local_130;
                      uStack_1bc = (undefined2)((ulong)&local_130 >> 0x20);
                      uStack_1ba = (undefined2)((ulong)&local_130 >> 0x30);
                      acStack_1a8[0] = '\0';
                      local_1b8 = 0;
                      uStack_1b2 = 0;
                      local_1b0 = (string *)0x0;
                      local_130 = puVar1;
                      uVar15 = FUN_00c0ebac(&local_130,&local_e8,&local_1b0);
                      if ((uVar15 & 1) == 0) {
                        local_1b8 = 0;
                        uStack_1b2 = 0;
                        local_1b0 = (string *)((ulong)local_1b0._4_4_ << 0x20);
                      }
                      else {
                        local_1b8 = SUB86(local_e8,0);
                        uStack_1b2 = (undefined2)((ulong)local_e8 >> 0x30);
                        local_1b0 = (string *)
                                    CONCAT44(local_1b0._4_4_ + (int)local_1b0,(int)local_1b0);
                      }
                      acStack_1a8[0] = '\0';
                      FUN_00c02020(plVar31,&local_1c0);
                      if (acStack_1a8[0] != '\0') {
                        local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
                        local_e0 = (string *)0x3c35325;
                        local_d8 = (char *)CONCAT44(local_d8._4_4_,0x1690);
                        local_c8 = 0;
                        local_c0 = 0;
                        uStack_bc = 0;
                        local_d0 = 0;
                        std::string::append((char *)&local_d0);
                        std::string::append((char *)&local_d0);
                        uVar15 = (ulong)local_118 | 1;
                        if ((local_118[0] & 1) != 0) {
                          uVar15 = local_108;
                        }
                        std::string::append((char *)&local_d0,uVar15);
                        std::string::append((char *)&local_d0);
                        FUN_00bb0e90(&local_e8);
                        FUN_00bb0d74(&local_e8);
                      }
                      if (0 < (int)local_1b0) {
                        (**(code **)(*(long *)CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,local_1c0)) +
                                    0x18))();
                        local_1b8 = 0;
                        uStack_1b2 = 0;
                        local_1b0 = (string *)
                                    ((ulong)(uint)((int)((ulong)local_1b0 >> 0x20) - (int)local_1b0)
                                    << 0x20);
                      }
                    }
                    if (plVar31 != plVar26) {
                      if (plVar31 != (long *)0x0) {
                        if (*plVar31 != 0) {
                          FUN_00bfee44(plVar31);
                        }
                        plVar51 = *(long **)(lVar3 + 0x30);
                        if (plVar51 == (long *)0x0) {
                          if (((DAT_04859438 & 1) == 0) &&
                             (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                            DAT_04859430 = DAT_04859418;
                            __cxa_guard_release(&DAT_04859438);
                          }
                          plVar51 = DAT_04859430;
                          *(long **)(lVar3 + 0x30) = DAT_04859430;
                        }
                        uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
                        if (((uVar15 & 1) == 0) ||
                           (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                          (**(code **)(*plVar51 + 0x18))(plVar51,plVar31,0,8);
                        }
                        else {
                          FUN_00c48fe8(plVar51,plVar31,0,8);
                        }
                      }
                      plVar31 = plVar26;
                    }
                    plVar51 = plVar59;
                  } while (plVar59 != local_100);
                }
                plVar51 = (long *)(*(code *)(*pppplVar13)[0x16])(pppplVar13);
                uVar45 = (**(code **)(*plVar51 + 0x18))(plVar51,pppplVar13);
                FUN_00bff6d8(uVar45,plVar31);
                bVar9 = true;
joined_r0x00b90ad0:
                if (plVar31 == (long *)0x0) goto LAB_00b90c14;
              }
              if (*plVar31 != 0) {
                FUN_00bfee44(plVar31);
              }
              if (plVar31 != (long *)0x0) {
                plVar51 = *(long **)(lVar3 + 0x30);
                if (plVar51 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar51 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
                if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar51 + 0x18))(plVar51,plVar31,0,8);
                }
                else {
                  FUN_00c48fe8(plVar51,plVar31,0,8);
                }
              }
            }
            else {
              plVar26 = (long *)(*(code *)(*pppplVar13)[0x16])(pppplVar13);
              uVar45 = (**(code **)(*plVar26 + 0x10))(plVar26,pppplVar13);
              uVar15 = FUN_00ba3e2c(&local_230,plVar31,plVar51,lVar44,local_118,uVar45);
              if ((uVar15 & 1) != 0) goto LAB_00b905cc;
LAB_00b90c10:
              bVar9 = false;
            }
LAB_00b90c14:
            uVar15 = local_108;
            if (((local_118[0] & 1) != 0) && (local_108 != 0)) {
              plVar31 = *(long **)(lVar3 + 0x30);
              if (plVar31 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar31 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar27 = (**(code **)(*plVar31 + 0xf8))(plVar31);
              if (((uVar27 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                (**(code **)(*plVar31 + 0x18))(plVar31,uVar15,0,8);
              }
              else {
                FUN_00c48fe8(plVar31,uVar15,0,8);
              }
            }
            plVar31 = local_100;
            if (local_100 == (long *)0x0) {
LAB_00b90c74:
              if (bVar9) goto LAB_00b90c78;
              goto LAB_00b91cec;
            }
            local_f8 = local_100;
            plVar51 = *(long **)(lVar3 + 0x30);
            if (plVar51 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar51 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar51 + 0x18))(plVar51,plVar31,0,8);
              goto LAB_00b90c74;
            }
            FUN_00c48fe8(plVar51,plVar31,0,8);
            if (!bVar9) goto LAB_00b91cec;
LAB_00b90c78:
            iVar11 = iVar11 + 1;
          } while (iVar11 != iVar10);
        }
        local_228 = (string *)0x0;
        local_220 = (char *)0x0;
        local_1c0 = 0;
        uStack_1bc = 0;
        uStack_1ba = 0;
        local_1b8 = 0;
        uStack_1b2 = 0;
        local_1b0 = (string *)0x0;
        uVar15 = FUN_00c11da8(pppplVar13,&local_1c0);
        if ((uVar15 & 1) == 0) {
          local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
          local_e0 = (string *)0x3c35325;
          local_d8 = (char *)CONCAT44(local_d8._4_4_,0x15dd);
          local_c8 = 0;
          local_c0 = 0;
          uStack_bc = 0;
          local_d0 = 0;
          std::string::append((char *)&local_d0);
          std::string::append((char *)&local_d0);
          FUN_00bb0e90(&local_e8);
          FUN_00bb0d74(&local_e8);
        }
        local_c0 = local_1c0 >> 1 & 0x7f;
        local_e8 = (string *)((ulong)&local_1c0 | 1);
        if ((local_1c0 & 1) != 0) {
          local_c0 = (uint)local_1b8;
          local_e8 = local_1b0;
        }
        local_e0 = local_e8 + (int)local_c0;
        local_d8 = (char *)0x0;
        local_d0 = CONCAT44(local_d0._4_4_,local_c0);
        local_c8 = local_c8 & 0xffffffff00000000;
        uStack_bc = 0;
        local_b8 = 0x4000000;
        uStack_b4 = 0x2000000;
        uStack_b0 = (long ***)
                    CONCAT44(*(undefined4 *)PTR_DAT_047dac98,*(undefined4 *)PTR_DAT_047dac98);
        local_a8 = 0;
        uStack_a0 = 0;
        (*(code *)(*pppplVar13)[7])(pppplVar13);
        uVar15 = (*(code *)(*pppplVar13)[0xb])(pppplVar13,&local_e8);
        cVar8 = local_c8._4_1_;
        FUN_00c08dac(&local_e8);
        if (((uVar15 & 1) == 0) || (cVar8 == '\0')) {
          local_e8 = (string *)CONCAT44(local_e8._4_4_,3);
          local_e0 = (string *)0x3c35325;
          local_d8 = (char *)CONCAT44(local_d8._4_4_,0x15df);
          local_c8 = 0;
          local_c0 = 0;
          uStack_bc = 0;
          local_d0 = 0;
          std::string::append((char *)&local_d0);
          std::string::append((char *)&local_d0);
          FUN_00bb0e90(&local_e8);
          FUN_00bb0d74(&local_e8);
        }
        uVar15 = (*(code *)(*pppplVar13)[8])(pppplVar13);
        psVar37 = local_230;
        if ((uVar15 & 1) == 0) {
          (*(code *)(*pppplVar13)[9])(&local_100,pppplVar13);
          puVar67 = (undefined8 *)std::string::insert((ulong)&local_100,(char *)0x0);
          local_e0 = (string *)puVar67[1];
          local_d8 = (char *)puVar67[2];
          local_e8 = (string *)*puVar67;
          puVar67[1] = 0;
          puVar67[2] = 0;
          *puVar67 = 0;
          FUN_00b8b28c(psVar37,psVar52 + 0x18,pppplVar55,9,&local_e8);
          pcVar24 = local_d8;
          if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pcVar24,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pcVar24,0,8);
            }
          }
          plVar31 = local_f0;
          if ((((ulong)local_100 & 1) != 0) && (local_f0 != (long *)0x0)) {
            plVar51 = *(long **)(lVar3 + 0x30);
            if (plVar51 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar51 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar51 + 0xf8))(plVar51);
            if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
              (**(code **)(*plVar51 + 0x18))(plVar51,plVar31,0,8);
            }
            else {
              FUN_00c48fe8(plVar51,plVar31,0,8);
            }
          }
        }
        psVar37 = local_1b0;
        if (((local_1c0 & 1) != 0) && (local_1b0 != (string *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,psVar37,0,8);
          }
        }
LAB_00b91cf8:
        psVar52 = psVar52 + 0x40;
      } while (psVar52 != *(string **)(param_1 + 0x20));
      psVar37 = *(string **)(param_1 + 0x18);
      if (psVar52 != psVar37) {
        do {
          if ((((byte)psVar52[-0x28] & 1) != 0) &&
             (pppplVar55 = *(long *****)(psVar52 + -0x18), pppplVar55 != (long ****)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pppplVar55,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pppplVar55,0,8);
            }
          }
          psVar33 = psVar52 + -0x40;
          if ((((byte)psVar52[-0x40] & 1) != 0) &&
             (pppplVar55 = *(long *****)(psVar52 + -0x30), pppplVar55 != (long ****)0x0)) {
            plVar31 = *(long **)(lVar3 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,pppplVar55,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,pppplVar55,0,8);
            }
          }
          psVar52 = psVar33;
        } while (psVar37 != psVar33);
        psVar52 = psVar37;
      }
    }
    *(string **)(param_1 + 0x20) = psVar52;
    FUN_00c330ec(auStack_218);
    sVar29 = param_1[0x30];
    if (sVar29 == (string)0x0) {
      if (0 < *(int *)(pppplVar60 + 9)) {
        lVar19 = 0;
        lVar48 = 0;
        do {
          FUN_00ba1a0c(param_1,(long)pppplVar60[10] + lVar19,
                       *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar48 * 8 + 8));
          lVar48 = lVar48 + 1;
          lVar19 = lVar19 + 0xa8;
        } while (lVar48 < *(int *)(pppplVar60 + 9));
      }
      if (0 < *(int *)(pppplVar60 + 0xb)) {
        lVar19 = 0;
        lVar48 = 0;
        do {
          FUN_00ba1dc4(param_1,(long)pppplVar60[0xc] + lVar19,
                       *(undefined8 *)(*(long *)(param_2 + 0x88) + lVar48 * 8 + 8));
          lVar48 = lVar48 + 1;
          lVar19 = lVar19 + 0x38;
        } while (lVar48 < *(int *)(pppplVar60 + 0xb));
      }
      puVar1 = PTR_DAT_047dac18;
      if (0 < *(int *)(pppplVar60 + 0xd)) {
        lVar19 = 0;
        lVar48 = 0;
        do {
          ppplVar66 = pppplVar60[0xe];
          lVar57 = *(long *)((long)ppplVar66 + lVar19 + 0x10);
          if (lVar57 != 0) {
            uVar49 = *(undefined8 *)(*(long *)(param_2 + 0xa0) + lVar48 * 8 + 8);
            lVar53 = *(long *)(lVar57 + 0x90);
            lVar44 = *(long *)puVar1;
            if (lVar44 == 0) {
              FUN_00bb5d70();
              lVar44 = *(long *)puVar1;
            }
            if (((lVar53 != lVar44) && (*(int *)(*(long *)(lVar57 + 0x90) + 0x4c) == 3)) &&
               ((lVar57 = *(long *)(*(long *)((long)ppplVar66 + lVar19 + 0x10) + 0x90),
                *(char *)(lVar57 + 0x4b) != '\0' || (*(char *)(lVar57 + 0x80) != '\0')))) {
              FUN_00b8a120(param_1,*(undefined8 *)((long)ppplVar66 + lVar19 + 8),uVar49,0,
                           "Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic_services and java_generic_sevices to false."
                          );
            }
          }
          lVar48 = lVar48 + 1;
          lVar19 = lVar19 + 0x30;
        } while (lVar48 < *(int *)(pppplVar60 + 0xd));
      }
      if (0 < *(int *)(pppplVar60 + 0xf)) {
        lVar19 = 0;
        lVar48 = 0;
        do {
          FUN_00ba2628(param_1,(long)pppplVar60[0x11] + lVar19,
                       *(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar48 * 8 + 8));
          lVar48 = lVar48 + 1;
          lVar19 = lVar19 + 0x90;
        } while (lVar48 < *(int *)(pppplVar60 + 0xf));
      }
      ppplVar30 = pppplVar60[0x12];
      ppplVar66 = *(long ****)puVar1;
      if (ppplVar66 == (long ***)0x0) {
        FUN_00bb5d70();
        ppplVar66 = *(long ****)puVar1;
      }
      if (((ppplVar30 == ppplVar66) || (*(int *)((long)pppplVar60[0x12] + 0x4c) != 3)) &&
         (0 < *(int *)(pppplVar60 + 3))) {
        lVar48 = 0;
        do {
          pplVar36 = pppplVar60[4][lVar48];
          ppplVar30 = ppplVar66;
          if (pplVar36 != (long **)0x0) {
            ppplVar30 = (long ***)pplVar36[0x12];
            if (ppplVar66 == (long ***)0x0) {
              FUN_00bb5d70();
              ppplVar66 = *(long ****)puVar1;
            }
            if ((ppplVar30 != ppplVar66) &&
               (ppplVar30 = ppplVar66, *(int *)((long)pplVar36[0x12] + 0x4c) == 3)) {
              ppplVar66 = *pppplVar60;
              std::operator+("Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  This file is not lite, but it imports \""
                             ,(string *)*pppplVar60[4][lVar48]);
              puVar67 = (undefined8 *)std::string::append((char *)&local_230);
              local_e0 = (string *)puVar67[1];
              local_d8 = (char *)puVar67[2];
              local_e8 = (string *)*puVar67;
              puVar67[1] = 0;
              puVar67[2] = 0;
              *puVar67 = 0;
              FUN_00b89f94(param_1,ppplVar66,param_2,9,&local_e8);
              pcVar22 = local_d8;
              if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,pcVar22,0,8);
                }
              }
              pcVar22 = local_220;
              if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
                plVar31 = *(long **)(lVar3 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar3 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,pcVar22,0,8);
                }
              }
              break;
            }
          }
          lVar48 = lVar48 + 1;
          ppplVar66 = ppplVar30;
        } while (lVar48 < *(int *)(pppplVar60 + 3));
      }
      if (*(int *)((long)pppplVar60 + 0x7c) == 3) {
        if (0 < *(int *)(pppplVar60 + 0xf)) {
          lVar19 = 0;
          lVar48 = 0;
          do {
            FUN_00ba2c70(param_1,(long)pppplVar60[0x11] + lVar19,
                         *(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar48 * 8 + 8));
            lVar48 = lVar48 + 1;
            lVar19 = lVar19 + 0x90;
          } while (lVar48 < *(int *)(pppplVar60 + 0xf));
        }
        if (0 < *(int *)(pppplVar60 + 9)) {
          lVar19 = 0;
          lVar48 = 0;
          do {
            FUN_00ba3324(param_1,(long)pppplVar60[10] + lVar19,
                         *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar48 * 8 + 8));
            lVar48 = lVar48 + 1;
            lVar19 = lVar19 + 0xa8;
          } while (lVar48 < *(int *)(pppplVar60 + 9));
        }
        iVar10 = *(int *)(pppplVar60 + 0xb);
        if (0 < iVar10) {
          lVar19 = 0;
          lVar48 = 0;
          do {
            ppplVar66 = pppplVar60[0xc];
            if ((0 < *(int *)((long)ppplVar66 + lVar19 + 0x2c)) &&
               (*(int *)(*(long *)((long)ppplVar66 + lVar19 + 0x30) + 0x10) != 0)) {
              FUN_00b8a120(param_1,*(undefined8 *)((long)ppplVar66 + lVar19 + 8),
                           *(undefined8 *)(*(long *)(param_2 + 0x88) + lVar48 * 8 + 8),9,
                           "The first enum value must be zero in proto3.");
              iVar10 = *(int *)(pppplVar60 + 0xb);
            }
            lVar48 = lVar48 + 1;
            lVar19 = lVar19 + 0x38;
          } while (lVar48 < iVar10);
        }
      }
      sVar29 = param_1[0x30];
    }
  }
  else {
    sVar29 = (string)0x1;
  }
  if ((sVar29 != (string)0x0) && (0 < *(int *)(param_2 + 0x68))) {
    lVar19 = 0;
    lVar48 = 0;
    do {
      FUN_00b9965c(param_1,(long)pppplVar60[10] + lVar19,
                   *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar48 * 8 + 8));
      lVar48 = lVar48 + 1;
      lVar19 = lVar19 + 0xa8;
    } while (lVar48 < *(int *)(param_2 + 0x68));
  }
  if (*(long *****)(param_1 + 0x88) != (long ****)0x0) {
    local_e0 = (string *)0x0;
    local_d8 = (char *)0x0;
    plVar31 = *(long **)(lVar3 + 0x30);
    local_e8 = (string *)&local_e0;
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar45 = s_google_protobuf_MessageOptions_03c2cf0a._8_8_;
    local_230 = (string *)0x21;
    uVar4 = CONCAT62(s_google_protobuf_MessageOptions_03c2cf0a._24_6_,
                     s_google_protobuf_MessageOptions_03c2cf0a._22_2_);
    local_228 = (string *)0x1e;
    uVar49 = CONCAT26(s_google_protobuf_MessageOptions_03c2cf0a._22_2_,
                      s_google_protobuf_MessageOptions_03c2cf0a._16_6_);
    *(undefined8 *)local_220 = s_google_protobuf_MessageOptions_03c2cf0a._0_8_;
    *(undefined8 *)(local_220 + 0x16) = uVar4;
    local_220[0x1e] = '\0';
    *(undefined8 *)(local_220 + 8) = uVar45;
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar49 = s_google_protobuf_FileOptions_03c17c42._16_8_;
    local_230 = (string *)0x21;
    local_228 = (string *)0x1b;
    local_220[0x1b] = '\0';
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    uVar49 = s_google_protobuf_FileOptions_03c17c42._8_8_;
    *(undefined8 *)local_220 = s_google_protobuf_FileOptions_03c17c42._0_8_;
    *(undefined8 *)(local_220 + 8) = uVar49;
    local_220[0x17] = 'i';
    local_220[0x18] = 'o';
    local_220[0x19] = 'n';
    local_220[0x1a] = 's';
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar49 = s_google_protobuf_FieldOptions_03c09a35._16_8_;
    local_230 = (string *)0x21;
    local_228 = (string *)0x1c;
    local_220[0x18] = 'i';
    local_220[0x19] = 'o';
    local_220[0x1a] = 'n';
    local_220[0x1b] = 's';
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    uVar4 = s_google_protobuf_FieldOptions_03c09a35._8_8_;
    uVar49 = s_google_protobuf_FieldOptions_03c09a35._0_8_;
    local_220[0x1c] = '\0';
    *(undefined8 *)local_220 = uVar49;
    *(undefined8 *)(local_220 + 8) = uVar4;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar49 = s_google_protobuf_EnumOptions_03c7ca6f._16_8_;
    local_230 = (string *)0x21;
    local_228 = (string *)0x1b;
    local_220[0x1b] = '\0';
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    uVar4 = s_google_protobuf_EnumOptions_03c7ca6f._8_8_;
    uVar49 = s_google_protobuf_EnumOptions_03c7ca6f._0_8_;
    local_220[0x17] = 'i';
    local_220[0x18] = 'o';
    local_220[0x19] = 'n';
    local_220[0x1a] = 's';
    *(undefined8 *)local_220 = uVar49;
    *(undefined8 *)(local_220 + 8) = uVar4;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x30,8);
    uVar4 = s_google_protobuf_EnumValueOptions_03be790d._8_8_;
    uVar49 = s_google_protobuf_EnumValueOptions_03be790d._0_8_;
    local_230 = (string *)0x31;
    local_228 = (string *)0x20;
    local_220[0x20] = '\0';
    uVar45 = s_google_protobuf_EnumValueOptions_03be790d._24_8_;
    *(undefined8 *)(local_220 + 0x10) = s_google_protobuf_EnumValueOptions_03be790d._16_8_;
    *(undefined8 *)(local_220 + 0x18) = uVar45;
    *(undefined8 *)local_220 = uVar49;
    *(undefined8 *)(local_220 + 8) = uVar4;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar45 = s_google_protobuf_ServiceOptions_03c765a4._8_8_;
    local_230 = (string *)0x21;
    uVar4 = CONCAT62(s_google_protobuf_ServiceOptions_03c765a4._24_6_,
                     s_google_protobuf_ServiceOptions_03c765a4._22_2_);
    local_228 = (string *)0x1e;
    uVar49 = CONCAT26(s_google_protobuf_ServiceOptions_03c765a4._22_2_,
                      s_google_protobuf_ServiceOptions_03c765a4._16_6_);
    *(undefined8 *)local_220 = s_google_protobuf_ServiceOptions_03c765a4._0_8_;
    *(undefined8 *)(local_220 + 0x16) = uVar4;
    local_220[0x1e] = '\0';
    *(undefined8 *)(local_220 + 8) = uVar45;
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar45 = s_google_protobuf_MethodOptions_03bee489._8_8_;
    local_230 = (string *)0x21;
    uVar4 = CONCAT53(s_google_protobuf_MethodOptions_03bee489._24_5_,
                     s_google_protobuf_MethodOptions_03bee489._21_3_);
    local_228 = (string *)0x1d;
    uVar49 = CONCAT35(s_google_protobuf_MethodOptions_03bee489._21_3_,
                      s_google_protobuf_MethodOptions_03bee489._16_5_);
    *(undefined8 *)local_220 = s_google_protobuf_MethodOptions_03bee489._0_8_;
    *(undefined8 *)(local_220 + 0x15) = uVar4;
    local_220[0x1d] = '\0';
    *(undefined8 *)(local_220 + 8) = uVar45;
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    plVar31 = *(long **)(lVar3 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    local_220 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
    uVar45 = s_google_protobuf_StreamOptions_03c6a6f9._8_8_;
    local_230 = (string *)&DAT_00000021;
    uVar4 = CONCAT53(s_google_protobuf_StreamOptions_03c6a6f9._24_5_,
                     s_google_protobuf_StreamOptions_03c6a6f9._21_3_);
    local_228 = (string *)0x1d;
    uVar49 = CONCAT35(s_google_protobuf_StreamOptions_03c6a6f9._21_3_,
                      s_google_protobuf_StreamOptions_03c6a6f9._16_5_);
    *(undefined8 *)local_220 = s_google_protobuf_StreamOptions_03c6a6f9._0_8_;
    *(undefined8 *)(local_220 + 0x15) = uVar4;
    local_220[0x1d] = '\0';
    *(undefined8 *)(local_220 + 8) = uVar45;
    *(undefined8 *)(local_220 + 0x10) = uVar49;
    FUN_00babb6c(&local_e8,&local_230,&local_230);
    pcVar22 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
      plVar31 = *(long **)(lVar3 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,pcVar22,0,8);
      }
    }
    psVar52 = *(string **)(param_1 + 0x78);
    while (psVar52 != psVar47) {
      pppplVar55 = *(long *****)(psVar52 + 0x20);
      iVar10 = *(int *)(pppplVar55 + 0xf);
      if (iVar10 < 1) {
        iVar11 = 0;
      }
      else {
        lVar48 = 0;
        do {
          if (local_e0 != (string *)0x0) {
            pbVar14 = (byte *)pppplVar55[0x11][lVar48 * 0x12 + 10][1];
            psVar37 = (string *)&local_e0;
            psVar33 = local_e0;
            do {
              local_228 = (string *)(ulong)(*pbVar14 >> 1);
              local_230 = (string *)(pbVar14 + 1);
              if ((*pbVar14 & 1) != 0) {
                local_228 = *(string **)(pbVar14 + 8);
                local_230 = *(string **)(pbVar14 + 0x10);
              }
              iVar10 = FUN_028a8144(psVar33 + 0x20,&local_230);
              if (iVar10 >= 0) {
                psVar37 = psVar33;
              }
              psVar33 = *(string **)(psVar33 + (ulong)(iVar10 < 0) * 8);
            } while (psVar33 != (string *)0x0);
            if (psVar37 != (string *)&local_e0) {
              local_228 = (string *)(ulong)((byte)psVar37[0x20] >> 1);
              local_230 = psVar37 + 0x21;
              if (((byte)psVar37[0x20] & 1) != 0) {
                local_228 = *(string **)(psVar37 + 0x28);
                local_230 = *(string **)(psVar37 + 0x30);
              }
              iVar10 = FUN_028a8144(pbVar14,&local_230);
              if (-1 < iVar10) {
                pppplVar55 = *(long *****)(psVar52 + 0x20);
                iVar10 = *(int *)(pppplVar55 + 0xf);
                break;
              }
            }
          }
          pppplVar55 = *(long *****)(psVar52 + 0x20);
          lVar48 = lVar48 + 1;
          iVar10 = *(int *)(pppplVar55 + 0xf);
        } while (lVar48 < iVar10);
        iVar11 = (int)lVar48;
      }
      if (iVar11 == iVar10) {
        std::operator+("Import ",(string *)*pppplVar55);
        puVar67 = (undefined8 *)std::string::append((char *)&local_1c0);
        psVar37 = local_1b0;
        local_228 = (string *)puVar67[1];
        local_220 = (char *)puVar67[2];
        local_230 = (string *)*puVar67;
        puVar67[1] = 0;
        puVar67[2] = 0;
        *puVar67 = 0;
        if (((local_1c0 & 1) != 0) && (local_1b0 != (string *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,psVar37,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,psVar37,0,8);
          }
        }
        FUN_00b8b28c(param_1,**(long *****)(psVar52 + 0x20),param_2,9,&local_230);
        pcVar22 = local_220;
        if ((((ulong)local_230 & 1) != 0) && (local_220 != (char *)0x0)) {
          plVar31 = *(long **)(lVar3 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar48 = FUN_00c4e600(), *(int *)(lVar48 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,pcVar22,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,pcVar22,0,8);
          }
        }
      }
      psVar37 = *(string **)(psVar52 + 8);
      if (*(string **)(psVar52 + 8) == (string *)0x0) {
        psVar37 = psVar52 + 0x10;
        bVar9 = *(string **)*(string **)psVar37 != psVar52;
        psVar52 = *(string **)psVar37;
        if (bVar9) {
          do {
            pppplVar55 = *(long *****)psVar37;
            psVar37 = (string *)(pppplVar55 + 2);
            psVar52 = *(string **)psVar37;
          } while (*(long *****)*(string **)psVar37 != pppplVar55);
        }
      }
      else {
        do {
          psVar52 = psVar37;
          psVar37 = *(string **)psVar52;
        } while (psVar37 != (string *)0x0);
      }
    }
    FUN_01f6e7f0(&local_e8,local_e0);
  }
  pppplVar55 = *(long *****)(param_1 + 8);
  if (param_1[0x30] == (string)0x0) {
    ppplVar66 = pppplVar55[0x2c];
    pppplVar55[0x2c] = (long ***)((long)ppplVar66 + -0x1c);
    if (pppplVar55[0x2b] == (long ***)((long)ppplVar66 + -0x1c)) {
      pppplVar55[0x2f] = pppplVar55[0x2e];
      pppplVar55[0x32] = pppplVar55[0x31];
      pppplVar55[0x35] = pppplVar55[0x34];
    }
  }
  else {
    FUN_00b7836c();
    pppplVar60 = (long ****)0x0;
  }
  FUN_00bae328(&local_1f0,local_1e8);
  FUN_01f6e7f0(&local_1d8,local_1d0);
  return pppplVar60;
}


