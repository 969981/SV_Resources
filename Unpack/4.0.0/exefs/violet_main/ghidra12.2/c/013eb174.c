/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013eb174; name: FUN_013eb174
 */


void FUN_013eb174(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  MutexType *pMVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  code *pcVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  short sVar22;
  byte *pbVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  puVar26 = (undefined8 *)param_1[0x7c];
  puVar32 = (undefined8 *)param_1[0x7d];
  *param_1 = &DAT_04601588;
  param_1[4] = &PTR_LAB_04601728;
  param_1[5] = &DAT_04601850;
  param_1[0x24] = &PTR_LAB_04601908;
  param_1[6] = &PTR_LAB_046018a8;
  param_1[7] = &PTR_LAB_046018d0;
  if (puVar26 != puVar32) {
LAB_013eb214:
    if (*(char *)(puVar26 + 2) != '\0') {
      local_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      FUN_00d4ca00(&local_a8,puVar26);
      if (local_a8 == (undefined8 *)0x0) goto LAB_013eb234;
      if (*(short *)((long)local_a8 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_a8 + 0x1a);
        sVar22 = *(short *)((long)local_a8 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar22) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar22 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_013ebb44;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_013ebb44:
            bVar6 = false;
          }
          if (bVar6) {
            lVar27 = local_a8[2];
            if (lVar27 != 0) {
              plVar29 = (long *)(lVar27 + -0x28);
              FUN_0135d26c(&local_90);
              lVar30 = FUN_01132f14(plVar29,&local_90);
              if (lVar30 == 0) {
                local_68 = (long *)0x0;
              }
              else {
                FUN_011343b4(&local_68,lVar30,&local_98);
              }
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              FUN_0135d26c(&local_90,param_1 + 0xe8);
              lVar30 = FUN_01132f14(plVar29,&local_90);
              if (lVar30 == 0) {
                local_98 = (long *)0x0;
              }
              else {
                FUN_0100d810(&local_98);
              }
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if (local_68 != (long *)0x0) {
                local_78 = (long *)0x0;
                local_90 = 0xc270be1aad2825bc;
                local_88 = "Audio/PostEvent";
                local_80 = 0xf;
                FUN_020e06e8(local_68,&local_90);
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x20))();
                }
                local_90 = 0x9abc58ede27fac76;
                local_88 = "Audio/PostLoopEvent";
                local_80 = 0x13;
                local_78 = (long *)0x0;
                FUN_020e06e8(local_68,&local_90);
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x20))();
                }
                local_90 = 0x8d299dada6d68765;
                local_88 = "Audio/LockMotionDetector";
                local_80 = 0x18;
                local_78 = (long *)0x0;
                FUN_020e06e8(local_68,&local_90);
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x20))();
                }
              }
              plVar28 = local_98;
              if (local_98 == (long *)0x0) goto LAB_013ebfe8;
              pMVar3 = (MutexType *)(local_98 + 0x2a);
              nn::os::LockMutex(pMVar3);
              uVar14 = plVar28[0x1e];
              if (uVar14 == 0) goto LAB_013ebfb4;
              uVar18 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
              uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
              uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar18 < 2) {
                uVar20 = uVar14 - 1 & 0xc270be1aad2825bc;
              }
              else {
                uVar20 = 0xc270be1aad2825bc;
                if (uVar14 < 0xc270be1aad2825bd) {
                  uVar20 = 0;
                  if (uVar14 != 0) {
                    uVar20 = 0xc270be1aad2825bc / uVar14;
                  }
                  uVar20 = 0xc270be1aad2825bc - uVar20 * uVar14;
                }
              }
              lVar30 = plVar28[0x1d];
              puVar31 = *(undefined8 **)(lVar30 + uVar20 * 8);
              if ((puVar31 == (undefined8 *)0x0) ||
                 (local_b0 = (long *)*puVar31, local_b0 == (long *)0x0)) goto LAB_013ebfb4;
              uVar21 = uVar14 - 1;
              if (uVar18 < 2) goto LAB_013ebd1c;
              goto LAB_013ebe80;
            }
            break;
          }
          sVar22 = sVar4;
        } while (sVar4 != 0);
      }
      goto LAB_013ec03c;
    }
    goto LAB_013eb234;
  }
