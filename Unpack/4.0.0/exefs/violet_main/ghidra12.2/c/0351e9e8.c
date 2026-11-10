/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351e9e8; name: FUN_0351e9e8
 */


void FUN_0351e9e8(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  MutexType *pMVar20;
  long lVar21;
  undefined *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  int local_2f4;
  long local_2f0;
  ulong local_2e8;
  long local_2e0 [32];
  uint local_1e0;
  long local_1d8;
  long *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_19c;
  undefined4 local_198 [2];
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_98;
  long local_90;
  long *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint3 local_70;
  undefined1 uStack_6d;
  
  plVar10 = *(long **)(param_1 + 0x10);
  if ((*(byte *)((long)plVar10 + 0x5a) & 0xe) == 0) {
    lVar19 = *(long *)(param_1 + 8);
    lVar21 = plVar10[0xd];
    local_1e0 = 0;
    local_1c0 = 0;
    local_1d8 = 0;
    local_1d0 = (long *)0x0;
    local_1c8 = 0;
    local_1b8 = 1;
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_2e0,0);
    local_1b8._0_3_ = CONCAT12(1,(undefined2)local_1b8);
    if (local_1d8 != 0) {
      if ((param_3 & 1) == 0) {
        bVar6 = false;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_2e0,0);
        if (local_1d8 == 0) {
          return;
        }
        bVar6 = true;
      }
      iVar9 = 2;
      puVar22 = PTR_DAT_047e2fd0;
      puVar24 = (undefined8 *)PTR_DAT_047e6f28;
LAB_0351eaf0:
      if (*(long *)(local_1d8 + 0x18) == 0) {
        lVar11 = (**(code **)(*local_1d0 + 0xd0))();
        if (lVar11 == 0) {
          lVar11 = (**(code **)(*(long *)local_1d0[2] + 0xd0))();
        }
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(*(long *)(local_1d8 + 0x18) + 0x78);
        lVar11 = *(long *)(lVar14 + 0x98);
      }
      if (lVar14 != 0) {
        lVar11 = lVar14;
      }
      local_2f0 = 0;
      local_2e8 = 0;
      FUN_0351bc4c(lVar11,&local_2f0);
      if ((int)local_2e8 != 0) {
        lVar11 = 0;
        do {
          if (*(int *)(local_2f0 + lVar11) == param_2) {
            puVar25 = (undefined4 *)(local_2f0 + lVar11);
            plVar10 = *(long **)(param_1 + 0x40);
            if (plVar10 == (long *)0x0) goto LAB_0351ebf4;
            goto LAB_0351ebc8;
          }
          lVar11 = lVar11 + 0x18;
        } while ((local_2e8 & 0xffffffff) * 0x18 != lVar11);
      }
      puVar25 = (undefined4 *)0x0;
      goto LAB_0351eb78;
    }
  }
  return;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
LAB_0351ebc8:
    if (((int)plVar10[2] == param_2) &&
       (*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68) <=
        (long)(plVar10[3] + (ulong)*(uint *)(plVar10 + 4)))) goto LAB_0351f1c8;
  }
  if (puVar25 != (undefined4 *)0x0) {
LAB_0351ebf4:
    pMVar20 = (MutexType *)*puVar24;
    uVar1 = puVar25[1];
    nn::os::LockMutex(pMVar20);
    uVar2 = *(uint *)(pMVar20 + 0x28);
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (lVar11 = *(long *)(*(long *)(pMVar20 + 0x20) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        if (*(uint *)(lVar11 + 0x10) == uVar1) {
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar20);
          plVar12 = (long *)(lVar11 + -8);
          plVar10 = (long *)(**(code **)(*plVar12 + 0x268))
                                      (plVar12,*(undefined8 *)(param_1 + 0x10),
                                       *(undefined8 *)(param_1 + 0x30),param_1 + 0x18,0);
          if (plVar10 != (long *)0x0) {
            local_190 = 0;
            local_198[0] = 0;
            local_188 = 0;
            local_184 = 0x40;
            local_1b0 = 0;
            uStack_1ac = uStack_1ac & 0xffffff00;
            local_1a8 = 0;
            local_1a4 = 0;
            iVar9 = (**(code **)(*plVar10 + 0xb0))
                              (plVar10,local_198,0,&local_1b0,&local_2f4,&local_19c,0,0);
            if (iVar9 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
              plVar10 = (long *)0x0;
            }
          }
          (**(code **)(*plVar12 + 0x30))(plVar12);
          if (plVar10 == (long *)0x0) goto LAB_0351ec40;
          bVar5 = false;
          goto LAB_0351ec50;
        }
      }
    }
    nn::os::UnlockMutex(pMVar20);
    local_2f4 = 0;
