/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec80ec; name: FUN_00ec80ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ec80ec(byte *param_1,uint param_2,uint param_3,long *param_4,uint param_5,
                 undefined8 *param_6)

{
  int *piVar1;
  byte *pbVar2;
  short *psVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  code *pcVar27;
  ulong uVar28;
  uint *puVar29;
  undefined1 uVar30;
  byte *pbVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  int iVar35;
  undefined8 uVar36;
  long lVar37;
  long *plVar38;
  uint *puVar39;
  undefined8 uVar40;
  byte *pbVar41;
  byte *pbVar42;
  undefined8 uVar43;
  uint *puVar44;
  long lVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 *puVar48;
  long *local_130;
  byte *local_108;
  byte *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  long *local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  long *local_c8;
  long *local_c0;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte *local_70 [2];
  
  pbVar42 = param_1 + 0x68;
  *(undefined8 *)pbVar42 = *(undefined8 *)(param_1 + 0x40);
  plVar38 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
  if (plVar38 != (long *)0x0) {
    (**(code **)(*plVar38 + 0x18))(plVar38);
  }
  plVar15 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar38;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  pbVar2 = PTR_DAT_047d8b70;
  pbVar41 = PTR_PTR_047d4508;
  puVar13 = PTR_DAT_047d3e30;
  puVar12 = PTR_DAT_047d3e28;
  lVar24 = *(long *)(param_1 + 200);
  if (lVar24 != 0) {
    lVar32 = *(long *)(lVar24 + 0x58);
    for (lVar24 = *(long *)(lVar24 + 0x50); lVar24 != lVar32; lVar24 = lVar24 + 0x20) {
      FUN_0105016c(&local_b0);
      pbVar25 = pbVar41;
      if (local_b0 != (byte *)0x0) {
        pbVar25 = local_b0 + 0x38;
      }
      pcVar17 = strrchr(*(char **)pbVar25,0x2f);
      if (pcVar17 == (char *)0x0) {
        if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar12), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar13,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar12);
        }
        local_e0 = *(byte **)puVar13;
        local_d8 = *(byte **)(puVar13 + 8);
        local_d0 = *(byte **)(puVar13 + 0x10);
        local_130 = *(long **)(puVar13 + 0x18);
        local_c8 = local_130;
        if (local_130 == (long *)0x0) {
          local_130 = (long *)0x0;
        }
        else {
          (**(code **)(*local_130 + 0x18))();
        }
      }
      else {
        pbVar25 = (byte *)(pcVar17 + 1);
        local_d0 = (byte *)strlen((char *)pbVar25);
        bVar9 = *pbVar25;
        if (bVar9 == 0) {
          local_e0 = &DAT_cbf29ce484222645;
        }
        else {
          local_e0 = &DAT_cbf29ce484222645;
          pbVar31 = (byte *)(pcVar17 + 2);
          do {
            local_e0 = (byte *)(((ulong)local_e0 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = *pbVar31;
            pbVar31 = pbVar31 + 1;
          } while (bVar9 != 0);
        }
        local_130 = (long *)0x0;
        local_c8 = (long *)0x0;
        local_d8 = pbVar25;
      }
      FUN_00ecac38(&local_108,pbVar42,&local_e0);
      pbVar31 = local_108;
      pbVar25 = pbVar2;
      if (local_108 != (byte *)0x0) {
        pbVar25 = local_108 + 0x30;
      }
      uVar40 = *(undefined8 *)pbVar25;
      pbVar25 = pbVar41;
      if (local_108 != (byte *)0x0) {
        pbVar25 = local_108 + 0x38;
      }
      uVar36 = *(undefined8 *)pbVar25;
      if (local_108 == (byte *)0x0) {
        uVar43 = 0;
      }
      else {
        uVar43 = *(undefined8 *)(local_108 + 0x40);
        (**(code **)(*(long *)local_108 + 0x18))(local_108);
      }
      plVar38 = *(long **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x68) = uVar40;
      *(undefined8 *)(param_1 + 0x70) = uVar36;
      *(undefined8 *)(param_1 + 0x78) = uVar43;
      param_1[0x80] = 0;
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      param_1[0x83] = 0;
      param_1[0x84] = 0;
      param_1[0x85] = 0;
      param_1[0x86] = 0;
      param_1[0x87] = 0;
      if (plVar38 != (long *)0x0) {
        (**(code **)(*plVar38 + 0x20))();
      }
      *(byte **)(param_1 + 0x80) = pbVar31;
      if (local_108 != (byte *)0x0) {
        (**(code **)(*(long *)local_108 + 0x20))();
      }
      if (local_130 != (long *)0x0) {
        (**(code **)(*local_130 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (byte *)0x0) {
        (**(code **)(*(long *)local_b0 + 0x20))();
      }
    }
  }
  if (((*puVar12 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  pbVar25 = (byte *)*param_6;
  if (pbVar25 != *(byte **)puVar13) {
    local_b0 = *(byte **)(param_1 + 0x68);
    local_a8 = *(byte **)(param_1 + 0x70);
    local_a0 = *(byte **)(param_1 + 0x78);
    local_98 = *(long **)(param_1 + 0x80);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
      pbVar25 = (byte *)*param_6;
    }
    local_e0 = (byte *)0xaf66b24c8606be2e;
    local_d8 = &DAT_03becf73;
    local_d0 = (byte *)0x1;
    local_c8 = (long *)0x0;
    local_100 = (byte *)param_6[1];
    uStack_f8 = param_6[2];
    local_f0 = (long *)param_6[3];
    local_108 = pbVar25;
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
    FUN_00d1ea9c(local_70,&local_b0,&local_e0,&local_108);
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    pbVar31 = local_70[0];
    pbVar25 = pbVar2;
    if (local_70[0] != (byte *)0x0) {
      pbVar25 = local_70[0] + 0x30;
    }
    uVar40 = *(undefined8 *)pbVar25;
    pbVar25 = pbVar41;
    if (local_70[0] != (byte *)0x0) {
      pbVar25 = local_70[0] + 0x38;
    }
    uVar36 = *(undefined8 *)pbVar25;
    if (local_70[0] == (byte *)0x0) {
      uVar43 = 0;
    }
    else {
      uVar43 = *(undefined8 *)(local_70[0] + 0x40);
      (**(code **)(*(long *)local_70[0] + 0x18))(local_70[0]);
    }
    plVar38 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x68) = uVar40;
    *(undefined8 *)(param_1 + 0x70) = uVar36;
    *(undefined8 *)(param_1 + 0x78) = uVar43;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    if (plVar38 != (long *)0x0) {
      (**(code **)(*plVar38 + 0x20))();
    }
    *(byte **)(param_1 + 0x80) = pbVar31;
    if (local_70[0] != (byte *)0x0) {
      (**(code **)(*(long *)local_70[0] + 0x20))();
    }
  }
  plVar38 = param_4;
  if (param_4 == (long *)0x0) {
    plVar38 = *(long **)(param_1 + 8);
  }
  pbVar25 = (byte *)(**(code **)(*plVar38 + 0xd8))();
  if (pbVar25 != (byte *)0x0) {
    local_a0 = (byte *)strlen((char *)pbVar25);
    bVar9 = *pbVar25;
    local_b0 = &DAT_cbf29ce484222645;
    pbVar31 = pbVar25;
    while (bVar9 != 0) {
      pbVar31 = pbVar31 + 1;
      local_b0 = (byte *)(((ulong)local_b0 ^ (ulong)bVar9) * 0x100000001b3);
      bVar9 = *pbVar31;
    }
    local_98 = (long *)0x0;
    local_a8 = pbVar25;
    FUN_00ecac38(&local_e0,pbVar42,&local_b0);
    pbVar42 = local_e0;
    if (local_e0 != (byte *)0x0) {
      pbVar2 = local_e0 + 0x30;
    }
    uVar40 = *(undefined8 *)pbVar2;
    if (local_e0 != (byte *)0x0) {
      pbVar41 = local_e0 + 0x38;
    }
    uVar36 = *(undefined8 *)pbVar41;
    if (local_e0 == (byte *)0x0) {
      uVar43 = 0;
    }
    else {
      uVar43 = *(undefined8 *)(local_e0 + 0x40);
      (**(code **)(*(long *)local_e0 + 0x18))(local_e0);
    }
    plVar38 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x68) = uVar40;
    *(undefined8 *)(param_1 + 0x70) = uVar36;
    *(undefined8 *)(param_1 + 0x78) = uVar43;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    if (plVar38 != (long *)0x0) {
      (**(code **)(*plVar38 + 0x20))();
    }
    *(byte **)(param_1 + 0x80) = pbVar42;
    if (local_e0 != (byte *)0x0) {
      (**(code **)(*(long *)local_e0 + 0x20))();
    }
  }
  lVar24 = *(long *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x15c) == 1) {
    plVar38 = *(long **)(lVar24 + 0x2a0);
    plVar15 = *(long **)(lVar24 + 0x2a8);
    if (plVar38 != plVar15) {
      iVar14 = (int)((ulong)(plVar38[1] - *plVar38) >> 3);
      if (iVar14 <= *(int *)(param_1 + 0x158)) {
        iVar14 = *(int *)(param_1 + 0x158);
      }
      *(int *)(param_1 + 0x158) = iVar14;
      while (plVar38 = plVar38 + 0xb, plVar38 != plVar15) {
        iVar35 = (int)((ulong)(plVar38[1] - *plVar38) >> 3);
        if (iVar35 <= iVar14) {
          iVar35 = iVar14;
        }
        *(int *)(param_1 + 0x158) = iVar35;
        iVar14 = iVar35;
      }
    }
  }
  if (*(long *)(lVar24 + 0x2a0) == *(long *)(lVar24 + 0x2a8)) {
    pbVar42 = param_1 + 0x170;
    lVar24 = nn::os::GetCurrentThread();
LAB_00ec8298:
    if (*(long *)pbVar42 == 0 && *(long *)(param_1 + 0x178) == 0) goto code_r0x00ec82a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*(long *)pbVar42 != 0 || *(long *)(param_1 + 0x178) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*(long *)pbVar42 == 0 && *(long *)(param_1 + 0x178) == 0) {
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
            if (bVar23) {
              *(long *)pbVar42 = lVar24;
              param_1[0x178] = 0;
              param_1[0x179] = 0;
              param_1[0x17a] = 0;
              param_1[0x17b] = 0;
              param_1[0x17c] = 0;
              param_1[0x17d] = 0;
              param_1[0x17e] = 0;
              param_1[0x17f] = 0;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_00ec82ac;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar24;
        param_1[0x178] = 0;
        param_1[0x179] = 0;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        param_1[0x17c] = 0;
        param_1[0x17d] = 0;
        param_1[0x17e] = 0;
        param_1[0x17f] = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_00ec82ac:
    puVar46 = *(undefined8 **)(param_1 + 0x120);
    if (puVar46 == *(undefined8 **)(param_1 + 0x128)) {
      if (puVar46 < *(undefined8 **)(param_1 + 0x130)) {
        uVar40 = *(undefined8 *)(param_1 + 0x138);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar24 == 0) {
          *puVar46 = 0xffffffff00000000;
          *(undefined4 *)(puVar46 + 1) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_00ecab98;
          *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar40;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
          *puVar46 = 0xffffffff00000000;
          *(undefined4 *)(puVar46 + 1) = 0;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        }
        *(long *)(param_1 + 0x128) = (long)puVar46 + 0xc;
      }
      else {
        uVar18 = *(ulong *)(param_1 + 0x140);
        if (0x7ffffffffffffffe < uVar18) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 == 0) goto LAB_00eca964;
        lVar24 = (long)*(undefined8 **)(param_1 + 0x130) - (long)puVar46;
        lVar32 = lVar24 >> 2;
        uVar47 = lVar32 * 0x5555555555555556;
        if (lVar24 == 0) {
          uVar47 = 1;
        }
        if (uVar18 >> 1 <= (ulong)(lVar32 * -0x5555555555555555)) {
          uVar47 = uVar18;
        }
        if (uVar47 == 0) {
          puVar46 = (undefined8 *)0x0;
        }
        else {
          puVar46 = (undefined8 *)
                    (**(code **)(**(long **)(param_1 + 0x138) + 0x10))
                              (*(long **)(param_1 + 0x138),uVar47 * 0xc,4);
          if (puVar46 == (undefined8 *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x138) + 0xe8))();
          }
        }
        uVar40 = *(undefined8 *)(param_1 + 0x138);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar24 == 0) {
          *puVar46 = 0xffffffff00000000;
          *(undefined4 *)(puVar46 + 1) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_00ecab98;
          *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar40;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
          *puVar46 = 0xffffffff00000000;
          *(undefined4 *)(puVar46 + 1) = 0;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        }
        lVar24 = *(long *)(param_1 + 0x120);
        lVar32 = *(long *)(param_1 + 0x128);
        puVar48 = puVar46;
        if (lVar32 != lVar24) {
          do {
            uVar40 = *(undefined8 *)(param_1 + 0x138);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar37 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar37 == 0) {
              uVar40 = *(undefined8 *)(lVar32 + -0xc);
              *(undefined4 *)((long)puVar48 + -4) = *(undefined4 *)(lVar32 + -4);
              *(undefined8 *)((long)puVar48 + -0xc) = uVar40;
            }
            else {
              if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_00ecab98;
              *(undefined8 *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = uVar40;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
              uVar40 = *(undefined8 *)(lVar32 + -0xc);
              *(undefined4 *)((long)puVar48 + -4) = *(undefined4 *)(lVar32 + -4);
              *(undefined8 *)((long)puVar48 + -0xc) = uVar40;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
            }
            lVar32 = lVar32 + -0xc;
            puVar48 = (undefined8 *)((long)puVar48 + -0xc);
          } while (lVar24 != lVar32);
          lVar24 = *(long *)(param_1 + 0x120);
        }
        *(undefined8 **)(param_1 + 0x120) = puVar48;
        *(long *)(param_1 + 0x128) = (long)puVar46 + 0xc;
        lVar32 = *(long *)(param_1 + 0x130);
        *(ulong *)(param_1 + 0x130) = (long)puVar46 + uVar47 * 0xc;
        if (lVar24 != 0) {
          plVar38 = *(long **)(param_1 + 0x138);
          uVar18 = (**(code **)(*plVar38 + 0xf8))(plVar38);
          if (((uVar18 & 1) == 0) || (lVar37 = FUN_00c4e600(), *(int *)(lVar37 + 0x12c8) < 1)) {
            (**(code **)(*plVar38 + 0x18))(plVar38,lVar24,lVar32 - lVar24,4);
          }
          else {
            FUN_00c48fe8(plVar38,lVar24,lVar32 - lVar24,4);
          }
        }
      }
    }
    do {
      lVar24 = *(long *)pbVar42;
      lVar32 = *(long *)(param_1 + 0x178);
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar24;
        *(long *)(param_1 + 0x178) = lVar32;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      lVar37 = *(long *)(param_1 + 0x178);
      if (*(long *)pbVar42 != lVar24 || lVar37 != lVar32) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto LAB_00ec8340;
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        pbVar42[0] = 0;
        pbVar42[1] = 0;
        pbVar42[2] = 0;
        pbVar42[3] = 0;
        pbVar42[4] = 0;
        pbVar42[5] = 0;
        pbVar42[6] = 0;
        pbVar42[7] = 0;
        *(long *)(param_1 + 0x174) = lVar32;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar23 = true;
LAB_00ec8340:
    if (!bVar23) {
      do {
        lVar24 = *(long *)pbVar42;
        lVar32 = *(long *)(param_1 + 0x178);
        if (lVar24 != *(long *)pbVar42 || lVar32 != lVar37) {
          uVar30 = false;
          ClearExclusiveLocal();
          goto joined_r0x00eca824;
        }
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          pbVar42[0] = 0;
          pbVar42[1] = 0;
          pbVar42[2] = 0;
          pbVar42[3] = 0;
          pbVar42[4] = 0;
          pbVar42[5] = 0;
          pbVar42[6] = 0;
          pbVar42[7] = 0;
          *(long *)(param_1 + 0x174) = lVar37;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      uVar30 = true;
joined_r0x00eca824:
      do {
        if ((bool)uVar30) break;
        do {
          lVar37 = *(long *)pbVar42;
          lVar19 = *(long *)(param_1 + 0x178);
          if (lVar37 != lVar24 || lVar19 != lVar32) {
            uVar30 = false;
            ClearExclusiveLocal();
            lVar24 = lVar37;
            lVar32 = lVar19;
            goto joined_r0x00eca824;
          }
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
          if (bVar23) {
            pbVar42[0] = 0;
            pbVar42[1] = 0;
            pbVar42[2] = 0;
            pbVar42[3] = 0;
            pbVar42[4] = 0;
            pbVar42[5] = 0;
            pbVar42[6] = 0;
            pbVar42[7] = 0;
            *(long *)(param_1 + 0x174) = lVar32;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        uVar30 = true;
        lVar24 = lVar37;
        lVar32 = lVar19;
      } while( true );
    }
  }
  else {
    param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    if (*(int *)(param_1 + 0x158) <= (int)param_3) {
      param_3 = *(int *)(param_1 + 0x158) - 1;
    }
    pbVar42 = param_1 + 0x170;
    lVar32 = nn::os::GetCurrentThread();
LAB_00ec8ce4:
    if (*(long *)pbVar42 == 0 && *(long *)(param_1 + 0x178) == 0) goto code_r0x00ec8cf0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*(long *)pbVar42 != 0 || *(long *)(param_1 + 0x178) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*(long *)pbVar42 == 0 && *(long *)(param_1 + 0x178) == 0) {
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
            if (bVar23) {
              *(long *)pbVar42 = lVar32;
              param_1[0x178] = 0;
              param_1[0x179] = 0;
              param_1[0x17a] = 0;
              param_1[0x17b] = 0;
              param_1[0x17c] = 0;
              param_1[0x17d] = 0;
              param_1[0x17e] = 0;
              param_1[0x17f] = 0;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_00ec8cf8;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar32;
        param_1[0x178] = 0;
        param_1[0x179] = 0;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        param_1[0x17c] = 0;
        param_1[0x17d] = 0;
        param_1[0x17e] = 0;
        param_1[0x17f] = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_00ec8cf8:
    plVar38 = *(long **)(lVar24 + 0x2a0);
    plVar15 = *(long **)(lVar24 + 0x2a8);
    if (plVar38 != plVar15) {
      do {
        iVar14 = (int)((ulong)(plVar38[1] - *plVar38) >> 3);
        uVar6 = param_3;
        if (iVar14 <= (int)param_3) {
          uVar6 = iVar14 - 1;
        }
        uVar18 = (ulong)uVar6;
        uVar8 = uVar6 >> 0x1f;
        if (param_3 == uVar6) {
          uVar6 = 0xffffffff;
        }
        puVar44 = *(uint **)(param_1 + 0x120);
        puVar39 = *(uint **)(param_1 + 0x128);
        uVar8 = *(uint *)(*plVar38 + (-(ulong)uVar8 & 0xfffffff800000000 | uVar18 << 3));
        puVar34 = puVar44;
        if (puVar44 != puVar39) {
          puVar29 = puVar44;
          do {
            if ((*puVar29 == param_3) && (puVar34 = puVar29, puVar29[2] == uVar8)) break;
            puVar29 = puVar29 + 3;
            puVar34 = puVar39;
          } while (puVar39 != puVar29);
        }
        if (puVar39 == puVar34) {
          if (puVar39 == *(uint **)(param_1 + 0x130)) {
            lVar24 = (long)puVar39 - (long)puVar44 >> 2;
            uVar18 = *(ulong *)(param_1 + 0x140);
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            uVar47 = lVar24 * -0x5555555555555555 + 1;
            if (uVar18 < uVar47) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar32 = (long)*(uint **)(param_1 + 0x130) - (long)puVar44 >> 2;
            uVar28 = lVar32 * 0x5555555555555556;
            if (uVar47 <= uVar28) {
              uVar47 = uVar28;
            }
            if (uVar18 >> 1 <= (ulong)(lVar32 * -0x5555555555555555)) {
              uVar47 = uVar18;
            }
            if (uVar47 == 0) {
              lVar32 = 0;
            }
            else {
              lVar32 = (**(code **)(**(long **)(param_1 + 0x138) + 0x10))
                                 (*(long **)(param_1 + 0x138),uVar47 * 0xc,4);
              if (lVar32 == 0) {
                (**(code **)(**(long **)(param_1 + 0x138) + 0xe8))();
              }
            }
            puVar44 = (uint *)(lVar32 + lVar24 * 4);
            uVar40 = *(undefined8 *)(param_1 + 0x138);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar37 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar37 == 0) {
              *puVar44 = param_3;
              lVar24 = lVar32 + lVar24 * 4;
              *(uint *)(lVar24 + 4) = uVar6;
              *(uint *)(lVar24 + 8) = uVar8;
            }
            else {
              if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_00ecab98;
              *(undefined8 *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = uVar40;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
              *puVar44 = param_3;
              lVar24 = lVar32 + lVar24 * 4;
              *(uint *)(lVar24 + 4) = uVar6;
              *(uint *)(lVar24 + 8) = uVar8;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
            }
            lVar24 = *(long *)(param_1 + 0x120);
            lVar37 = *(long *)(param_1 + 0x128);
            puVar39 = puVar44;
            if (lVar37 != lVar24) {
              do {
                uVar40 = *(undefined8 *)(param_1 + 0x138);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  uVar40 = *(undefined8 *)(lVar37 + -0xc);
                  puVar39[-1] = *(uint *)(lVar37 + -4);
                  *(undefined8 *)(puVar39 + -3) = uVar40;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00ecab98;
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar40;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  uVar40 = *(undefined8 *)(lVar37 + -0xc);
                  puVar39[-1] = *(uint *)(lVar37 + -4);
                  *(undefined8 *)(puVar39 + -3) = uVar40;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                lVar37 = lVar37 + -0xc;
                puVar39 = puVar39 + -3;
              } while (lVar24 != lVar37);
              lVar24 = *(long *)(param_1 + 0x120);
            }
            *(uint **)(param_1 + 0x120) = puVar39;
            *(uint **)(param_1 + 0x128) = puVar44 + 3;
            lVar37 = *(long *)(param_1 + 0x130);
            *(ulong *)(param_1 + 0x130) = lVar32 + uVar47 * 0xc;
            if (lVar24 != 0) {
              plVar16 = *(long **)(param_1 + 0x138);
              uVar18 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar18 & 1) == 0) || (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,lVar24,lVar37 - lVar24,4);
              }
              else {
                FUN_00c48fe8(plVar16,lVar24,lVar37 - lVar24,4);
              }
            }
          }
          else {
            uVar40 = *(undefined8 *)(param_1 + 0x138);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar24 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar24 == 0) {
              *puVar39 = param_3;
              puVar39[1] = uVar6;
              puVar39[2] = uVar8;
            }
            else {
              if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_00ecab98;
              *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar40;
              *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
              *puVar39 = param_3;
              puVar39[1] = uVar6;
              puVar39[2] = uVar8;
              *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
            }
            *(uint **)(param_1 + 0x128) = puVar39 + 3;
          }
        }
        plVar38 = plVar38 + 0xb;
      } while (plVar38 != plVar15);
    }
    do {
      lVar24 = *(long *)pbVar42;
      lVar32 = *(long *)(param_1 + 0x178);
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar24;
        *(long *)(param_1 + 0x178) = lVar32;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      lVar37 = *(long *)(param_1 + 0x178);
      if (*(long *)pbVar42 != lVar24 || lVar37 != lVar32) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto LAB_00ec936c;
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        pbVar42[0] = 0;
        pbVar42[1] = 0;
        pbVar42[2] = 0;
        pbVar42[3] = 0;
        pbVar42[4] = 0;
        pbVar42[5] = 0;
        pbVar42[6] = 0;
        pbVar42[7] = 0;
        *(long *)(param_1 + 0x174) = lVar32;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar23 = true;
LAB_00ec936c:
    if (bVar23) goto LAB_00ec8344;
    do {
      lVar24 = *(long *)pbVar42;
      lVar32 = *(long *)(param_1 + 0x178);
      if (lVar24 != *(long *)pbVar42 || lVar32 != lVar37) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eca8d0;
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        pbVar42[0] = 0;
        pbVar42[1] = 0;
        pbVar42[2] = 0;
        pbVar42[3] = 0;
        pbVar42[4] = 0;
        pbVar42[5] = 0;
        pbVar42[6] = 0;
        pbVar42[7] = 0;
        *(long *)(param_1 + 0x174) = lVar37;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar23 = true;
joined_r0x00eca8d0:
    if (!bVar23) {
      do {
        lVar37 = *(long *)pbVar42;
        lVar19 = *(long *)(param_1 + 0x178);
        if (lVar37 != lVar24 || lVar19 != lVar32) {
          bVar23 = false;
          ClearExclusiveLocal();
          lVar24 = lVar37;
          lVar32 = lVar19;
          goto joined_r0x00eca8d0;
        }
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          pbVar42[0] = 0;
          pbVar42[1] = 0;
          pbVar42[2] = 0;
          pbVar42[3] = 0;
          pbVar42[4] = 0;
          pbVar42[5] = 0;
          pbVar42[6] = 0;
          pbVar42[7] = 0;
          *(long *)(param_1 + 0x174) = lVar32;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar23 = true;
      lVar24 = lVar37;
      lVar32 = lVar19;
      goto joined_r0x00eca8d0;
    }
  }
LAB_00ec8344:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
  pbVar42 = param_1 + 0xd0;
  lVar24 = *(long *)pbVar42;
  lVar32 = *(long *)(param_1 + 0xd8);
  lVar37 = *(long *)(param_1 + 0x90);
  if (lVar24 == lVar32) {
    uVar18 = (ulong)*(int *)(param_1 + 0x158);
    if (*(int *)(param_1 + 0x158) == 0) {
LAB_00ec8528:
      if (*(long *)(lVar37 + 0x2a0) == *(long *)(lVar37 + 0x2a8)) {
        lVar32 = *(long *)(lVar37 + 0x218);
        lVar19 = *(long *)(lVar37 + 0x210);
        lVar24 = FUN_00ecad28(&local_b0,*(undefined8 *)(param_1 + 8));
        if (lVar24 != 0) {
          piVar1 = (int *)(lVar24 + 0x28);
          do {
            iVar14 = *piVar1;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar23) {
              *piVar1 = iVar14 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar14 == -1) goto LAB_00eca8a4;
        }
        plVar15 = *(long **)pbVar42;
        plVar38 = (long *)*plVar15;
        *plVar15 = 0;
        if (plVar38 != (long *)0x0) {
          plVar16 = plVar38 + 5;
          do {
            lVar45 = *plVar16;
            iVar14 = (int)lVar45 + -1;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar23) {
              *(int *)plVar16 = iVar14;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar38 + 0x10))();
          }
          else if ((int)lVar45 == 0) goto LAB_00ec9390;
        }
        *plVar15 = lVar24;
        if ((param_5 & 1) != 0) {
          lVar24 = **(long **)(param_1 + 0xd0);
          *(undefined8 *)(lVar24 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
          *(undefined8 *)(lVar24 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 *)(lVar24 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
          plVar38 = *(long **)(param_1 + 0x80);
          if (plVar38 != (long *)0x0) {
            (**(code **)(*plVar38 + 0x18))(plVar38);
          }
          plVar15 = *(long **)(lVar24 + 0xb8);
          *(long **)(lVar24 + 0xb8) = plVar38;
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x20))();
          }
        }
        FUN_00ecae50(**(long **)pbVar42 + 0x30,lVar32 - lVar19 >> 5);
      }
      else if (0 < *(int *)(param_1 + 0x158)) {
        lVar24 = (*(long *)(lVar37 + 0x2a8) - *(long *)(lVar37 + 0x2a0) >> 3) * 0x2e8ba2e8ba2e8ba3;
        if ((param_5 & 1) == 0) {
          lVar32 = 0;
          do {
            lVar19 = FUN_00ecad28(&local_b0,*(undefined8 *)(param_1 + 8));
            if (lVar19 != 0) {
              piVar1 = (int *)(lVar19 + 0x28);
              do {
                iVar14 = *piVar1;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar14 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar14 == -1) goto LAB_00eca8a4;
            }
            lVar45 = *(long *)pbVar42;
            plVar38 = *(long **)(lVar45 + lVar32 * 8);
            *(undefined8 *)(lVar45 + lVar32 * 8) = 0;
            if (plVar38 != (long *)0x0) {
              plVar15 = plVar38 + 5;
              do {
                lVar11 = *plVar15;
                iVar14 = (int)lVar11 + -1;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar23) {
                  *(int *)plVar15 = iVar14;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*plVar38 + 0x10))();
              }
              else if ((int)lVar11 == 0) goto LAB_00ec9390;
            }
            *(long *)(lVar45 + lVar32 * 8) = lVar19;
            FUN_00ecae50(*(long *)(*(long *)(param_1 + 0xd0) + lVar32 * 8) + 0x30,lVar24);
            lVar32 = lVar32 + 1;
          } while (lVar32 < *(int *)(param_1 + 0x158));
        }
        else {
          lVar32 = 0;
          do {
            lVar19 = FUN_00ecad28(&local_b0,*(undefined8 *)(param_1 + 8));
            if (lVar19 != 0) {
              piVar1 = (int *)(lVar19 + 0x28);
              do {
                iVar14 = *piVar1;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar23) {
                  *piVar1 = iVar14 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar14 == -1) goto LAB_00eca8a4;
            }
            lVar45 = *(long *)pbVar42;
            plVar38 = *(long **)(lVar45 + lVar32 * 8);
            *(undefined8 *)(lVar45 + lVar32 * 8) = 0;
            if (plVar38 != (long *)0x0) {
              plVar15 = plVar38 + 5;
              do {
                lVar11 = *plVar15;
                iVar14 = (int)lVar11 + -1;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar23) {
                  *(int *)plVar15 = iVar14;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*plVar38 + 0x10))();
              }
              else if ((int)lVar11 == 0) goto LAB_00ec9390;
            }
            *(long *)(lVar45 + lVar32 * 8) = lVar19;
            lVar19 = *(long *)(*(long *)(param_1 + 0xd0) + lVar32 * 8);
            *(undefined8 *)(lVar19 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
            *(undefined8 *)(lVar19 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
            *(undefined8 *)(lVar19 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
            plVar38 = *(long **)(param_1 + 0x80);
            if (plVar38 != (long *)0x0) {
              (**(code **)(*plVar38 + 0x18))(plVar38);
            }
            plVar15 = *(long **)(lVar19 + 0xb8);
            *(long **)(lVar19 + 0xb8) = plVar38;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            FUN_00ecae50(*(long *)(*(long *)(param_1 + 0xd0) + lVar32 * 8) + 0x30,lVar24);
            lVar32 = lVar32 + 1;
          } while (lVar32 < *(int *)(param_1 + 0x158));
        }
      }
      goto LAB_00ec8364;
    }
    if (uVar18 <= (ulong)(*(long *)(param_1 + 0xe0) - lVar32 >> 3)) {
      FUN_00ee486c(pbVar42,uVar18);
      goto LAB_00ec8528;
    }
    uVar28 = *(ulong *)(param_1 + 0xf0);
    lVar32 = lVar32 - lVar24 >> 3;
    uVar47 = uVar18 + lVar32;
    if (0x7ffffffffffffffe < uVar28) {
      uVar28 = 0x7fffffffffffffff;
    }
    if (uVar28 < uVar47) {
LAB_00eca964:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar24 = *(long *)(param_1 + 0xe0) - lVar24;
    uVar26 = lVar24 >> 2;
    if (uVar47 <= uVar26) {
      uVar47 = uVar26;
    }
    pbVar2 = param_1 + 0xe8;
    if (uVar28 >> 1 <= (ulong)(lVar24 >> 3)) {
      uVar47 = uVar28;
    }
    if (uVar47 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (**(code **)(**(long **)pbVar2 + 0x10))(*(long **)pbVar2,uVar47 << 3,8);
      if (lVar24 == 0) {
        (**(code **)(**(long **)pbVar2 + 0xe8))();
      }
    }
    puVar48 = (undefined8 *)(lVar24 + lVar32 * 8);
    lVar32 = uVar18 << 3;
    puVar5 = puVar48 + uVar18;
    puVar46 = puVar48;
    do {
      uVar40 = *(undefined8 *)pbVar2;
      if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar19 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar19 == 0) {
        *puVar46 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00ecab98;
        *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar40;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        *puVar46 = 0;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
      }
      puVar46 = puVar46 + 1;
      lVar32 = lVar32 + -8;
    } while (lVar32 != 0);
    plVar38 = *(long **)(param_1 + 0xd0);
    plVar15 = *(long **)(param_1 + 0xd8);
    if (plVar15 == plVar38) {
      plVar15 = plVar38;
    }
    else {
      do {
        puVar48 = puVar48 + -1;
        plVar15 = plVar15 + -1;
        FUN_00ee4470(pbVar2,puVar48,plVar15);
      } while (plVar38 != plVar15);
      plVar15 = *(long **)(param_1 + 0xd0);
      plVar38 = *(long **)(param_1 + 0xd8);
    }
    lVar32 = *(long *)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xd0) = puVar48;
    *(undefined8 **)(param_1 + 0xd8) = puVar5;
    *(ulong *)(param_1 + 0xe0) = lVar24 + uVar47 * 8;
    do {
      while( true ) {
        do {
          if (plVar38 == plVar15) {
            if (plVar15 != (long *)0x0) {
              plVar38 = *(long **)pbVar2;
              uVar18 = (**(code **)(*plVar38 + 0xf8))(plVar38);
              if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                (**(code **)(*plVar38 + 0x18))(plVar38,plVar15,lVar32 - (long)plVar15,8);
              }
              else {
                FUN_00c48fe8(plVar38,plVar15,lVar32 - (long)plVar15,8);
              }
            }
            goto LAB_00ec8528;
          }
          plVar38 = plVar38 + -1;
          plVar16 = (long *)*plVar38;
        } while (plVar16 == (long *)0x0);
        plVar4 = plVar16 + 5;
        do {
          lVar24 = *plVar4;
          iVar14 = (int)lVar24 + -1;
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar23) {
            *(int *)plVar4 = iVar14;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar14 != 0) break;
        (**(code **)(*plVar16 + 0x10))();
      }
    } while ((int)lVar24 != 0);