LAB_013eb2a0:
  param_1[0x7d] = puVar26;
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar27 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar27;
  if ((*(char *)(param_1 + 0x62) == '\0') && (param_1[0xb0] != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x25));
    puVar16 = (ulong *)param_1[0x3d];
    puVar19 = (ulong *)param_1[0x3e];
    if (puVar16 != puVar19) {
LAB_013eb87c:
      uVar14 = param_1[0xa6];
      if (uVar14 != 0) {
        uVar18 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar20 = *puVar16;
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar21 = uVar14 - 1 & uVar20;
        }
        else if (uVar20 < uVar14) {
          uVar21 = uVar20;
        }
        else {
          uVar21 = 0;
          if (uVar14 != 0) {
            uVar21 = uVar20 / uVar14;
          }
          uVar21 = uVar20 - uVar21 * uVar14;
        }
        plVar29 = *(long **)(param_1[0xa5] + uVar21 * 8);
        if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar29[1] == uVar20) {
                if (plVar29[2] == uVar20) goto LAB_013eb92c;
              }
              else if ((plVar29[1] & uVar14 - 1) != uVar21) break;
              plVar29 = (long *)*plVar29;
            } while (plVar29 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar29[1];
              if (uVar18 == uVar20) {
                if (plVar29[2] == uVar20) goto LAB_013eb92c;
              }
              else {
                if (uVar14 <= uVar18) {
                  uVar25 = 0;
                  if (uVar14 != 0) {
                    uVar25 = uVar18 / uVar14;
                  }
                  uVar18 = uVar18 - uVar25 * uVar14;
                }
                if (uVar18 != uVar21) break;
              }
              plVar29 = (long *)*plVar29;
            } while (plVar29 != (long *)0x0);
          }
        }
      }
      puVar16 = puVar16 + 0x16;
      goto LAB_013eb988;
    }
