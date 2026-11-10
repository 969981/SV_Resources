/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03224878; name: FUN_03224878
 */


undefined4 FUN_03224878(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined4 uVar14;
  short *psVar15;
  short *psVar16;
  ulong local_1d0;
  ulong local_1c8;
  char *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  char local_170 [256];
  ulong local_70;
  ulong *local_68;
  
  local_68 = *(ulong **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
  lVar4 = FUN_0321e944(param_3,&local_68);
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)(lVar4 + 4);
    uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000;
  }
  if ((int)(uVar8 | uVar9) < 0) {
    uVar10 = *local_68;
    puVar13 = local_68;
    if ((uVar10 & 1) == 0) {
      puVar12 = local_68;
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
      if ((local_68 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 8)) {
        if ((uVar10 & 1) == 0) {
          do {
            puVar13 = (ulong *)puVar13[1];
          } while ((*puVar13 & 1) == 0);
        }
        goto LAB_03224950;
      }
    }
    else if ((local_68 != (ulong *)0x0) && ((local_68[2] & 0x1f) == 8)) {
LAB_03224950:
      puVar12 = local_68;
      if ((puVar13[2] & 0x1f) != 8) {
        puVar12 = (ulong *)0x0;
      }
LAB_03224960:
      if ((*puVar12 & 1) == 0) goto code_r0x03224968;
      if ((puVar12 != (ulong *)0x0) && (0 < (int)(puVar12[2] >> 8))) {
        puVar13 = local_68;
        if ((uVar10 & 1) == 0) {
          do {
            puVar13 = (ulong *)puVar13[1];
          } while ((*puVar13 & 1) == 0);
        }
        puVar12 = local_68;
        if ((puVar13[2] & 0x1f) != 8) {
          puVar12 = (ulong *)0x0;
        }
        while (((byte)*puVar12 >> 1 & 1) == 0) {
          puVar12 = (ulong *)puVar12[1];
          if (puVar12 == (ulong *)0x0) goto LAB_032249dc;
        }
        local_70 = puVar12[3];
        if (local_70 == 0) goto LAB_032249dc;
        lVar4 = FUN_0321e944(param_3,&local_70);
        if (lVar4 == 0) {
          uVar9 = 0;
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(uint *)(lVar4 + 4);
          uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000;
        }
        if (-1 < (int)(uVar8 | uVar9)) goto LAB_032249dc;
        uVar8 = *(uint *)(param_2 + 1);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          while (*(ulong *)(*param_2 + uVar10 * 8) != local_70) {
            uVar10 = uVar10 + 1;
            if (uVar8 == uVar10) goto LAB_0322529c;
          }
          if ((int)uVar10 < 0) goto LAB_0322529c;
          lVar4 = *(long *)(*param_1 + 0x28);
          if (lVar4 != 0) {
            bVar2 = *(byte *)(*param_1 + 0x30);
            if (bVar2 <= *(byte *)(lVar4 + 0x50)) {
              if (DAT_046aaf68 != '\0') goto LAB_03225840;
              local_1c0 = (char *)0x0;
              local_1a8 = (ulong)bVar2;
              local_1b0 = lVar4;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar6);
              local_198 = (char *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              FUN_0322c554(&local_1c0,"Found loop in subtype \'{}\' of array type \'{}\'",
                           PTR_DAT_047e5f30,&local_70,&local_68);
              local_180 = 0x39d;
              uVar14 = 0xa62e68e0;
              goto LAB_032253cc;
            }
            if (DAT_046aaf68 == '\0') goto LAB_032253fc;
LAB_03225840:
            local_1a8 = (ulong)bVar2;
            local_1b0 = lVar4;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a0 = nn::os::GetThreadId(pTVar6);
            local_1c0 = local_170;
            local_190 = 0;
            local_188 = (char *)0x0;
            local_180 = 0;
            uStack_178 = 0;
            uStack_1b8 = 0x10000000000;
            local_170[0] = '\0';
            local_198 = local_1c0;
            FUN_0322c554(&local_1c0,"Found loop in subtype \'{}\' of array type \'{}\'",
                         PTR_DAT_047e5f30,&local_70,&local_68);
            local_180 = 0x39d;
            uVar14 = 0xa62e68e0;
            goto LAB_032257f0;
          }
          goto LAB_032253fc;
        }
LAB_0322529c:
        lVar4 = (long)(int)uVar8;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar8) {
          FUN_031bc928(param_2,PTR_PTR_047d1a50 + 0x20,lVar4 + 1);
          uVar8 = *(uint *)(param_2 + 1);
        }
        *(ulong *)(*param_2 + (long)(int)uVar8 * 8) = local_70;
        *(int *)(param_2 + 1) = (int)(lVar4 + 1);
        iVar3 = FUN_03224878(param_1,param_2,param_3);
        if (-1 < iVar3) goto LAB_032249dc;
        local_1b0 = *(long *)(*param_1 + 0x28);
        if (1 < *(byte *)(local_1b0 + 0x50)) {
          if (DAT_046aaf68 != '\0') goto LAB_03225414;
          local_1c0 = (char *)0x0;
          local_1a8 = 2;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar6);
          local_198 = (char *)0x0;
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          uStack_178 = 0;
          FUN_0322c554(&local_1c0,"Array type \'{}\' has subtype \'{}\'",PTR_DAT_047e5f30,&local_68,
                       &local_70);
          local_180 = 0x3a2;
          goto LAB_03224ec4;
        }
        if (DAT_046aaf68 != '\0') {
LAB_03225414:
          local_1a8 = 2;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar6);
          local_1c0 = local_170;
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          uStack_178 = 0;
          uStack_1b8 = 0x10000000000;
          local_170[0] = '\0';
          local_198 = local_1c0;
          FUN_0322c554(&local_1c0,"Array type \'{}\' has subtype \'{}\'",PTR_DAT_047e5f30,&local_68,
                       &local_70);
          local_180 = 0x3a2;
          goto LAB_0322553c;
        }
        goto LAB_03224fd4;
      }
    }
