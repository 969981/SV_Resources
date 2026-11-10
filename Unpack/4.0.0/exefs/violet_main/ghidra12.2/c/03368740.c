/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03368740; name: FUN_03368740
 */


byte * FUN_03368740(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  size_t sVar15;
  ThreadType *pTVar16;
  long lVar17;
  byte *pbVar18;
  char *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  byte *pbVar23;
  char *pcVar24;
  int iVar25;
  ulong *puVar26;
  char *local_310;
  char *pcStack_308;
  undefined8 *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  char local_2c0 [368];
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  char *local_110;
  char *pcStack_108;
  char *local_100;
  undefined8 local_f8;
  char acStack_f0 [128];
  int local_70;
  
  plVar9 = (long *)(**(code **)*param_3)(param_3);
  puVar26 = (ulong *)(param_2 + 8);
  local_100 = acStack_f0;
  local_f8 = 0x8000008000000000;
  local_70 = 1;
  FUN_031c6afc(&local_100,*puVar26 & 0xfffffffffffffffe,0xffffffff);
  pcVar24 = local_100;
  iVar8 = (int)local_f8;
  pvVar10 = memchr(local_100,0x3c,(long)(int)local_f8 - 1);
  uVar5 = (int)pvVar10 - (int)pcVar24;
  if (pvVar10 == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  if (-1 < (int)uVar5) {
    uVar4 = (local_f8._4_4_ & 0x7fffffff) - 1;
    uVar3 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar3 = uVar4;
    }
    if (local_70 != 0) {
      uVar3 = uVar5;
    }
    iVar1 = uVar3 + 1;
    if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar3) {
      FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,iVar1);
      iVar8 = (int)local_f8;
    }
    if ((iVar8 <= (int)uVar3) || (iVar1 < iVar8)) {
      local_f8 = CONCAT44(local_f8._4_4_,iVar1);
    }
    local_100[(int)uVar3] = '\0';
  }
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 0:
    pbVar23 = *(byte **)(param_2 + 0x10);
    pbVar18 = pbVar23;
    if ((*pbVar23 & 1) == 0) {
      do {
        pbVar18 = *(byte **)(pbVar18 + 8);
      } while ((*pbVar18 & 1) == 0);
    }
    if ((pbVar23 != (byte *)0x0) && ((*(ulong *)(pbVar18 + 0x10) & 0x1f) == 3)) {
      uVar11 = (**(code **)(*param_3 + 0x28))(param_3);
      uVar14 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar26 & 0xfffffffffffffffe,0xffffffff
                            ,1);
      pbVar23 = (byte *)(**(code **)(*plVar9 + 0x18))(plVar9,0x38);
      pbVar23[0] = 0xd;
      pbVar23[1] = 0;
      pbVar23[2] = 0x30;
      pbVar23[3] = 0;
      pbVar23[4] = 0;
      pbVar23[5] = 0;
      pbVar23[6] = 0;
      pbVar23[7] = 0;
      pbVar23[8] = 0;
      pbVar23[9] = 0;
      pbVar23[10] = 0;
      pbVar23[0xb] = 0;
      pbVar23[0xc] = 0;
      pbVar23[0xd] = 0;
      pbVar23[0xe] = 0;
      pbVar23[0xf] = 0;
      *(undefined8 *)(pbVar23 + 0x20) = uVar14;
      pbVar23[0x28] = 8;
      pbVar23[0x29] = 0;
      pbVar23[0x2a] = 8;
      pbVar23[0x2b] = 0;
      pbVar23[0x2c] = 0;
      pbVar23[0x2d] = 0;
      pbVar23[0x2e] = 0;
      pbVar23[0x2f] = 0;
      pbVar23[0x30] = 0;
      pbVar23[0x31] = 0x10;
      pbVar23[0x32] = 0;
      pbVar23[0x33] = 0;
      pbVar23[0x34] = 0;
      pbVar23[0x35] = 0;
      pbVar23[0x36] = 0;
      pbVar23[0x37] = 0;
      pbVar23[0x10] = 0x83;
      pbVar23[0x11] = 0;
      pbVar23[0x12] = 0;
      pbVar23[0x13] = 0;
      pbVar23[0x14] = 0;
      pbVar23[0x15] = 0;
      pbVar23[0x16] = 0;
      pbVar23[0x17] = 0;
      *(undefined8 *)(pbVar23 + 0x18) = uVar11;
    }
    break;
  case 1:
    if (*(long *)(param_2 + 0x10) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = (undefined *)FUN_03368740(param_1,*(long *)(param_2 + 0x10),param_3);
    }
    uVar11 = (**(code **)(*(long *)*param_1 + 0x48))();
    pcStack_308 = local_100 + (int)local_f8;
    goto LAB_03368a34;
  case 2:
    uVar11 = (**(code **)(*(long *)*param_1 + 0x48))();
    pcStack_308 = local_100 + (int)local_f8;
    puVar12 = PTR_DAT_047e5c40;