LAB_0351ec40:
    if (puVar25[1] != 0) goto LAB_0351f1c8;
    plVar10 = (long *)0x0;
    bVar5 = true;
LAB_0351ec50:
    local_19c = puVar25[3];
    iVar8 = FUN_035316d0(local_2e0,(lVar19 - lVar21) + (long)local_2f4,puVar25[2],&local_19c,0,0,
                         &local_1b0);
    iVar9 = local_2f4;
    if (iVar8 == 1) {
      lVar11 = CONCAT44(uStack_1ac,local_1b0);
      plVar12 = (long *)(**(code **)(puVar22 + 0x10))(0,0x30);
      if (plVar12 == (long *)0x0) {
LAB_0351f1c8:
        if (local_2f0 == 0) {
          return;
        }
        local_2e8 = local_2e8 & 0xffffffff00000000;
        (**(code **)(puVar22 + 0x30))(2);
        return;
      }
      plVar12[1] = 0;
      plVar13 = (long *)(**(code **)(puVar22 + 0x10))(0,0x20);
      if (plVar13 == (long *)0x0) {
        plVar10 = (long *)plVar12[1];
        plVar12[1] = 0;
        puVar22 = PTR_DAT_047e2fd0;
        if (plVar10 != (long *)0x0) {
          iVar9 = (int)plVar10[9] + -1;
          *(int *)(plVar10 + 9) = iVar9;
          if (iVar9 == 0) {
            if (plVar10[2] == 0) {
              FUN_03518540(plVar10);
            }
            else {
              FUN_0351c44c(plVar10[2],plVar10);
              plVar10[2] = 0;
            }
            (**(code **)(*plVar10 + 0x50))(plVar10);
            (**(code **)(puVar22 + 0x30))(0,plVar10);
          }
          plVar10 = (long *)plVar12[1];
          if (plVar10 != (long *)0x0) {
            iVar9 = (int)plVar10[9] + -1;
            *(int *)(plVar10 + 9) = iVar9;
            if (iVar9 == 0) {
              if (plVar10[2] == 0) {
                FUN_03518540(plVar10);
              }
              else {
                FUN_0351c44c(plVar10[2],plVar10);
                plVar10[2] = 0;
              }
              (**(code **)(*plVar10 + 0x50))(plVar10);
              (**(code **)(puVar22 + 0x30))(0,plVar10);
            }
            plVar12[1] = 0;
          }
        }
        (**(code **)(puVar22 + 0x30))(0,plVar12);
        goto LAB_0351f1c8;
      }
      *(undefined4 *)(plVar12 + 2) = *puVar25;
      *(undefined4 *)((long)plVar12 + 0x14) = puVar25[1];
      plVar12[3] = lVar11;
      auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)(int)puVar25[4])) *
               SEXT816(0x20c49ba5e353f7cf);
      *(int *)(plVar12 + 4) = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
      *(int *)((long)plVar12 + 0x24) = iVar9;
      if (!bVar5) {
        plVar10[0xd] = lVar11;
        *(int *)(plVar10 + 9) = (int)plVar10[9] + 1;
        plVar23 = (long *)plVar12[1];
        plVar12[1] = (long)plVar10;
        if ((plVar23 != (long *)0x0) &&
           (iVar9 = (int)plVar23[9] + -1, *(int *)(plVar23 + 9) = iVar9, iVar9 == 0)) {
          if (plVar23[2] == 0) {
            FUN_03518540(plVar23);
          }
          else {
            FUN_0351c44c(plVar23[2],plVar23);
            plVar23[2] = 0;
          }
          (**(code **)(*plVar23 + 0x50))(plVar23);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar23);
        }
        local_98 = 0;
        local_78 = 0;
        local_90 = 0;
        local_80 = 0;
        _local_70 = 0x1000001;
        (**(code **)(*plVar10 + 0xb8))(plVar10,local_198,0);
        local_70 = (uint3)(ushort)local_70;
        if ((local_90 == 0) || (*(long *)(local_90 + 0x18) == 0)) {
          iVar9 = 0;
        }
        else {
          lVar14 = *(long *)(*(long *)(local_90 + 0x18) + 0x78);
          iVar9 = 0;
          if (lVar14 != 0) {
            iVar9 = *(int *)(lVar14 + 0x140) - *(int *)(*(long *)(lVar14 + 0x130) + 4);
          }
        }
        *(int *)(plVar12 + 5) = iVar9;
      }
      if (bVar6) {
        bVar7 = false;
      }
      else {
        bVar7 = puVar25[5] != 0;
      }
      *(bool *)((long)plVar12 + 0x2c) = bVar7;
      if (*(long *)(param_1 + 0x40) == 0) {
        *(long **)(param_1 + 0x40) = plVar12;
        *plVar12 = 0;
      }
      else {
        *plVar12 = *(long *)(param_1 + 0x40);
        *(long **)(param_1 + 0x40) = plVar12;
      }
      *(undefined4 *)(plVar13 + 1) = 0;
      uVar18 = (ulong)local_1e0;
      if (local_1e0 == 0) {
        lVar14 = 0;
      }
      else {
        uVar15 = uVar18 & 3;
        if (uVar18 - 1 < 3) {
          uVar16 = 0;
          lVar14 = 0;
        }
        else {
          uVar16 = 0;
          lVar14 = 0;
          plVar23 = local_2e0 + 2;
          do {
            uVar16 = uVar16 + 4;
            lVar14 = *(long *)(*(long *)(plVar23[1] + 8) + 0x68) +
                     *(long *)(*(long *)(*plVar23 + 8) + 0x68) +
                     *(long *)(*(long *)(plVar23[-1] + 8) + 0x68) +
                     *(long *)(*(long *)(plVar23[-2] + 8) + 0x68) + lVar14;
            plVar23 = plVar23 + 4;
          } while ((uVar18 & 0xfffffffc) != uVar16);
        }
        if ((local_1e0 & 3) != 0) {
          plVar23 = local_2e0 + uVar16;
          do {
            uVar15 = uVar15 - 1;
            lVar14 = *(long *)(*(long *)(*plVar23 + 8) + 0x68) + lVar14;
            plVar23 = plVar23 + 1;
          } while (uVar15 != 0);
        }
      }
      lVar17 = *(long *)(local_1d8 + 8);
      uVar1 = *(uint *)(local_1d0 + 0x11);
      plVar13[2] = (long)plVar12;
      *plVar13 = ((lVar11 - lVar14) - lVar17) + (ulong)uVar1;
      if (*(long *)(local_1d8 + 0x10) == 0) {
        *(long **)(local_1d8 + 0x10) = plVar13;
        plVar13[3] = 0;
      }
      else {
        plVar13[3] = *(long *)(local_1d8 + 0x10);
        *(long **)(local_1d8 + 0x10) = plVar13;
      }
      puVar24 = (undefined8 *)PTR_DAT_047e6f28;
      puVar22 = PTR_DAT_047e2fd0;
      if (!bVar5) {
        local_98 = 0;
        local_78 = 0;
        local_80 = 0;
        local_90 = 0;
        local_88 = (long *)0x0;
        _local_70 = 0x1000001;
        (**(code **)(*plVar10 + 0xb8))(plVar10,local_198,0);
        local_70 = (uint3)(ushort)local_70;
        if (((local_90 != 0) && (*(long *)(local_90 + 0x18) == 0)) &&
           (lVar11 = (**(code **)(*local_88 + 0xd0))(), lVar11 == 0)) {
          (**(code **)(*(long *)local_88[2] + 0xd0))();
        }
      }
    }
    else {
      if (!bVar5) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
      if ((char)local_1b8 == '\0') {
        iVar9 = 1;
        if ((!bVar6) && (puVar25[5] == 1)) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_2e0,0);
          bVar6 = true;
          iVar9 = iVar8;
        }
        goto LAB_0351eb78;
      }
    }
    iVar9 = 1;
  }
LAB_0351eb78:
  if (local_2f0 != 0) {
    local_2e8 = local_2e8 & 0xffffffff00000000;
    (**(code **)(puVar22 + 0x30))(2);
    local_2f0 = 0;
    local_2e8 = local_2e8 & 0xffffffff;
  }
  if (puVar25 == (undefined4 *)0x0) {
    return;
  }
  if (iVar9 == 1) {
    return;
  }
  if (local_1d8 == 0) {
    return;
  }
  goto LAB_0351eaf0;
}


