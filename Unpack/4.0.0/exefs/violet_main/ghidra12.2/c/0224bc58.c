/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0224bc58; name: FUN_0224bc58
 */


void FUN_0224bc58(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  ulong local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70 [2];
  
  puVar9 = (undefined8 *)FUN_0140f310();
  local_90 = *puVar9;
  uStack_88 = puVar9[1];
  local_80 = puVar9[2];
  local_78 = (long *)puVar9[3];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  FUN_0140f318(local_70,param_2,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70[0] == 0) {
    return;
  }
  if (*(short *)(local_70[0] + 0x1a) != 0) {
    psVar1 = (short *)(local_70[0] + 0x1a);
    sVar15 = *(short *)(local_70[0] + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar15) {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0224bd34;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0224bd34:
        bVar14 = false;
      }
      if (bVar14) {
        lVar12 = *(long *)(local_70[0] + 0x10);
        if (lVar12 == 0) goto LAB_0224c1f0;
        lVar10 = FUN_0157776c(lVar12 + 0xe0,&local_b0);
        if (lVar10 == 0) goto LAB_0224c1d8;
        local_b0 = 0x12d7b82ec399ec60;
        pcStack_a8 = "EasingType";
        local_a0 = 10;
        plStack_98 = (long *)0x0;
        uVar11 = FUN_01470908(param_2,&local_b0);
        if (plStack_98 != (long *)0x0) {
          (**(code **)(*plStack_98 + 0x20))();
        }
        uVar13 = *(ulong *)(param_2 + 0x160);
        lStack_f8 = 0;
        local_100 = 0;
        if (uVar13 == 0) goto LAB_0224bec8;
        uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          uVar17 = uVar13 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar17 = 0x55c0d7a581349f0f;
          if (uVar13 < 0x55c0d7a581349f10) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = 0x55c0d7a581349f0f / uVar13;
            }
            uVar17 = 0x55c0d7a581349f0f - uVar17 * uVar13;
          }
        }
        plVar18 = *(long **)(*(long *)(param_2 + 0x158) + uVar17 * 8);
        if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
        goto LAB_0224bec8;
        if (1 < uVar16) goto LAB_0224be88;
        goto LAB_0224be2c;
      }
      sVar15 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0224c1ec;
  }
  goto LAB_0224c1f0;
LAB_0224be88:
  do {
    uVar16 = plVar18[1];
    if (uVar16 == 0x55c0d7a581349f0f) {
      if (plVar18[2] == 0x55c0d7a581349f0f) goto LAB_0224bec0;
    }
    else {
      if (uVar13 <= uVar16) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar16 / uVar13;
        }
        uVar16 = uVar16 - uVar4 * uVar13;
      }
      if (uVar16 != uVar17) break;
    }
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_0224bec8;
LAB_0224bec0:
  lStack_f8 = plVar18[7];
  local_100 = plVar18[6];
  goto LAB_0224bec8;
  while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
LAB_0224be2c:
    if (plVar18[1] == 0x55c0d7a581349f0f) {
      if (plVar18[2] == 0x55c0d7a581349f0f) goto LAB_0224bec0;
    }
    else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
  }
