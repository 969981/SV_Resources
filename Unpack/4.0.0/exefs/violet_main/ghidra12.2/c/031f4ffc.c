/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f4ffc; name: FUN_031f4ffc
 */


ulong * FUN_031f4ffc(long param_1,char *param_2)

{
  MutexType *pMVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  size_t sVar12;
  ThreadType *pTVar13;
  uint uVar14;
  ulong *puVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x21;
  ulong *puVar20;
  ulong *puVar21;
  char *pcVar22;
  ulong uVar23;
  ulong *puVar24;
  char *__s;
  char *local_268;
  undefined8 uStack_260;
  undefined8 *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  char *local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  char local_218 [256];
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [128];
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *local_70;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return (ulong *)0x0;
  }
  local_78 = param_2;
  sVar11 = strlen(param_2);
  local_70 = param_2 + sVar11;
  local_118 = auStack_108;
  local_88 = (char *)0x0;
  pcStack_80 = (char *)0x0;
  local_110 = -0x7ffffff800000000;
  iVar9 = FUN_031f5500(param_2,local_70,&local_88,&local_118);
  puVar3 = PTR_DAT_047e5db8;
  if (iVar9 < 0) {
    if (DAT_04884ce8 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_031f5450;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_268 = (char *)0x0;
        local_258 = &DAT_04884c98;
        uStack_250 = 2;
        pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
        local_248 = nn::os::GetThreadId(pTVar13);
        local_240 = (char *)0x0;
        local_238 = 0;
        local_230 = (char *)0x0;
        local_228 = 0;
        uStack_220 = 0;
        FUN_0322c554(&local_268,"Failed to parse invalid type name \'{}\' for registry lookup.",
                     PTR_DAT_047e5b50,&local_78);
        local_230 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        local_228 = 0x237;
        FUN_0322c8e0(&local_268);
      }
      else {
LAB_031f5450:
        local_258 = &DAT_04884c98;
        uStack_250 = 2;
        pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
        local_248 = nn::os::GetThreadId(pTVar13);
        local_238 = 0;
        local_230 = (char *)0x0;
        local_228 = 0;
        uStack_220 = 0;
        local_218[0] = '\0';
        uStack_260 = 0x10000000000;
        local_268 = local_218;
        local_240 = local_218;
        FUN_0322c554(&local_268,"Failed to parse invalid type name \'{}\' for registry lookup.",
                     PTR_DAT_047e5b50,&local_78);
        local_230 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        local_228 = 0x237;
        if (local_218[0] != '\0') {
          sVar11 = strlen(local_218);
          (local_218 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
          (local_218 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
          printf("%s",local_218);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_240 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_240 + -1,0);
      }
    }
  }
  else {
    do {
      pcVar8 = local_70;
      pcVar7 = local_78;
      pcVar22 = pcStack_80;
      pcVar6 = local_88;
      puVar4 = local_118;
      uVar19 = *(ulong *)puVar3;
      if ((uVar19 & 1) != 0) {
        uVar14 = 0;
        do {
          uVar19 = *(ulong *)puVar3;
          if (uVar14 != 0x1f) {
            iVar9 = (1 << (ulong)(uVar14 & 0x1f)) + 1;
            do {
              iVar9 = iVar9 + -1;
              DataMemoryBarrier(2,2);
              Yield();
            } while (1 < iVar9);
          }
          if (uVar14 < 8) {
            uVar14 = uVar14 + 1;
          }
        } while ((uVar19 & 1) != 0);
      }
      puVar20 = *(ulong **)(param_1 + 0x18);
      if (puVar20 == (ulong *)0x0) {
        puVar20 = (ulong *)0x0;
      }
      else {
        puVar2 = local_118 + (long)(int)local_110 * 0x10;
        uVar23 = (long)pcStack_80 - (long)local_88;
LAB_031f50f0:
        do {
          puVar24 = (ulong *)puVar20[1];
          puVar15 = puVar24;
          do {
            uVar18 = *puVar15;
            if (((uint)uVar18 >> 3 & 1) != 0) {
              if (puVar15 != (ulong *)0x0) {
                __s = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar18 & 7) + 2];
                if (__s == (char *)0x0) {
LAB_031f5154:
                  pcVar16 = (char *)0x0;
                }
                else {
                  sVar11 = strlen(__s);
                  pcVar16 = __s + sVar11;
                }
                goto LAB_031f5158;
              }
              break;
            }
            if ((uVar18 & 1) != 0) {
              __s = (char *)0x0;
              goto LAB_031f5154;
            }
            puVar15 = (ulong *)puVar15[1];
          } while (puVar15 != (ulong *)0x0);
          pcVar16 = (char *)0x0;
          __s = (char *)0x0;
LAB_031f5158:
          if (__s != pcVar6) {
            uVar18 = (long)pcVar16 - (long)__s;
            sVar11 = uVar23;
            if (uVar18 <= uVar23) {
              sVar11 = uVar18;
            }
            iVar10 = memcmp(pcVar6,__s,sVar11);
            iVar9 = -1;
            if (-1 < iVar10) {
              iVar9 = 1;
            }
            if (iVar10 == 0) {
              iVar9 = 1;
              if (uVar23 < uVar18) {
                iVar9 = -1;
              }
              if (uVar23 == uVar18) goto LAB_031f51c0;
            }
            if (iVar9 < 1) goto LAB_031f51b4;
LAB_031f519c:
            puVar20 = (ulong *)puVar20[2];
joined_r0x031f51a0:
            if (puVar20 == (ulong *)0x0) break;
            goto LAB_031f50f0;
          }
          if (pcVar16 != pcVar22) {
            if (pcVar16 <= pcVar22) goto LAB_031f519c;
LAB_031f51b4:
            puVar20 = (ulong *)puVar20[3];
            goto joined_r0x031f51a0;
          }
LAB_031f51c0:
          *puVar20 = *puVar20 | 1;
          iVar9 = FUN_031f5c70(puVar24,puVar4,puVar2,&local_268,pcVar7,pcVar8);
          if (iVar9 < 0) break;
          if ((int)local_268 == 0) {
            puVar20 = (ulong *)puVar20[1];
            goto LAB_031f5214;
          }
          puVar15 = puVar20 + 2;
          if (-1 < (int)local_268) {
            puVar15 = puVar20 + 3;
          }
          puVar20 = (ulong *)*puVar15;
        } while (puVar20 != (ulong *)0x0);
        puVar20 = (ulong *)0x0;
      }
LAB_031f5214:
      DataMemoryBarrier(2,1);
      iVar9 = 3;
      puVar15 = unaff_x21;
      if (puVar20 != (ulong *)0x0) {
        iVar9 = 1;
        puVar15 = puVar20;
      }
      if (uVar19 != *(ulong *)puVar3) {
        iVar9 = 0;
        puVar15 = unaff_x21;
      }
      unaff_x21 = puVar15;
    } while (iVar9 == 0);
    if (iVar9 != 3) goto LAB_031f53f0;
    pMVar1 = (MutexType *)(param_1 + 0x30);
    nn::os::LockMutex(pMVar1);
    pcVar6 = local_88;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar20 = *(ulong **)(param_1 + 0x60);
      puVar24 = puVar20 + *(int *)(param_1 + 0x68);
      sVar11 = (long)pcStack_80 - (long)local_88;
      do {
        puVar21 = (ulong *)*puVar20;
        puVar17 = puVar21;
        while (uVar19 = *puVar17, ((uint)uVar19 >> 3 & 1) == 0) {
          if (((uVar19 & 1) != 0) || (puVar17 = (ulong *)puVar17[1], puVar17 == (ulong *)0x0))
          goto LAB_031f52f0;
        }
        if ((puVar17 != (ulong *)0x0) &&
           (pcVar22 = (char *)puVar17[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2],
           pcVar22 != (char *)0x0)) {
          sVar12 = strlen(pcVar22);
          if ((sVar12 != sVar11) || (iVar9 = memcmp(pcVar6,pcVar22,sVar11), iVar9 != 0))
          goto LAB_031f5330;
          goto LAB_031f52f4;
        }
LAB_031f52f0:
        if (sVar11 == 0) {
LAB_031f52f4:
          local_268 = (char *)((ulong)local_268 & 0xffffffff00000000);
          iVar9 = FUN_031f5c70(puVar21,local_118,local_118 + (long)(int)local_110 * 0x10,&local_268,
                               local_78,local_70);
          if ((int)local_268 != 0) {
            puVar21 = puVar15;
          }
          puVar15 = (ulong *)0x0;
          if ((iVar9 < 0) || (puVar15 = puVar21, (int)local_268 == 0)) {
            nn::os::UnlockMutex(pMVar1);
            goto LAB_031f53f0;
          }
        }
LAB_031f5330:
        puVar20 = puVar20 + 1;
      } while (puVar20 != puVar24);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  puVar15 = (ulong *)0x0;
LAB_031f53f0:
  lVar5 = local_110;
  uVar19 = (ulong)local_110._4_4_;
  local_110 = (ulong)local_110._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_118 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_118,uVar19 << 4);
  }
  return puVar15;
}


