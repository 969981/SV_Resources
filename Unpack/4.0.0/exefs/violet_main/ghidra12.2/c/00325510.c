/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00325510; name: FUN_00325510
 */


undefined8 FUN_00325510(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined4 local_cc;
  long local_c8;
  ulong uStack_c0;
  undefined ***local_b8;
  long lStack_b0;
  undefined **local_a8;
  long lStack_a0;
  long local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  long *local_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  
  if ((*(long *)(param_1 + 0x168) != 0) || (*(long *)(param_1 + 0x120) != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar17 = *(char **)(param_2 + 8);
  plVar5 = *(long **)(pcVar17 + 0x78);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(pcVar17 + 0x10);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar14 = (undefined8 *)FUN_0038c780(0x30);
    *puVar14 = &LAB_00326464;
    puVar14[1] = pcVar17;
    puVar14[3] = PTR_FUN_047cc978;
    puVar14[4] = puVar14;
    puVar14[5] = 0;
    FUN_0035351c(&local_90,puVar14 + 2,0);
    if (*(char *)(param_1 + 0x140) != '\0') {
      return 0;
    }
    lVar12 = *(long *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(long *)(param_1 + 0x130) = param_2;
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar12 + 0x80);
    uVar16 = *(undefined8 *)(param_1 + 0x1d8);
    *(long *)(lVar12 + 0x80) = param_1 + 0x130;
    FUN_00358050(uVar16,*(undefined8 *)(lVar12 + 0xc0));
    plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar5 == (long *)0x0) goto LAB_003257a8;
    *plVar5 = param_2;
    lVar12 = *(long *)(param_2 + 0x10);
    plVar6 = *(long **)(lVar12 + 200);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(char *)(param_1 + 0x2b4) == '\0') {
      plVar6 = *(long **)(*(long *)(param_1 + 0x1e0) + 8);
      lVar12 = *plVar6;
      uVar1 = *(uint *)(plVar6 + 1);
      cVar2 = pcVar17[0x90];
    }
    else {
      lVar12 = param_1 + 0x2c0;
      uVar1 = *(uint *)(param_1 + 0x3a8);
      cVar2 = pcVar17[0x90];
    }
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x141) != '\x01') {
        *(undefined1 *)(param_1 + 0x141) = 1;
        if (*(long *)(pcVar17 + 0xa0) != 0) {
          plVar6 = *(long **)(pcVar17 + 0xa8);
          plVar5 = (long *)(*(long *)(pcVar17 + 0xa0) + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar14 = *(undefined8 **)(pcVar17 + 0xa0);
          if (puVar14 != (undefined8 *)0x0) {
            local_f0 = param_1 + 0x90;
            local_e0 = *(undefined8 *)(param_1 + 0xc0);
                    /* try { // try from 003255c0 to 003255cb has its CatchHandler @ 0032611c */
            lStack_e8 = lVar12;
            (**(code **)(*plVar6 + 0x10))(&local_90,plVar6,&local_f0);
            if (CONCAT44(uStack_8c,local_90) != 0) {
              if (local_60 != (long *)0x0) {
                plVar5 = local_60 + 1;
                do {
                  lVar12 = *plVar5;
                  cVar2 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar4) {
                    *plVar5 = lVar12 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*local_60 + 0x10))(local_60);
                  std::__shared_weak_count::__release_weak();
                }
              }
              FUN_003268a4(&local_80,local_78);
              plVar5 = puVar14 + 1;
              do {
                lVar12 = *plVar5;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 + -1 == 0) {
                (**(code **)*puVar14)(puVar14);
                FUN_0049e790(PTR_LAB_047cba48,puVar14);
              }
              *param_3 = CONCAT44(uStack_8c,local_90);
              return 1;
            }
            puVar18 = (undefined8 *)(param_1 + 0xf8);
            FUN_003268a4((undefined8 *)(param_1 + 0xf0),*puVar18);
            plVar5 = local_60;
            uVar16 = local_68;
            *(long **)(param_1 + 0xf0) = local_80;
            *(long *)(param_1 + 0xf8) = local_78;
            *(long **)(param_1 + 0x100) = local_70;
            if (local_70 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0xf0) = puVar18;
            }
            else {
              *(undefined8 **)(local_78 + 0x10) = puVar18;
              local_80 = &local_78;
              local_78 = 0;
              local_70 = (long *)0x0;
            }
            local_68 = 0;
            local_60 = (long *)0x0;
            plVar6 = *(long **)(param_1 + 0x110);
            *(undefined8 *)(param_1 + 0x108) = uVar16;
            *(long **)(param_1 + 0x110) = plVar5;
            if (plVar6 != (long *)0x0) {
              plVar5 = plVar6 + 1;
              do {
                lVar13 = *plVar5;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = lVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                std::__shared_weak_count::__release_weak();
              }
            }
            *(undefined8 *)(param_1 + 0x118) = local_58;
            puVar7 = *(ulong **)(param_1 + 0xc0);
            do {
              uVar9 = *puVar7;
              uVar15 = uVar9 + 0x10;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar4) {
                *puVar7 = uVar15;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar7[1] < uVar15) {
                    /* try { // try from 00325864 to 0032589b has its CatchHandler @ 003260c4 */
              puVar18 = (undefined8 *)FUN_0038e7c0(puVar7,0x10);
            }
            else {
              puVar18 = (undefined8 *)((long)puVar7 + uVar9 + 0x20);
            }
            puVar3 = PTR_FUN_047ccbd8;
            lVar13 = *(long *)(param_1 + 0xd8);
            *puVar18 = puVar14;
            puVar18[1] = local_88;
            *(undefined8 **)(lVar13 + 0x30) = puVar18;
            *(undefined **)(lVar13 + 0x38) = puVar3;
            lVar13 = FUN_00331100();
            pbVar10 = (byte *)puVar18[1];
            if (pbVar10 == (byte *)0x0) {
              *(undefined8 *)(param_1 + 0xe8) = 0;
            }
            else {
              if ((*pbVar10 & 1) == 0) {
                lVar13 = *(long *)(pbVar10 + lVar13 * 8 + 8);
                *(long *)(param_1 + 0xe8) = lVar13;
              }
              else {
                lVar13 = *(long *)(*(long *)(pbVar10 + 8) + lVar13 * 8);
                *(long *)(param_1 + 0xe8) = lVar13;
              }
              if (lVar13 != 0) {
                if ((*pcVar17 != '\0') && (*(long *)(lVar13 + 8) != 0)) {
                    /* try { // try from 003258ec to 00325913 has its CatchHandler @ 003260a8 */
                  lVar8 = FUN_003532d0(*(undefined8 *)(param_1 + 0xb0));
                  lVar13 = *(long *)(param_1 + 0xe8);
                  lVar8 = *(long *)(lVar13 + 8) + lVar8;
                  if (lVar8 < *(long *)(param_1 + 0xb8)) {
                    *(long *)(param_1 + 0xb8) = lVar8;
                    FUN_00341940(param_2);
                    lVar13 = *(long *)(param_1 + 0xe8);
                  }
                }
                if ((*(ushort *)(lVar13 + 0x10) & 0xff) != 0) {
                  lVar8 = *(long *)(*(long *)(param_1 + 0x1e0) + 8);
                  uVar11 = *(uint *)(lVar8 + 8);
                  if ((uVar11 >> 7 & 1) == 0) {
                    if (*(ushort *)(lVar13 + 0x10) < 0x100) {
                      uVar11 = uVar11 & 0xffffffdf;
                    }
                    else {
                      uVar11 = uVar11 | 0x20;
                    }
                    *(uint *)(lVar8 + 8) = uVar11;
                  }
                }
              }
            }
            if (*(long *)(pcVar17 + 0x98) == 0) {
              uVar16 = 0;
              puVar14 = *(undefined8 **)(param_1 + 0xe0);
              if (puVar14 != (undefined8 *)0x0) goto LAB_00325984;
LAB_0032599c:
              *(undefined8 *)(param_1 + 0xe0) = uVar16;
            }
            else {
              plVar5 = (long *)(*(long *)(pcVar17 + 0x98) + 8);
              do {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = *plVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              uVar16 = *(undefined8 *)(pcVar17 + 0x98);
              puVar14 = *(undefined8 **)(param_1 + 0xe0);
              if (puVar14 == (undefined8 *)0x0) goto LAB_0032599c;
LAB_00325984:
              plVar5 = puVar14 + 1;
              do {
                lVar13 = *plVar5;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = lVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar13 + -1 != 0) goto LAB_0032599c;
              (**(code **)*puVar14)(puVar14);
              FUN_0049e790(PTR_LAB_047cba48,puVar14);
              *(undefined8 *)(param_1 + 0xe0) = uVar16;
            }
            if (local_60 != (long *)0x0) {
              plVar5 = local_60 + 1;
              do {
                lVar13 = *plVar5;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = lVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar13 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_003268a4(&local_80,local_78);
          }
        }
        if ((*(long *)(param_1 + 0xe8) == 0) || (*(long *)(*(long *)(param_1 + 0xe8) + 0x18) == 0))
        {
          *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xf7;
        }
        *param_3 = 0;
        plVar5 = *(long **)(pcVar17 + 0x78);
      }
      bVar4 = *(long *)(param_1 + 0x90) != 0;
      local_c8 = param_1 + 0x99;
      if (bVar4) {
        local_c8 = *(long *)(param_1 + 0xa0);
      }
      uStack_c0 = *(ulong *)(param_1 + 0x98) & 0xff;
      if (bVar4) {
        uStack_c0 = *(ulong *)(param_1 + 0x98);
      }
      lStack_b0 = param_1 + 0x150;
      local_b8 = &local_a8;
      local_a8 = &PTR_LAB_04495058;
                    /* try { // try from 00325a50 to 00325a5b has its CatchHandler @ 003261dc */
      lStack_a0 = param_1;
      local_98 = lVar12;
      (**(code **)(*plVar5 + 0x10))(&local_90,plVar5,&local_c8);
      if (local_90 == 1) {
LAB_00325d1c:
        if (*(char *)(param_1 + 0x140) == '\0') {
          lVar12 = *(long *)(param_2 + 8);
          *(undefined1 *)(param_1 + 0x140) = 1;
          *(long *)(param_1 + 0x130) = param_2;
          *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar12 + 0x80);
          uVar16 = *(undefined8 *)(param_1 + 0x1d8);
          *(long *)(lVar12 + 0x80) = param_1 + 0x130;
                    /* try { // try from 00325d54 to 00325da7 has its CatchHandler @ 00326158 */
          FUN_00358050(uVar16,*(undefined8 *)(lVar12 + 0xc0));
          plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
          if (plVar5 != (long *)0x0) {
            *plVar5 = param_2;
            lVar12 = *(long *)(param_2 + 0x10);
            plVar6 = *(long **)(lVar12 + 200);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar5[4] = 0;
            plVar5[2] = (long)&LAB_003266d4;
            plVar5[3] = (long)plVar5;
            FUN_00350548(*(undefined8 *)(lVar12 + 0xd0),plVar5 + 1);
          }
          uVar16 = 0;
          *(long **)(param_1 + 0x148) = plVar5;
        }
        else {
          uVar16 = 0;
        }
        goto LAB_00325ea8;
      }
      if (local_90 == 2) {
        uVar15 = *(ulong *)(pcVar17 + 0x168);
        if (uVar15 == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            local_cc = 0;
                    /* try { // try from 00325ccc to 00325cdf has its CatchHandler @ 003260b8 */
            FUN_00375900(local_80,*(undefined8 *)(param_1 + 0xb8),&local_cc,0,0,0);
                    /* try { // try from 00325cec to 00325cff has its CatchHandler @ 003260bc */
            if (((*(byte *)(param_1 + 0x240) >> 3 & 1) == 0) ||
               (uVar15 = FUN_00325324(param_1,param_2,0,local_cc,0), (uVar15 & 1) == 0)) {
                    /* try { // try from 00325db4 to 00325de3 has its CatchHandler @ 003260c0 */
              FUN_003673f0(&local_f0,"Failed to pick subchannel");
              uVar15 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                                    ,0xffa,&local_f0,&local_80,1);
              if ((long *)0x4 < local_80) {
                    /* try { // try from 00325df4 to 00325e0f has its CatchHandler @ 003260b4 */
                FUN_00350fd0();
              }
              *param_3 = uVar15;
              if (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(param_1 + 0x108))();
                plVar5 = *(long **)(param_1 + 0x110);
                *(undefined8 *)(param_1 + 0x108) = 0;
                *(undefined8 *)(param_1 + 0x110) = 0;
                if (plVar5 != (long *)0x0) {
                  plVar6 = plVar5 + 1;
                  do {
                    lVar12 = *plVar6;
                    cVar2 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar4) {
                      *plVar6 = lVar12 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar12 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
              uVar16 = 1;
            }
            else {
              uVar16 = 0;
            }
            if (*(char *)(param_1 + 0x140) != '\0') {
              lVar12 = *(long *)(param_2 + 8);
                    /* try { // try from 00325e68 to 00325e6b has its CatchHandler @ 003260bc */
              FUN_003580b0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(lVar12 + 0xc0));
              plVar5 = (long *)(lVar12 + 0x80);
              lVar12 = *plVar5;
              if (lVar12 != 0) {
                if (lVar12 != param_1 + 0x130) {
                  do {
                    lVar13 = lVar12;
                    lVar12 = *(long *)(lVar13 + 8);
                    if (lVar12 == 0) goto LAB_00325ea0;
                  } while (lVar12 != param_1 + 0x130);
                  plVar5 = (long *)(lVar13 + 8);
                }
                *plVar5 = *(long *)(param_1 + 0x138);
              }
LAB_00325ea0:
              *(undefined1 *)(param_1 + 0x140) = 0;
              *(undefined8 *)(param_1 + 0x148) = 0;
            }
            goto LAB_00325ea8;
          }
          if ((long *)0x4 < local_80) {
                    /* try { // try from 00325d18 to 00325d1b has its CatchHandler @ 00326118 */
            FUN_00350fd0();
          }
          goto LAB_00325d1c;
        }
        if ((long *)0x4 < local_80) {
                    /* try { // try from 00325a88 to 00325af3 has its CatchHandler @ 00326118 */
          FUN_00350fd0();
        }
        if (*(char *)(param_1 + 0x140) != '\0') {
          lVar12 = *(long *)(param_2 + 8);
          FUN_003580b0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(lVar12 + 0xc0));
          plVar5 = (long *)(lVar12 + 0x80);
          lVar12 = *plVar5;
          if (lVar12 != 0) {
            if (lVar12 != param_1 + 0x130) {
              do {
                lVar13 = lVar12;
                lVar12 = *(long *)(lVar13 + 8);
                if (lVar12 == 0) goto LAB_00325ad8;
              } while (lVar12 != param_1 + 0x130);
              plVar5 = (long *)(lVar13 + 8);
            }
            *plVar5 = *(long *)(param_1 + 0x138);
          }