LAB_032249dc:
    puVar13 = local_68;
    while( true ) {
      uVar8 = (uint)*puVar13;
      if ((uVar8 >> 0x17 & 1) != 0) break;
      if (((*puVar13 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto LAB_03224a3c;
    }
    if (puVar13 != (ulong *)0x0) {
      uVar10 = CONCAT44(uVar8,uVar8) & 0x7fffff007fffff;
      psVar16 = (short *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                               POPCOUNT((char)(uVar10 >> 8)) +
                                              POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      if (psVar16 != (short *)0x0) {
        psVar15 = psVar16 + 4;
        psVar16 = psVar15 + ((long)psVar16[1] + (long)*psVar16) * 4;
        goto LAB_03224a44;
      }
    }
LAB_03224a3c:
    psVar15 = (short *)0x0;
    psVar16 = (short *)0x0;
LAB_03224a44:
    if (psVar15 != psVar16) {
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      do {
        puVar13 = *(ulong **)psVar15;
        local_70 = puVar13[1];
        lVar4 = FUN_0321e944(param_3,&local_70);
        if (lVar4 == 0) {
          uVar9 = 0;
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(uint *)(lVar4 + 4);
          uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000;
        }
        if ((int)(uVar8 | uVar9) < 0) {
          uVar8 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar8) {
            uVar10 = 0;
            do {
              if (*(ulong *)(*param_2 + uVar10 * 8) == local_70) {
                if (-1 < (int)uVar10) {
                  lVar4 = *(long *)(*param_1 + 0x28);
                  if (lVar4 == 0) goto LAB_032253fc;
                  bVar2 = *(byte *)(*param_1 + 0x30);
                  if (*(byte *)(lVar4 + 0x50) < bVar2) {
                    if (DAT_046aaf68 == '\0') goto LAB_032253fc;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1c0 = (char *)0x0;
                    local_1a8 = (ulong)bVar2;
                    local_1b0 = lVar4;
                    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a0 = nn::os::GetThreadId(pTVar6);
                    local_198 = (char *)0x0;
                    local_190 = 0;
                    local_188 = (char *)0x0;
                    local_180 = 0;
                    uStack_178 = 0;
                    goto joined_r0x032250fc;
                  }
                  local_1a8 = (ulong)bVar2;
                  local_1b0 = lVar4;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a0 = nn::os::GetThreadId(pTVar6);
                  local_1c0 = local_170;
                  local_190 = 0;
                  local_188 = (char *)0x0;
                  local_170[0] = '\0';
                  local_180 = 0;
                  uStack_178 = 0;
                  uStack_1b8 = 0x10000000000;
                  goto joined_r0x03225670;
                }
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
          }
          lVar4 = (long)(int)uVar8;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar8) {
            FUN_031bc928(param_2,puVar1,lVar4 + 1);
            uVar8 = *(uint *)(param_2 + 1);
          }
          *(ulong *)(*param_2 + (long)(int)uVar8 * 8) = local_70;
          *(int *)(param_2 + 1) = (int)(lVar4 + 1);
          iVar3 = FUN_03224878(param_1,param_2,param_3);
          if (iVar3 < 0) {
            uVar14 = 0x80040200;
            local_1b0 = *(long *)(*param_1 + 0x28);
            if (*(byte *)(local_1b0 + 0x50) < 2) {
              if (DAT_046aaf68 == '\0') goto LAB_03224e24;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c0 = (char *)0x0;
              local_1a8 = 2;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar6);
              local_198 = (char *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              goto joined_r0x03224d18;
            }
            local_1a8 = 2;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a0 = nn::os::GetThreadId(pTVar6);
            local_1c0 = local_170;
            local_190 = 0;
            local_188 = (char *)0x0;
            local_170[0] = '\0';
            local_180 = 0;
            uStack_178 = 0;
            uStack_1b8 = 0x10000000000;
            goto joined_r0x03224d6c;
          }
        }
        psVar15 = psVar15 + 4;
      } while (psVar15 != psVar16);
    }
    uVar8 = (uint)*local_68;
    if ((((uVar8 >> 0xe & 1) != 0) &&
        (uVar10 = CONCAT44(uVar8,uVar8) & 0x3fff00003fff,
        plVar11 = (long *)local_68[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                POPCOUNT((char)(uVar10 >> 8))) + 2],
        plVar11 != (long *)0x0)) && (lVar4 = *plVar11, lVar4 != 0)) {
      puVar13 = (ulong *)(plVar11 + 1);
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      do {
        local_70 = *puVar13;
        lVar5 = FUN_0321e944(param_3,&local_70);
        if (lVar5 == 0) {
          uVar9 = 0;
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(uint *)(lVar5 + 4);
          uVar9 = ((int)lVar5 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000;
        }
        if ((int)(uVar8 | uVar9) < 0) {
          uVar8 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar8) {
            uVar10 = 0;
            do {
              if (*(ulong *)(*param_2 + uVar10 * 8) == local_70) {
                if (-1 < (int)uVar10) {
                  lVar4 = *(long *)(*param_1 + 0x28);
                  if (lVar4 == 0) goto LAB_032253fc;
                  bVar2 = *(byte *)(*param_1 + 0x30);
                  if (*(byte *)(lVar4 + 0x50) < bVar2) {
                    if (DAT_046aaf68 == '\0') goto LAB_032253fc;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1c0 = (char *)0x0;
                    local_1a8 = (ulong)bVar2;
                    local_1b0 = lVar4;
                    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a0 = nn::os::GetThreadId(pTVar6);
                    local_198 = (char *)0x0;
                    local_190 = 0;
                    local_188 = (char *)0x0;
                    local_180 = 0;
                    uStack_178 = 0;
                    FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with interface type \'{}\'.",
                                 PTR_DAT_047e5f30,&local_68,&local_70);
                    local_180 = 0x3c9;
                    uVar14 = 0xa62e68e2;
                    goto LAB_032253cc;
                  }
                  local_1a8 = (ulong)bVar2;
                  local_1b0 = lVar4;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a0 = nn::os::GetThreadId(pTVar6);
                  local_1c0 = local_170;
                  local_190 = 0;
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  uStack_178 = 0;
                  uStack_1b8 = 0x10000000000;
                  local_170[0] = '\0';
                  local_198 = local_1c0;
                  FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with interface type \'{}\'.",
                               PTR_DAT_047e5f30,&local_68,&local_70);
                  local_180 = 0x3c9;
                  uVar14 = 0xa62e68e2;
                  goto LAB_032257f0;
                }
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
          }
          lVar5 = (long)(int)uVar8;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar8) {
            FUN_031bc928(param_2,puVar1,lVar5 + 1);
            uVar8 = *(uint *)(param_2 + 1);
          }
          *(ulong *)(*param_2 + (long)(int)uVar8 * 8) = local_70;
          *(int *)(param_2 + 1) = (int)(lVar5 + 1);
          iVar3 = FUN_03224878(param_1,param_2,param_3);
          if (iVar3 < 0) {
            uVar14 = 0x80040200;
            local_1b0 = *(long *)(*param_1 + 0x28);
            if (*(byte *)(local_1b0 + 0x50) < 2) {
              if (DAT_046aaf68 == '\0') goto LAB_03224e24;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c0 = (char *)0x0;
              local_1a8 = 2;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar6);
              local_198 = (char *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              FUN_0322c554(&local_1c0,"Type \'{}\' has interface \'{}\'",PTR_DAT_047e5f30,&local_68,
                           &local_70);
              local_180 = 0x3ce;
              goto LAB_03225098;
            }
            local_1a8 = 2;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a0 = nn::os::GetThreadId(pTVar6);
            local_1c0 = local_170;
            local_190 = 0;
            local_188 = (char *)0x0;
            local_180 = 0;
            uStack_178 = 0;
            uStack_1b8 = 0x10000000000;
            local_170[0] = '\0';
            local_198 = local_1c0;
            FUN_0322c554(&local_1c0,"Type \'{}\' has interface \'{}\'",PTR_DAT_047e5f30,&local_68,
                         &local_70);
            local_180 = 0x3ce;
            goto LAB_032255e4;
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != (ulong *)(plVar11 + lVar4 * 2 + 1));
    }
    local_70 = local_68[1];
    if (local_70 != 0) {
      lVar4 = FUN_0321e944(param_3,&local_70);
      if (lVar4 == 0) {
        uVar9 = 0;
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(uint *)(lVar4 + 4);
        uVar9 = ((int)lVar4 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000;
      }
      if ((int)(uVar8 | uVar9) < 0) {
        uVar8 = *(uint *)(param_2 + 1);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          do {
            if (*(ulong *)(*param_2 + uVar10 * 8) == local_70) {
              if (-1 < (int)uVar10) {
                lVar4 = *(long *)(*param_1 + 0x28);
                if (lVar4 == 0) goto LAB_032253fc;
                bVar2 = *(byte *)(*param_1 + 0x30);
                if (*(byte *)(lVar4 + 0x50) < bVar2) {
                  if (DAT_046aaf68 == '\0') goto LAB_032253fc;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1c0 = (char *)0x0;
                  local_1a8 = (ulong)bVar2;
                  local_1b0 = lVar4;
                  pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a0 = nn::os::GetThreadId(pTVar6);
                  local_198 = (char *)0x0;
                  local_190 = 0;
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  uStack_178 = 0;
                  FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with parent type \'{}\'.",
                               PTR_DAT_047e5f30,&local_68,&local_70);
                  local_180 = 0x3db;
                  uVar14 = 0xa62e68e3;
                  goto LAB_032253cc;
                }
                local_1a8 = (ulong)bVar2;
                local_1b0 = lVar4;
                pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar6);
                local_1c0 = local_170;
                local_190 = 0;
                local_188 = (char *)0x0;
                local_180 = 0;
                uStack_178 = 0;
                uStack_1b8 = 0x10000000000;
                local_170[0] = '\0';
                local_198 = local_1c0;
                FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with parent type \'{}\'.",
                             PTR_DAT_047e5f30,&local_68,&local_70);
                local_180 = 0x3db;
                uVar14 = 0xa62e68e3;
                goto LAB_032257f0;
              }
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
        lVar4 = (long)(int)uVar8;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar8) {
          FUN_031bc928(param_2,PTR_PTR_047d1a50 + 0x20,lVar4 + 1);
          uVar8 = *(uint *)(param_2 + 1);
        }
        *(ulong *)(*param_2 + (long)(int)uVar8 * 8) = local_70;
        *(int *)(param_2 + 1) = (int)(lVar4 + 1);
        iVar3 = FUN_03224878(param_1,param_2,param_3);
        if (iVar3 < 0) {
          local_1b0 = *(long *)(*param_1 + 0x28);
          if (*(byte *)(local_1b0 + 0x50) < 2) {
            if (DAT_046aaf68 != '\0') goto LAB_032254e0;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1c0 = (char *)0x0;
              local_1a8 = 2;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar6);
              local_198 = (char *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              FUN_0322c554(&local_1c0,"Type \'{}\' has parent \'{}\'",PTR_DAT_047e5f30,&local_68,
                           &local_70);
              local_180 = 0x3e0;
LAB_03224ec4:
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              FUN_0322c8e0(&local_1c0);
            }
            else {
LAB_032254e0:
              local_1a8 = 2;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar6);
              local_1c0 = local_170;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              uStack_1b8 = 0x10000000000;
              local_170[0] = '\0';
              local_198 = local_1c0;
              FUN_0322c554(&local_1c0,"Type \'{}\' has parent \'{}\'",PTR_DAT_047e5f30,&local_68,
                           &local_70);
              local_180 = 0x3e0;
LAB_0322553c:
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              if (local_170[0] != '\0') {
                sVar7 = strlen(local_170);
                (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
                (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
                printf("%s",local_170);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_198 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
            }
          }
LAB_03224fd4:
          uVar14 = 0x80040200;
          goto LAB_03224e24;
        }
      }
    }
    FUN_031f93a4(param_3,&local_68);
  }
  uVar14 = 0;
  goto LAB_03224e24;
code_r0x03224968:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto LAB_032249dc;
  goto LAB_03224960;
joined_r0x032250fc:
  if (puVar13 == (ulong *)0x0) goto LAB_03225114;
  uVar8 = (uint)*puVar13;
  if ((uVar8 >> 0x10 & 1) != 0) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xffff0000ffff;
    local_1c8 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    goto LAB_03225388;
  }
  if ((*puVar13 & 1) != 0) goto LAB_03225114;
  puVar13 = (ulong *)puVar13[1];
  goto joined_r0x032250fc;
LAB_03225114:
  local_1c8 = 0;
LAB_03225388:
  FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with field \'{}\' of type \'{}\'.",
               &DAT_046aa660,&local_68,&local_1c8,&local_70);
  local_180 = 0x3b3;
  uVar14 = 0xa62e68e1;
LAB_032253cc:
  local_188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_1a8 = CONCAT44(uVar14,(undefined4)local_1a8);
  FUN_0322c8e0(&local_1c0);
  goto LAB_032253d8;
joined_r0x03225670:
  if (puVar13 == (ulong *)0x0) goto LAB_03225688;
  uVar8 = (uint)*puVar13;
  if ((uVar8 >> 0x10 & 1) != 0) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xffff0000ffff;
    local_1d0 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    goto LAB_032257a8;
  }
  if ((*puVar13 & 1) != 0) goto LAB_03225688;
  puVar13 = (ulong *)puVar13[1];
  goto joined_r0x03225670;