LAB_03368a34:
    pcStack_308 = pcStack_308 + -1;
    local_310 = local_100;
    pbVar23 = (byte *)FUN_03367c74(uVar11,&local_310,puVar12,~uVar5 >> 0x1f);
    break;
  case 3:
    plVar9 = (long *)*param_1;
    lVar22 = *plVar9;
    puVar21 = *(undefined8 **)(param_2 + 0x10);
LAB_03368988:
    lVar22 = (**(code **)(lVar22 + 0x38))(plVar9,puVar21);
    pbVar23 = *(byte **)(lVar22 + 0x50);
    break;
  case 4:
  case 5:
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_03368740(param_1,*(long *)(param_2 + 0x10),param_3);
    }
    uVar14 = (**(code **)(*(long *)*param_1 + 0x48))();
    pcStack_308 = local_100 + (long)(int)local_f8 + -1;
    local_310 = local_100;
    pbVar23 = (byte *)FUN_03368094(uVar14,&local_310,uVar11,~uVar5 >> 0x1f,
                                   *(undefined4 *)(param_2 + 0x18),0,0);
    break;
  case 6:
    pbVar23 = *(byte **)(param_2 + 0x10);
    break;
  case 7:
    pcVar24 = (char *)(*puVar26 & 0xfffffffffffffffe);
    if (pcVar24 == (char *)0x0) {
      iVar8 = 0;
    }
    else {
      sVar13 = strlen(pcVar24);
      iVar8 = (int)sVar13;
    }
    pcVar19 = pcVar24 + iVar8;
    if ((int)pcVar19 != (int)pcVar24) {
      puVar21 = param_1;
      do {
        pvVar10 = memchr(pcVar24,0x3a,(long)pcVar19 - (long)pcVar24);
        iVar8 = (int)pvVar10 - (int)pcVar24;
        if (pvVar10 == (void *)0x0) {
          iVar8 = -1;
        }
        iVar25 = (int)((long)pcVar19 - (long)pcVar24);
        iVar1 = iVar25;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (*pcVar24 != '$') {
          if (DAT_0488d990 < 2) {
            if (DAT_046aaf68 != '\0') {
LAB_03368e1c:
              local_300 = &DAT_0488d940;
              uStack_2f8 = 2;
              pTVar16 = (ThreadType *)nn::os::GetCurrentThread();
              local_2f0 = nn::os::GetThreadId(pTVar16);
              local_310 = local_2c0;
              local_2e0 = 0;
              local_2d8 = (char *)0x0;
              local_2d0 = 0;
              uStack_2c8 = 0;
              local_2c0[0] = '\0';
              pcStack_308 = (char *)0x10000000000;
              local_2e8 = local_310;
              FUN_0322c554(&local_310,"Invalid dependent parameter {}",PTR_DAT_047e66e8,puVar26);
              local_2d0 = 0x137;
              goto LAB_03368ee8;
            }
          }
          else {
            if (DAT_046aaf68 != '\0') goto LAB_03368e1c;
            local_310 = (char *)0x0;
            local_300 = &DAT_0488d940;
            uStack_2f8 = 2;
            pTVar16 = (ThreadType *)nn::os::GetCurrentThread();
            local_2f0 = nn::os::GetThreadId(pTVar16);
            local_2e8 = (char *)0x0;
            local_2e0 = 0;
            local_2d8 = (char *)0x0;
            local_2d0 = 0;
            uStack_2c8 = 0;
            FUN_0322c554(&local_310,"Invalid dependent parameter {}",PTR_DAT_047e66e8,puVar26);
            local_2d0 = 0x137;
LAB_03368de4:
            local_2d8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
            ;
            FUN_0322c8e0(&local_310);
LAB_03368df0:
            if (((ulong)local_2e8 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2e8 + -1,0);
            }
          }
          goto LAB_03368c8c;
        }
        sVar13 = (long)iVar1 - 1;
        pcVar19 = pcVar24 + 1;
        pcStack_108 = pcVar19 + sVar13;
        local_110 = pcVar19;
        if (*(int *)(puVar21 + 0xe) != 0) {
          lVar22 = (long)*(int *)(puVar21 + 0xe) * 0x28;
          plVar9 = (long *)(puVar21[0xd] + 8);
          do {
            pcVar2 = (char *)(plVar9[-1] & 0xfffffffffffffffe);
            iVar8 = (int)sVar13;
            if (pcVar2 == (char *)0x0) {
joined_r0x03368af8:
              if (iVar8 == 0) {
                lVar17 = *plVar9;
                if (*(int *)(lVar17 + 0x1c) == 3) {
                  puVar20 = *(undefined8 **)(lVar17 + 0x10);
                  if (puVar20 != (undefined8 *)0x0) {
                    bVar6 = true;
                    goto LAB_03368b34;
                  }
                }
                else if ((*(int *)(lVar17 + 0x1c) == 0) && (*(long *)(lVar17 + 0x10) != 0))
                goto LAB_03368cdc;
              }
            }
            else {
              sVar15 = strlen(pcVar2);
              if (sVar15 == sVar13) {
                iVar8 = memcmp(pcVar19,pcVar2,sVar13);
                goto joined_r0x03368af8;
              }
            }
            lVar22 = lVar22 + -0x28;
            plVar9 = plVar9 + 5;
          } while (lVar22 != 0);
        }
        bVar6 = false;
        puVar20 = puVar21;
LAB_03368b34:
        if (*(int *)(puVar20 + 0x10) != 0) {
          lVar22 = (long)*(int *)(puVar20 + 0x10) * 0x28;
          plVar9 = (long *)(puVar20[0xf] + 8);
          do {
            pcVar2 = (char *)(plVar9[-1] & 0xfffffffffffffffe);
            iVar8 = (int)sVar13;
            if (pcVar2 == (char *)0x0) {
joined_r0x03368b7c:
              if (iVar8 == 0) {
                lVar17 = *plVar9;
                if (*(int *)(lVar17 + 0x1c) == 3) {
                  puVar21 = *(undefined8 **)(lVar17 + 0x10);
                  if (puVar21 != (undefined8 *)0x0) goto LAB_03368bc8;
                }
                else if ((*(int *)(lVar17 + 0x1c) == 0) && (*(long *)(lVar17 + 0x10) != 0))
                goto LAB_03368cdc;
              }
            }
            else {
              sVar15 = strlen(pcVar2);
              if (sVar15 == sVar13) {
                iVar8 = memcmp(pcVar19,pcVar2,sVar13);
                goto joined_r0x03368b7c;
              }
            }
            lVar22 = lVar22 + -0x28;
            plVar9 = plVar9 + 5;
          } while (lVar22 != 0);
        }
        puVar21 = puVar20;
        if (!bVar6) {
          if (DAT_0488d990 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_03368c8c;
          }
          else if (DAT_046aaf68 == '\0') {
            local_310 = (char *)0x0;
            local_300 = &DAT_0488d940;
            uStack_2f8 = 2;
            pTVar16 = (ThreadType *)nn::os::GetCurrentThread();
            local_2f0 = nn::os::GetThreadId(pTVar16);
            local_2e8 = (char *)0x0;
            local_2e0 = 0;
            local_2d8 = (char *)0x0;
            local_2d0 = 0;
            uStack_2c8 = 0;
            FUN_0322c554(&local_310,
                         "Failed to resolve part of a dependent parameter: could not resolve {} in {}"
                         ,&DAT_047ad650,&local_110,puVar26);
            local_2d0 = 0x166;
            goto LAB_03368de4;
          }
          local_300 = &DAT_0488d940;
          uStack_2f8 = 2;
          pTVar16 = (ThreadType *)nn::os::GetCurrentThread();
          local_2f0 = nn::os::GetThreadId(pTVar16);
          local_310 = local_2c0;
          local_2e0 = 0;
          local_2d8 = (char *)0x0;
          local_2c0[0] = '\0';
          local_2d0 = 0;
          uStack_2c8 = 0;
          pcStack_308 = (char *)0x10000000000;
          local_2e8 = local_310;
          FUN_0322c554(&local_310,
                       "Failed to resolve part of a dependent parameter: could not resolve {} in {}"
                       ,&DAT_047ad650,&local_110,puVar26);
          local_2d0 = 0x166;
LAB_03368ee8:
          local_2d8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
          ;
          if (local_2c0[0] != '\0') {
            sVar13 = strlen(local_2c0);
            (local_2c0 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[0] = '\n';
            (local_2c0 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[1] = '\0';
            printf("%s",local_2c0);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
          goto LAB_03368df0;
        }
LAB_03368bc8:
        if (iVar25 <= iVar1) {
          plVar9 = (long *)*param_1;
          lVar22 = *plVar9;
          goto LAB_03368988;
        }
        iVar8 = (iVar25 - iVar1) + -2;
        pcVar24 = pcVar24 + (long)iVar1 + 2;
        pcVar19 = pcVar24 + iVar8;
      } while (iVar8 != 0);
    }
  default:
    local_140 = 1;
    uStack_138 = 0;
    local_130 = &local_310;
    local_150 = PTR_DAT_047e34b8 + 0x10;
    uStack_148 = 0xffffffff;
    local_128 = 0;
    local_118 = 0;
    local_120 = 0x1bf;
    memset(&local_310,0,0x1c0);
    FUN_0322bd4c(&local_150,"Invalid field type",0x12);
    iVar8 = FUN_03226f50(0x33b1b823,&local_310,
                         "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
                         ,0x178);
    if (iVar8 != 0) {
      CallSupervisor(0x26);
    }
LAB_03368c8c:
    pbVar23 = (byte *)0x0;
  }
LAB_03368c90:
  uVar7 = local_f8;
  local_f8 = local_f8 & 0xffffffff00000000;
  if ((-1 < (long)uVar7) && (local_100 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return pbVar23;
LAB_03368cdc:
  pbVar23 = (byte *)FUN_03368740(param_1,lVar17,param_3);
  goto LAB_03368c90;
}