LAB_00325ad8:
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        if (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(param_1 + 0x108))();
          plVar5 = *(long **)(param_1 + 0x110);
          *(undefined8 *)(param_1 + 0x108) = 0;
          *(undefined8 *)(param_1 + 0x110) = 0;
          if (plVar5 != (long *)0x0) {
            plVar6 = plVar5 + 1;
            do {
              lVar12 = *plVar6;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        if (4 < uVar15) {
                    /* try { // try from 00325b3c to 00325b43 has its CatchHandler @ 00326118 */
          uVar15 = FUN_00350fb0(uVar15);
        }
        *param_3 = uVar15;
      }
      else {
        if (*(char *)(param_1 + 0x140) != '\0') {
          lVar12 = *(long *)(param_2 + 8);
                    /* try { // try from 00325b64 to 00325c0b has its CatchHandler @ 00326158 */
          FUN_003580b0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(lVar12 + 0xc0));
          plVar5 = (long *)(lVar12 + 0x80);
          lVar12 = *plVar5;
          if (lVar12 != 0) {
            if (lVar12 != param_1 + 0x130) {
              do {
                lVar13 = lVar12;
                lVar12 = *(long *)(lVar13 + 8);
                if (lVar12 == 0) goto LAB_00325b9c;
              } while (lVar12 != param_1 + 0x130);
              plVar5 = (long *)(lVar13 + 8);
            }
            *plVar5 = *(long *)(param_1 + 0x138);
          }
LAB_00325b9c:
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        if (local_88 == (undefined8 *)0x0) {
                    /* try { // try from 00325f84 to 00325fbb has its CatchHandler @ 003260a4 */
          FUN_003673f0(&local_f0,"Call dropped by load balancing policy");
          uVar16 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                                ,0x1010,&local_f0,0,0);
          local_80 = (long *)FUN_00351770(uVar16,3,0xe);
          if (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
                    /* try { // try from 00325fd0 to 00325fd3 has its CatchHandler @ 00326158 */
            (**(code **)**(undefined8 **)(param_1 + 0x108))();
            plVar5 = *(long **)(param_1 + 0x110);
            *(undefined8 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x110) = 0;
            if (plVar5 != (long *)0x0) {
              plVar6 = plVar5 + 1;
              do {
                lVar12 = *plVar6;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_00325c30;
            }
          }
        }
        else {
          lVar12 = local_88[9];
          if (lVar12 != 0) {
            plVar5 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puVar14 = *(undefined8 **)(param_1 + 0x168);
          if (puVar14 == (undefined8 *)0x0) {
LAB_00325be8:
            *(long *)(param_1 + 0x168) = lVar12;
          }
          else {
            plVar5 = puVar14 + 1;
            do {
              lVar13 = *plVar5;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 + -1 != 0) goto LAB_00325be8;
            (**(code **)*puVar14)(puVar14);
            FUN_0049e790(PTR_LAB_047cba48,puVar14);
            *(long *)(param_1 + 0x168) = lVar12;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0032606c to 0032606f has its CatchHandler @ 00326158 */
            abort();
          }
          if (((*(byte *)(param_1 + 0x240) >> 4 & 1) != 0) &&
             (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)(param_1 + 0x108))();
            plVar5 = *(long **)(param_1 + 0x110);
            *(undefined8 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x110) = 0;
            if (plVar5 != (long *)0x0) {
              plVar6 = plVar5 + 1;
              do {
                lVar12 = *plVar6;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB_00325c30:
              if (lVar12 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        if (local_70 != (long *)0x0) {
          plVar5 = local_70 + 1;
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar5 = *(long **)(param_1 + 0x178);
        *(long *)(param_1 + 0x170) = local_78;
        *(long **)(param_1 + 0x178) = local_70;
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5 + 1;
          do {
            lVar12 = *plVar6;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        *(undefined8 *)(param_1 + 0x180) = local_68;
        *param_3 = (ulong)local_80;
      }
      uVar16 = 1;
LAB_00325ea8:
      if (local_70 != (long *)0x0) {
        plVar5 = local_70 + 1;
        do {
          lVar12 = *plVar5;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_88 == (undefined8 *)0x0) {
        return uVar16;
      }
      plVar5 = local_88 + 1;
      do {
        lVar12 = *plVar5;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)*local_88)(local_88);
        FUN_0049e790(PTR_LAB_047cba48,local_88);
        return uVar16;
      }
      return uVar16;
    }
    if (((uVar1 >> 5 & 1) == 0) && (uVar15 = *(ulong *)(pcVar17 + 0x88), uVar15 != 0)) {
      if (*(char *)(param_1 + 0x140) != '\0') {
        FUN_003580b0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(pcVar17 + 0xc0));
        plVar5 = (long *)(pcVar17 + 0x80);
        lVar12 = *plVar5;
        if (lVar12 != 0) {
          if (lVar12 != param_1 + 0x130) {
            do {
              lVar13 = lVar12;
              lVar12 = *(long *)(lVar13 + 8);
              if (lVar12 == 0) goto LAB_00325704;
            } while (lVar12 != param_1 + 0x130);
            plVar5 = (long *)(lVar13 + 8);
          }
          *plVar5 = *(long *)(param_1 + 0x138);
        }
LAB_00325704:
        *(undefined1 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
      }
      if (4 < uVar15) {
        uVar15 = FUN_00350fb0(uVar15);
      }
      *param_3 = uVar15;
      return 1;
    }
    if (*(char *)(param_1 + 0x140) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(long *)(param_1 + 0x130) = param_2;
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(pcVar17 + 0x80);
    uVar16 = *(undefined8 *)(param_1 + 0x1d8);
    *(long *)(pcVar17 + 0x80) = param_1 + 0x130;
    FUN_00358050(uVar16,*(undefined8 *)(pcVar17 + 0xc0));
    plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar5 == (long *)0x0) goto LAB_003257a8;
    *plVar5 = param_2;
    lVar12 = *(long *)(param_2 + 0x10);
    plVar6 = *(long **)(lVar12 + 200);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5[4] = 0;
  plVar5[2] = (long)&LAB_003266d4;
  plVar5[3] = (long)plVar5;
  FUN_00350548(*(undefined8 *)(lVar12 + 0xd0),plVar5 + 1);
LAB_003257a8:
  *(long **)(param_1 + 0x148) = plVar5;
  return 0;
}