LAB_013eb99c:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  }
  plVar29 = param_1 + 0xa5;
  if (param_1[0xb0] != 0) {
    FUN_013ec3a4(plVar29,param_1[0xab]);
    uVar14 = param_1[0xa6];
    param_1[0xab] = 0;
    if (uVar14 != 0) {
      uVar18 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          *(undefined8 *)(*plVar29 + uVar20 * 8) = 0;
          *(undefined8 *)(*plVar29 + uVar20 * 8 + 8) = 0;
          *(undefined8 *)(*plVar29 + uVar20 * 8 + 0x10) = 0;
          lVar30 = uVar20 * 8;
          uVar20 = uVar20 + 4;
          *(undefined8 *)(*plVar29 + lVar30 + 0x18) = 0;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar18 != 0) {
        lVar30 = uVar20 << 3;
        do {
          *(undefined8 *)(*plVar29 + lVar30) = 0;
          uVar18 = uVar18 - 1;
          lVar30 = lVar30 + 8;
        } while (uVar18 != 0);
      }
    }
    param_1[0xb0] = 0;
  }
  for (plVar28 = (long *)param_1[0x8f]; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
    uVar12 = FUN_00cf8198(plVar28[4]);
    plVar13 = *(long **)(*(long *)(lVar27 + 0x200) + 0x60);
    (**(code **)(*plVar13 + 0x68))(plVar13,uVar12);
  }
  plVar28 = param_1 + 0x89;
  if (param_1[0x94] != 0) {
    FUN_013ec28c(plVar28,param_1[0x8f]);
    lVar27 = param_1[0x8a];
    param_1[0x8f] = 0;
    if ((((lVar27 != 0) && (*(undefined8 *)*plVar28 = 0, lVar27 != 1)) &&
        (*(undefined8 *)(*plVar28 + 8) = 0, lVar27 != 2)) &&
       ((*(undefined8 *)(*plVar28 + 0x10) = 0, lVar27 != 3 &&
        (*(undefined8 *)(*plVar28 + 0x18) = 0, lVar27 != 4)))) {
      lVar30 = 4;
      do {
        *(undefined8 *)(*plVar28 + lVar30 * 8) = 0;
        lVar30 = lVar30 + 1;
      } while (lVar27 != lVar30);
    }
    param_1[0x94] = 0;
  }
  lVar27 = param_1[0x9a];
  lVar30 = param_1[0x9b];
  if (lVar30 != lVar27) {
    if (*(long **)(lVar30 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar30 + -0x18) + 0x20))();
    }
    if (lVar30 + -0x30 != lVar27) {
      do {
        if (*(long **)(lVar30 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar30 + -0x48) + 0x20))();
        }
        lVar30 = lVar30 + -0x30;
      } while (lVar27 + 0x30 != lVar30);
    }
  }
  param_1[0x9b] = lVar27;
  if ((long *)param_1[0xea] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xea] + 0x20))();
  }
  if ((long *)param_1[0xe8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe8] + 0x20))();
  }
  pcVar17 = (code *)param_1[0xd9];
  if (pcVar17 != (code *)0x0) {
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    param_1[0xd9] = 0;
    param_1[0xd8] = 0;
    (*pcVar17)(param_1 + 0xdc);
  }
  pcVar17 = (code *)param_1[0xc9];
  if (pcVar17 != (code *)0x0) {
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    param_1[0xc9] = 0;
    param_1[200] = 0;
    (*pcVar17)(param_1 + 0xcc);
  }
  pcVar17 = (code *)param_1[0xb9];
  if (pcVar17 != (code *)0x0) {
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    (*pcVar17)(param_1 + 0xbc);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb3));
  FUN_013ec3a4(plVar29,param_1[0xab]);
  lVar27 = param_1[0xa5];
  param_1[0xa5] = 0;
  if (lVar27 != 0) {
    FUN_013ee8f8(param_1 + 0xa6);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa1));
  lVar27 = param_1[0x9a];
  if (lVar27 != 0) {
    lVar15 = param_1[0x9b];
    lVar30 = lVar27;
    if (lVar15 != lVar27) {
      if (*(long **)(lVar15 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar15 + -0x18) + 0x20))();
      }
      if (lVar15 + -0x30 != lVar27) {
        do {
          if (*(long **)(lVar15 + -0x48) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + -0x48) + 0x20))();
          }
          lVar15 = lVar15 + -0x30;
        } while (lVar27 + 0x30 != lVar15);
      }
      lVar30 = param_1[0x9a];
    }
    lVar15 = param_1[0x9c];
    param_1[0x9b] = lVar27;
    plVar29 = (long *)param_1[0x9d];
    uVar14 = (**(code **)(*plVar29 + 0xf8))(plVar29);
    if (((uVar14 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
      (**(code **)(*plVar29 + 0x18))(plVar29,lVar30,lVar15 - lVar30,8);
    }
    else {
      FUN_00c48fe8(plVar29,lVar30,lVar15 - lVar30,8);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x96));
  FUN_013ec28c(plVar28,param_1[0x8f]);
  lVar27 = param_1[0x89];
  param_1[0x89] = 0;
  if (lVar27 != 0) {
    lVar30 = param_1[0x8a];
    plVar29 = (long *)param_1[0x8b];
    uVar14 = (**(code **)(*plVar29 + 0xf8))(plVar29);
    if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar29 + 0x18))(plVar29,lVar27,lVar30 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar29,lVar27,lVar30 << 3,8);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x85));
  puVar26 = (undefined8 *)param_1[0x83];
  if (puVar26 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar26 + 3);
    do {
      sVar22 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      piVar1 = (int *)((long)puVar26 + 0x1c);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_90 = *puVar26;
        FUN_00c44438(lVar27 + 0x8040,&local_90);
      }
    }
    else if (sVar22 == 0) goto LAB_013eb5c8;
  }
  puVar10 = PTR_LAB_047d3de8;
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar26 = (undefined8 *)param_1[0x7c];
  if (puVar26 != (undefined8 *)0x0) {
    puVar31 = (undefined8 *)param_1[0x7d];
    puVar32 = puVar26;
    if (puVar31 != puVar26) {
      pbVar23 = PTR_DAT_047d3908;
      do {
        puVar31 = puVar31 + -3;
        puVar32 = (undefined8 *)*puVar31;
        if (puVar32 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar32 + 3);
          do {
            sVar22 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            piVar1 = (int *)((long)puVar32 + 0x1c);
            do {
              iVar11 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*pbVar23 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar27 = *(long *)puVar8;
              *(long *)puVar9 = lVar27;
              local_90 = *puVar32;
              FUN_00c44438(lVar27 + 0x8040,&local_90);
              pbVar23 = PTR_DAT_047d3908;
            }
          }
          else if (sVar22 == 0) goto LAB_013eb5c8;
        }
      } while (puVar31 != puVar26);
      puVar32 = (undefined8 *)param_1[0x7c];
    }
    lVar27 = param_1[0x7e];
    param_1[0x7d] = puVar26;
    plVar29 = (long *)param_1[0x7f];
    uVar14 = (**(code **)(*plVar29 + 0xf8))(plVar29);
    if (((uVar14 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
      (**(code **)(*plVar29 + 0x18))(plVar29,puVar32,lVar27 - (long)puVar32,8);
    }
    else {
      FUN_00c48fe8(plVar29,puVar32,lVar27 - (long)puVar32,8);
    }
  }
  FUN_013ec594(param_1);
  return;
LAB_013ebe80:
  do {
    uVar25 = local_b0[1];
    if (uVar25 == 0xc270be1aad2825bc) {
      if (local_b0[2] == -0x3d8f41e552d7da44) goto LAB_013ebec0;
    }
    else {
      if (uVar14 <= uVar25) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar25 / uVar14;
        }
        uVar25 = uVar25 - uVar7 * uVar14;
      }
      if (uVar25 != uVar20) break;
    }
    local_b0 = (long *)*local_b0;
  } while (local_b0 != (long *)0x0);
  goto LAB_013ebfb4;
  while (local_b0 = (long *)*local_b0, local_b0 != (long *)0x0) {
LAB_013ebd1c:
    if (local_b0[1] == 0xc270be1aad2825bc) {
      if (local_b0[2] == -0x3d8f41e552d7da44) goto LAB_013ebec0;
    }
    else if ((local_b0[1] & uVar21) != uVar20) break;
  }
