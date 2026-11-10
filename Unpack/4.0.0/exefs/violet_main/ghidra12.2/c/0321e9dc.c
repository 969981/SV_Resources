/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0321e9dc; name: FUN_0321e9dc
 */


/* WARNING: Removing unreachable block (ram,0x0321f7e4) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0321e9dc(long *param_1,ulong *param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  code *pcVar15;
  FILE *pFVar16;
  undefined8 *puVar17;
  ushort uVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  char cVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  short *psVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  long *plVar30;
  short *psVar31;
  ulong uVar32;
  char *__s;
  byte bVar33;
  ulong *local_7b8;
  undefined8 local_7b0;
  long local_7a8;
  byte local_7a0;
  undefined1 local_79f;
  undefined2 local_79e;
  undefined4 local_79c;
  undefined8 local_798;
  ulong *local_790;
  undefined8 local_788;
  char *local_780;
  undefined8 local_778;
  undefined8 local_770;
  ulong local_768 [32];
  ulong *local_668;
  undefined8 local_660;
  ulong *local_658;
  undefined8 local_650;
  ulong local_648;
  byte local_640;
  undefined1 local_63f;
  undefined2 local_63e;
  undefined4 local_63c;
  undefined8 local_638;
  ulong *local_630;
  undefined8 local_628;
  char *local_620;
  undefined8 local_618;
  undefined8 local_610;
  ulong local_608 [120];
  undefined4 local_248 [2];
  ulong *local_240;
  undefined4 local_238 [2];
  char *local_230;
  undefined8 local_228;
  long local_220;
  byte local_218;
  undefined1 local_217;
  undefined2 local_216;
  undefined4 local_214;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  char local_1e0 [256];
  ulong local_e0;
  uint local_d8;
  long local_d0;
  byte local_c8;
  undefined1 local_c7;
  undefined2 local_c6;
  undefined4 local_c4;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  uint local_78;
  undefined4 local_74;
  uint local_70 [4];
  
  local_248[0] = 0;
  puVar12 = param_2;
  while (local_240 = param_2, (*puVar12 & 1) == 0) {
    puVar12 = (ulong *)puVar12[1];
    if (puVar12 == (ulong *)0x0) goto LAB_0321eaac;
  }
  if (puVar12 == (ulong *)0x0) goto LAB_0321eaac;
  uVar13 = *param_2;
  uVar9 = (uint)uVar13;
  puVar12 = param_2;
  if ((uVar13 & 1) == 0) {
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
  }
  if ((param_2 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 1)) {
    puVar12 = param_2;
    if ((uVar9 >> 0x14 & 1) == 0) {
      uVar25 = uVar13;
      do {
        if (((uVar25 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
        goto LAB_0321ead8;
        uVar25 = *puVar12;
        uVar9 = (uint)uVar25;
      } while ((uVar9 >> 0x14 & 1) == 0);
    }
    uVar25 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
    if ((short)puVar12[(ulong)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8)) +
                                    POPCOUNT((char)(uVar25 >> 0x10))) + 2] != 0) {
      return 0;
    }
  }
LAB_0321ead8:
  local_70[0] = 0;
  if (param_2 == (ulong *)0x0) {
    puVar12 = (ulong *)0x0;
  }
  else {
    puVar12 = param_2;
    if ((uVar13 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
        if (puVar12 == (ulong *)0x0) break;
      } while ((*puVar12 & 1) == 0);
    }
  }
  puVar14 = puVar12;
  do {
    uVar9 = (uint)*puVar14;
    if ((uVar9 >> 0xf & 1) != 0) {
      uVar13 = CONCAT44(uVar9,uVar9) & 0x7fff00007fff;
      if (((undefined8 *)
           puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2] ==
           (undefined8 *)0x0) ||
         (puVar14 = *(ulong **)
                     puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) +
                             2], puVar14 == (ulong *)0x0)) break;
      goto LAB_0321ebf8;
    }
  } while (((*puVar14 & 9) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
  puVar14 = puVar12;
LAB_0321ebf8:
  local_80 = puVar14;
  if (puVar14 != param_2) {
    pcVar15 = *(code **)(*param_1 + 0x10);
    if ((pcVar15 == (code *)0x0) ||
       (uVar13 = (*pcVar15)(puVar14,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) != 0))
    goto LAB_0321ec20;
    uVar13 = *(ulong *)(*param_1 + 0x28);
    if (uVar13 != 0) {
      bVar33 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(uVar13 + 0x50) < bVar33) {
        if (DAT_046aaf68 != '\0') goto LAB_03221be0;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_658 = (ulong *)0x0;
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar13;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_630 = (ulong *)0x0;
          local_628 = 0;
          local_620 = (char *)0x0;
          local_618 = 0;
          local_610 = 0;
          FUN_0322c554(&local_658,
                       "Type \'{}\' resolved to an unreachable type after resolving typedefs.",
                       &DAT_046aa4e8,param_2);
          local_63c = 0;
          local_620 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_618 = 0x325;
          FUN_0322c8e0(&local_658);
        }
        else {
LAB_03221be0:
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar13;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_628 = 0;
          local_620 = (char *)0x0;
          local_618 = 0;
          local_610 = 0;
          local_608[0]._0_1_ = '\0';
          local_650 = 0x10000000000;
          local_658 = local_608;
          local_630 = local_608;
          FUN_0322c554(&local_658,
                       "Type \'{}\' resolved to an unreachable type after resolving typedefs.",
                       &DAT_046aa4e8,param_2);
          local_63c = 0;
          local_620 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_618 = 0x325;
          if ((char)local_608[0] != '\0') {
            sVar7 = strlen((char *)local_608);
            *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))
                 = 10;
            printf("%s",local_608);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_630 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
        }
      }
    }
    local_658 = (ulong *)((ulong)local_658 & 0xffffffff00000000);
    FUN_0321e9cc(&local_658);
    uVar9 = (uint)local_658;
    goto joined_r0x0321ee4c;
  }
LAB_0321ec20:
  if ((*puVar14 & 1) == 0) {
    FUN_0321e9cc(local_70);
    uVar13 = *(ulong *)(*param_1 + 0x28);
    if (uVar13 != 0) {
      bVar33 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(uVar13 + 0x50) < bVar33) {
        if (DAT_046aaf68 != '\0') goto LAB_03221b28;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_658 = (ulong *)0x0;
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar13;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_630 = (ulong *)0x0;
          local_628 = 0;
          local_620 = (char *)0x0;
          local_618 = 0;
          local_610 = 0;
          FUN_0322c554(&local_658,
                       "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                       ,&DAT_046aa5e8,param_2,&local_80);
          local_620 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_618 = 0x326;
          FUN_0322c8e0(&local_658);
        }
        else {
LAB_03221b28:
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar13;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_628 = 0;
          local_620 = (char *)0x0;
          local_608[0]._0_1_ = '\0';
          local_618 = 0;
          local_610 = 0;
          local_650 = 0x10000000000;
          local_658 = local_608;
          local_630 = local_608;
          FUN_0322c554(&local_658,
                       "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                       ,&DAT_046aa5e8,param_2,&local_80);
          local_620 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_618 = 0x326;
          if ((char)local_608[0] != '\0') {
            sVar7 = strlen((char *)local_608);
            *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))
                 = 10;
            printf("%s",local_608);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_630 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
        }
      }
    }
    if (*(char *)*param_1 == '\0') goto LAB_0321ed20;
    goto LAB_0321ed8c;
  }
LAB_0321ed20:
  puVar12 = param_2;
  do {
    uVar9 = (uint)*puVar12;
    if ((uVar9 >> 0xd & 1) != 0) {
      if (puVar12 == (ulong *)0x0) break;
      uVar13 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
      bVar33 = POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8));
      local_88 = puVar12 + (ulong)bVar33 + 2;
      if (puVar12[(ulong)bVar33 + 2] == 0) {
        FUN_0321e9cc(local_70);
        uVar13 = *(ulong *)(*param_1 + 0x28);
        if (uVar13 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar13 + 0x50) < bVar33) {
            if (DAT_046aaf68 != '\0') goto LAB_03221e14;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              FUN_0322c554(&local_658,"Type \'{}\' has empty Opt::INHERITANCE.",&DAT_046aa4e8,
                           param_2);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x32b;
              FUN_0322c8e0(&local_658);
            }
            else {
LAB_03221e14:
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              local_608[0]._0_1_ = '\0';
              local_650 = 0x10000000000;
              local_658 = local_608;
              local_630 = local_608;
              FUN_0322c554(&local_658,"Type \'{}\' has empty Opt::INHERITANCE.",&DAT_046aa4e8,
                           param_2);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x32b;
              if ((char)local_608[0] != '\0') {
                sVar7 = strlen((char *)local_608);
                *(undefined2 *)
                 ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                printf("%s",local_608);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_630 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
            }
          }
        }
        if (*(char *)*param_1 != '\0') goto LAB_0321ed8c;
      }
      local_90 = local_80;
      goto LAB_0321ed70;
    }
  } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
  local_88 = (ulong *)0x0;
  goto LAB_0321ed8c;
  while (((*local_90 & 1) == 0 && (local_90 = (ulong *)local_90[1], local_90 != (ulong *)0x0))) {
LAB_0321ed70:
    uVar9 = (uint)*local_90;
    if ((uVar9 >> 0xd & 1) != 0) {
      if (local_90 == (ulong *)0x0) break;
      uVar13 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
      local_90 = local_90 +
                 (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2;
      goto LAB_0321f158;
    }
  }
  local_90 = (ulong *)0x0;
LAB_0321f158:
  uVar13 = FUN_031dd3c0(&local_88,&local_90);
  if ((uVar13 & 1) == 0) {
    FUN_0321e9cc(local_70);
    lVar8 = *(long *)(*param_1 + 0x28);
    if (lVar8 != 0) {
      bVar33 = *(byte *)(*param_1 + 0x30);
      cVar22 = DAT_046aaf68;
      if (*(byte *)(lVar8 + 0x50) < bVar33) {
        if (DAT_046aaf68 == '\0') goto LAB_0321ed8c;
        cVar22 = '\x01';
      }
      bVar1 = cVar22 != '\0';
      if (bVar1) {
        local_230 = (char *)0x0;
        local_217 = 0;
        local_216 = 0;
        local_214 = 0;
        local_220 = lVar8;
        local_218 = bVar33;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar6);
        local_230 = local_1e0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0[0] = '\0';
        local_228 = 0x10000000000;
        uVar13 = *local_88;
        local_650 = CONCAT44(local_650._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_658 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        uVar13 = *local_88;
        local_7b0 = CONCAT44(local_7b0._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_7b8 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        uVar13 = *local_90;
        local_d8 = (uint)uVar13 & 3;
        local_e0 = (uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff;
        uVar13 = *local_90;
        local_660 = CONCAT44(local_660._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_668 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        local_208 = local_230;
        FUN_0322c554(&local_230,
                     "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                     ,&DAT_046aa600,param_2,&local_658,(ulong)&local_7b8 | 4,&local_80,&local_e0,
                     (ulong)&local_668 | 4);
        local_1f8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_1f0 = CONCAT44(local_1f0._4_4_,0x32f);
        puVar19 = &local_1f0;
      }
      else {
        local_e0 = 0;
        local_c7 = 0;
        local_c6 = 0;
        local_c4 = 0;
        local_d0 = lVar8;
        local_c8 = bVar33;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_c0 = nn::os::GetThreadId(pTVar6);
        local_b0 = 0;
        local_a8 = (char *)0x0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b8 = 0;
        uVar13 = *local_88;
        local_650 = CONCAT44(local_650._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_658 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        uVar13 = *local_88;
        local_228 = CONCAT44(local_228._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_230 = (char *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        uVar13 = *local_90;
        local_7b0 = CONCAT44(local_7b0._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_7b8 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        uVar13 = *local_90;
        local_660 = CONCAT44(local_660._4_4_,(int)uVar13) & 0xffffffff00000003;
        local_668 = (ulong *)((uVar13 & 0x1fffc) << 0x1e | uVar13 >> 0x11 & 0xffffffff);
        FUN_0322c554(&local_e0,
                     "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                     ,&DAT_046aa600,param_2,&local_658,(ulong)&local_230 | 4,&local_80,&local_7b8,
                     (ulong)&local_668 | 4);
        local_a8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_a0 = CONCAT44(local_a0._4_4_,0x32f);
        puVar19 = &local_a0;
      }
      *(undefined4 *)((long)puVar19 + 4) = 0;
      if (bVar1) {
        if (local_1e0[0] != '\0') {
          sVar7 = strlen(local_1e0);
          (local_1e0 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
          (local_1e0 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
          printf("%s",local_1e0);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
        if (((ulong)local_208 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_208 + -1,0);
        }
      }
      if ((!bVar1) && (FUN_0322c8e0(&local_e0), (local_b8 & 1) != 0)) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_b8 - 1,0);
      }
    }
  }
LAB_0321ed8c:
  local_658 = (ulong *)CONCAT44(local_658._4_4_,local_70[0]);
  uVar9 = local_70[0];
joined_r0x0321ee4c:
  if (((int)uVar9 < 0) && (FUN_0321e9cc(local_248), *(char *)*param_1 != '\0')) {
    return local_248[0];
  }
  uVar13 = *local_240;
  puVar12 = local_240;
  if ((uVar13 & 1) == 0) {
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
  }
  if ((local_240 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
    local_7b8 = (ulong *)local_240[1];
    puVar12 = local_7b8;
    if ((uVar13 & 1) == 0) {
      do {
        local_7b8 = (ulong *)puVar12[1];
        uVar13 = *puVar12;
        puVar12 = local_7b8;
      } while ((uVar13 & 1) == 0);
    }
    puVar12 = local_240;
    if (local_7b8 != (ulong *)0x0) {
      do {
        uVar9 = (uint)*puVar12;
        if ((uVar9 >> 0x14 & 1) != 0) {
          if (puVar12 == (ulong *)0x0) break;
          uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
          uVar18 = (ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                 POPCOUNT((char)(uVar13 >> 8)) +
                                                POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          goto LAB_0321eef0;
        }
      } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
      uVar18 = 0;
LAB_0321eef0:
      puVar12 = local_7b8;
      do {
        uVar9 = (uint)*puVar12;
        if ((uVar9 >> 0x14 & 1) != 0) {
          uVar23 = 0;
          if (puVar12 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            uVar23 = (ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                   POPCOUNT((char)(uVar13 >> 8)) +
                                                  POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
          goto LAB_0321ef38;
        }
        if ((*puVar12 & 1) != 0) {
          uVar23 = 0;
          goto LAB_0321ef38;
        }
        puVar12 = (ulong *)puVar12[1];
      } while (puVar12 != (ulong *)0x0);
      uVar23 = 0;
LAB_0321ef38:
      if (uVar18 < uVar23) {
        FUN_0321e9cc(local_248);
        uVar13 = *(ulong *)(*param_1 + 0x28);
        if (uVar13 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar13 + 0x50) < bVar33) {
            if (DAT_046aaf68 != '\0') goto LAB_03221c98;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              FUN_0322c554(&local_658,"Type \'{}\' is smaller than parent type \'{}\'",
                           PTR_DAT_047e5f30,&local_240,&local_7b8);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 600;
              FUN_0322c8e0(&local_658);
            }
            else {
LAB_03221c98:
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              local_650 = 0x10000000000;
              local_608[0]._0_1_ = '\0';
              local_658 = local_608;
              local_630 = local_608;
              FUN_0322c554(&local_658,"Type \'{}\' is smaller than parent type \'{}\'",
                           PTR_DAT_047e5f30,&local_240,&local_7b8);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 600;
              if ((char)local_608[0] != '\0') {
                sVar7 = strlen((char *)local_608);
                *(undefined2 *)
                 ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                printf("%s",local_608);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_630 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
            }
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_248[0];
        }
      }
      puVar12 = local_7b8;
      do {
        uVar9 = (uint)*puVar12;
        if ((uVar9 >> 0x17 & 1) != 0) {
          if (puVar12 == (ulong *)0x0) break;
          uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
          psVar26 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                   POPCOUNT((char)(uVar13 >> 8)) +
                                                  POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          if (psVar26 == (short *)0x0) break;
          psVar31 = psVar26 + 4;
          psVar26 = psVar31 + (long)*psVar26 * 4;
          goto LAB_0321f09c;
        }
      } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
      psVar31 = (short *)0x0;
      psVar26 = (short *)0x0;
LAB_0321f09c:
      if ((int)((ulong)((long)psVar26 - (long)psVar31) >> 3) != 0) {
        puVar12 = local_240;
        do {
          uVar9 = (uint)*puVar12;
          if ((uVar9 >> 0x17 & 1) != 0) {
            if (puVar12 == (ulong *)0x0) break;
            uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
            psVar26 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                     POPCOUNT((char)(uVar13 >> 8)) +
                                                    POPCOUNT((char)(uVar13 >> 0x10))) + 2];
            if (psVar26 == (short *)0x0) break;
            psVar31 = psVar26 + 4;
            psVar26 = psVar31 + (long)*psVar26 * 4;
            goto LAB_0321f104;
          }
        } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
        psVar31 = (short *)0x0;
        psVar26 = (short *)0x0;
LAB_0321f104:
        puVar12 = local_7b8;
        if ((int)((ulong)((long)psVar26 - (long)psVar31) >> 3) != 0) {
          do {
            uVar9 = (uint)*puVar12;
            if ((uVar9 >> 0x17 & 1) != 0) {
              psVar26 = (short *)0x0;
              if (puVar12 != (ulong *)0x0) {
                uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
                psVar31 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                         POPCOUNT((char)(uVar13 >> 8)) +
                                                        POPCOUNT((char)(uVar13 >> 0x10))) + 2];
                psVar26 = (short *)0x0;
                if (psVar31 != (short *)0x0) {
                  psVar26 = psVar31 + (long)*psVar31 * 4 + 4;
                }
              }
              goto LAB_0321f398;
            }
            if ((*puVar12 & 1) != 0) {
              psVar26 = (short *)0x0;
              goto LAB_0321f398;
            }
            puVar12 = (ulong *)puVar12[1];
          } while (puVar12 != (ulong *)0x0);
          psVar26 = (short *)0x0;
LAB_0321f398:
          local_668 = *(ulong **)(psVar26 + -4);
          uVar13 = *local_668;
          uVar9 = (uint)uVar13;
          puVar12 = local_668;
          if ((uVar9 >> 0x11 & 1) == 0) {
            uVar24 = 0;
          }
          else {
            uVar25 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
            uVar24 = (uint)(ushort)local_668[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                           POPCOUNT((char)(uVar25 >> 8)) +
                                                          POPCOUNT((char)(uVar25 >> 0x10))) + 2];
          }
          while ((uVar9 >> 0x14 & 1) == 0) {
            if ((uVar13 & 1) != 0) {
              uVar10 = 0;
              goto LAB_0321f4ac;
            }
            puVar12 = (ulong *)puVar12[1];
            uVar10 = 0;
            if (puVar12 == (ulong *)0x0) goto LAB_0321f4ac;
            uVar13 = *puVar12;
            uVar9 = (uint)uVar13;
          }
          uVar10 = 0;
          if (puVar12 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            uVar10 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                         POPCOUNT((char)(uVar13 >> 8)) +
                                                        POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
LAB_0321f4ac:
          local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar10 + uVar24);
          puVar12 = local_240;
          do {
            uVar9 = (uint)*puVar12;
            if ((uVar9 >> 0x17 & 1) != 0) {
              plVar28 = (long *)0x0;
              if (puVar12 != (ulong *)0x0) {
                uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
                plVar28 = (long *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                        POPCOUNT((char)(uVar13 >> 8)) +
                                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2];
                if (plVar28 != (long *)0x0) {
                  plVar28 = plVar28 + 1;
                }
              }
              goto LAB_0321f500;
            }
            if ((*puVar12 & 1) != 0) {
              plVar28 = (long *)0x0;
              goto LAB_0321f500;
            }
            puVar12 = (ulong *)puVar12[1];
          } while (puVar12 != (ulong *)0x0);
          plVar28 = (long *)0x0;
LAB_0321f500:
          uVar9 = (uint)*(undefined8 *)*plVar28;
          if ((uVar9 >> 0x11 & 1) == 0) {
            uVar9 = 0;
          }
          else {
            uVar13 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
            uVar9 = (uint)*(ushort *)
                           ((undefined8 *)*plVar28 +
                           (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                        POPCOUNT((char)(uVar13 >> 0x10))) + 2);
          }
          local_88 = (ulong *)CONCAT44(local_88._4_4_,uVar9);
          if (uVar9 < uVar10 + uVar24) {
            FUN_0321e9cc(local_248);
            uVar13 = *(ulong *)(*param_1 + 0x28);
            if (uVar13 != 0) {
              bVar33 = *(byte *)(*param_1 + 0x30);
              if (*(byte *)(uVar13 + 0x50) < bVar33) {
                if (DAT_046aaf68 != '\0') goto LAB_03221f38;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_658 = (ulong *)0x0;
                  local_63f = 0;
                  local_63e = 0;
                  local_63c = 0;
                  local_648 = uVar13;
                  local_640 = bVar33;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_638 = nn::os::GetThreadId(pTVar6);
                  local_630 = (ulong *)0x0;
                  local_628 = 0;
                  local_620 = (char *)0x0;
                  local_618 = 0;
                  local_610 = 0;
                  puVar12 = local_240;
                  do {
                    uVar9 = (uint)*puVar12;
                    if ((uVar9 >> 0x17 & 1) != 0) {
                      if (puVar12 == (ulong *)0x0) break;
                      uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
                      if (puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                POPCOUNT((char)(uVar13 >> 8)) +
                                               POPCOUNT((char)(uVar13 >> 0x10))) + 2] == 0) break;
                      lVar8 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                    POPCOUNT((char)(uVar13 >> 8)) +
                                                   POPCOUNT((char)(uVar13 >> 0x10))) + 2] + 8;
                      goto LAB_0321f5f4;
                    }
                  } while (((*puVar12 & 1) == 0) &&
                          (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
                  lVar8 = 0;
LAB_0321f5f4:
                  FUN_0322c554(&local_658,
                               "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                               ,&DAT_046aa638,lVar8,&local_88,&local_668,&local_80);
                  local_620 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_618 = 0x261;
                  FUN_0322c8e0(&local_658);
                }
                else {
LAB_03221f38:
                  local_658 = (ulong *)0x0;
                  local_63f = 0;
                  local_63e = 0;
                  local_63c = 0;
                  local_648 = uVar13;
                  local_640 = bVar33;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_638 = nn::os::GetThreadId(pTVar6);
                  local_628 = 0;
                  local_620 = (char *)0x0;
                  local_608[0]._0_1_ = '\0';
                  local_650 = 0x10000000000;
                  local_618 = 0;
                  local_610 = 0;
                  puVar12 = local_240;
                  do {
                    uVar9 = (uint)*puVar12;
                    if ((uVar9 >> 0x17 & 1) != 0) {
                      if (puVar12 == (ulong *)0x0) break;
                      uVar13 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
                      if (puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                POPCOUNT((char)(uVar13 >> 8)) +
                                               POPCOUNT((char)(uVar13 >> 0x10))) + 2] == 0) break;
                      lVar8 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                    POPCOUNT((char)(uVar13 >> 8)) +
                                                   POPCOUNT((char)(uVar13 >> 0x10))) + 2] + 8;
                      goto LAB_0322231c;
                    }
                  } while (((*puVar12 & 1) == 0) &&
                          (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
                  lVar8 = 0;
LAB_0322231c:
                  local_658 = local_608;
                  local_630 = local_608;
                  FUN_0322c554(&local_658,
                               "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                               ,&DAT_046aa638,lVar8,&local_88,&local_668,&local_80);
                  local_620 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_618 = 0x261;
                  if ((char)local_608[0] != '\0') {
                    sVar7 = strlen((char *)local_608);
                    *(undefined2 *)
                     ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                    printf("%s",local_608);
                    fflush(*(FILE **)PTR_stdout_047cb860);
                  }
                }
                if (((ulong)local_630 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
                }
              }
            }
            if (*(char *)*param_1 != '\0') {
              return local_248[0];
            }
          }
        }
      }
    }
    uVar13 = *local_240;
  }
  puVar2 = PTR_DAT_047e5c18;
  if (((((uint)uVar13 >> 0xe & 1) != 0) &&
      (uVar9 = (uint)uVar13 & 0x3fff,
      puVar12 = (ulong *)local_240[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                POPCOUNT((char)(uVar9 >> 8))) + 2],
      puVar12 != (ulong *)0x0)) && (uVar25 = *puVar12, 0 < (int)uVar25)) {
    pFVar16 = *(FILE **)PTR_stdout_047cb860;
    uVar13 = 0;
    do {
      local_7b8 = (ulong *)puVar12[uVar13 * 2 + 1];
      if (local_7b8 == (ulong *)0x0) {
        FUN_0321e9cc(local_248);
        uVar4 = *(ulong *)(*param_1 + 0x28);
        if (uVar4 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar4 + 0x50) < bVar33) {
            if (DAT_046aaf68 == '\0') goto LAB_0321fa68;
          }
          else if (DAT_046aaf68 == '\0') {
            local_658 = (ulong *)0x0;
            local_63f = 0;
            local_63e = 0;
            local_63c = 0;
            local_648 = uVar4;
            local_640 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_638 = nn::os::GetThreadId(pTVar6);
            local_610 = 0;
            local_630 = (ulong *)0x0;
            local_628 = 0;
            local_620 = (char *)0x0;
            local_618 = 0;
            FUN_0322c554(&local_658,"Type \'{}\' has null interface type.",puVar2,&local_240);
            local_618 = 0x26e;
            goto LAB_0321fa38;
          }
          local_658 = (ulong *)0x0;
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar4;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_628 = 0;
          local_620 = (char *)0x0;
          local_618 = 0;
          local_610 = 0;
          local_608[0]._0_1_ = '\0';
          local_650 = 0x10000000000;
          local_658 = local_608;
          local_630 = local_608;
          FUN_0322c554(&local_658,"Type \'{}\' has null interface type.",puVar2,&local_240);
          local_618 = 0x26e;
LAB_0321fc30:
          local_620 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          if ((char)local_608[0] != '\0') {
            sVar7 = strlen((char *)local_608);
            *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))
                 = 10;
            printf("%s",local_608);
            fflush(pFVar16);
          }
LAB_0321fa44:
          if (((ulong)local_630 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
          }
        }
      }
      else {
        pcVar15 = *(code **)(*param_1 + 0x10);
        if ((pcVar15 == (code *)0x0) ||
           (uVar4 = (*pcVar15)(local_7b8,*(undefined8 *)(*param_1 + 0x18)), (uVar4 & 1) != 0)) {
          puVar14 = local_7b8;
          if ((*local_7b8 & 1) == 0) {
            do {
              puVar14 = (ulong *)puVar14[1];
            } while ((*puVar14 & 1) == 0);
          }
          if ((local_7b8 == (ulong *)0x0) || ((puVar14[2] & 0x1f) != 7)) {
            FUN_0321e9cc(local_248);
            uVar4 = *(ulong *)(*param_1 + 0x28);
            if (uVar4 != 0) {
              bVar33 = *(byte *)(*param_1 + 0x30);
              if (*(byte *)(uVar4 + 0x50) < bVar33) {
                if (DAT_046aaf68 == '\0') goto LAB_0321fa68;
              }
              else if (DAT_046aaf68 == '\0') {
                local_658 = (ulong *)0x0;
                local_63f = 0;
                local_63e = 0;
                local_63c = 0;
                local_648 = uVar4;
                local_640 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_638 = nn::os::GetThreadId(pTVar6);
                local_630 = (ulong *)0x0;
                local_628 = 0;
                local_620 = (char *)0x0;
                local_618 = 0;
                local_610 = 0;
                FUN_0322c554(&local_658,
                             "Type \'{}\' has interface \'{}\' which is not a record type.",
                             PTR_DAT_047e5f30,&local_240,&local_7b8);
                local_618 = 0x272;
                goto LAB_0321fa38;
              }
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar4;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              local_650 = 0x10000000000;
              local_608[0]._0_1_ = '\0';
              local_658 = local_608;
              local_630 = local_608;
              FUN_0322c554(&local_658,"Type \'{}\' has interface \'{}\' which is not a record type."
                           ,PTR_DAT_047e5f30,&local_240,&local_7b8);
              local_618 = 0x272;
              goto LAB_0321fc30;
            }
          }
          else {
            puVar17 = (undefined8 *)puVar12[uVar13 * 2 + 1];
            plVar30 = (long *)0x0;
            plVar28 = (long *)0x0;
            puVar19 = (undefined8 *)0x0;
            do {
              plVar28 = plVar28 + 1;
              puVar27 = puVar19;
              if (plVar30 <= plVar28) {
                if (puVar17 == puVar19) goto LAB_0321fa74;
                psVar26 = (short *)0x0;
                puVar27 = (undefined8 *)0x0;
                puVar29 = puVar17;
                do {
                  if (((uint)*puVar29 >> 0x17 & 1) != 0) {
                    uVar9 = (uint)*puVar29 & 0x7fffff;
                    psVar31 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                             POPCOUNT((char)(uVar9 >> 8)) +
                                                            POPCOUNT((char)(uVar9 >> 0x10))) + 2];
                    if (psVar31 != (short *)0x0) {
                      if ((int)psVar31[1] + (int)*psVar31 != 0) {
                        psVar26 = psVar31;
                        puVar27 = puVar29;
                      }
                    }
                  }
                  puVar29 = (undefined8 *)puVar29[1];
                } while (puVar29 != puVar19);
                if (puVar27 == (undefined8 *)0x0) goto LAB_0321fa74;
                plVar28 = (long *)(psVar26 + 4);
                plVar30 = plVar28 + (long)psVar26[1] + (long)*psVar26;
              }
              uVar9 = (uint)*(undefined8 *)*plVar28;
              puVar19 = puVar27;
            } while (((uVar9 >> 0x11 & 1) == 0) ||
                    (uVar9 = uVar9 & 0x1ffff,
                    (*(ushort *)
                      (*plVar28 +
                      (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                   POPCOUNT((char)(uVar9 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
            FUN_0321e9cc(local_248);
            uVar4 = *(ulong *)(*param_1 + 0x28);
            if (uVar4 != 0) {
              bVar33 = *(byte *)(*param_1 + 0x30);
              if (bVar33 <= *(byte *)(uVar4 + 0x50)) {
                if (DAT_046aaf68 != '\0') goto LAB_0321fbc4;
                local_658 = (ulong *)0x0;
                local_63f = 0;
                local_63e = 0;
                local_63c = 0;
                local_648 = uVar4;
                local_640 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_638 = nn::os::GetThreadId(pTVar6);
                local_630 = (ulong *)0x0;
                local_628 = 0;
                local_620 = (char *)0x0;
                local_618 = 0;
                local_610 = 0;
                FUN_0322c554(&local_658,
                             "Type \'{}\' has interface \'{}\' with non-empty decl array.",
                             PTR_DAT_047e5f30,&local_240,&local_7b8);
                local_618 = 0x278;
LAB_0321fa38:
                local_620 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                FUN_0322c8e0(&local_658);
                goto LAB_0321fa44;
              }
              if (DAT_046aaf68 != '\0') {
LAB_0321fbc4:
                local_658 = (ulong *)0x0;
                local_63f = 0;
                local_63e = 0;
                local_63c = 0;
                local_648 = uVar4;
                local_640 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_638 = nn::os::GetThreadId(pTVar6);
                local_628 = 0;
                local_620 = (char *)0x0;
                local_618 = 0;
                local_610 = 0;
                local_650 = 0x10000000000;
                local_608[0]._0_1_ = '\0';
                local_658 = local_608;
                local_630 = local_608;
                FUN_0322c554(&local_658,
                             "Type \'{}\' has interface \'{}\' with non-empty decl array.",
                             PTR_DAT_047e5f30,&local_240,&local_7b8);
                local_618 = 0x278;
                goto LAB_0321fc30;
              }
            }
          }
        }
        else {
          FUN_0321e9cc(local_248);
          uVar4 = *(ulong *)(*param_1 + 0x28);
          if (uVar4 != 0) {
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(uVar4 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0321fa68;
            }
            else if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar4;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_610 = 0;
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              FUN_0322c554(&local_658,"Type \'{}\' has unreachable interface type (not in scope).",
                           puVar2,&local_240);
              local_618 = 0x26f;
              goto LAB_0321fa38;
            }
            local_658 = (ulong *)0x0;
            local_63f = 0;
            local_63e = 0;
            local_63c = 0;
            local_648 = uVar4;
            local_640 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_638 = nn::os::GetThreadId(pTVar6);
            local_628 = 0;
            local_620 = (char *)0x0;
            local_618 = 0;
            local_610 = 0;
            local_608[0]._0_1_ = '\0';
            local_650 = 0x10000000000;
            local_658 = local_608;
            local_630 = local_608;
            FUN_0322c554(&local_658,"Type \'{}\' has unreachable interface type (not in scope).",
                         puVar2,&local_240);
            local_618 = 0x26f;
            goto LAB_0321fc30;
          }
        }
      }
LAB_0321fa68:
      if (*(char *)*param_1 != '\0') {
        return local_248[0];
      }
LAB_0321fa74:
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar25 & 0xffffffff));
    uVar13 = *local_240;
  }
  puVar2 = PTR_PTR_047d1a50;
  if ((uVar13 & 1) != 0) {
    local_658 = &local_648;
    local_650 = 0x8000008000000000;
    local_668 = (ulong *)0x0;
    local_660 = -0x8000000000000000;
    puVar14 = (ulong *)local_240[1];
    puVar12 = local_240;
    if (puVar14 != (ulong *)0x0) {
      do {
        puVar12 = puVar14;
        while( true ) {
          uVar9 = (uint)*puVar12;
          if ((uVar9 >> 0x17 & 1) != 0) break;
          if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
          goto LAB_0321fd08;
        }
        uVar9 = uVar9 & 0x7fffff;
        psVar26 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                 POPCOUNT((char)(uVar9 >> 8)) +
                                                POPCOUNT((char)(uVar9 >> 0x10))) + 2];
        if (psVar26 != (short *)0x0) {
          plVar28 = (long *)(psVar26 + 4);
          plVar30 = plVar28 + (long)psVar26[1] + (long)*psVar26;
          goto LAB_0321fd10;
        }
LAB_0321fd08:
        plVar28 = (long *)0x0;
        plVar30 = (long *)0x0;
LAB_0321fd10:
        if ((int)(local_650._4_4_ & 0x7fffffff) <
            (int)local_650 + (int)((ulong)((long)plVar30 - (long)plVar28) >> 3)) {
          FUN_031b108c(&local_658,puVar2);
        }
        for (; plVar28 != plVar30; plVar28 = plVar28 + 1) {
          puVar12 = (ulong *)*plVar28;
          if (puVar12 != (ulong *)0x0) {
            while( true ) {
              uVar9 = (uint)*puVar12;
              if ((uVar9 >> 0x10 & 1) != 0) break;
              if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
              goto LAB_0321fdc0;
            }
            uVar9 = uVar9 & 0xffff;
            __s = (char *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))
                                               ) + 2];
            if (__s != (char *)0x0) {
              sVar7 = strlen(__s);
              sVar7 = (size_t)((int)sVar7 + 1);
              pvVar5 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
              memcpy(pvVar5,__s,sVar7);
              uVar13 = (ulong)pvVar5 | 1;
              goto LAB_0321fdc4;
            }
          }
LAB_0321fdc0:
          uVar13 = 0;
LAB_0321fdc4:
          lVar8 = (long)(int)local_660;
          if ((int)(local_660._4_4_ & 0x7fffffff) <= (int)local_660) {
            FUN_03055ddc(&local_668,puVar2,lVar8 + 1);
          }
          local_668[(int)local_660] = uVar13;
          local_660 = CONCAT44(local_660._4_4_,(int)(lVar8 + 1));
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      puVar12 = local_240;
    }
    do {
      uVar9 = (uint)*puVar12;
      if ((uVar9 >> 0x17 & 1) != 0) {
        if (puVar12 == (ulong *)0x0) break;
        uVar9 = uVar9 & 0x7fffff;
        psVar26 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                 POPCOUNT((char)(uVar9 >> 8)) +
                                                POPCOUNT((char)(uVar9 >> 0x10))) + 2];
        if (psVar26 == (short *)0x0) goto LAB_0321fe74;
        psVar31 = psVar26 + 4;
        psVar26 = psVar31 + ((long)psVar26[1] + (long)*psVar26) * 4;
        goto LAB_0321fe7c;
      }
      if ((*puVar12 & 1) != 0) {
LAB_0321fe74:
        psVar31 = (short *)0x0;
        psVar26 = (short *)0x0;
        goto LAB_0321fe7c;
      }
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
    psVar26 = (short *)0x0;
    psVar31 = (short *)0x0;
LAB_0321fe7c:
    if ((int)(local_650._4_4_ & 0x7fffffff) <
        (int)local_650 + (int)((ulong)((long)psVar26 - (long)psVar31) >> 3)) {
      FUN_031b108c(&local_658,PTR_PTR_047d1a50);
    }
    puVar2 = PTR_PTR_047d1a50;
    if (psVar31 != psVar26) {
      pFVar16 = *(FILE **)PTR_stdout_047cb860;
      do {
        local_80 = *(ulong **)psVar31;
        for (puVar12 = local_80; puVar12 != (ulong *)0x0; puVar12 = (ulong *)puVar12[1]) {
          uVar9 = (uint)*puVar12;
          if ((uVar9 >> 0x10 & 1) != 0) {
            uVar9 = uVar9 & 0xffff;
            puVar12 = (ulong *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                    POPCOUNT((char)(uVar9 >> 8))) + 2];
            goto LAB_0321ff2c;
          }
          if ((*puVar12 & 1) != 0) break;
        }
        puVar12 = (ulong *)0x0;
LAB_0321ff2c:
        if (0 < (int)local_650) {
          uVar13 = 0;
          do {
            if ((ulong *)local_658[uVar13] == puVar12) goto LAB_0321ff64;
            uVar13 = uVar13 + 1;
          } while ((local_650 & 0xffffffff) != uVar13);
        }
        uVar13 = 0xffffffff;
LAB_0321ff64:
        local_88 = puVar12;
        if (puVar12 == (ulong *)0x0) {
          uVar25 = 0;
        }
        else {
          sVar7 = strlen((char *)puVar12);
          sVar7 = (size_t)((int)sVar7 + 1);
          pvVar5 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
          memcpy(pvVar5,puVar12,sVar7);
          uVar25 = (ulong)pvVar5 | 1;
        }
        lVar8 = (long)(int)local_660;
        if ((int)(local_660._4_4_ & 0x7fffffff) <= (int)local_660) {
          FUN_03055ddc(&local_668,puVar2,lVar8 + 1);
        }
        local_668[(int)local_660] = uVar25;
        local_660 = CONCAT44(local_660._4_4_,(int)(lVar8 + 1));
        if ((-1 < (int)uVar13) &&
           ((*(char *)(*param_1 + 0x20) == '\0' || ((byte)*local_88 != 0x24)))) {
          FUN_0321e9cc(local_248);
          lVar8 = *(long *)(*param_1 + 0x28);
          if (lVar8 != 0) {
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 != '\0') goto LAB_03220648;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_7b8 = (ulong *)0x0;
                local_79f = 0;
                local_79e = 0;
                local_79c = 0;
                local_7a8 = lVar8;
                local_7a0 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_798 = nn::os::GetThreadId(pTVar6);
                local_790 = (ulong *)0x0;
                local_788 = 0;
                local_780 = (char *)0x0;
                local_778 = 0;
                local_770 = 0;
                FUN_0322c554(&local_7b8,
                             "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                             ,PTR_DAT_047e5c30,&local_240,&local_88);
                local_780 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_778 = 0x29c;
                FUN_0322c8e0(&local_7b8);
              }
              else {
LAB_03220648:
                local_7b8 = (ulong *)0x0;
                local_79f = 0;
                local_79e = 0;
                local_79c = 0;
                local_7a8 = lVar8;
                local_7a0 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_798 = nn::os::GetThreadId(pTVar6);
                local_788 = 0;
                local_780 = (char *)0x0;
                local_778 = 0;
                local_770 = 0;
                local_7b0 = 0x10000000000;
                local_768[0]._0_1_ = '\0';
                local_7b8 = local_768;
                local_790 = local_768;
                FUN_0322c554(&local_7b8,
                             "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                             ,PTR_DAT_047e5c30,&local_240,&local_88);
                local_780 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_778 = 0x29c;
                if ((char)local_768[0] != '\0') {
                  sVar7 = strlen((char *)local_768);
                  *(undefined2 *)
                   ((long)local_768 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                  printf("%s",local_768);
                  fflush(pFVar16);
                }
              }
              if (((ulong)local_790 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_790 + -1),0);
              }
            }
          }
          if (*(char *)*param_1 == '\0') goto LAB_032200cc;
LAB_03220ae0:
          bVar1 = false;
          local_238[0] = local_248[0];
          goto LAB_03220aec;
        }
LAB_032200cc:
        local_658[(int)local_650] = (ulong)local_88;
        local_650 = CONCAT44(local_650._4_4_,(int)local_650 + 1);
        local_90 = local_80;
        if (local_80 == (ulong *)0x0) {
          FUN_0321e9cc(local_248);
          lVar8 = *(long *)(*param_1 + 0x28);
          if (lVar8 != 0) {
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (bVar33 <= *(byte *)(lVar8 + 0x50)) {
              if (DAT_046aaf68 != '\0') goto LAB_03220704;
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              local_770 = 0;
              FUN_0322c554(&local_7b8,"Field \'{}\' of type \'{}\' has invalid NULL type.",
                           PTR_DAT_047e5e50,&local_88,&local_240);
              local_778 = 0x2a1;
LAB_032205fc:
              local_780 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              FUN_0322c8e0(&local_7b8);
              goto LAB_03220608;
            }
            if (DAT_046aaf68 != '\0') {
LAB_03220704:
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_788 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              local_770 = 0;
              local_7b0 = 0x10000000000;
              local_768[0]._0_1_ = '\0';
              local_7b8 = local_768;
              local_790 = local_768;
              FUN_0322c554(&local_7b8,"Field \'{}\' of type \'{}\' has invalid NULL type.",
                           PTR_DAT_047e5e50,&local_88,&local_240);
              local_778 = 0x2a1;
              goto LAB_03220a8c;
            }
          }
LAB_0322062c:
          if (*(char *)*param_1 != '\0') goto LAB_03220ae0;
        }
        else {
          if ((*local_80 & 1) != 0) {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 == 0) goto LAB_0322062c;
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0322062c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              local_770 = 0;
              FUN_0322c554(&local_7b8,"Field \'{}\' of type \'{}\' has non-decorator type.",
                           PTR_DAT_047e5e50,&local_88,&local_240);
              local_778 = 0x2a8;
              goto LAB_032205fc;
            }
            local_7b8 = (ulong *)0x0;
            local_79f = 0;
            local_79e = 0;
            local_79c = 0;
            local_7a8 = lVar8;
            local_7a0 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_798 = nn::os::GetThreadId(pTVar6);
            local_788 = 0;
            local_780 = (char *)0x0;
            local_778 = 0;
            local_770 = 0;
            local_7b0 = 0x10000000000;
            local_768[0]._0_1_ = '\0';
            local_7b8 = local_768;
            local_790 = local_768;
            FUN_0322c554(&local_7b8,"Field \'{}\' of type \'{}\' has non-decorator type.",
                         PTR_DAT_047e5e50,&local_88,&local_240);
            local_778 = 0x2a8;
LAB_03220a8c:
            local_780 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            if ((char)local_768[0] != '\0') {
              sVar7 = strlen((char *)local_768);
              *(undefined2 *)
               ((long)local_768 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
              printf("%s",local_768);
              fflush(pFVar16);
            }
LAB_03220608:
            if (((ulong)local_790 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_790 + -1),0);
            }
            goto LAB_0322062c;
          }
          iVar3 = FUN_03222e64(param_1);
          if (iVar3 < 0) {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 == 0) goto LAB_0322062c;
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0322062c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_770 = 0;
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              FUN_0322c554(&local_7b8,
                           "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                           ,&DAT_046aa660,&local_90,&local_88,&local_240);
              local_778 = 0x2a9;
              goto LAB_032205fc;
            }
            local_7b8 = (ulong *)0x0;
            local_79f = 0;
            local_79e = 0;
            local_79c = 0;
            local_7a8 = lVar8;
            local_7a0 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_798 = nn::os::GetThreadId(pTVar6);
            local_788 = 0;
            local_780 = (char *)0x0;
            local_778 = 0;
            local_770 = 0;
            local_768[0]._0_1_ = '\0';
            local_7b0 = 0x10000000000;
            local_7b8 = local_768;
            local_790 = local_768;
            FUN_0322c554(&local_7b8,
                         "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                         ,&DAT_046aa660,&local_90,&local_88,&local_240);
            local_778 = 0x2a9;
            goto LAB_03220a8c;
          }
          if (local_90[1] == 0) {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 == 0) goto LAB_0322062c;
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0322062c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_770 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              FUN_0322c554(&local_7b8,"Field \'{}\' has null type.",PTR_DAT_047e5e10,&local_80);
              local_778 = 0x2aa;
              goto LAB_032205fc;
            }
            local_7b8 = (ulong *)0x0;
            local_79f = 0;
            local_79e = 0;
            local_79c = 0;
            local_7a8 = lVar8;
            local_7a0 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_798 = nn::os::GetThreadId(pTVar6);
            local_788 = 0;
            local_780 = (char *)0x0;
            local_778 = 0;
            local_770 = 0;
            local_7b0 = 0x10000000000;
            local_768[0]._0_1_ = '\0';
            local_7b8 = local_768;
            local_790 = local_768;
            FUN_0322c554(&local_7b8,"Field \'{}\' has null type.",PTR_DAT_047e5e10,&local_80);
            local_778 = 0x2aa;
            goto LAB_03220a8c;
          }
          pcVar15 = *(code **)(*param_1 + 0x10);
          if ((pcVar15 != (code *)0x0) &&
             (uVar13 = (*pcVar15)(local_90[1],*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) == 0))
          {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 == 0) goto LAB_0322062c;
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0322062c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_770 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              FUN_0322c554(&local_7b8,"Type of field \'{}\' is not reachable.",PTR_DAT_047e5e10,
                           &local_80);
              local_778 = 0x2ad;
              goto LAB_032205fc;
            }
            local_7b8 = (ulong *)0x0;
            local_79f = 0;
            local_79e = 0;
            local_79c = 0;
            local_7a8 = lVar8;
            local_7a0 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_798 = nn::os::GetThreadId(pTVar6);
            local_788 = 0;
            local_780 = (char *)0x0;
            local_778 = 0;
            local_770 = 0;
            local_7b0 = 0x10000000000;
            local_768[0]._0_1_ = '\0';
            local_7b8 = local_768;
            local_790 = local_768;
            FUN_0322c554(&local_7b8,"Type of field \'{}\' is not reachable.",PTR_DAT_047e5e10,
                         &local_80);
            local_778 = 0x2ad;
            goto LAB_03220a8c;
          }
          puVar12 = local_90;
          if ((*local_90 & 1) == 0) {
            do {
              puVar12 = (ulong *)puVar12[1];
            } while ((*puVar12 & 1) == 0);
          }
          if ((local_90 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 0)) {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 != 0) {
              bVar33 = *(byte *)(*param_1 + 0x30);
              if (*(byte *)(lVar8 + 0x50) < bVar33) {
                if (DAT_046aaf68 != '\0') goto LAB_032208e4;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_7b8 = (ulong *)0x0;
                  local_79f = 0;
                  local_79e = 0;
                  local_79c = 0;
                  local_7a8 = lVar8;
                  local_7a0 = bVar33;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_798 = nn::os::GetThreadId(pTVar6);
                  local_790 = (ulong *)0x0;
                  local_788 = 0;
                  local_780 = (char *)0x0;
                  local_778 = 0;
                  local_770 = 0;
                  FUN_0322c554(&local_7b8,"Type \'{}\' has field \'{}\' with VOID type.",
                               PTR_DAT_047e5c30,&local_240,&local_88);
                  local_780 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_778 = 0x2b0;
                  FUN_0322c8e0(&local_7b8);
                }
                else {
LAB_032208e4:
                  local_7b8 = (ulong *)0x0;
                  local_79f = 0;
                  local_79e = 0;
                  local_79c = 0;
                  local_7a8 = lVar8;
                  local_7a0 = bVar33;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_798 = nn::os::GetThreadId(pTVar6);
                  local_788 = 0;
                  local_780 = (char *)0x0;
                  local_778 = 0;
                  local_770 = 0;
                  local_7b0 = 0x10000000000;
                  local_768[0]._0_1_ = '\0';
                  local_7b8 = local_768;
                  local_790 = local_768;
                  FUN_0322c554(&local_7b8,"Type \'{}\' has field \'{}\' with VOID type.",
                               PTR_DAT_047e5c30,&local_240,&local_88);
                  local_780 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_778 = 0x2b0;
                  if ((char)local_768[0] != '\0') {
                    sVar7 = strlen((char *)local_768);
                    *(undefined2 *)
                     ((long)local_768 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                    printf("%s",local_768);
                    fflush(pFVar16);
                  }
                }
                if (((ulong)local_790 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_790 + -1),0);
                }
              }
            }
            if (*(char *)*param_1 != '\0') goto LAB_03220ae0;
          }
          uVar13 = 0;
          puVar12 = local_90;
          do {
            uVar9 = (uint)*puVar12;
            if ((uVar9 >> 0x15 & 1) == 0) {
              uVar25 = 0;
            }
            else {
              uVar25 = CONCAT44(uVar9,uVar9) & 0x1fffff001fffff;
              uVar25 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8))
                                            + POPCOUNT((char)(uVar25 >> 0x10))) + 2];
            }
            uVar13 = uVar25 | uVar13;
          } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0)
                  );
          if (((uint)uVar13 >> 1 & 1) != 0) {
            FUN_0321e9cc(local_248);
            lVar8 = *(long *)(*param_1 + 0x28);
            if (lVar8 == 0) goto LAB_0322062c;
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(lVar8 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_0322062c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_7b8 = (ulong *)0x0;
              local_79f = 0;
              local_79e = 0;
              local_79c = 0;
              local_7a8 = lVar8;
              local_7a0 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_798 = nn::os::GetThreadId(pTVar6);
              local_770 = 0;
              local_790 = (ulong *)0x0;
              local_788 = 0;
              local_780 = (char *)0x0;
              local_778 = 0;
              FUN_0322c554(&local_7b8,"Type \'{}\' has field \'{}\' with abstract type ({}).",
                           &DAT_046aa660,&local_240,&local_88,&local_90);
              local_778 = 0x2b1;
              goto LAB_032205fc;
            }
            local_7b8 = (ulong *)0x0;
            local_79f = 0;
            local_79e = 0;
            local_79c = 0;
            local_7a8 = lVar8;
            local_7a0 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_798 = nn::os::GetThreadId(pTVar6);
            local_788 = 0;
            local_780 = (char *)0x0;
            local_778 = 0;
            local_770 = 0;
            local_768[0]._0_1_ = '\0';
            local_7b0 = 0x10000000000;
            local_7b8 = local_768;
            local_790 = local_768;
            FUN_0322c554(&local_7b8,"Type \'{}\' has field \'{}\' with abstract type ({}).",
                         &DAT_046aa660,&local_240,&local_88,&local_90);
            local_778 = 0x2b1;
            goto LAB_03220a8c;
          }
        }
        psVar31 = psVar31 + 4;
        if (psVar31 == psVar26) break;
      } while( true );
    }
    bVar1 = true;
LAB_03220aec:
    puVar12 = local_668;
    puVar2 = PTR_DAT_047d1a08;
    if ((int)local_660 != 0) {
      lVar8 = (long)(int)local_660 << 3;
      do {
        uVar13 = *(ulong *)((long)puVar12 + lVar8 + -8);
        if ((uVar13 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,uVar13 - 1,0);
        }
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar8 = local_660;
    uVar13 = (ulong)local_660._4_4_;
    local_660 = (ulong)local_660._4_4_ << 0x20;
    if ((-1 < lVar8) && (local_668 != (ulong *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_668,uVar13 << 3);
    }
    uVar13 = local_650;
    uVar25 = (ulong)local_650._4_4_;
    local_650 = (ulong)local_650._4_4_ << 0x20;
    if ((-1 < (long)uVar13) && (local_658 != (ulong *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_658,uVar25 << 3);
    }
    if (!bVar1) {
      return local_238[0];
    }
    uVar13 = *local_240;
  }
  puVar12 = local_240;
  puVar14 = local_240;
  if ((uVar13 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if ((local_240 == (ulong *)0x0) || ((puVar14[2] & 0x1f) != 6)) goto LAB_03220e00;
  puVar20 = local_240;
  puVar14 = local_240;
  if (((uint)uVar13 >> 1 & 1) == 0) {
    while (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0) {
      if (((byte)*puVar20 >> 1 & 1) != 0) goto LAB_03220bd8;
    }
    local_668 = (ulong *)0x0;
LAB_03220c28:
    do {
      uVar13 = *puVar14;
      if (((uint)uVar13 >> 2 & 1) != 0) {
        if ((undefined *)puVar14[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2] == PTR_DAT_047e5f38) {
          uVar13 = *(ulong *)(*param_1 + 0x28);
          if (uVar13 != 0) {
            bVar33 = *(byte *)(*param_1 + 0x30);
            if (*(byte *)(uVar13 + 0x50) < bVar33) {
              if (DAT_046aaf68 == '\0') goto LAB_03220dec;
            }
            else if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              FUN_0322c554(&local_658,"Referenced pointer type \'{}\' has no subtype",&DAT_046aa680,
                           puVar12);
              local_618 = 0x2f1;
              goto LAB_03220db8;
            }
            local_658 = (ulong *)0x0;
            local_63f = 0;
            local_63e = 0;
            local_63c = 0;
            local_648 = uVar13;
            local_640 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_638 = nn::os::GetThreadId(pTVar6);
            local_658 = local_608;
            local_628 = 0;
            local_620 = (char *)0x0;
            local_618 = 0;
            local_610 = 0;
            local_608[0]._0_1_ = '\0';
            local_650 = 0x10000000000;
            local_630 = local_658;
            FUN_0322c554(&local_658,"Referenced pointer type \'{}\' has no subtype",&DAT_046aa680,
                         puVar12);
            local_618 = 0x2f1;
LAB_032220b4:
            local_620 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_63c = 0;
            if ((char)local_608[0] != '\0') {
              sVar7 = strlen((char *)local_608);
              *(undefined2 *)
               ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
              printf("%s",local_608);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
            goto LAB_03220dc8;
          }
          goto LAB_03220dec;
        }
        break;
      }
      puVar20 = puVar14 + 1;
      puVar14 = (ulong *)*puVar20;
    } while ((ulong *)*puVar20 != (ulong *)0x0);
  }
  else {
LAB_03220bd8:
    puVar20 = (ulong *)puVar20[3];
    local_668 = puVar20;
    if (puVar20 == (ulong *)0x0) goto LAB_03220c28;
    pcVar15 = *(code **)(*param_1 + 0x10);
    puVar14 = puVar12;
    if ((pcVar15 == (code *)0x0) ||
       (uVar13 = (*pcVar15)(puVar20,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) != 0)) {
      while (uVar13 = *puVar14, ((uint)uVar13 >> 2 & 1) == 0) {
        puVar14 = (ulong *)puVar14[1];
        if (puVar14 == (ulong *)0x0) goto LAB_03220e00;
      }
      if (!(puVar20 == (ulong *)PTR_DAT_047e5f40 ||
           (undefined *)puVar14[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2] != PTR_DAT_047e5f38)) {
        puVar14 = puVar20;
        do {
          uVar9 = (uint)*puVar14;
          if ((uVar9 >> 0xd & 1) != 0) {
            if (puVar14 == (ulong *)0x0) break;
            uVar9 = uVar9 & 0x1fff;
            local_658 = puVar14 + (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))
                                               ) + 2;
            goto LAB_03221028;
          }
        } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
        local_658 = (ulong *)0x0;
LAB_03221028:
        local_7b8 = (ulong *)PTR_DAT_047e5f40;
        do {
          uVar9 = (uint)*local_7b8;
          if ((uVar9 >> 0xd & 1) != 0) {
            if (local_7b8 == (ulong *)0x0) break;
            uVar13 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            local_7b8 = local_7b8 +
                        (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2;
            if (local_658 != (ulong *)0x0) {
              uVar13 = FUN_031dd3c0(&local_658,&local_7b8);
              if ((puVar20 == (ulong *)PTR_DAT_047e5da8) || ((uVar13 & 1) != 0)) goto LAB_03220e00;
              goto LAB_032210f4;
            }
LAB_032210a0:
            if (puVar20 == (ulong *)PTR_DAT_047e5da8) goto LAB_03220e00;
            goto LAB_032210f4;
          }
        } while (((*local_7b8 & 1) == 0) &&
                (local_7b8 = (ulong *)local_7b8[1], local_7b8 != (ulong *)0x0));
        if (local_658 != (ulong *)0x0) goto LAB_032210a0;
        puVar14 = puVar20;
        do {
          if ((*puVar14 & 1) != 0) break;
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        puVar21 = (ulong *)PTR_DAT_047e5f40;
        do {
          if ((*puVar21 & 1) != 0) break;
          puVar21 = (ulong *)puVar21[1];
        } while (puVar21 != (ulong *)0x0);
        if (puVar20 == (ulong *)PTR_DAT_047e5da8 || puVar14 == puVar21) goto LAB_03220e00;
LAB_032210f4:
        puVar14 = puVar20;
        do {
          uVar9 = (uint)*puVar14;
          if ((uVar9 >> 0xd & 1) != 0) {
            if (puVar14 == (ulong *)0x0) break;
            uVar9 = uVar9 & 0x1fff;
            local_658 = puVar14 + (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))
                                               ) + 2;
            goto LAB_03221238;
          }
        } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
        local_658 = (ulong *)0x0;
LAB_03221238:
        local_7b8 = (ulong *)PTR_DAT_047e5da8;
        do {
          uVar9 = (uint)*local_7b8;
          if ((uVar9 >> 0xd & 1) != 0) {
            if (local_7b8 == (ulong *)0x0) break;
            uVar13 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            local_7b8 = local_7b8 +
                        (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2;
            if ((local_658 != (ulong *)0x0) &&
               (uVar13 = FUN_031dd3c0(&local_658,&local_7b8), (uVar13 & 1) != 0)) goto LAB_03220e00;
            goto LAB_032212d4;
          }
        } while (((*local_7b8 & 1) == 0) &&
                (local_7b8 = (ulong *)local_7b8[1], local_7b8 != (ulong *)0x0));
        local_7b8 = (ulong *)0x0;
        if (local_658 == (ulong *)0x0) {
          puVar14 = puVar20;
          do {
            if ((*puVar14 & 1) != 0) break;
            puVar14 = (ulong *)puVar14[1];
          } while (puVar14 != (ulong *)0x0);
          puVar21 = (ulong *)PTR_DAT_047e5da8;
          do {
            if ((*puVar21 & 1) != 0) break;
            puVar21 = (ulong *)puVar21[1];
          } while (puVar21 != (ulong *)0x0);
          if (puVar14 == puVar21) goto LAB_03220e00;
        }
LAB_032212d4:
        puVar14 = puVar20;
        do {
          uVar9 = (uint)*puVar14;
          if ((uVar9 >> 0xd & 1) != 0) {
            if (puVar14 == (ulong *)0x0) break;
            uVar9 = uVar9 & 0x1fff;
            local_658 = puVar14 + (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))
                                               ) + 2;
            puVar14 = (ulong *)PTR_DAT_047ddc28;
            while( true ) {
              uVar9 = (uint)*puVar14;
              if ((uVar9 >> 0xd & 1) != 0) break;
              if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
              goto LAB_03221344;
            }
            if (puVar14 == (ulong *)0x0) goto LAB_03221344;
            uVar13 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
            local_7b8 = puVar14 + (ulong)(byte)(POPCOUNT((char)uVar13) +
                                               POPCOUNT((char)(uVar13 >> 8))) + 2;
            uVar13 = FUN_031dd354(&local_658,&local_7b8);
            if ((uVar13 & 1) != 0) goto LAB_03220e00;
            goto LAB_03221354;
          }
        } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
        local_658 = (ulong *)0x0;
LAB_03221344:
        do {
          if (puVar20 == (ulong *)PTR_DAT_047ddc28) goto LAB_03220e00;
          puVar20 = (ulong *)puVar20[1];
        } while (puVar20 != (ulong *)0x0);
LAB_03221354:
        uVar13 = *(ulong *)(*param_1 + 0x28);
        if (uVar13 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar13 + 0x50) < bVar33) {
            if (DAT_046aaf68 == '\0') goto LAB_03220dec;
          }
          else if (DAT_046aaf68 == '\0') {
            local_658 = (ulong *)0x0;
            local_63f = 0;
            local_63e = 0;
            local_63c = 0;
            local_648 = uVar13;
            local_640 = bVar33;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_638 = nn::os::GetThreadId(pTVar6);
            local_630 = (ulong *)0x0;
            local_628 = 0;
            local_620 = (char *)0x0;
            local_618 = 0;
            local_610 = 0;
            FUN_0322c554(&local_658,
                         "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                         &DAT_046aa690,puVar12,&local_668);
            local_618 = 0x2f4;
            goto LAB_03220db8;
          }
          local_658 = (ulong *)0x0;
          local_63f = 0;
          local_63e = 0;
          local_63c = 0;
          local_648 = uVar13;
          local_640 = bVar33;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_638 = nn::os::GetThreadId(pTVar6);
          local_658 = local_608;
          local_628 = 0;
          local_620 = (char *)0x0;
          local_608[0]._0_1_ = '\0';
          local_618 = 0;
          local_610 = 0;
          local_650 = 0x10000000000;
          local_630 = local_658;
          FUN_0322c554(&local_658,
                       "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                       &DAT_046aa690,puVar12,&local_668);
          local_618 = 0x2f4;
          goto LAB_032220b4;
        }
        goto LAB_03220dec;
      }
    }
    else {
      uVar13 = *(ulong *)(*param_1 + 0x28);
      if (uVar13 == 0) goto LAB_03220dec;
      bVar33 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(uVar13 + 0x50) < bVar33) {
        if (DAT_046aaf68 != '\0') goto LAB_03221ecc;
        goto LAB_03220dec;
      }
      if (DAT_046aaf68 != '\0') {
LAB_03221ecc:
        local_658 = (ulong *)0x0;
        local_63f = 0;
        local_63e = 0;
        local_63c = 0;
        local_648 = uVar13;
        local_640 = bVar33;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_638 = nn::os::GetThreadId(pTVar6);
        local_658 = local_608;
        local_628 = 0;
        local_620 = (char *)0x0;
        local_618 = 0;
        local_610 = 0;
        local_608[0]._0_1_ = '\0';
        local_650 = 0x10000000000;
        local_630 = local_658;
        FUN_0322c554(&local_658,"Pointer type \'{}\' has unreachable pointee type.",&DAT_046aa680,
                     puVar12);
        local_618 = 0x2e9;
        goto LAB_032220b4;
      }
      local_658 = (ulong *)0x0;
      local_63f = 0;
      local_63e = 0;
      local_63c = 0;
      local_648 = uVar13;
      local_640 = bVar33;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_638 = nn::os::GetThreadId(pTVar6);
      local_630 = (ulong *)0x0;
      local_628 = 0;
      local_620 = (char *)0x0;
      local_618 = 0;
      local_610 = 0;
      FUN_0322c554(&local_658,"Pointer type \'{}\' has unreachable pointee type.",&DAT_046aa680,
                   puVar12);
      local_618 = 0x2e9;
LAB_03220db8:
      local_620 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      local_63c = 0;
      FUN_0322c8e0(&local_658);
LAB_03220dc8:
      if (((ulong)local_630 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
      }
LAB_03220dec:
      local_658 = (ulong *)((ulong)local_658 & 0xffffffff00000000);
      FUN_0321e9cc(&local_658);
      if (((int)(uint)local_658 < 0) && (FUN_0321e9cc(local_248), *(char *)*param_1 != '\0')) {
        return local_248[0];
      }
    }
  }
LAB_03220e00:
  puVar12 = local_240;
  puVar14 = local_240;
  if ((*local_240 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if ((local_240 != (ulong *)0x0) && ((puVar14[2] & 0x1f) == 8)) {
    local_668 = (ulong *)((ulong)local_668 & 0xffffffff00000000);
    puVar20 = local_240;
    puVar14 = local_240;
    if (((uint)*local_240 >> 1 & 1) == 0) {
      while (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0) {
        if (((byte)*puVar20 >> 1 & 1) != 0) goto LAB_03220e54;
      }
      local_7b8 = (ulong *)0x0;
LAB_03220ee4:
      do {
        if ((*puVar14 & 1) != 0) {
          if ((puVar14 != (ulong *)0x0) && ((int)(puVar14[2] >> 8) != 0)) {
            FUN_0321e9cc(&local_668);
            uVar13 = *(ulong *)(*param_1 + 0x28);
            if (uVar13 != 0) {
              bVar33 = *(byte *)(*param_1 + 0x30);
              if (bVar33 <= *(byte *)(uVar13 + 0x50)) {
                if (DAT_046aaf68 != '\0') goto LAB_03221f94;
                local_658 = (ulong *)0x0;
                local_63f = 0;
                local_63e = 0;
                local_63c = 0;
                local_648 = uVar13;
                local_640 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_638 = nn::os::GetThreadId(pTVar6);
                local_630 = (ulong *)0x0;
                local_628 = 0;
                local_620 = (char *)0x0;
                local_618 = 0;
                local_610 = 0;
                FUN_0322c554(&local_658,"Fixed array type {} must have a subtype",&DAT_046aa6a8,
                             puVar12);
                local_618 = 0x311;
LAB_03220fc0:
                local_620 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                FUN_0322c8e0(&local_658);
                goto LAB_03220fcc;
              }
              if (DAT_046aaf68 != '\0') {
LAB_03221f94:
                local_658 = (ulong *)0x0;
                local_63f = 0;
                local_63e = 0;
                local_63c = 0;
                local_648 = uVar13;
                local_640 = bVar33;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_638 = nn::os::GetThreadId(pTVar6);
                local_658 = local_608;
                local_628 = 0;
                local_620 = (char *)0x0;
                local_618 = 0;
                local_610 = 0;
                local_608[0]._0_1_ = '\0';
                local_650 = 0x10000000000;
                local_630 = local_658;
                FUN_0322c554(&local_658,"Fixed array type {} must have a subtype",&DAT_046aa6a8,
                             puVar12);
                local_618 = 0x311;
                goto LAB_03221ffc;
              }
            }
          }
          break;
        }
        puVar20 = puVar14 + 1;
        puVar14 = (ulong *)*puVar20;
      } while ((ulong *)*puVar20 != (ulong *)0x0);
    }
    else {
LAB_03220e54:
      local_7b8 = (ulong *)puVar20[3];
      if (local_7b8 == (ulong *)0x0) goto LAB_03220ee4;
      puVar14 = local_7b8;
      if ((*local_7b8 & 1) == 0) {
        do {
          puVar14 = (ulong *)puVar14[1];
        } while ((*puVar14 & 1) == 0);
      }
      if ((puVar14[2] & 0x1f) == 1) goto LAB_03221458;
      pcVar15 = *(code **)(*param_1 + 0x10);
      if ((pcVar15 != (code *)0x0) &&
         (uVar13 = (*pcVar15)(local_7b8,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) == 0)) {
        FUN_0321e9cc(&local_668);
        uVar13 = *(ulong *)(*param_1 + 0x28);
        if (uVar13 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar13 + 0x50) < bVar33) {
            if (DAT_046aaf68 != '\0') goto LAB_03222230;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              FUN_0322c554(&local_658,"Array type \'{}\' has unreachable element type.",
                           &DAT_046aa6a8,puVar12);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x305;
              FUN_0322c8e0(&local_658);
            }
            else {
LAB_03222230:
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              local_608[0]._0_1_ = '\0';
              local_650 = 0x10000000000;
              local_658 = local_608;
              local_630 = local_608;
              FUN_0322c554(&local_658,"Array type \'{}\' has unreachable element type.",
                           &DAT_046aa6a8,puVar12);
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x305;
              if ((char)local_608[0] != '\0') {
                sVar7 = strlen((char *)local_608);
                *(undefined2 *)
                 ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                printf("%s",local_608);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_630 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
            }
          }
        }
        if (*(char *)*param_1 != '\0') goto LAB_03221458;
      }
      puVar14 = puVar12;
      while ((*puVar14 & 1) == 0) {
        puVar14 = (ulong *)puVar14[1];
        if (puVar14 == (ulong *)0x0) goto LAB_03221458;
      }
      if ((puVar14 == (ulong *)0x0) || ((int)(puVar14[2] >> 8) < 1)) goto LAB_03221458;
      puVar14 = puVar12;
      do {
        uVar9 = (uint)*puVar14;
        if ((uVar9 >> 0x14 & 1) != 0) {
          uVar24 = 0;
          if (puVar14 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            uVar24 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                         POPCOUNT((char)(uVar13 >> 8)) +
                                                        POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
          goto LAB_032213ac;
        }
        if ((*puVar14 & 1) != 0) {
          uVar24 = 0;
          goto LAB_032213ac;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      uVar24 = 0;
LAB_032213ac:
      puVar14 = local_7b8;
      do {
        uVar9 = (uint)*puVar14;
        if ((uVar9 >> 0x14 & 1) != 0) {
          uVar10 = 0;
          if (puVar14 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            uVar10 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                         POPCOUNT((char)(uVar13 >> 8)) +
                                                        POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
          goto LAB_032213f4;
        }
        if ((*puVar14 & 1) != 0) {
          uVar10 = 0;
          goto LAB_032213f4;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      uVar10 = 0;
LAB_032213f4:
      puVar14 = puVar12;
      do {
        if ((*puVar14 & 1) != 0) {
          iVar3 = 0;
          if (puVar14 != (ulong *)0x0) {
            iVar3 = (int)(puVar14[2] >> 8);
          }
          goto LAB_0322141c;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      iVar3 = 0;
LAB_0322141c:
      if (uVar24 == iVar3 * uVar10) goto LAB_03221458;
      FUN_0321e9cc(&local_668);
      uVar13 = *(ulong *)(*param_1 + 0x28);
      if (uVar13 == 0) goto LAB_03221458;
      bVar33 = *(byte *)(*param_1 + 0x30);
      cVar22 = DAT_046aaf68;
      if (*(byte *)(uVar13 + 0x50) < bVar33) {
        if (DAT_046aaf68 == '\0') goto LAB_03221458;
        cVar22 = '\x01';
      }
      local_648 = uVar13;
      local_640 = bVar33;
      if (cVar22 == '\0') {
        local_658 = (ulong *)0x0;
        local_63f = 0;
        local_63e = 0;
        local_63c = 0;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_638 = nn::os::GetThreadId(pTVar6);
        local_630 = (ulong *)0x0;
        local_628 = 0;
        local_620 = (char *)0x0;
        local_618 = 0;
        local_610 = 0;
        puVar14 = puVar12;
        do {
          uVar9 = (uint)*puVar14;
          if ((uVar9 >> 0x14 & 1) != 0) {
            uVar24 = 0;
            if (puVar14 != (ulong *)0x0) {
              uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
              uVar24 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                           POPCOUNT((char)(uVar13 >> 8)) +
                                                          POPCOUNT((char)(uVar13 >> 0x10))) + 2];
            }
            goto LAB_03222548;
          }
          if ((*puVar14 & 1) != 0) {
            uVar24 = 0;
            goto LAB_03222548;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar24 = 0;
LAB_03222548:
        local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar24);
        puVar14 = puVar12;
        do {
          if ((*puVar14 & 1) != 0) {
            uVar11 = 0;
            if (puVar14 != (ulong *)0x0) {
              uVar11 = (undefined4)(puVar14[2] >> 8);
            }
            goto LAB_03222574;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar11 = 0;
LAB_03222574:
        local_88 = (ulong *)CONCAT44(local_88._4_4_,uVar11);
        puVar14 = local_7b8;
        while( true ) {
          uVar9 = (uint)*puVar14;
          if ((uVar9 >> 0x14 & 1) != 0) {
            uVar24 = 0;
            if (puVar14 != (ulong *)0x0) {
              uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
              uVar24 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                           POPCOUNT((char)(uVar13 >> 8)) +
                                                          POPCOUNT((char)(uVar13 >> 0x10))) + 2];
            }
            goto LAB_032225c0;
          }
          if ((*puVar14 & 1) != 0) break;
          puVar14 = (ulong *)puVar14[1];
          if (puVar14 == (ulong *)0x0) {
            uVar24 = 0;
LAB_032225c0:
            local_90 = (ulong *)CONCAT44(local_90._4_4_,uVar24);
            FUN_0322c554(&local_658,
                         "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                         ,&DAT_046aa6b8,puVar12,&local_80,&local_88,&local_7b8,&local_90);
            local_618 = 0x30b;
            goto LAB_03220fc0;
          }
        }
        uVar24 = 0;
        goto LAB_032225c0;
      }
      local_658 = (ulong *)0x0;
      local_63f = 0;
      local_63e = 0;
      local_63c = 0;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_638 = nn::os::GetThreadId(pTVar6);
      local_658 = local_608;
      local_628 = 0;
      local_620 = (char *)0x0;
      local_608[0]._0_1_ = '\0';
      local_650 = 0x10000000000;
      local_618 = 0;
      local_610 = 0;
      puVar14 = puVar12;
      do {
        uVar9 = (uint)*puVar14;
        if ((uVar9 >> 0x14 & 1) != 0) {
          local_70[0] = 0;
          if (puVar14 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            local_70[0] = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                              POPCOUNT((char)(uVar13 >> 8)) +
                                                             POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
          goto LAB_03222688;
        }
        if ((*puVar14 & 1) != 0) {
          local_70[0] = 0;
          goto LAB_03222688;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      local_70[0] = 0;
LAB_03222688:
      puVar14 = puVar12;
      do {
        if ((*puVar14 & 1) != 0) {
          local_74 = 0;
          if (puVar14 != (ulong *)0x0) {
            local_74 = (undefined4)(puVar14[2] >> 8);
          }
          goto LAB_032226b4;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      local_74 = 0;
LAB_032226b4:
      puVar14 = local_7b8;
      do {
        uVar9 = (uint)*puVar14;
        if ((uVar9 >> 0x14 & 1) != 0) {
          local_78 = 0;
          if (puVar14 != (ulong *)0x0) {
            uVar13 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
            local_78 = (uint)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                           POPCOUNT((char)(uVar13 >> 8)) +
                                                          POPCOUNT((char)(uVar13 >> 0x10))) + 2];
          }
          goto LAB_03222700;
        }
        if ((*puVar14 & 1) != 0) {
          local_78 = 0;
          goto LAB_03222700;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      local_78 = 0;
LAB_03222700:
      local_630 = local_658;
      FUN_0322c554(&local_658,
                   "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                   ,&DAT_046aa6b8,puVar12,local_70,&local_74,&local_7b8,&local_78);
      local_618 = 0x30b;
LAB_03221ffc:
      local_620 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      if ((char)local_608[0] != '\0') {
        sVar7 = strlen((char *)local_608);
        *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10
        ;
        printf("%s",local_608);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
LAB_03220fcc:
      if (((ulong)local_630 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
      }
    }
LAB_03221458:
    if (((int)local_668 < 0) && (FUN_0321e9cc(local_248), *(char *)*param_1 != '\0')) {
      return local_248[0];
    }
  }
  puVar12 = local_240;
  puVar14 = local_240;
  if ((*local_240 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if ((puVar14[2] & 0x1f) == 7) {
    local_7b8 = (ulong *)local_240[1];
    puVar14 = local_7b8;
    if (local_7b8 != (ulong *)0x0) {
      for (; (*puVar14 & 1) == 0; puVar14 = (ulong *)puVar14[1]) {
      }
      if ((puVar14[2] & 0x1f) != 7) {
        uVar13 = *(ulong *)(*param_1 + 0x28);
        if (uVar13 != 0) {
          bVar33 = *(byte *)(*param_1 + 0x30);
          if (*(byte *)(uVar13 + 0x50) < bVar33) {
            if (DAT_046aaf68 != '\0') goto LAB_03221d54;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_630 = (ulong *)0x0;
              local_628 = 0;
              local_620 = (char *)0x0;
              local_618 = 0;
              local_610 = 0;
              FUN_0322c554(&local_658,
                           "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                           ,&DAT_046aa5e8,puVar12,&local_7b8);
              local_63c = 0;
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x33d;
              FUN_0322c8e0(&local_658);
            }
            else {
LAB_03221d54:
              local_658 = (ulong *)0x0;
              local_63f = 0;
              local_63e = 0;
              local_63c = 0;
              local_648 = uVar13;
              local_640 = bVar33;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_638 = nn::os::GetThreadId(pTVar6);
              local_628 = 0;
              local_620 = (char *)0x0;
              local_608[0]._0_1_ = '\0';
              local_618 = 0;
              local_610 = 0;
              local_650 = 0x10000000000;
              local_658 = local_608;
              local_630 = local_608;
              FUN_0322c554(&local_658,
                           "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                           ,&DAT_046aa5e8,puVar12,&local_7b8);
              local_63c = 0;
              local_620 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_618 = 0x33d;
              if ((char)local_608[0] != '\0') {
                sVar7 = strlen((char *)local_608);
                *(undefined2 *)
                 ((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                printf("%s",local_608);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_630 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
            }
          }
        }
        local_658 = (ulong *)((ulong)local_658 & 0xffffffff00000000);
        FUN_0321e9cc(&local_658);
        if (((int)(uint)local_658 < 0) && (FUN_0321e9cc(local_248), *(char *)*param_1 != '\0')) {
          return local_248[0];
        }
      }
    }
  }
  puVar12 = local_240;
  while( true ) {
    uVar9 = (uint)*puVar12;
    if ((uVar9 >> 0x1a & 1) != 0) break;
    if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
    goto LAB_032215ec;
  }
  if ((puVar12 != (ulong *)0x0) &&
     (uVar9 = uVar9 & 0x3ffffff,
     puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                          POPCOUNT((char)(uVar9 >> 0x10)) + POPCOUNT((char)(uVar9 >> 0x18))) + 2] !=
     0)) {
    return local_248[0];
  }
LAB_032215ec:
  uVar13 = 0;
  puVar12 = local_240;
  do {
    uVar9 = (uint)*puVar12;
    if ((uVar9 >> 0x15 & 1) == 0) {
      uVar25 = 0;
    }
    else {
      uVar9 = uVar9 & 0x1fffff;
      uVar25 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                    POPCOUNT((char)(uVar9 >> 0x10))) + 2];
    }
    uVar13 = uVar25 | uVar13;
  } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
  if (((uint)uVar13 >> 5 & 1) != 0) {
    return local_248[0];
  }
  puVar12 = local_240;
  if ((*local_240 & 1) == 0) {
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
  }
  local_7b8 = local_240;
  if ((puVar12[2] & 0x1f) != 7) {
    local_7b8 = (ulong *)0x0;
  }
  if (local_7b8 == (ulong *)0x0) {
    return local_248[0];
  }
  puVar12 = local_7b8;
  do {
    uVar9 = (uint)*puVar12;
    if ((uVar9 >> 0x17 & 1) != 0) {
      if (puVar12 != (ulong *)0x0) {
        uVar9 = uVar9 & 0x7fffff;
        psVar26 = (short *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                 POPCOUNT((char)(uVar9 >> 8)) +
                                                POPCOUNT((char)(uVar9 >> 0x10))) + 2];
        if (psVar26 != (short *)0x0) {
          psVar31 = psVar26 + 4;
          psVar26 = psVar31 + ((long)psVar26[1] + (long)*psVar26) * 4;
          goto LAB_032216e0;
        }
      }
LAB_032216d0:
      psVar26 = (short *)0x0;
      psVar31 = (short *)0x0;
LAB_032216e0:
      if ((int)((ulong)((long)psVar26 - (long)psVar31) >> 3) < 1) {
        return local_248[0];
      }
      uVar13 = 0;
      while( true ) {
        puVar12 = *(ulong **)(psVar31 + uVar13 * 4);
        uVar25 = *puVar12;
        uVar9 = (uint)uVar25;
        puVar14 = puVar12;
        if ((uVar25 & 1) == 0) {
          do {
            puVar14 = (ulong *)puVar14[1];
          } while ((*puVar14 & 1) == 0);
        }
        if ((puVar12 != (ulong *)0x0) && ((puVar14[2] & 0x1f) == 8)) break;
LAB_032217fc:
        uVar13 = uVar13 + 1;
        if (uVar13 == ((ulong)((long)psVar26 - (long)psVar31) >> 3 & 0xffffffff)) {
          return local_248[0];
        }
      }
      puVar14 = puVar12;
      do {
        uVar4 = *puVar14;
        if (((uint)uVar4 >> 2 & 1) != 0) {
          uVar4 = puVar14[(uVar4 >> 1 & 1) + (uVar4 & 1) + 2];
          goto LAB_03221768;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      uVar4 = 0;
LAB_03221768:
      puVar14 = (ulong *)PTR_DAT_047e5c90;
      do {
        uVar32 = *puVar14;
        if (((uint)uVar32 >> 2 & 1) != 0) {
          uVar32 = puVar14[(uVar32 >> 1 & 1) + (uVar32 & 1) + 2];
          goto LAB_03221794;
        }
        puVar14 = (ulong *)puVar14[1];
      } while (puVar14 != (ulong *)0x0);
      uVar32 = 0;
LAB_03221794:
      if (uVar32 != uVar4) {
        puVar14 = puVar12;
        do {
          uVar4 = *puVar14;
          if (((uint)uVar4 >> 2 & 1) != 0) {
            uVar4 = puVar14[(uVar4 >> 1 & 1) + (uVar4 & 1) + 2];
            goto LAB_032217c8;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar4 = 0;
LAB_032217c8:
        puVar14 = (ulong *)PTR_DAT_047e5c98;
        do {
          uVar32 = *puVar14;
          if (((uint)uVar32 >> 2 & 1) != 0) {
            uVar32 = puVar14[(uVar32 >> 1 & 1) + (uVar32 & 1) + 2];
            goto LAB_032217f4;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar32 = 0;
LAB_032217f4:
        if (uVar32 != uVar4) goto LAB_032217fc;
      }
      while ((uVar9 >> 0x10 & 1) == 0) {
        if ((uVar25 & 1) != 0) {
          return local_248[0];
        }
        puVar12 = (ulong *)puVar12[1];
        if (puVar12 == (ulong *)0x0) {
          return local_248[0];
        }
        uVar25 = *puVar12;
        uVar9 = (uint)uVar25;
      }
      uVar13 = CONCAT44(uVar9,uVar9) & 0xffff0000ffff;
      local_668 = (ulong *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                POPCOUNT((char)(uVar13 >> 8))) + 2];
      if (local_668 == (ulong *)0x0) {
        return local_248[0];
      }
      FUN_031e1bb4(&local_658,local_7b8,PTR_DAT_047e5c88);
      puVar12 = local_658;
      if ((local_648 & 1) != 0) {
        plVar30 = (long *)(local_648 & 0xfffffffffffffffe);
        plVar28 = plVar30 + 1;
        do {
          lVar8 = *plVar28;
          cVar22 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar1) {
            *(int *)plVar28 = (int)lVar8 + -1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
        if ((plVar30 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar30 + 8))();
        }
      }
      if ((puVar12 != (ulong *)0x0) && ((byte)*puVar12 != 0)) {
        return local_248[0];
      }
      uVar13 = *(ulong *)(*param_1 + 0x28);
      if (uVar13 == 0) goto LAB_03221980;
      bVar33 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(uVar13 + 0x50) < bVar33) {
        if (DAT_046aaf68 == '\0') goto LAB_03221980;
LAB_032223a0:
        local_63f = 0;
        local_63e = 0;
        local_63c = 0;
        local_648 = uVar13;
        local_640 = bVar33;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_638 = nn::os::GetThreadId(pTVar6);
        local_628 = 0;
        local_620 = (char *)0x0;
        local_608[0]._0_1_ = '\0';
        local_618 = 0;
        local_610 = 0;
        local_650 = 0x10000000000;
        local_658 = local_608;
        local_630 = local_608;
        FUN_0322c554(&local_658,
                     "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                     ,&DAT_046aa6e8,&local_7b8,&local_668);
        local_63c = 0;
        local_620 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_618 = 0x362;
        if ((char)local_608[0] != '\0') {
          sVar7 = strlen((char *)local_608);
          *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) =
               10;
          printf("%s",local_608);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      else {
        if (DAT_046aaf68 != '\0') goto LAB_032223a0;
        local_658 = (ulong *)0x0;
        local_63f = 0;
        local_63e = 0;
        local_63c = 0;
        local_648 = uVar13;
        local_640 = bVar33;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_638 = nn::os::GetThreadId(pTVar6);
        local_630 = (ulong *)0x0;
        local_628 = 0;
        local_620 = (char *)0x0;
        local_618 = 0;
        local_610 = 0;
        FUN_0322c554(&local_658,
                     "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                     ,&DAT_046aa6e8,&local_7b8,&local_668);
        local_63c = 0;
        local_620 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_618 = 0x362;
        FUN_0322c8e0(&local_658);
      }
      if (((ulong)local_630 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
      }
LAB_03221980:
      local_658 = (ulong *)((ulong)local_658 & 0xffffffff00000000);
      FUN_0321e9cc(&local_658);
      if ((int)(uint)local_658 < 0) {
        FUN_0321e9cc(local_248);
      }
      return local_248[0];
    }
    if ((*puVar12 & 1) != 0) {
      psVar31 = (short *)0x0;
      psVar26 = (short *)0x0;
      goto LAB_032216e0;
    }
    puVar12 = (ulong *)puVar12[1];
    if (puVar12 == (ulong *)0x0) goto LAB_032216d0;
  } while( true );
LAB_0321eaac:
  uVar13 = *(ulong *)(*param_1 + 0x28);
  if (uVar13 == 0) goto LAB_0321eb90;
  bVar33 = *(byte *)(*param_1 + 0x30);
  if (*(byte *)(uVar13 + 0x50) < bVar33) {
    if (DAT_046aaf68 == '\0') goto LAB_0321eb90;
LAB_03221a30:
    local_63f = 0;
    local_63e = 0;
    local_63c = 0;
    local_648 = uVar13;
    local_640 = bVar33;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_638 = nn::os::GetThreadId(pTVar6);
    local_628 = 0;
    local_620 = (char *)0x0;
    local_618 = 0;
    local_610 = 0;
    local_608[0]._0_1_ = '\0';
    local_650 = 0x10000000000;
    local_658 = local_608;
    local_630 = local_608;
    FUN_0322c554(&local_658,"Every type must have an Opt::FORMAT in its hierarchy",PTR_DAT_047d1b38)
    ;
    local_620 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    local_618 = 0x24a;
    local_63c = 0xb73f79e0;
    if ((char)local_608[0] != '\0') {
      sVar7 = strlen((char *)local_608);
      *(undefined2 *)((long)local_608 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
      printf("%s",local_608);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03221a30;
    local_658 = (ulong *)0x0;
    local_63f = 0;
    local_63e = 0;
    local_63c = 0;
    local_648 = uVar13;
    local_640 = bVar33;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_638 = nn::os::GetThreadId(pTVar6);
    local_630 = (ulong *)0x0;
    local_628 = 0;
    local_620 = (char *)0x0;
    local_618 = 0;
    local_610 = 0;
    FUN_0322c554(&local_658,"Every type must have an Opt::FORMAT in its hierarchy",PTR_DAT_047d1b38)
    ;
    local_620 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    local_618 = 0x24a;
    local_63c = 0xb73f79e0;
    FUN_0322c8e0(&local_658);
  }
  if (((ulong)local_630 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_630 + -1),0);
  }
LAB_0321eb90:
  local_238[0] = 0;
  FUN_0321e9cc(local_238);
  return local_238[0];
}