joined_r0x03224d18:
  if (puVar13 == (ulong *)0x0) goto LAB_03224d30;
  uVar8 = (uint)*puVar13;
  if ((uVar8 >> 0x10 & 1) != 0) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xffff0000ffff;
    local_1c8 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    goto LAB_03225064;
  }
  if ((*puVar13 & 1) != 0) goto LAB_03224d30;
  puVar13 = (ulong *)puVar13[1];
  goto joined_r0x03224d18;
LAB_03224d30:
  local_1c8 = 0;
LAB_03225064:
  FUN_0322c554(&local_1c0,"Type \'{}\' has field \'{}\' of type \'{}\'",&DAT_046aa660,&local_68,
               &local_1c8,&local_70);
  local_180 = 0x3b8;
LAB_03225098:
  local_188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  FUN_0322c8e0(&local_1c0);
  goto LAB_032250a4;
joined_r0x03224d6c:
  if (puVar13 == (ulong *)0x0) goto LAB_03224d84;
  uVar8 = (uint)*puVar13;
  if ((uVar8 >> 0x10 & 1) != 0) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xffff0000ffff;
    local_1d0 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    goto LAB_032255ac;
  }
  if ((*puVar13 & 1) != 0) goto LAB_03224d84;
  puVar13 = (ulong *)puVar13[1];
  goto joined_r0x03224d6c;