LAB_013ebfb4:
  nn::os::UnlockMutex(pMVar3);
  if (local_98 != (long *)0x0) {
    lVar30 = local_98[6];
    psVar2 = (short *)(lVar30 + 0x1a);
    do {
      sVar22 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar30 + 0x10) = 0;
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar22 == 0) goto LAB_013ec10c;
  }
LAB_013ebfe8:
  if (local_68 != (long *)0x0) {
    lVar30 = local_68[6];
    psVar2 = (short *)(lVar30 + 0x1a);
    do {
      sVar22 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar30 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar22 == 0) goto LAB_013ec10c;
  }
  lVar27 = *(long *)(lVar27 + 0x70);
  psVar2 = (short *)(lVar27 + 0x1a);
  do {
    sVar22 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar22 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar22 == 1) {
    *(undefined8 *)(lVar27 + 0x10) = 0;
    (**(code **)(*plVar29 + 0x50))();
  }
  else if (sVar22 == 0) {
LAB_013ec10c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_013ec03c:
  puVar31 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar22 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar22 == 1) {
      piVar1 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_90 = *puVar31;
        FUN_00c44438(lVar27 + 0x8040,&local_90);
      }
    }
    else if (sVar22 == 0) goto LAB_013eb5c8;
  }
LAB_013eb234:
  puVar8 = PTR_LAB_047d3de8;
  puVar26 = puVar26 + 3;
  if (puVar26 == puVar32) goto code_r0x013eb240;
  goto LAB_013eb214;
