/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03063f9c; name: FUN_03063f9c
 */


/* WARNING: Removing unreachable block (ram,0x03064874) */
/* WARNING: Removing unreachable block (ram,0x03064e4c) */

void FUN_03063f9c(long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 *param_6,ulong param_7,int *param_8,undefined8 param_9,
                 undefined8 param_10,long *param_11)

{
  float *pfVar1;
  undefined1 *puVar2;
  uint uVar3;
  void *pvVar4;
  ushort uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short sVar9;
  short sVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 *puVar25;
  float *pfVar26;
  uint uVar27;
  int iVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  ushort *puVar31;
  int *piVar32;
  int iVar33;
  uint uVar34;
  char *pcVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  uint uVar39;
  void *pvVar40;
  void *pvVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  uint uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  long local_268;
  ulong local_240;
  long local_238;
  ushort *local_228;
  uint local_1e8 [2];
  ulong local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  ulong local_1c8;
  long local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  ulong local_1a0;
  ulong local_198;
  float *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 local_170 [64];
  long local_130;
  float *pfStack_128;
  undefined4 *local_120;
  undefined1 local_118;
  float local_110 [2];
  undefined8 local_108;
  undefined4 local_100 [2];
  long local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  int *local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_a0;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  ulong local_78 [3];
  
  lVar15 = nn::os::GetSystemTick();
  lVar16 = nn::os::GetSystemTick();
  sVar9 = (short)param_8[2];
  sVar10 = *(short *)((long)param_8 + 10);
  uVar47 = *(uint *)(param_3 + 8);
  uVar3 = (int)sVar10 + (int)sVar9;
  uVar20 = (ulong)uVar3;
  *(uint *)(param_11 + 2) = uVar3;
  iVar46 = (int)(uVar3 + 0x1f) >> 5;
  if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) < iVar46) {
    FUN_02eb1f88(param_11,PTR_PTR_047d1a50,(long)iVar46);
  }
  iVar33 = (int)param_11[1];
  if ((int)param_11[1] != iVar46) {
    *(int *)(param_11 + 1) = iVar46;
    iVar33 = iVar46;
  }
  local_d0 = 0xffffffff;
  local_b8 = 0;
  local_c8 = (int *)0x0;
  lStack_c0 = 0;
  uStack_d8 = param_6[1];
  local_e0 = *param_6;
  uVar24 = (uint)param_7;
  local_88 = param_10;
  lVar44 = (param_7 >> 0x16 & 0x3ff) * 0x100;
  uStack_90 = param_9;
  fVar48 = *(float *)(param_1 + 0x3c);
  local_110[0] = fVar48 + fVar48;
  local_108 = *(undefined8 *)(param_1 + 0x48);
  local_130 = *(long *)(param_1 + 0x30);
  pfStack_128 = local_110;
  local_118 = 0;
  local_120 = local_100;
  lVar45 = *(long *)(*(long *)(local_130 + 0x38) + lVar44);
  local_100[0] = param_2;
  local_f8 = param_3;
  uStack_f0 = param_4;
  local_e8 = param_5;
  local_a0 = uVar24;
  local_98 = param_8;
  if (fVar48 <= *(float *)(local_130 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) +
                *(float *)(param_1 + 0x40)) {
    pvVar41 = (void *)*param_11;
    uVar20 = (ulong)iVar33;
    pvVar40 = pvVar41;
    if (((ulong)pvVar41 & 0xf) == 0) {
      uVar42 = uVar20;
    }
    else {
      uVar42 = 4 - (((ulong)pvVar41 & 0xf) >> 2);
      uVar22 = uVar20;
      if (uVar42 <= uVar20) {
        uVar22 = uVar42;
      }
      pvVar4 = (void *)((long)pvVar41 + uVar22 * 4);
      uVar42 = uVar20 - uVar22;
      if (pvVar41 < pvVar4) {
        memset(pvVar41,0xff,uVar22 * 4);
        uVar22 = uVar22 * 4 - 1;
        uVar47 = ((uint)(uVar22 >> 2) & 0x3fffffff) + 1;
        if ((uVar47 & 7) != 0) {
          lVar44 = -((ulong)uVar47 & 7);
          do {
            pvVar40 = (void *)((long)pvVar40 + 4);
            bVar14 = lVar44 != -1;
            lVar44 = lVar44 + 1;
          } while (bVar14);
        }
        if (0x1b < uVar22) {
          do {
            pvVar40 = (void *)((long)pvVar40 + 0x20);
          } while (pvVar40 < pvVar4);
        }
      }
      else {
      }
    }
    if ((3 < uVar42) && (0 < (long)(uVar42 & 0xfffffffffffffffc))) {
      pvVar4 = (void *)((long)pvVar40 + (uVar42 & 0xfffffffffffffffc) * 4);
      pvVar6 = pvVar4;
      if (pvVar4 <= (void *)((long)pvVar40 + 0x10U)) {
        pvVar6 = (void *)((long)pvVar40 + 0x10U);
      }
      memset(pvVar40,0xff,(long)pvVar6 + ~(ulong)pvVar40 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar40 = (void *)((long)pvVar40 + 0x10);
      } while (pvVar40 < pvVar4);
    }
    if (pvVar40 < (void *)((long)pvVar41 + (long)iVar33 * 4)) {
      memset(pvVar40,0xff,(long)pvVar41 + ~(ulong)pvVar40 + uVar20 * 4 + 4 & 0xfffffffffffffffc);
    }
  }
  else {
    uVar42 = (ulong)uVar47 & 0x3fffff;
    uVar47 = (uint)uVar42;
    if (*(int *)(param_1 + 0x14) < 0) {
      lVar44 = *(long *)(lVar45 + 0x20);
      uVar27 = uVar47 - *(int *)(lVar44 + 0x30);
      if ((int)uVar47 < *(int *)(lVar44 + 0x30)) {
        uVar27 = uVar47;
        if ((*(int *)(lVar44 + 0x78) == 0) ||
           (uVar27 = *(uint *)(*(long *)(lVar44 + 0x70) + uVar42 * 4), uVar27 != 0xffffffff)) {
          lVar44 = *(long *)(lVar44 + 0xc0);
          goto LAB_03064264;
        }
        lVar44 = *(long *)(lVar44 + 0x28) + uVar42 * 0x14;
      }
      else {
        lVar44 = *(long *)(lVar44 + 0xe0);
LAB_03064264:
        lVar44 = lVar44 + (long)(int)uVar27 * 0x14;
      }
      local_180 = (undefined1 *)CONCAT44(fVar48,fVar48);
      FUN_03070780(local_130,*(undefined8 *)(param_1 + 0x20),uVar47 | uVar24 & 0xffc00000,lVar44,
                   param_7 & 0xffffffff,param_8,param_9,param_10,param_1,&local_180,param_11,
                   param_1 + 0xb48);
    }
    else {
      lVar38 = *(long *)(*(long *)(*(long *)(*(long *)(local_130 + 0x38) + lVar44) + 0x38) +
                        (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
      lVar43 = tpidr_el0;
      lVar21 = *(long *)(lVar43 + 0x1000b8);
      if (lVar21 == 0) {
        lVar21 = FUN_00e5d3b4();
        *(long *)(lVar43 + 0x1000b8) = lVar21;
      }
      local_238 = *(long *)(*(long *)(lVar21 + 0x3d0) + 0x10);
      if (*(long *)(local_238 + 8) == 0) {
        local_240 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
        local_1b8 = local_240;
        if (local_238 == 0) goto LAB_03064398;
        local_180 = (undefined1 *)(local_240 + 0x3f & 0xffffffffffffffc0);
        if (*(undefined1 **)(local_238 + 0x28) < local_180) {
LAB_03064188:
          local_228 = (ushort *)FUN_031cf3b4(local_238,&local_180);
        }
        else {
          local_228 = *(ushort **)(local_238 + 0x38);
          if (*(undefined1 **)(local_238 + 0x40) < local_180 + (long)local_228) goto LAB_03064188;
          *(undefined1 **)(local_238 + 0x38) = local_180 + (long)local_228;
        }
      }
      else {
        local_1b8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
LAB_03064398:
        local_240 = local_1b8;
        local_228 = (ushort *)(**(code **)PTR_DAT_047d1a08)(1,&local_1b8,0x40);
        local_238 = 0;
      }
      puVar11 = PTR_DAT_047e4f30;
      local_268 = (long)(int)uVar3;
      lVar21 = (long)(int)sVar9;
      local_180 = local_170;
      local_178 = 0x8000004000000000;
      nn::os::LockMutex((MutexType *)PTR_DAT_047e4f30);
      *(int *)(puVar11 + 0x68) = *(int *)(puVar11 + 0x68) + 1;
      nn::os::UnlockMutex((MutexType *)puVar11);
      uVar42 = local_178 >> 0x20;
      local_178 = local_178 & 0xffffffff00000000;
      uVar27 = *(uint *)(*(long *)(lVar38 + 0x28) + (ulong)(uVar24 & 0x3fffff) * 4);
      iVar46 = (int)sVar9;
      if (uVar27 == 0xffffffff) {
        nn::os::LockMutex((MutexType *)(puVar11 + 0x20));
        iVar33 = *(int *)(puVar11 + 0x6c);
        *(int *)(puVar11 + 0x6c) = iVar33 + 1;
        if ((puVar11[0x70] != '\0') && (*(int *)(puVar11 + 0x68) == iVar33 + 1)) {
          nn::os::ReleaseSemaphore((SemaphoreType *)(puVar11 + 0x40),1);
        }
        nn::os::UnlockMutex((MutexType *)(puVar11 + 0x20));
        plVar17 = (long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + lVar44)
                                    + 0x38) + (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
        if ((char)plVar17[2] == '\x01') {
          lVar38 = *plVar17;
        }
        else {
          lVar38 = FUN_03065a74();
        }
        iVar33 = (int)((uVar3 - 1) * uVar3) >> 1;
        if ((int)(local_178._4_4_ & 0x7fffffff) < iVar33) {
          FUN_02eea048(&local_180,PTR_PTR_047d1a50 + 0x20,(long)iVar33);
        }
        local_190 = (float *)0x0;
        local_188 = 0x8000000000000000;
        local_1b8 = 0;
        local_1b0 = 0x8000000000000000;
        lVar44 = *(long *)(lVar43 + 0x1000b8);
        if (lVar44 == 0) {
          lVar44 = FUN_00e5d3b4();
          *(long *)(lVar43 + 0x1000b8) = lVar44;
        }
        local_1a8 = *(long *)(*(long *)(lVar44 + 0x3d0) + 0x10);
        if (*(long *)(local_1a8 + 8) != 0) {
          local_1a8 = 0;
        }
        local_198 = lVar21 * 8;
        local_78[0] = local_198;
        if (local_1a8 == 0) {
          local_1a0 = (**(code **)PTR_DAT_047d1a08)(1,local_78,0x40);
        }
        else {
          local_1e0 = local_198 + 0x3f & 0xffffffffffffffc0;
          if (local_1e0 <= *(ulong *)(local_1a8 + 0x28)) {
            local_1a0 = *(ulong *)(local_1a8 + 0x38);
            if (local_1e0 + local_1a0 <= *(ulong *)(local_1a8 + 0x40)) {
              *(ulong *)(local_1a8 + 0x38) = local_1e0 + local_1a0;
              goto LAB_030646cc;
            }
          }
          local_1a0 = FUN_031cf3b4(local_1a8,&local_1e0);
        }
LAB_030646cc:
        local_1b0 = CONCAT44(iVar46,(int)local_1b0) | 0x8000000000000000;
        local_1e0 = 0;
        local_1d8 = 0x8000000000000000;
        lVar44 = *(long *)(lVar43 + 0x1000b8);
        local_1b8 = local_1a0;
        if (lVar44 == 0) {
          lVar44 = FUN_00e5d3b4();
          *(long *)(lVar43 + 0x1000b8) = lVar44;
        }
        local_1d0 = *(long *)(*(long *)(lVar44 + 0x3d0) + 0x10);
        if (*(long *)(local_1d0 + 8) != 0) {
          local_1d0 = 0;
        }
        local_1c0 = local_268 * 8;
        local_80 = local_1c0;
        if (local_1d0 == 0) {
          local_1c8 = (**(code **)PTR_DAT_047d1a08)(1,&local_80,0x40);
        }
        else {
          local_78[0] = local_1c0 + 0x3fU & 0xffffffffffffffc0;
          if (local_78[0] <= *(ulong *)(local_1d0 + 0x28)) {
            local_1c8 = *(ulong *)(local_1d0 + 0x38);
            if (local_78[0] + local_1c8 <= *(ulong *)(local_1d0 + 0x40)) {
              *(ulong *)(local_1d0 + 0x38) = local_78[0] + local_1c8;
              goto LAB_03064788;
            }
          }
          local_1c8 = FUN_031cf3b4(local_1d0,local_78);
        }
LAB_03064788:
        local_1d8 = CONCAT44(uVar3,(int)local_1d8) | 0x8000000000000000;
        local_78[0] = CONCAT44(*(undefined4 *)(lVar38 + 0x18),*(undefined4 *)(lVar38 + 0x18));
        local_1e0 = local_1c8;
        FUN_0306bd40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                     param_7 & 0xffffffff,param_8,param_9,param_10,param_1,local_78,&local_1b8,
                     &local_1e0,&local_190,param_1 + 0xa60);
        uVar42 = local_188 & 0xffffffff;
        if ((int)local_178 != (int)local_188) {
          local_178 = CONCAT44(local_178._4_4_,(int)local_188);
        }
        if (0 < (int)local_188) {
          pfVar26 = local_190;
          puVar30 = local_180;
          do {
            uVar42 = uVar42 - 1;
            *puVar30 = (char)(int)((*pfVar26 - *(float *)(lVar38 + 0x1c)) *
                                  *(float *)(lVar38 + 0x24));
            pfVar26 = pfVar26 + 1;
            puVar30 = puVar30 + 1;
          } while (uVar42 != 0);
        }
        uVar42 = local_1d8 & 0xffffffff;
        if (0 < (int)local_1d8) {
          pfVar26 = (float *)(local_1e0 + 4);
          puVar31 = local_228;
          do {
            fVar51 = *(float *)(lVar38 + 0x1c);
            pfVar1 = pfVar26 + -1;
            fVar50 = *pfVar26;
            pfVar26 = pfVar26 + 2;
            iVar33 = (int)((fVar50 - fVar51) * *(float *)(lVar38 + 0x24));
            fVar49 = *pfVar1 * 253.0 + 0.5;
            fVar48 = 0.0;
            if (0.0 <= fVar49) {
              fVar48 = fVar49;
            }
            bVar14 = false;
            bVar12 = true;
            bVar13 = false;
            if (iVar33 == 0) {
              bVar14 = false;
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar50) && !NAN(fVar51)) {
                bVar14 = fVar50 < fVar51;
                bVar12 = fVar50 == fVar51;
                bVar13 = false;
              }
            }
            uVar5 = 0x100;
            if (bVar12 || bVar14 != bVar13) {
              uVar5 = (ushort)(iVar33 << 8);
            }
            uVar42 = uVar42 - 1;
            *puVar31 = uVar5 | (ushort)(int)fVar48;
            puVar31 = puVar31 + 1;
          } while (uVar42 != 0);
        }
        iVar33 = param_8[1];
        memcpy((void *)(*(long *)(lVar38 + 0x50) + (long)*param_8 * 2),local_228,lVar21 << 1);
        if (0 < sVar10) {
          memcpy((void *)(*(long *)(lVar38 + 0x50) + (long)iVar33 * 2),local_228 + lVar21,
                 (long)sVar10 << 1);
        }
        if (local_1c8 == local_1e0) {
          local_1d8 = local_1d8 & 0xffffffff00000000;
        }
        if (local_1d0 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1);
        }
        else {
          uVar42 = local_1c0 + 0x3fU & 0xffffffffffffffc0;
          if ((*(ulong *)(local_1d0 + 0x28) < uVar42) ||
             (*(long *)(local_1d0 + 0x38) != uVar42 + local_1c8)) {
            if (local_1c8 != 0) {
              if (*(ulong *)(local_1d0 + 0x28) < uVar42 + 0x40) {
                *(int *)(*(long *)(local_1d0 + 0x30) + 0x20) =
                     *(int *)(*(long *)(local_1d0 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(local_1d0 + 0x10) + 0x18))
                          (*(long **)(local_1d0 + 0x10),local_1c8 - (long)*(int *)(local_1c8 - 4),
                           uVar42 + 0x44);
              }
              else {
                if (*(long *)(local_1d0 + 0x38) == uVar42 + local_1c8) {
                  *(ulong *)(local_1d0 + 0x38) = local_1c8;
                  goto LAB_030649b8;
                }
                FUN_031cf778();
              }
            }
          }
          else {
            *(ulong *)(local_1d0 + 0x38) = local_1c8;
            if (*(ulong *)(local_1d0 + 0x48) == local_1c8) {
LAB_030649b8:
              FUN_031cf578();
            }
          }
        }
        uVar42 = local_1d8;
        uVar22 = (ulong)local_1d8._4_4_;
        local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
        if ((-1 < (long)uVar42) && (local_1e0 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1e0,uVar22 << 3);
        }
        if (0 < (int)local_1b0) {
          lVar44 = 0;
          do {
            piVar32 = (int *)(local_1b8 + lVar44);
            lVar44 = lVar44 + 8;
            *(char *)(*(long *)(lVar38 + 0x60) + (long)*piVar32) =
                 (char)(int)(((float)piVar32[1] - *(float *)(lVar38 + 0x1c)) *
                            *(float *)(lVar38 + 0x24));
          } while ((local_1b0 & 0xffffffff) * 8 != lVar44);
        }
        local_1e8[0] = uVar24 & 0x3fffff;
        FUN_03076bfc(lVar38,local_1e8,&local_180);
        plVar17 = *(long **)(param_1 + 0x50);
        if (plVar17 != (long *)0x0) {
          iVar33 = (int)plVar17[1];
          lVar44 = (long)iVar33;
          if ((int)(*(uint *)((long)plVar17 + 0xc) & 0x7fffffff) <= iVar33) {
            FUN_0305c42c(plVar17,PTR_PTR_047d1a50,lVar44 + 1);
            iVar33 = (int)plVar17[1];
          }
          *(uint *)(*plVar17 + (long)iVar33 * 4) = uVar24;
          *(int *)(plVar17 + 1) = (int)(lVar44 + 1);
        }
        if (local_1a0 == local_1b8) {
          local_1b0 = local_1b0 & 0xffffffff00000000;
        }
        if (local_1a8 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1);
        }
        else {
          uVar42 = local_198 + 0x3f & 0xffffffffffffffc0;
          if ((*(ulong *)(local_1a8 + 0x28) < uVar42) ||
             (*(long *)(local_1a8 + 0x38) != uVar42 + local_1a0)) {
            if (local_1a0 != 0) {
              if (*(ulong *)(local_1a8 + 0x28) < uVar42 + 0x40) {
                *(int *)(*(long *)(local_1a8 + 0x30) + 0x20) =
                     *(int *)(*(long *)(local_1a8 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(local_1a8 + 0x10) + 0x18))
                          (*(long **)(local_1a8 + 0x10),local_1a0 - (long)*(int *)(local_1a0 - 4),
                           uVar42 + 0x44);
              }
              else {
                if (*(long *)(local_1a8 + 0x38) == uVar42 + local_1a0) {
                  *(ulong *)(local_1a8 + 0x38) = local_1a0;
                  goto LAB_03064b58;
                }
                FUN_031cf778();
              }
            }
          }
          else {
            *(ulong *)(local_1a8 + 0x38) = local_1a0;
            if (*(ulong *)(local_1a8 + 0x48) == local_1a0) {
LAB_03064b58:
              FUN_031cf578();
            }
          }
        }
        uVar42 = local_1b0;
        uVar22 = (ulong)local_1b0._4_4_;
        local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
        if ((-1 < (long)uVar42) && (local_1b8 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1b8,uVar22 << 3);
        }
        uVar42 = local_188;
        uVar22 = (ulong)local_188._4_4_;
        local_188 = (ulong)local_188._4_4_ << 0x20;
        if ((-1 < (long)uVar42) && (local_190 != (float *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_190,uVar22 << 2);
        }
      }
      else {
        lVar43 = *(long *)(lVar38 + 0x38);
        lVar44 = -0x100000000;
        uVar37 = 0xffffffff;
        do {
          uVar39 = uVar37;
          uVar37 = uVar39 + 1;
          lVar44 = lVar44 + 0x100000000;
        } while (*(char *)(lVar43 + (int)(uVar27 + uVar39 + 1)) != -1);
        if ((int)((uint)uVar42 & 0x7fffffff) < (int)uVar37) {
          FUN_00cb58c0(&local_180,PTR_PTR_047d1a50 + 0x20,lVar44 >> 0x20);
        }
        if (uVar37 != 0) {
          puVar30 = (undefined1 *)(lVar43 + (ulong)uVar27);
          uVar27 = uVar37 & 3;
          puVar2 = local_180;
          if (2 < uVar39) {
            iVar33 = -(uVar37 & 0xfffffffc);
            puVar25 = puVar30;
            puVar29 = local_180;
            do {
              *puVar29 = *puVar25;
              puVar29[1] = puVar25[1];
              puVar29[2] = puVar25[2];
              puVar30 = puVar25 + 4;
              puVar2 = puVar29 + 4;
              iVar33 = iVar33 + 4;
              puVar29[3] = puVar25[3];
              puVar25 = puVar30;
              puVar29 = puVar2;
            } while (iVar33 != 0);
          }
          for (; uVar27 != 0; uVar27 = uVar27 - 1) {
            *puVar2 = *puVar30;
            puVar30 = puVar30 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        local_178 = CONCAT44(local_178._4_4_,uVar37);
        nn::os::LockMutex((MutexType *)(puVar11 + 0x20));
        iVar33 = *(int *)(puVar11 + 0x6c);
        *(int *)(puVar11 + 0x6c) = iVar33 + 1;
        if (puVar11[0x70] != '\0' && *(int *)(puVar11 + 0x68) == iVar33 + 1) {
          nn::os::ReleaseSemaphore((SemaphoreType *)(puVar11 + 0x40),1);
        }
        nn::os::UnlockMutex((MutexType *)(puVar11 + 0x20));
        iVar33 = param_8[1];
        memcpy(local_228,(void *)(*(long *)(lVar38 + 0x50) + (long)*param_8 * 2),
               -((ulong)(long)sVar9 >> 0x1f & 1) & 0xfffffffe00000000 |
               ((long)sVar9 & 0xffffffffU) << 1);
        if (0 < sVar10) {
          memcpy(local_228 + iVar46,(void *)(*(long *)(lVar38 + 0x50) + (long)iVar33 * 2),
                 (long)sVar10 << 1);
        }
      }
      pvVar41 = (void *)*param_11;
      uVar42 = (ulong)(int)param_11[1];
      pvVar40 = pvVar41;
      if (((ulong)pvVar41 & 0xf) == 0) {
        uVar22 = uVar42;
      }
      else {
        uVar22 = 4 - (((ulong)pvVar41 & 0xf) >> 2);
        uVar18 = uVar42;
        if (uVar22 <= uVar42) {
          uVar18 = uVar22;
        }
        pvVar4 = (void *)((long)pvVar41 + uVar18 * 4);
        uVar22 = uVar42 - uVar18;
        if (pvVar41 < pvVar4) {
          memset(pvVar41,0,uVar18 * 4);
          uVar23 = uVar18 * 4 - 1;
          uVar27 = ((uint)(uVar23 >> 2) & 0x3fffffff) + 1;
          if ((uVar27 & 7) != 0) {
            lVar44 = -((ulong)uVar27 & 7);
            do {
              pvVar40 = (void *)((long)pvVar40 + 4);
              bVar14 = lVar44 != -1;
              lVar44 = lVar44 + 1;
            } while (bVar14);
          }
          if (uVar23 < 0x1c) {
            goto LAB_03064c68;
          }
          do {
            pvVar40 = (void *)((long)pvVar40 + 0x20);
          } while (pvVar40 < pvVar4);
        }
      }
LAB_03064c68:
      if ((3 < uVar22) && (0 < (long)(uVar22 & 0xfffffffffffffffc))) {
        pvVar4 = (void *)((long)pvVar40 + (uVar22 & 0xfffffffffffffffc) * 4);
        pvVar6 = pvVar4;
        if (pvVar4 <= (void *)((long)pvVar40 + 0x10U)) {
          pvVar6 = (void *)((long)pvVar40 + 0x10U);
        }
        memset(pvVar40,0,(long)pvVar6 + ~(ulong)pvVar40 + 0x10 & 0xfffffffffffffff0);
        do {
          pvVar40 = (void *)((long)pvVar40 + 0x10);
        } while (pvVar40 < pvVar4);
      }
      if (pvVar40 < (void *)((long)pvVar41 + uVar42 * 4)) {
        memset(pvVar40,0,(long)pvVar41 + ~(ulong)pvVar40 + uVar42 * 4 + 4 & 0xfffffffffffffffc);
      }
      uVar42 = local_178;
      if ((int)local_178 == 0) {
        local_178 = (ulong)local_178._4_4_ << 0x20;
        if ((-1 < (long)uVar42) && (local_180 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
        if (local_238 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_228,local_240);
          goto LAB_03065448;
        }
        uVar20 = local_240 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(local_238 + 0x28) < uVar20) ||
           (*(long *)(local_238 + 0x38) != uVar20 + (long)local_228)) {
          if (local_228 == (ushort *)0x0) goto LAB_03065448;
          if (*(ulong *)(local_238 + 0x28) < uVar20 + 0x40) {
            *(int *)(*(long *)(local_238 + 0x30) + 0x20) =
                 *(int *)(*(long *)(local_238 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(local_238 + 0x10) + 0x18))
                      (*(long **)(local_238 + 0x10),(long)local_228 - (long)*(int *)(local_228 + -2)
                       ,uVar20 + 0x44);
            goto LAB_03065448;
          }
          if (*(long *)(local_238 + 0x38) != uVar20 + (long)local_228) {
            FUN_031cf778(local_238,local_228);
            goto LAB_03065448;
          }
          *(ushort **)(local_238 + 0x38) = local_228;
        }
        else {
          *(ushort **)(local_238 + 0x38) = local_228;
          if (*(ushort **)(local_238 + 0x48) != local_228) goto LAB_03065448;
        }
        FUN_031cf578(local_238);
        goto LAB_03065448;
      }
      if ((*(byte *)(param_3 + 0x10) >> 4 & 1) == 0) {
        uVar47 = uVar47 - *param_8;
      }
      else {
        uVar47 = (uVar47 + iVar46) - param_8[1];
      }
      if ((int)uVar47 < 1) {
        iVar33 = 0;
      }
      else {
        if (uVar47 == 1) {
          uVar22 = 0;
          iVar33 = 0;
        }
        else {
          uVar22 = 0;
          iVar33 = 0;
          pcVar35 = (char *)((long)local_228 + 3);
          do {
            if (pcVar35[-2] != '\0') {
              iVar33 = iVar33 + 1;
            }
            uVar22 = uVar22 + 2;
            if (*pcVar35 != '\0') {
              iVar33 = iVar33 + 1;
            }
            pcVar35 = pcVar35 + 4;
          } while (((ulong)uVar47 & 0xfffffffe) != uVar22);
        }
        if (((uVar47 & 1) != 0) && (*(char *)((long)local_228 + uVar22 * 2 + 1) != '\0')) {
          iVar33 = iVar33 + 1;
        }
      }
      fVar49 = (*(float *)(param_1 + 0x3c) - *(float *)(lVar38 + 0x1c)) * *(float *)(lVar38 + 0x24);
      fVar48 = 0.0;
      if (0.0 <= fVar49) {
        fVar48 = fVar49;
      }
      if (0 < (int)uVar3) {
        uVar22 = 0;
        iVar28 = 0;
        pcVar35 = (char *)((long)local_228 + 1);
        do {
          if (*pcVar35 != '\0') {
            uVar27 = (uint)uVar22;
            if (uVar47 == uVar22) {
              if (lVar21 <= (long)(ulong)uVar47) goto LAB_03064ed4;
LAB_03064f60:
              uVar18 = uVar22 >> 5 & 0x7ffffff;
              *(uint *)(*param_11 + uVar18 * 4) =
                   *(uint *)(*param_11 + uVar18 * 4) | 1 << (ulong)(uVar27 & 0x1f);
            }
            else {
              iVar19 = iVar28;
              if (iVar28 <= iVar33) {
                iVar19 = iVar33;
              }
              iVar36 = iVar33;
              if (iVar28 <= iVar33) {
                iVar36 = iVar28;
              }
              if (((long)uVar22 < lVar21) ||
                 ((uint)(byte)local_180[iVar36 + ((iVar19 + -1) * iVar19 >> 1)] < (uint)(int)fVar48)
                 ) {
                if ((uint)(int)fVar48 <=
                    (uint)(byte)local_180[iVar36 + ((iVar19 + -1) * iVar19 >> 1)])
                goto LAB_03064f60;
              }
              else {
LAB_03064ed4:
                lVar44 = *(long *)(lVar45 + 0x20);
                iVar19 = -iVar46 + uVar27 + param_8[1];
                if (iVar19 < *(int *)(lVar44 + 0x30)) {
                  lVar43 = *(long *)(lVar44 + 0x28);
                  if (*(int *)(lVar44 + 0x78) == 0) {
                    iVar36 = iVar19;
                  }
                  else {
                    iVar36 = *(int *)(*(long *)(lVar44 + 0x70) + (long)iVar19 * 4);
                  }
                  if (iVar36 != -1) {
                    plVar17 = (long *)(lVar44 + 0xc0);
                    iVar19 = iVar36;
                    goto LAB_03064f3c;
                  }
                }
                else {
                  iVar19 = (-iVar46 + uVar27 + param_8[1]) - *(int *)(lVar44 + 0x30);
                  plVar17 = (long *)(lVar44 + 0xe0);
LAB_03064f3c:
                  lVar43 = *plVar17;
                }
                if ((*(int *)(lVar43 + (long)iVar19 * 0x14 + 8) != -1) &&
                   ((*(byte *)(lVar43 + (long)iVar19 * 0x14 + 0x10) >> 5 & 1) == 0))
                goto LAB_03064f60;
              }
            }
            iVar28 = iVar28 + 1;
          }
          uVar22 = uVar22 + 1;
          pcVar35 = pcVar35 + 2;
        } while (uVar20 != uVar22);
      }
      local_178 = (ulong)local_178._4_4_ << 0x20;
      if ((-1 < (long)uVar42) && (local_180 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      if (local_238 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_228,local_240);
      }
      else {
        uVar20 = local_240 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(local_238 + 0x28) < uVar20) ||
           (*(long *)(local_238 + 0x38) != uVar20 + (long)local_228)) {
          if (local_228 != (ushort *)0x0) {
            if (*(ulong *)(local_238 + 0x28) < uVar20 + 0x40) {
              *(int *)(*(long *)(local_238 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_238 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_238 + 0x10) + 0x18))
                        (*(long **)(local_238 + 0x10),
                         (long)local_228 - (long)*(int *)(local_228 + -2),uVar20 + 0x44);
            }
            else {
              if (*(long *)(local_238 + 0x38) == uVar20 + (long)local_228) {
                *(ushort **)(local_238 + 0x38) = local_228;
                goto LAB_030650dc;
              }
              FUN_031cf778(local_238,local_228);
            }
          }
        }
        else {
          *(ushort **)(local_238 + 0x38) = local_228;
          if (*(ushort **)(local_238 + 0x48) == local_228) {
LAB_030650dc:
            FUN_031cf578(local_238);
          }
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar47 = (uint)sVar9;
    if (0 < (int)uVar47) {
      uVar20 = 0;
      do {
        uVar42 = uVar20 >> 5;
        uVar37 = (uint)uVar20;
        uVar27 = 1 << (ulong)(uVar37 & 0x1f);
        if ((*(uint *)(*param_11 + uVar42 * 4) & uVar27) != 0) {
          lVar44 = *(long *)(lVar45 + 0x20);
          iVar46 = *(int *)(lVar44 + 0x60);
          uVar39 = uVar37 + *param_8;
          local_d0 = uVar39 | uVar24 & 0xffc00000;
          iVar33 = uVar39 - *(int *)(lVar44 + 0x30);
          if ((int)uVar39 < *(int *)(lVar44 + 0x30)) {
            uVar34 = uVar39;
            if (*(int *)(lVar44 + 0x78) != 0) {
              uVar34 = *(uint *)(*(long *)(lVar44 + 0x70) + (long)(int)uVar39 * 4);
            }
            if (uVar34 == 0xffffffff) {
              lStack_c0 = *(long *)(lVar44 + 0x58) + (long)(int)(iVar46 * uVar39) * 4;
              lVar43 = *(long *)(lVar44 + 0x28);
              uVar34 = uVar39;
            }
            else {
              lStack_c0 = *(long *)(lVar44 + 0x130) + (long)(int)(uVar34 * iVar46) * 4;
              lVar43 = *(long *)(lVar44 + 0xc0);
            }
            local_b8 = lStack_c0 + (long)iVar46 * 4;
            local_c8 = (int *)(lVar43 + (long)(int)uVar34 * 0x14);
            if (*(int *)(lVar44 + 0x78) == 0) {
              uVar34 = uVar39;
            }
            else {
              uVar34 = *(uint *)(*(long *)(lVar44 + 0x70) + (long)(int)uVar39 * 4);
            }
            if (uVar34 == 0xffffffff) {
              piVar32 = (int *)(*(long *)(lVar44 + 0x28) + (long)(int)uVar39 * 0x14);
            }
            else {
              piVar32 = (int *)(*(long *)(lVar44 + 0xc0) + (long)(int)uVar34 * 0x14);
            }
          }
          else {
            lStack_c0 = *(long *)(lVar44 + 0x150) + (long)(iVar46 * iVar33) * 4;
            local_b8 = lStack_c0 + (long)iVar46 * 4;
            piVar32 = (int *)(*(long *)(lVar44 + 0xe0) + (long)iVar33 * 0x14);
            local_c8 = piVar32;
          }
          iVar46 = *piVar32;
          iVar33 = piVar32[1];
          iVar28 = *(int *)(lVar44 + 0x40);
          puVar7 = (undefined8 *)(*(long *)(lVar44 + 0x38) + (long)iVar46 * 0x10);
          if (iVar28 <= iVar46) {
            puVar7 = (undefined8 *)(*(long *)(lVar44 + 0xf0) + (long)(iVar46 - iVar28) * 0x10);
          }
          puVar8 = (undefined8 *)(*(long *)(lVar44 + 0x38) + (long)iVar33 * 0x10);
          if (iVar28 <= iVar33) {
            puVar8 = (undefined8 *)(*(long *)(lVar44 + 0xf0) + (long)(iVar33 - iVar28) * 0x10);
          }
          fVar48 = (float)*puVar7;
          fVar49 = (float)((ulong)*puVar7 >> 0x20);
          fVar48 = fVar48 + ((float)*puVar8 - fVar48) * 0.5;
          fVar49 = fVar49 + ((float)((ulong)*puVar8 >> 0x20) - fVar49) * 0.5;
          fVar50 = (float)puVar7[1] + ((float)puVar8[1] - (float)puVar7[1]) * 0.5;
          local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar45 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x80) >> 0x20) * fVar50 +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x60) >> 0x20) * fVar48 +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20) * fVar49,
                              (float)*(undefined8 *)(lVar45 + 0x90) +
                              (float)*(undefined8 *)(lVar45 + 0x80) * fVar50 +
                              (float)*(undefined8 *)(lVar45 + 0x60) * fVar48 +
                              (float)*(undefined8 *)(lVar45 + 0x70) * fVar49);
          uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x88) >> 0x20) * fVar50 +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x68) >> 0x20) * fVar48 +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x78) >> 0x20) * fVar49,
                               (float)*(undefined8 *)(lVar45 + 0x98) +
                               (float)*(undefined8 *)(lVar45 + 0x88) * fVar50 +
                               (float)*(undefined8 *)(lVar45 + 0x68) * fVar48 +
                               (float)*(undefined8 *)(lVar45 + 0x78) * fVar49);
          uVar20 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_130);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*param_11 + uVar42 * 4) =
                 *(uint *)(*param_11 + uVar42 * 4) & (uVar27 ^ 0xffffffff);
          }
        }
        uVar20 = (ulong)(uVar37 + 1);
      } while (uVar47 != uVar37 + 1);
    }
    if (0 < sVar10) {
      iVar46 = 0;
      do {
        uVar27 = uVar47 + iVar46;
        uVar37 = 1 << (ulong)(uVar27 & 0x1f);
        if ((*(uint *)(*param_11 + (long)((int)uVar27 >> 5) * 4) & uVar37) != 0) {
          lVar44 = *(long *)(lVar45 + 0x20);
          iVar33 = *(int *)(lVar44 + 0x60);
          uVar39 = iVar46 + param_8[1];
          local_d0 = uVar39 | uVar24 & 0xffc00000;
          iVar28 = uVar39 - *(int *)(lVar44 + 0x30);
          if ((int)uVar39 < *(int *)(lVar44 + 0x30)) {
            uVar34 = uVar39;
            if (*(int *)(lVar44 + 0x78) != 0) {
              uVar34 = *(uint *)(*(long *)(lVar44 + 0x70) + (long)(int)uVar39 * 4);
            }
            if (uVar34 == 0xffffffff) {
              lStack_c0 = *(long *)(lVar44 + 0x58) + (long)(int)(iVar33 * uVar39) * 4;
              lVar43 = *(long *)(lVar44 + 0x28);
              uVar34 = uVar39;
            }
            else {
              lStack_c0 = *(long *)(lVar44 + 0x130) + (long)(int)(uVar34 * iVar33) * 4;
              lVar43 = *(long *)(lVar44 + 0xc0);
            }
            local_b8 = lStack_c0 + (long)iVar33 * 4;
            local_c8 = (int *)(lVar43 + (long)(int)uVar34 * 0x14);
            if (*(int *)(lVar44 + 0x78) == 0) {
              uVar34 = uVar39;
            }
            else {
              uVar34 = *(uint *)(*(long *)(lVar44 + 0x70) + (long)(int)uVar39 * 4);
            }
            if (uVar34 == 0xffffffff) {
              piVar32 = (int *)(*(long *)(lVar44 + 0x28) + (long)(int)uVar39 * 0x14);
            }
            else {
              piVar32 = (int *)(*(long *)(lVar44 + 0xc0) + (long)(int)uVar34 * 0x14);
            }
          }
          else {
            lStack_c0 = *(long *)(lVar44 + 0x150) + (long)(iVar33 * iVar28) * 4;
            local_b8 = lStack_c0 + (long)iVar33 * 4;
            piVar32 = (int *)(*(long *)(lVar44 + 0xe0) + (long)iVar28 * 0x14);
            local_c8 = piVar32;
          }
          iVar33 = *piVar32;
          iVar28 = piVar32[1];
          iVar19 = *(int *)(lVar44 + 0x40);
          puVar7 = (undefined8 *)(*(long *)(lVar44 + 0x38) + (long)iVar33 * 0x10);
          if (iVar19 <= iVar33) {
            puVar7 = (undefined8 *)(*(long *)(lVar44 + 0xf0) + (long)(iVar33 - iVar19) * 0x10);
          }
          puVar8 = (undefined8 *)(*(long *)(lVar44 + 0x38) + (long)iVar28 * 0x10);
          if (iVar19 <= iVar28) {
            puVar8 = (undefined8 *)(*(long *)(lVar44 + 0xf0) + (long)(iVar28 - iVar19) * 0x10);
          }
          fVar48 = (float)*puVar7;
          fVar49 = (float)((ulong)*puVar7 >> 0x20);
          fVar48 = fVar48 + ((float)*puVar8 - fVar48) * 0.5;
          fVar49 = fVar49 + ((float)((ulong)*puVar8 >> 0x20) - fVar49) * 0.5;
          fVar50 = (float)puVar7[1] + ((float)puVar8[1] - (float)puVar7[1]) * 0.5;
          local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar45 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x80) >> 0x20) * fVar50 +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x60) >> 0x20) * fVar48 +
                              (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20) * fVar49,
                              (float)*(undefined8 *)(lVar45 + 0x90) +
                              (float)*(undefined8 *)(lVar45 + 0x80) * fVar50 +
                              (float)*(undefined8 *)(lVar45 + 0x60) * fVar48 +
                              (float)*(undefined8 *)(lVar45 + 0x70) * fVar49);
          uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x88) >> 0x20) * fVar50 +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x68) >> 0x20) * fVar48 +
                               (float)((ulong)*(undefined8 *)(lVar45 + 0x78) >> 0x20) * fVar49,
                               (float)*(undefined8 *)(lVar45 + 0x98) +
                               (float)*(undefined8 *)(lVar45 + 0x88) * fVar50 +
                               (float)*(undefined8 *)(lVar45 + 0x68) * fVar48 +
                               (float)*(undefined8 *)(lVar45 + 0x78) * fVar49);
          uVar20 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_130);
          if ((uVar20 & 1) == 0) {
            lVar44 = (long)((ulong)uVar27 << 0x20) >> 0x25;
            *(uint *)(*param_11 + lVar44 * 4) =
                 *(uint *)(*param_11 + lVar44 * 4) & (uVar37 ^ 0xffffffff);
          }
        }
        iVar46 = iVar46 + 1;
      } while ((int)(uVar47 + iVar46) < (int)uVar3);
    }
  }
LAB_03065448:
  lVar44 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0xa50) = (lVar44 - lVar16) + *(long *)(param_1 + 0xa50);
  *(int *)(param_1 + 0xa58) = *(int *)(param_1 + 0xa58) + 1;
  lVar16 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x60) = (lVar16 - lVar15) + *(long *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}