LAB_03224d84:
  local_1d0 = 0;
LAB_032255ac:
  local_198 = local_1c0;
  FUN_0322c554(&local_1c0,"Type \'{}\' has field \'{}\' of type \'{}\'",&DAT_046aa660,&local_68,
               &local_1d0,&local_70);
  local_180 = 0x3b8;
LAB_032255e4:
  local_188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  if (local_170[0] != '\0') {
    sVar7 = strlen(local_170);
    (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
    (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
    printf("%s",local_170);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_032250a4:
  uVar14 = 0x80040200;
  if (((ulong)local_198 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
  }
  goto LAB_03224e24;
LAB_03225688:
  local_1d0 = 0;
LAB_032257a8:
  local_198 = local_1c0;
  FUN_0322c554(&local_1c0,"Found loop in type \'{}\' with field \'{}\' of type \'{}\'.",
               &DAT_046aa660,&local_68,&local_1d0,&local_70);
  local_180 = 0x3b3;
  uVar14 = 0xa62e68e1;
LAB_032257f0:
  local_188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_1a8 = CONCAT44(uVar14,(undefined4)local_1a8);
  if (local_170[0] != '\0') {
    sVar7 = strlen(local_170);
    (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
    (local_170 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
    printf("%s",local_170);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_032253d8:
  if (((ulong)local_198 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
  }
LAB_032253fc:
  local_1c0 = (char *)((ulong)local_1c0 & 0xffffffff00000000);
  FUN_0321e9cc(&local_1c0);
  uVar14 = local_1c0._0_4_;
LAB_03224e24:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return uVar14;
}


