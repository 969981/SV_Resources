/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03222744; name: FUN_03222744
 */


ulong FUN_03222744(long *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  char cVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong local_1c8;
  ulong local_1c0;
  char *local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [256];
  ulong local_68;
  ulong local_48;
  
  plVar11 = (long *)(*param_2 + (long)(int)param_2[1] * 8 + -8);
  do {
    puVar7 = (undefined8 *)*plVar11;
    plVar11 = puVar7 + 1;
  } while (((uint)*puVar7 >> 0xf & 1) == 0);
  uVar10 = (uint)*puVar7 & 0x7fff;
  lVar8 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
  uVar3 = *(ushort *)(lVar8 + 8);
  if ((ulong)uVar3 != 0) {
    puVar7 = (undefined8 *)(lVar8 + 0x10);
    puVar1 = PTR_PTR_047d1a50 + 0x20;
LAB_032227d0:
    if (*(char *)puVar7[1] == 't') {
      puVar16 = (ulong *)*puVar7;
      puVar9 = puVar16;
      while( true ) {
        uVar10 = (uint)*puVar9;
        if ((uVar10 >> 0xf & 1) != 0) break;
        if (((*puVar9 & 9) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
        goto LAB_032228a4;
      }
      uVar15 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
      if (puVar9[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8))) + 2] != 0) {
        uVar10 = *(uint *)(param_2 + 1);
        if ((int)uVar10 < 1) goto LAB_0322285c;
        uVar15 = 0;
        goto LAB_0322283c;
      }
    }
    goto LAB_032228a4;
  }
LAB_032228b0:
  uVar15 = 0;
  goto LAB_032228b4;
  while (uVar15 = uVar15 + 1, uVar10 != uVar15) {
LAB_0322283c:
    if (*(ulong **)(*param_2 + uVar15 * 8) == puVar16) {
      if (-1 < (int)uVar15) {
        lVar8 = *(long *)(*param_1 + 0x28);
        if (lVar8 == 0) goto LAB_03222bf8;
        bVar2 = *(byte *)(*param_1 + 0x30);
        cVar14 = DAT_046aaf68;
        if (*(byte *)(lVar8 + 0x50) < bVar2) {
          if (DAT_046aaf68 == '\0') goto LAB_03222bf8;
          cVar14 = '\x01';
        }
        local_1a8 = lVar8;
        if (cVar14 == '\0') {
          local_1b8 = (char *)0x0;
          local_1a0 = (ulong)bVar2;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar5);
          local_190 = (char *)0x0;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          uStack_170 = 0;
          puVar9 = *(ulong **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
          goto LAB_03222a30;
        }
        local_1a0 = (ulong)bVar2;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar5);
        local_188 = 0;
        local_180 = (char *)0x0;
        local_168[0] = '\0';
        local_178 = 0;
        uStack_170 = 0;
        uStack_1b0 = 0x10000000000;
        puVar9 = *(ulong **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
        goto LAB_03222d50;
      }
      break;
    }
  }
LAB_0322285c:
  lVar12 = (long)(int)uVar10;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar10) {
    FUN_031bc928(param_2,puVar1,lVar12 + 1);
    uVar10 = *(uint *)(param_2 + 1);
  }
  *(ulong **)(*param_2 + (long)(int)uVar10 * 8) = puVar16;
  *(int *)(param_2 + 1) = (int)(lVar12 + 1);
  iVar4 = FUN_03222744(param_1,param_2);
  if (iVar4 < 0) {
    uVar15 = 0x80040200;
    local_1a8 = *(long *)(*param_1 + 0x28);
    if (*(byte *)(local_1a8 + 0x50) < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_032228b4;
    }
    else if (DAT_046aaf68 == '\0') {
      local_1b8 = (char *)0x0;
      local_1a0 = 2;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar5);
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      puVar9 = *(ulong **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
      goto LAB_03222940;
    }
    local_1a0 = 2;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar5);
    local_188 = 0;
    local_180 = (char *)0x0;
    local_168[0] = '\0';
    local_178 = 0;
    uStack_170 = 0;
    uStack_1b0 = 0x10000000000;
    puVar9 = *(ulong **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
    goto LAB_032229a4;
  }
LAB_032228a4:
  puVar7 = puVar7 + 2;
  if (puVar7 == (undefined8 *)(lVar8 + (ulong)uVar3 * 0x10 + 0x10)) goto LAB_032228b0;
  goto LAB_032227d0;
  while (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0) {
LAB_03222d50:
    uVar15 = *puVar9;
    if (((uint)uVar15 >> 3 & 1) != 0) {
      local_1c0 = 0;
      if (puVar9 != (ulong *)0x0) {
        local_1c0 = puVar9[(ulong)(byte)POPCOUNT((byte)uVar15 & 7) + 2];
      }
      goto LAB_03222d98;
    }
    if ((uVar15 & 1) != 0) {
      local_1c0 = 0;
      goto LAB_03222d98;
    }
  }
  local_1c0 = 0;