LAB_0224bec8:
  local_b0 = 0x91cbd7d9ff507821;
  pcStack_a8 = "ChangeBeginParameter";
  local_a0 = 0x14;
  plStack_98 = (long *)0x0;
  lStack_b8 = lStack_f8;
  local_c0 = local_100;
  uVar8 = FUN_0141f968(param_2,&local_b0);
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 0x20))();
  }
  uVar24 = (undefined4)((ulong)lStack_f8 >> 0x20);
  lStack_e8 = lStack_f8;
  local_f0 = local_100;
  if ((uVar8 & 0xff) != 0 && 0xff < uVar8) {
    local_e0 = 0xd4903e0e5b6abf1e;
    pcStack_d8 = "Begin";
    local_d0 = 5;
    local_c8 = (long *)0x0;
    FUN_015eea10(&local_b0,param_2,&local_e0);
    plVar18 = plStack_98;
    uVar7 = local_a0;
    bVar19 = -((char)local_b0 == '\0');
    if ((char)local_b0 != '\0') {
      local_b0 = local_b0 & 0xffffffffffffff00;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    local_f0 = CONCAT17((byte)((ulong)uVar7 >> 0x38) & ~bVar19,
                        CONCAT16((byte)((ulong)uVar7 >> 0x30) & ~bVar19,
                                 CONCAT15((byte)((ulong)uVar7 >> 0x28) & ~bVar19,
                                          CONCAT14((byte)((ulong)uVar7 >> 0x20) & ~bVar19,
                                                   CONCAT13((byte)((ulong)uVar7 >> 0x18) & ~bVar19,
                                                            CONCAT12((byte)((ulong)uVar7 >> 0x10) &
                                                                     ~bVar19,CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) & ~bVar19,(byte)uVar7 & ~bVar19)))))))
    ;
    local_b0 = 0x9bd8bb655663090b;
    pcStack_a8 = "BeginW";
    local_a0 = 6;
    plStack_98 = (long *)0x0;
    uVar13 = FUN_01180d38(param_2,&local_b0);
    uVar5 = uVar24;
    if ((uVar13 & 0xff) != 0) {
      uVar5 = (int)(uVar13 >> 0x20);
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)(*plStack_98 + 0x20))();
    }
    lStack_e8 = CONCAT44(uVar5,CONCAT13((byte)((ulong)plVar18 >> 0x18) & ~bVar19,
                                        CONCAT12((byte)((ulong)plVar18 >> 0x10) & ~bVar19,
                                                 CONCAT11((byte)((ulong)plVar18 >> 8) & ~bVar19,
                                                          (byte)plVar18 & ~bVar19))));
  }
  local_b0 = 0xbf23381384443a95;
  pcStack_a8 = "ChangeEndParameter";
  local_a0 = 0x12;
  plStack_98 = (long *)0x0;
  uVar8 = FUN_0141f968(param_2,&local_b0);
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 0x20))();
  }
  if ((uVar8 & 0xff) != 0 && 0xff < uVar8) {
    local_e0 = 0x96b4c3266fc0614a;
    pcStack_d8 = "End";
    local_d0 = 3;
    local_c8 = (long *)0x0;
    FUN_015eea10(&local_b0,param_2,&local_e0);
    plVar18 = plStack_98;
    uVar7 = local_a0;
    bVar19 = -((char)local_b0 == '\0');
    if ((char)local_b0 != '\0') {
      local_b0 = local_b0 & 0xffffffffffffff00;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    local_b0 = 0xd588b74fe3e50447;
    pcStack_a8 = "EndW";
    local_100 = CONCAT17((byte)((ulong)uVar7 >> 0x38) & ~bVar19,
                         CONCAT16((byte)((ulong)uVar7 >> 0x30) & ~bVar19,
                                  CONCAT15((byte)((ulong)uVar7 >> 0x28) & ~bVar19,
                                           CONCAT14((byte)((ulong)uVar7 >> 0x20) & ~bVar19,
                                                    CONCAT13((byte)((ulong)uVar7 >> 0x18) & ~bVar19,
                                                             CONCAT12((byte)((ulong)uVar7 >> 0x10) &
                                                                      ~bVar19,CONCAT11((byte)((ulong
                                                  )uVar7 >> 8) & ~bVar19,(byte)uVar7 & ~bVar19))))))
                        );
    local_a0 = 4;
    plStack_98 = (long *)0x0;
    uVar13 = FUN_01180d38(param_2,&local_b0);
    if ((uVar13 & 0xff) != 0) {
      uVar24 = (int)(uVar13 >> 0x20);
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)(*plStack_98 + 0x20))();
    }
    lStack_f8 = CONCAT44(uVar24,CONCAT13((byte)((ulong)plVar18 >> 0x18) & ~bVar19,
                                         CONCAT12((byte)((ulong)plVar18 >> 0x10) & ~bVar19,
                                                  CONCAT11((byte)((ulong)plVar18 >> 8) & ~bVar19,
                                                           (byte)plVar18 & ~bVar19))));
  }
  puVar6 = PTR_PTR_047d9248;
  uVar13 = 0;
  if ((uVar11 & 0xff) != 0) {
    uVar13 = uVar11 >> 0x20;
  }
  fVar20 = (float)(**(code **)(PTR_PTR_047d9248 + uVar13 * 8))(param_1);
  fVar25 = (float)((ulong)local_f0 >> 0x20);
  fVar26 = (float)((ulong)lStack_e8 >> 0x20);
  fVar21 = (float)(**(code **)(puVar6 + uVar13 * 8))(param_1);
  fVar22 = (float)(**(code **)(puVar6 + uVar13 * 8))(param_1,local_f0);
  fVar23 = (float)(**(code **)(puVar6 + uVar13 * 8))(param_1,local_f0);
  local_c0 = CONCAT44(fVar25 + fVar21 * ((float)((ulong)local_100 >> 0x20) - fVar25),
                      (float)local_f0 + fVar20 * ((float)local_100 - (float)local_f0));
  lStack_b8 = CONCAT44(fVar26 + fVar23 * ((float)((ulong)lStack_f8 >> 0x20) - fVar26),
                       (float)lStack_e8 + fVar22 * ((float)lStack_f8 - (float)lStack_e8));
  FUN_01a4a838(lVar10,&local_c0);
LAB_0224c1d8:
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
LAB_0224c1ec:
  if (local_70[0] != 0) {
LAB_0224c1f0:
    psVar1 = (short *)(local_70[0] + 0x18);
    do {
      sVar15 = *psVar1;
      cVar3 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar15 == 1) {
      FUN_0116e168();
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