LAB_013ebec0:
  uVar20 = 0xc270be1aad2825bc;
  if (uVar18 < 2) {
    uVar20 = uVar21 & 0xc270be1aad2825bc;
  }
  else if (uVar14 < 0xc270be1aad2825bd) {
    uVar20 = 0;
    if (uVar14 != 0) {
      uVar20 = 0xc270be1aad2825bc / uVar14;
    }
    uVar20 = 0xc270be1aad2825bc - uVar20 * uVar14;
  }
  plVar13 = *(long **)(lVar30 + uVar20 * 8);
  for (plVar24 = (long *)*plVar13; plVar24 != local_b0; plVar24 = (long *)*plVar24) {
    plVar13 = plVar24;
  }
  if (plVar13 == plVar28 + 0x23) {
LAB_013ebf24:
    if (*local_b0 != 0) {
      uVar25 = *(ulong *)(*local_b0 + 8);
      if (uVar18 < 2) {
        uVar25 = uVar25 & uVar21;
      }
      else if (uVar14 <= uVar25) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar25 / uVar14;
        }
        uVar25 = uVar25 - uVar7 * uVar14;
      }
      if (uVar25 == uVar20) goto LAB_013ebf34;
    }
    *(undefined8 *)(lVar30 + uVar20 * 8) = 0;
  }
  else {
    uVar25 = plVar13[1];
    if (uVar18 < 2) {
      uVar25 = uVar25 & uVar21;
    }
    else if (uVar14 <= uVar25) {
      uVar7 = 0;
      if (uVar14 != 0) {
        uVar7 = uVar25 / uVar14;
      }
      uVar25 = uVar25 - uVar7 * uVar14;
    }
    if (uVar25 != uVar20) goto LAB_013ebf24;
  }
LAB_013ebf34:
  lVar30 = *local_b0;
  if (lVar30 != 0) {
    uVar25 = *(ulong *)(lVar30 + 8);
    if (uVar18 < 2) {
      uVar25 = uVar25 & uVar21;
    }
    else if (uVar14 <= uVar25) {
      uVar18 = 0;
      if (uVar14 != 0) {
        uVar18 = uVar25 / uVar14;
      }
      uVar25 = uVar25 - uVar18 * uVar14;
    }
    if (uVar25 != uVar20) {
      *(long **)(plVar28[0x1d] + uVar25 * 8) = plVar13;
      lVar30 = *local_b0;
    }
  }
  *plVar13 = lVar30;
  *local_b0 = 0;
  plVar28[0x28] = plVar28[0x28] + -1;
  pcVar17 = (code *)local_b0[7];
  if (pcVar17 != (code *)0x0) {
    local_b0[8] = 0;
    local_b0[9] = 0;
    local_b0[6] = 0;
    local_b0[7] = 0;
    (*pcVar17)(local_b0 + 10);
  }
  if ((long *)local_b0[5] != (long *)0x0) {
    (**(code **)(*(long *)local_b0[5] + 0x20))();
  }
  plVar28 = (long *)plVar28[0x24];
  uVar14 = (**(code **)(*plVar28 + 0xf8))();
  if (((uVar14 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
    (**(code **)(*plVar28 + 0x18))(plVar28,local_b0,0xb0,0x10);
  }
  else {
    FUN_00c48fe8(plVar28,local_b0,0xb0,0x10);
  }
  goto LAB_013ebfb4;
LAB_013eb92c:
  FUN_013ec58c(lVar27,(int)puVar16[4]);
  FUN_013ee4a0(0,lVar27,(int)puVar16[4],4);
  if ((code *)puVar16[6] != (code *)0x0) {
    local_90 = CONCAT44(local_90._4_4_,(int)puVar16[4]);
    (*(code *)puVar16[6])(puVar16 + 10,&local_90);
  }
  if (param_1[0x61] != 0) {
    FUN_013ee87c();
  }
  puVar16 = (ulong *)FUN_013ee4e8(param_1 + 0x3d,puVar16);
  puVar19 = (ulong *)param_1[0x3e];
LAB_013eb988:
  if (puVar16 == puVar19) goto LAB_013eb99c;
  goto LAB_013eb87c;
code_r0x013eb240:
  puVar26 = (undefined8 *)param_1[0x7c];
  puVar32 = (undefined8 *)param_1[0x7d];
  do {
    while( true ) {
      do {
        if (puVar32 == puVar26) goto LAB_013eb2a0;
        puVar32 = puVar32 + -3;
        puVar31 = (undefined8 *)*puVar32;
      } while (puVar31 == (undefined8 *)0x0);
      psVar2 = (short *)(puVar31 + 3);
      do {
        sVar22 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 != 1) break;
      piVar1 = (int *)((long)puVar31 + 0x1c);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_90 = *puVar31;
        FUN_00c44438(lVar27 + 0x8040,&local_90);
      }
    }
  } while (sVar22 != 0);
LAB_013eb5c8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