LAB_03222d98:
  uVar15 = *puVar16;
  if (((uint)uVar15 >> 3 & 1) == 0) {
    if (((uVar15 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
    goto LAB_03222dd8;
    goto LAB_03222d98;
  }
  if (puVar16 != (ulong *)0x0) {
    local_1c8 = puVar16[(ulong)(byte)POPCOUNT((byte)uVar15 & 7) + 2];
    goto LAB_03222ddc;
  }
LAB_03222dd8:
  local_1c8 = 0;
LAB_03222ddc:
  local_1b8 = local_168;
  local_190 = local_168;
  FUN_0322c554(&local_1b8,"Found loop in type \'{}\' with type template parameter \'{}\'.",
               PTR_DAT_047e5f48,&local_1c0,&local_1c8);
  local_1a0 = CONCAT44(0xa62e68e4,(undefined4)local_1a0);
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x3fa;
  if (local_168[0] != '\0') {
    sVar6 = strlen(local_168);
    (local_168 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
    (local_168 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
    printf("%s",local_168);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
  goto LAB_03222bd4;
  while (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0) {
LAB_03222a30:
    uVar15 = *puVar9;
    if (((uint)uVar15 >> 3 & 1) != 0) {
      local_48 = 0;
      if (puVar9 != (ulong *)0x0) {
        local_48 = puVar9[(ulong)(byte)POPCOUNT((byte)uVar15 & 7) + 2];
      }
      goto LAB_03222b50;
    }
    if ((uVar15 & 1) != 0) {
      local_48 = 0;
      goto LAB_03222b50;
    }
  }
  local_48 = 0;
LAB_03222b50:
  uVar15 = *puVar16;
  if (((uint)uVar15 >> 3 & 1) == 0) {
    if (((uVar15 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
    goto LAB_03222b90;
    goto LAB_03222b50;
  }
  if (puVar16 != (ulong *)0x0) {
    local_68 = puVar16[(ulong)(byte)POPCOUNT((byte)uVar15 & 7) + 2];
    goto LAB_03222b94;
  }
LAB_03222b90:
  local_68 = 0;
LAB_03222b94:
  FUN_0322c554(&local_1b8,"Found loop in type \'{}\' with type template parameter \'{}\'.",
               PTR_DAT_047e5f48,&local_48,&local_68);
  local_1a0 = CONCAT44(0xa62e68e4,(undefined4)local_1a0);
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x3fa;
  FUN_0322c8e0(&local_1b8);
LAB_03222bd4:
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  }
LAB_03222bf8:
  local_1b8 = (char *)((ulong)local_1b8 & 0xffffffff00000000);
  FUN_0321e9cc(&local_1b8);
  uVar15 = (ulong)local_1b8 & 0xffffffff;
  goto LAB_032228b4;
  while (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0) {
LAB_03222940:
    uVar13 = *puVar9;
    if (((uint)uVar13 >> 3 & 1) != 0) {
      local_48 = 0;
      if (puVar9 != (ulong *)0x0) {
        local_48 = puVar9[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
      }
      goto LAB_03222a78;
    }
    if ((uVar13 & 1) != 0) {
      local_48 = 0;
      goto LAB_03222a78;
    }
  }
  local_48 = 0;
LAB_03222a78:
  uVar13 = *puVar16;
  if (((uint)uVar13 >> 3 & 1) == 0) {
    if (((uVar13 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
    goto LAB_03222ab8;
    goto LAB_03222a78;
  }
  if (puVar16 != (ulong *)0x0) {
    local_68 = puVar16[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
    goto LAB_03222abc;
  }
LAB_03222ab8:
  local_68 = 0;
LAB_03222abc:
  FUN_0322c554(&local_1b8,"Type \'{}\' has argument \'{}\'",PTR_DAT_047e5f48,&local_48,&local_68);
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x3ff;
  FUN_0322c8e0(&local_1b8);
  goto LAB_03222af8;
  while (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0) {
LAB_032229a4:
    uVar13 = *puVar9;
    if (((uint)uVar13 >> 3 & 1) != 0) {
      local_1c0 = 0;
      if (puVar9 != (ulong *)0x0) {
        local_1c0 = puVar9[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
      }
      goto LAB_03222c3c;
    }
    if ((uVar13 & 1) != 0) {
      local_1c0 = 0;
      goto LAB_03222c3c;
    }
  }
  local_1c0 = 0;
LAB_03222c3c:
  uVar13 = *puVar16;
  if (((uint)uVar13 >> 3 & 1) == 0) {
    if (((uVar13 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
    goto LAB_03222c7c;
    goto LAB_03222c3c;
  }
  if (puVar16 != (ulong *)0x0) {
    local_1c8 = puVar16[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
    goto LAB_03222c80;
  }
LAB_03222c7c:
  local_1c8 = 0;
LAB_03222c80:
  local_1b8 = local_168;
  local_190 = local_168;
  FUN_0322c554(&local_1b8,"Type \'{}\' has argument \'{}\'",PTR_DAT_047e5f48,&local_1c0,&local_1c8);
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x3ff;
  if (local_168[0] != '\0') {
    sVar6 = strlen(local_168);
    (local_168 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
    (local_168 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
    printf("%s",local_168);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_03222af8:
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  }
LAB_032228b4:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return uVar15;
}