LAB_00ec9390:
    pcVar17 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar20 = "DecrementReferenceInternal";
    pcVar21 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar22 = "Reference counter underflows.";
LAB_00ec93b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar17,pcVar20,pcVar21,0x58,pcVar22);
  }
LAB_00ec8364:
  if (*(long *)(lVar37 + 0x2a0) == *(long *)(lVar37 + 0x2a8)) {
    uVar18 = (ulong)local_a8 >> 0x20;
    local_a8 = (byte *)(uVar18 << 0x20);
    lVar24 = *(long *)(*(long *)(param_1 + 0x90) + 0x218) -
             *(long *)(*(long *)(param_1 + 0x90) + 0x210);
    local_b0 = &DAT_ffffffff00000000;
    if (lVar24 != 0) {
      uVar28 = lVar24 >> 5;
      uVar47 = uVar28;
      if (uVar28 < 2) {
        uVar47 = 1;
      }
      local_a8 = (byte *)(uVar18 << 0x20);
      FUN_00ecbbfc(param_1,param_2 & 1,&local_b0,param_4);
      if (1 < uVar28) {
        uVar18 = 1;
        do {
          local_a8 = (byte *)CONCAT44(local_a8._4_4_,(int)uVar18);
          FUN_00ecbbfc(param_1,param_2 & 1,&local_b0,param_4);
          uVar18 = uVar18 + 1;
        } while (uVar47 != uVar18);
      }
    }
  }
  else {
    pbVar42 = param_1 + 0x170;
    lVar24 = nn::os::GetCurrentThread();
    do {
      lVar32 = *(long *)pbVar42;
      lVar37 = *(long *)(param_1 + 0x178);
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar32;
        *(long *)(param_1 + 0x178) = lVar37;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_00ec8bfc:
    while ((lVar32 != 0 && (lVar24 != lVar32))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
      do {
        lVar32 = *(long *)pbVar42;
        lVar37 = *(long *)(param_1 + 0x178);
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          *(long *)pbVar42 = lVar32;
          *(long *)(param_1 + 0x178) = lVar37;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    do {
      lVar19 = *(long *)pbVar42;
      if (lVar19 != lVar32 || *(long *)(param_1 + 0x178) != lVar37) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto LAB_00ec8c2c;
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar32;
        *(long *)(param_1 + 0x174) = lVar37 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar23 = true;
LAB_00ec8c2c:
    if (!bVar23) {
      lVar32 = lVar19;
      lVar37 = *(long *)(param_1 + 0x178);
      goto LAB_00ec8bfc;
    }
    lVar24 = *(long *)(param_1 + 0x120);
    lVar32 = *(long *)(param_1 + 0x128);
    if (lVar24 != lVar32) {
      FUN_00ecbbfc(param_1,param_2 & 1,lVar24,param_4);
      if (lVar24 + 0xc != lVar32) {
        FUN_00ecbbfc(param_1,param_2 & 1,lVar24 + 0xc,param_4);
        for (lVar24 = lVar24 + 0x18; lVar24 != lVar32; lVar24 = lVar24 + 0xc) {
          FUN_00ecbbfc(param_1,param_2 & 1,lVar24,param_4);
        }
      }
    }
    do {
      lVar24 = *(long *)pbVar42;
      lVar32 = *(long *)(param_1 + 0x178);
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar24;
        *(long *)(param_1 + 0x178) = lVar32;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    do {
      lVar37 = *(long *)pbVar42;
      lVar19 = *(long *)(param_1 + 0x178);
      if (lVar37 != lVar24 || lVar19 != lVar32) {
        bVar23 = false;
        ClearExclusiveLocal();
        goto LAB_00ec901c;
      }
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(long *)pbVar42 = lVar24;
        *(long *)(param_1 + 0x174) = lVar32 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar23 = true;
LAB_00ec901c:
    if (!bVar23) {
      do {
        lVar24 = *(long *)pbVar42;
        lVar32 = *(long *)(param_1 + 0x178);
        if (lVar24 != lVar37 || lVar32 != lVar19) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto joined_r0x00ec9dfc;
        }
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          *(long *)pbVar42 = lVar37;
          *(long *)(param_1 + 0x174) = lVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      bVar23 = true;
joined_r0x00ec9dfc:
      if (!bVar23) {
        do {
          lVar37 = *(long *)pbVar42;
          lVar19 = *(long *)(param_1 + 0x178);
          if (lVar37 != lVar24 || lVar19 != lVar32) {
            bVar23 = false;
            ClearExclusiveLocal();
            lVar24 = lVar37;
            lVar32 = lVar19;
            goto joined_r0x00ec9dfc;
          }
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
          if (bVar23) {
            *(long *)pbVar42 = lVar24;
            *(long *)(param_1 + 0x174) = lVar32 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar23 = true;
        lVar24 = lVar37;
        lVar32 = lVar19;
        goto joined_r0x00ec9dfc;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
  }
  lVar24 = *(long *)(param_1 + 200);
  if ((lVar24 == 0) || (plVar38 = (long *)(lVar24 + 0x50), *plVar38 == *(long *)(lVar24 + 0x58))) {
    plVar38 = (long *)(*(long *)(param_1 + 0x90) + 0x268);
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    lVar24 = *plVar38;
    lVar32 = plVar38[1];
    lVar37 = FUN_00ecb050(&local_b0,*(undefined8 *)(param_1 + 8));
    if (lVar37 != 0) {
      piVar1 = (int *)(lVar37 + 0x28);
      do {
        iVar14 = *piVar1;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = iVar14 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == -1) goto LAB_00eca8a4;
    }
    plVar15 = *(long **)(param_1 + 0x108);
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 5;
      do {
        lVar19 = *plVar16;
        iVar14 = (int)lVar19 + -1;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar23) {
          *(int *)plVar16 = iVar14;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar19 == 0) goto LAB_00ec9390;
    }
    uVar18 = lVar32 - lVar24 >> 5;
    *(long *)(param_1 + 0x108) = lVar37;
    if ((param_5 & 1) != 0) {
      *(undefined8 *)(lVar37 + 0xb0) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(lVar37 + 0xb8) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(lVar37 + 0xc0) = *(undefined8 *)(param_1 + 0x78);
      plVar15 = *(long **)(param_1 + 0x80);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar16 = *(long **)(lVar37 + 200);
      *(long **)(lVar37 + 200) = plVar15;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))();
      }
    }
    lVar37 = *(long *)(param_1 + 0x108);
    FUN_00f91b58(lVar37 + 0x38,uVar18);
    FUN_00f9208c(lVar37 + 0x70,uVar18);
    if (lVar32 - lVar24 != 0) {
      uVar47 = 0;
      pbVar42 = param_1 + 0x28;
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      pbVar2 = PTR_DAT_047dafb8 + 0x10;
      pbVar41 = PTR_DAT_047d8c58;
      do {
        FUN_00f2b7b8(&local_e0,param_1 + 0x38,*plVar38 + uVar47 * 0x20,&DAT_03c886bc);
        if ((param_2 & 1) == 0) {
          lVar24 = *(long *)(param_1 + 0x108);
          local_80 = 0;
          uStack_78 = 0;
          local_90 = (long *)0x0;
          uStack_88 = 0;
          local_a0 = (byte *)0x0;
          local_98 = (long *)0x0;
          local_a8 = (byte *)0x0;
          local_b0 = pbVar2;
          FUN_00cbf934(&local_b0,0,&local_e0,0,param_4);
          uVar28 = *(ulong *)(lVar24 + 0x40);
          if (uVar28 < *(ulong *)(lVar24 + 0x48)) {
            FUN_00f91e40(lVar24 + 0x50,uVar28,&local_b0);
            *(ulong *)(lVar24 + 0x40) = uVar28 + 0x40;
          }
          else {
            FUN_00ee58e0(lVar24 + 0x38,&local_b0);
          }
          FUN_00f91cdc(&local_b0);
          pbVar41 = PTR_DAT_047d8c58;
        }
        else {
          FUN_00ecb4a0(&local_e8,*(undefined8 *)(param_1 + 0x108),&local_e0,1,param_4);
          plVar15 = local_e8;
          do {
            iVar14 = *(int *)pbVar42;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
            if (bVar23) {
              *(int *)pbVar42 = iVar14 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar14 == -1) goto LAB_00eca8a4;
          if (((*pbVar41 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar41), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar41);
          }
          uVar40 = *(undefined8 *)PTR_DAT_047d8c60;
          *(undefined8 *)PTR_DAT_047d8c68 = uVar40;
          FUN_00cbf5d4(local_70,uVar40,plVar15[1]);
          local_100 = local_70[0];
          local_108 = param_1;
          if (local_70[0] != (byte *)0x0) {
            lVar24 = *(long *)(local_70[0] + 0x30);
            if (*(long *)(lVar24 + 0x10) == 0) goto LAB_00eca938;
            psVar3 = (short *)(lVar24 + 0x1a);
            do {
              sVar7 = *psVar3;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar23) {
                *psVar3 = sVar7 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 0) {
              uVar40 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
              *(undefined8 *)(lVar24 + 8) = uVar40;
              *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
            }
            else if (sVar7 == -1) goto LAB_00eca940;
          }
          pbVar25 = (byte *)0x0;
          if (local_70[0] != (byte *)0x0) {
            pbVar25 = local_70[0] + 0x58;
          }
          if ((*(byte *)((long)plVar15 + 0x6d) & 1) == 0) {
            if ((*(byte *)((long)plVar15 + 0x6c) & 1) == 0) {
              plVar16 = plVar15 + 0xf;
              lVar24 = nn::os::GetCurrentThread();
LAB_00ec87c4:
              if (*plVar16 == 0) goto code_r0x00ec87cc;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x10));
              do {
                if (*plVar16 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x10));
                    while (*plVar16 == 0) {
                      cVar10 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar23) {
                        *plVar16 = lVar24;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                      if (cVar10 == '\0') goto LAB_00ec87d4;
                    }
                  } while( true );
                }
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar23) {
                  *plVar16 = lVar24;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
LAB_00ec87d4:
              if ((*(byte *)((long)plVar15 + 0x6c) & 1) != 0) {
                FUN_00fa3b14(&local_108);
                pbVar41 = PTR_DAT_047d8c58;
                goto LAB_00ec8a44;
              }
              local_b0 = local_108;
              if (local_108 != (byte *)0x0) {
                pbVar41 = local_108 + 0x28;
                do {
                  iVar14 = *(int *)pbVar41;
                  cVar10 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(pbVar41,0x10);
                  if (bVar23) {
                    *(int *)pbVar41 = iVar14 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (iVar14 == -1) goto LAB_00eca8a4;
              }
              local_a8 = local_100;
              if (local_100 == (byte *)0x0) goto LAB_00ec8844;
              lVar24 = *(long *)(local_100 + 0x30);
              if (*(long *)(lVar24 + 0x10) == 0) goto LAB_00eca938;
              psVar3 = (short *)(lVar24 + 0x1a);
              do {
                sVar7 = *psVar3;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar23) {
                  *psVar3 = sVar7 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar7 != 0) {
                if (sVar7 != -1) goto LAB_00ec8844;
                goto LAB_00eca940;
              }
              uVar40 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
              *(undefined8 *)(lVar24 + 8) = uVar40;
              *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
LAB_00ec8844:
              local_a0 = pbVar25;
              if ((ulong)plVar15[0x1a] < (ulong)plVar15[0x1b]) {
                FUN_00ee4f1c(plVar15 + 0x19,&local_b0);
                if (local_a8 != (byte *)0x0) {
                  lVar24 = *(long *)(local_a8 + 0x30);
                  psVar3 = (short *)(lVar24 + 0x1a);
                  do {
                    sVar7 = *psVar3;
                    cVar10 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                    if (bVar23) {
                      *psVar3 = sVar7 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (sVar7 == 1) {
                    *(undefined8 *)(lVar24 + 0x10) = 0;
                    (**(code **)(*(long *)local_a8 + 0x50))();
                  }
                  else if (sVar7 == 0) goto LAB_00ec9f04;
                }
              }
              else {
                uVar28 = plVar15[0x1d];
                lVar24 = plVar15[0x1a] - plVar15[0x19] >> 4;
                if (0x7ffffffffffffffe < uVar28) {
                  uVar28 = 0x7fffffffffffffff;
                }
                uVar26 = lVar24 * -0x71c71c71c71c71c7 + 1;
                if (uVar28 < uVar26) goto LAB_00eca988;
                lVar32 = plVar15[0x1b] - plVar15[0x19] >> 4;
                uVar33 = lVar32 * 0x1c71c71c71c71c72;
                if (uVar26 <= uVar33) {
                  uVar26 = uVar33;
                }
                plVar16 = plVar15 + 0x1c;
                if (uVar28 >> 1 <= (ulong)(lVar32 * -0x71c71c71c71c71c7)) {
                  uVar26 = uVar28;
                }
                if (uVar26 == 0) {
                  lVar32 = 0;
                }
                else {
                  lVar32 = (**(code **)(*(long *)*plVar16 + 0x10))
                                     ((long *)*plVar16,uVar26 * 0x90,0x10);
                  if (lVar32 == 0) {
                    (**(code **)(*(long *)*plVar16 + 0xe8))();
                  }
                }
                lVar37 = *plVar16;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                pbVar31 = local_a8;
                pbVar41 = local_b0;
                if (lVar19 != 0) {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00ecab98;
                  *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar37;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  pbVar25 = local_a0;
                }
                puVar46 = (undefined8 *)(lVar32 + lVar24 * 0x10);
                lVar24 = lVar32 + lVar24 * 0x10;
                *(undefined8 *)(lVar24 + 0x10) = 0;
                *(undefined8 *)(lVar24 + 0x18) = 0;
                local_b0 = (byte *)0x0;
                *(byte **)(lVar24 + 0x20) = pbVar41;
                local_a8 = (byte *)0x0;
                *(byte **)(lVar24 + 0x28) = pbVar31;
                *puVar46 = &LAB_00fa3b10;
                *(undefined1 **)(lVar24 + 8) = &LAB_02bb19d8;
                *(undefined1 **)(lVar24 + 0x10) = &LAB_02bb1abc;
                *(undefined1 **)(lVar24 + 0x18) = &LAB_02bb1bcc;
                *(byte **)(lVar24 + 0x80) = pbVar25;
                if (lVar19 != 0) {
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                puVar48 = puVar46 + 0x12;
                lVar24 = plVar15[0x19];
                lVar37 = plVar15[0x1a];
                if (lVar37 == lVar24) {
                  lVar37 = lVar24;
                }
                else {
                  do {
                    puVar46 = puVar46 + -0x12;
                    lVar37 = lVar37 + -0x90;
                    FUN_00cbf394(plVar16,puVar46,lVar37);
                  } while (lVar24 != lVar37);
                  lVar24 = plVar15[0x19];
                  lVar37 = plVar15[0x1a];
                }
                plVar15[0x19] = (long)puVar46;
                plVar15[0x1a] = (long)puVar48;
                lVar19 = plVar15[0x1b];
                plVar15[0x1b] = lVar32 + uVar26 * 0x90;
                while (lVar32 = lVar37, lVar32 != lVar24) {
                  pcVar27 = *(code **)(lVar32 + -0x88);
                  lVar37 = lVar32 + -0x90;
                  if (pcVar27 != (code *)0x0) {
                    *(undefined8 *)(lVar32 + -0x80) = 0;
                    *(undefined8 *)(lVar32 + -0x78) = 0;
                    *(undefined8 *)(lVar32 + -0x90) = 0;
                    *(undefined8 *)(lVar32 + -0x88) = 0;
                    (*pcVar27)(lVar32 + -0x70);
                  }
                }
                if (lVar24 != 0) {
                  plVar16 = (long *)*plVar16;
                  uVar28 = (**(code **)(*plVar16 + 0xf8))(plVar16);
                  if (((uVar28 & 1) == 0) ||
                     (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1)) {
                    (**(code **)(*plVar16 + 0x18))(plVar16,lVar24,lVar19 - lVar24,0x10);
                  }
                  else {
                    FUN_00c48fe8(plVar16,lVar24,lVar19 - lVar24,0x10);
                  }
                }
              }
              pbVar41 = PTR_DAT_047d8c58;
              if (local_b0 == (byte *)0x0) {
LAB_00ec8a44:
                plVar15[0xf] = 0;
                nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x10));
                goto LAB_00ec8a54;
              }
              pbVar25 = local_b0 + 0x28;
              do {
                iVar14 = *(int *)pbVar25;
                iVar35 = iVar14 + -1;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pbVar25,0x10);
                if (bVar23) {
                  *(int *)pbVar25 = iVar35;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar35 == 0) {
                (**(code **)(*(long *)local_b0 + 0x10))();
                goto LAB_00ec8a44;
              }
              if (iVar14 != 0) goto LAB_00ec8a44;
              goto LAB_00ec9390;
            }
            FUN_00fa3b14(&local_108);
          }
LAB_00ec8a54:
          if (local_100 != (byte *)0x0) {
            lVar24 = *(long *)(local_100 + 0x30);
            psVar3 = (short *)(lVar24 + 0x1a);
            do {
              sVar7 = *psVar3;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar23) {
                *psVar3 = sVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 1) {
              *(undefined8 *)(lVar24 + 0x10) = 0;
              (**(code **)(*(long *)local_100 + 0x50))();
            }
            else if (sVar7 == 0) goto LAB_00ec9f04;
          }
          if (local_108 != (byte *)0x0) {
            pbVar25 = local_108 + 0x28;
            do {
              iVar14 = *(int *)pbVar25;
              iVar35 = iVar14 + -1;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pbVar25,0x10);
              if (bVar23) {
                *(int *)pbVar25 = iVar35;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar35 == 0) {
              (**(code **)(*(long *)local_108 + 0x10))();
            }
            else if (iVar14 == 0) goto LAB_00ec9390;
          }
          if (local_70[0] != (byte *)0x0) {
            lVar24 = *(long *)(local_70[0] + 0x30);
            psVar3 = (short *)(lVar24 + 0x1a);
            do {
              sVar7 = *psVar3;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar23) {
                *psVar3 = sVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 1) {
              *(undefined8 *)(lVar24 + 0x10) = 0;
              (**(code **)(*(long *)local_70[0] + 0x50))();
            }
            else if (sVar7 == 0) goto LAB_00ec9f04;
          }
          if (local_e8 != (long *)0x0) {
            lVar24 = local_e8[6];
            psVar3 = (short *)(lVar24 + 0x1a);
            do {
              sVar7 = *psVar3;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar23) {
                *psVar3 = sVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 1) {
              *(undefined8 *)(lVar24 + 0x10) = 0;
              (**(code **)(*local_e8 + 0x50))();
            }
            else if (sVar7 == 0) goto LAB_00ec9f04;
          }
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_e0 != (byte *)0x0) {
          (**(code **)(*(long *)local_e0 + 0x20))();
        }
        uVar47 = uVar47 + 1;
      } while (uVar47 != uVar18);
    }
  }
  lVar24 = *(long *)(param_1 + 0x90);
  if ((**(char **)(lVar24 + 0x250) != '\0') && (*(long *)(param_1 + 0x110) == 0)) {
    lVar32 = FUN_00ecb9e0(&local_b0,*(undefined8 *)(param_1 + 8));
    if (lVar32 != 0) {
      piVar1 = (int *)(lVar32 + 0x28);
      do {
        iVar14 = *piVar1;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = iVar14 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == -1) goto LAB_00eca8a4;
    }
    plVar38 = *(long **)(param_1 + 0x110);
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    if (plVar38 != (long *)0x0) {
      plVar15 = plVar38 + 5;
      do {
        lVar37 = *plVar15;
        iVar14 = (int)lVar37 + -1;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar23) {
          *(int *)plVar15 = iVar14;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar38 + 0x10))();
      }
      else if ((int)lVar37 == 0) goto LAB_00ec9390;
    }
    lVar24 = lVar24 + 0x248;
    *(long *)(param_1 + 0x110) = lVar32;
    if ((param_2 & 1) == 0) {
      FUN_00f2b7b8(&local_b0,param_1 + 0x38,lVar24,&DAT_03c886bc);
      FUN_00ecde28(lVar32 + 0x30,0,&local_b0,0,param_4);
    }
    else {
      FUN_00f2b7b8(&local_b0,param_1 + 0x38,lVar24,&DAT_03c886bc);
      uVar18 = FUN_00ecde28(lVar32 + 0x30,1,&local_b0,0,param_4);
      if ((uVar18 & 1) == 0) {
        plVar38 = (long *)0x0;
      }
      else {
        plVar38 = *(long **)(lVar32 + 0x50);
        if (plVar38 != (long *)0x0) {
          lVar24 = plVar38[6];
          if (*(long *)(lVar24 + 0x10) == 0) goto LAB_00eca938;
          psVar3 = (short *)(lVar24 + 0x1a);
          do {
            sVar7 = *psVar3;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar23) {
              *psVar3 = sVar7 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar7 == 0) {
            uVar40 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
            *(undefined8 *)(lVar24 + 8) = uVar40;
            *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
          }
          else if (sVar7 == -1) {
            pcVar17 = "count != 0";
            pcVar20 = "AddReference";
            pcVar21 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
            ;
            pcVar22 = "Reference counter overflows.";
            goto LAB_00ec93b0;
          }
        }
      }
      pbVar42 = param_1 + 0x28;
      do {
        iVar14 = *(int *)pbVar42;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          *(int *)pbVar42 = iVar14 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == -1) goto LAB_00eca8a4;
      if (((*PTR_DAT_047d8c58 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c58);
      }
      uVar40 = *(undefined8 *)PTR_DAT_047d8c60;
      *(undefined8 *)PTR_DAT_047d8c68 = uVar40;
      FUN_00cbf5d4(local_70,uVar40,plVar38[1]);
      local_100 = local_70[0];
      local_108 = param_1;
      if (local_70[0] != (byte *)0x0) {
        lVar24 = *(long *)(local_70[0] + 0x30);
        if (*(long *)(lVar24 + 0x10) == 0) {
LAB_00eca938:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar3 = (short *)(lVar24 + 0x1a);
        do {
          sVar7 = *psVar3;
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar23) {
            *psVar3 = sVar7 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar7 == 0) {
          uVar40 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
          *(undefined8 *)(lVar24 + 8) = uVar40;
          *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
        }
        else if (sVar7 == -1) {
LAB_00eca940:
          pcVar17 = "count != 0";
          pcVar20 = "AddReference";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar22 = "Reference counter overflows.";
          goto LAB_00ec93b0;
        }
      }
      pbVar42 = (byte *)0x0;
      if (local_70[0] != (byte *)0x0) {
        pbVar42 = local_70[0] + 0x58;
      }
      if ((*(byte *)((long)plVar38 + 0x6d) & 1) == 0) {
        if ((*(byte *)((long)plVar38 + 0x6c) & 1) == 0) {
          plVar15 = plVar38 + 0xf;
          lVar24 = nn::os::GetCurrentThread();
LAB_00ec972c:
          if (*plVar15 == 0) goto code_r0x00ec9734;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar38 + 0x10));
          do {
            if (*plVar15 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar38 + 0x10));
                while (*plVar15 == 0) {
                  cVar10 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar23) {
                    *plVar15 = lVar24;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 == '\0') goto LAB_00ec973c;
                }
              } while( true );
            }
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar23) {
              *plVar15 = lVar24;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
LAB_00ec973c:
          if ((*(byte *)((long)plVar38 + 0x6c) & 1) != 0) {
            FUN_00ecdb98(&local_108);
            goto LAB_00ec9994;
          }
          local_e0 = local_108;
          if (local_108 != (byte *)0x0) {
            pbVar2 = local_108 + 0x28;
            do {
              iVar14 = *(int *)pbVar2;
              cVar10 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
              if (bVar23) {
                *(int *)pbVar2 = iVar14 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar14 == -1) goto LAB_00eca8a4;
          }
          local_d8 = local_100;
          if (local_100 == (byte *)0x0) goto LAB_00ec97ac;
          lVar24 = *(long *)(local_100 + 0x30);
          if (*(long *)(lVar24 + 0x10) == 0) goto LAB_00eca938;
          psVar3 = (short *)(lVar24 + 0x1a);
          do {
            sVar7 = *psVar3;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar23) {
              *psVar3 = sVar7 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (sVar7 != 0) {
            if (sVar7 != -1) goto LAB_00ec97ac;
            goto LAB_00eca940;
          }
          uVar40 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
          *(undefined8 *)(lVar24 + 8) = uVar40;
          *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
LAB_00ec97ac:
          local_d0 = pbVar42;
          if ((ulong)plVar38[0x1a] < (ulong)plVar38[0x1b]) {
            FUN_00ee504c(plVar38 + 0x19,&local_e0);
            if (local_d8 != (byte *)0x0) {
              lVar24 = *(long *)(local_d8 + 0x30);
              psVar3 = (short *)(lVar24 + 0x1a);
              do {
                sVar7 = *psVar3;
                cVar10 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar23) {
                  *psVar3 = sVar7 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar7 == 1) {
                *(undefined8 *)(lVar24 + 0x10) = 0;
                (**(code **)(*(long *)local_d8 + 0x50))();
              }
              else if (sVar7 == 0) goto LAB_00ec9f04;
            }
          }
          else {
            uVar18 = plVar38[0x1d];
            lVar24 = plVar38[0x1a] - plVar38[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            uVar47 = lVar24 * -0x71c71c71c71c71c7 + 1;
            if (uVar18 < uVar47) {
LAB_00eca988:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar32 = plVar38[0x1b] - plVar38[0x19] >> 4;
            uVar28 = lVar32 * 0x1c71c71c71c71c72;
            if (uVar47 <= uVar28) {
              uVar47 = uVar28;
            }
            plVar15 = plVar38 + 0x1c;
            if (uVar18 >> 1 <= (ulong)(lVar32 * -0x71c71c71c71c71c7)) {
              uVar47 = uVar18;
            }
            if (uVar47 == 0) {
              lVar32 = 0;
            }
            else {
              lVar32 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar47 * 0x90,0x10);
              if (lVar32 == 0) {
                (**(code **)(*(long *)*plVar15 + 0xe8))();
              }
            }
            lVar37 = *plVar15;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            pbVar41 = local_d8;
            pbVar2 = local_e0;
            if (lVar19 != 0) {
              if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_00ecab98:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar37;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
              pbVar42 = local_d0;
            }
            lVar37 = lVar32 + lVar24 * 0x10;
            *(undefined8 *)(lVar37 + 0x10) = 0;
            *(undefined8 *)(lVar37 + 0x18) = 0;
            local_e0 = (byte *)0x0;
            *(byte **)(lVar37 + 0x20) = pbVar2;
            puVar46 = (undefined8 *)(lVar32 + lVar24 * 0x10);
            local_d8 = (byte *)0x0;
            *(byte **)(lVar37 + 0x28) = pbVar41;
            *puVar46 = &LAB_02715488;
            *(undefined1 **)(lVar37 + 8) = &LAB_02bb1be8;
            *(undefined1 **)(lVar37 + 0x10) = &LAB_02bb1ccc;
            *(undefined1 **)(lVar37 + 0x18) = &LAB_02bb1ddc;
            *(byte **)(lVar37 + 0x80) = pbVar42;
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            lVar24 = plVar38[0x19];
            lVar37 = plVar38[0x1a];
            puVar48 = puVar46 + 0x12;
            if (lVar37 == lVar24) {
              lVar37 = lVar24;
            }
            else {
              do {
                puVar46 = puVar46 + -0x12;
                lVar37 = lVar37 + -0x90;
                FUN_00cbf394(plVar15,puVar46,lVar37);
              } while (lVar24 != lVar37);
              lVar24 = plVar38[0x1a];
              lVar37 = plVar38[0x19];
            }
            plVar38[0x19] = (long)puVar46;
            plVar38[0x1a] = (long)puVar48;
            lVar19 = plVar38[0x1b];
            plVar38[0x1b] = lVar32 + uVar47 * 0x90;
            while (lVar32 = lVar24, lVar32 != lVar37) {
              pcVar27 = *(code **)(lVar32 + -0x88);
              lVar24 = lVar32 + -0x90;
              if (pcVar27 != (code *)0x0) {
                *(undefined8 *)(lVar32 + -0x80) = 0;
                *(undefined8 *)(lVar32 + -0x78) = 0;
                *(undefined8 *)(lVar32 + -0x90) = 0;
                *(undefined8 *)(lVar32 + -0x88) = 0;
                (*pcVar27)(lVar32 + -0x70);
              }
            }
            if (lVar37 != 0) {
              plVar15 = (long *)*plVar15;
              uVar18 = (**(code **)(*plVar15 + 0xf8))(plVar15);
              if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                (**(code **)(*plVar15 + 0x18))(plVar15,lVar37,lVar19 - lVar37,0x10);
              }
              else {
                FUN_00c48fe8(plVar15,lVar37,lVar19 - lVar37,0x10);
              }
            }
          }
          if (local_e0 == (byte *)0x0) {
LAB_00ec9994:
            plVar38[0xf] = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar38 + 0x10));
            goto LAB_00ec9634;
          }
          pbVar42 = local_e0 + 0x28;
          do {
            iVar14 = *(int *)pbVar42;
            iVar35 = iVar14 + -1;
            cVar10 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
            if (bVar23) {
              *(int *)pbVar42 = iVar35;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*(long *)local_e0 + 0x10))();
            goto LAB_00ec9994;
          }
          if (iVar14 != 0) goto LAB_00ec9994;
          goto LAB_00ec9390;
        }
        FUN_00ecdb98(&local_108);
      }
LAB_00ec9634:
      if (local_100 != (byte *)0x0) {
        lVar24 = *(long *)(local_100 + 0x30);
        psVar3 = (short *)(lVar24 + 0x1a);
        do {
          sVar7 = *psVar3;
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar23) {
            *psVar3 = sVar7 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar24 + 0x10) = 0;
          (**(code **)(*(long *)local_100 + 0x50))();
        }
        else if (sVar7 == 0) goto LAB_00ec9f04;
      }
      if (local_108 != (byte *)0x0) {
        pbVar42 = local_108 + 0x28;
        do {
          iVar14 = *(int *)pbVar42;
          iVar35 = iVar14 + -1;
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
          if (bVar23) {
            *(int *)pbVar42 = iVar35;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*(long *)local_108 + 0x10))();
        }
        else if (iVar14 == 0) goto LAB_00ec9390;
      }
      if (local_70[0] != (byte *)0x0) {
        lVar24 = *(long *)(local_70[0] + 0x30);
        psVar3 = (short *)(lVar24 + 0x1a);
        do {
          sVar7 = *psVar3;
          cVar10 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar23) {
            *psVar3 = sVar7 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar24 + 0x10) = 0;
          (**(code **)(*(long *)local_70[0] + 0x50))();
        }
        else if (sVar7 == 0) goto LAB_00ec9f04;
      }
      lVar24 = plVar38[6];
      psVar3 = (short *)(lVar24 + 0x1a);
      do {
        sVar7 = *psVar3;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar23) {
          *psVar3 = sVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar24 + 0x10) = 0;
        (**(code **)(*plVar38 + 0x50))(plVar38);
      }
      else if (sVar7 == 0) goto LAB_00ec9f04;
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0 != (byte *)0x0) {
      (**(code **)(*(long *)local_b0 + 0x20))();
    }
  }
  lVar24 = *(long *)(param_1 + 0x90);
  if (**(char **)(lVar24 + 0x318) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    return;
  }
  FUN_00edcbd8(&local_b0,*(undefined8 *)(param_1 + 8));
  FUN_00edd114(param_1 + 0x118,&local_b0);
  if (local_b0 != (byte *)0x0) {
    pbVar42 = local_b0 + 0x28;
    do {
      iVar14 = *(int *)pbVar42;
      iVar35 = iVar14 + -1;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(int *)pbVar42 = iVar35;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*(long *)local_b0 + 0x10))();
    }
    else if (iVar14 == 0) goto LAB_00ec9390;
  }
  lVar24 = lVar24 + 0x310;
  if ((param_2 & 1) == 0) {
    uVar40 = *(undefined8 *)(param_1 + 0x118);
    FUN_00f2b7b8(&local_b0,param_1 + 0x38,lVar24,&DAT_03c886bc);
    FUN_00edc87c(&local_e0,uVar40,&local_b0,0,param_4);
    if (local_e0 == (byte *)0x0) goto LAB_00ec9dac;
    lVar24 = *(long *)(local_e0 + 0x30);
    psVar3 = (short *)(lVar24 + 0x1a);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar23) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      pbVar42 = local_e0;
    } while (cVar10 != '\0');
  }
  else {
    uVar40 = *(undefined8 *)(param_1 + 0x118);
    FUN_00f2b7b8(&local_b0,param_1 + 0x38,lVar24,&DAT_03c886bc);
    FUN_00edc87c(&local_108,uVar40,&local_b0,1,param_4);
    pbVar42 = param_1 + 0x28;
    do {
      iVar14 = *(int *)pbVar42;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
      if (bVar23) {
        *(int *)pbVar42 = iVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    local_70[0] = param_1;
    if (iVar14 == -1) {
LAB_00eca8a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00ede5c4(&local_e0,local_70,local_108);
    if (local_e0 != (byte *)0x0) {
      lVar24 = *(long *)(local_e0 + 0x30);
      psVar3 = (short *)(lVar24 + 0x1a);
      do {
        sVar7 = *psVar3;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar23) {
          *psVar3 = sVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar24 + 0x10) = 0;
        (**(code **)(*(long *)local_e0 + 0x50))();
      }
      else if (sVar7 == 0) goto LAB_00ec9f04;
    }
    if (local_70[0] != (byte *)0x0) {
      pbVar42 = local_70[0] + 0x28;
      do {
        iVar14 = *(int *)pbVar42;
        iVar35 = iVar14 + -1;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
        if (bVar23) {
          *(int *)pbVar42 = iVar35;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar35 == 0) {
        (**(code **)(*(long *)local_70[0] + 0x10))();
      }
      else if (iVar14 == 0) goto LAB_00ec9390;
    }
    if (local_108 == (byte *)0x0) goto LAB_00ec9dac;
    lVar24 = *(long *)(local_108 + 0x30);
    psVar3 = (short *)(lVar24 + 0x1a);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar23) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      pbVar42 = local_108;
    } while (cVar10 != '\0');
  }
  if (sVar7 == 1) {
    *(undefined8 *)(lVar24 + 0x10) = 0;
    (**(code **)(*(long *)pbVar42 + 0x50))();
  }
  else if (sVar7 == 0) {
LAB_00ec9f04:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00ec9dac:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (byte *)0x0) {
    (**(code **)(*(long *)local_b0 + 0x20))();
  }
  return;
code_r0x00ec8cf0:
  cVar10 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
  if (bVar23) {
    *(long *)pbVar42 = lVar32;
    param_1[0x178] = 0;
    param_1[0x179] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
    param_1[0x17c] = 0;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
    param_1[0x17f] = 0;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00ec8cf8;
  goto LAB_00ec8ce4;
code_r0x00ec82a4:
  cVar10 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(pbVar42,0x10);
  if (bVar23) {
    *(long *)pbVar42 = lVar24;
    param_1[0x178] = 0;
    param_1[0x179] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
    param_1[0x17c] = 0;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
    param_1[0x17f] = 0;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00ec82ac;
  goto LAB_00ec8298;
code_r0x00ec87cc:
  cVar10 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar23) {
    *plVar16 = lVar24;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00ec87d4;
  goto LAB_00ec87c4;
code_r0x00ec9734:
  cVar10 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar23) {
    *plVar15 = lVar24;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00ec973c;
  goto LAB_00ec972c;
}


