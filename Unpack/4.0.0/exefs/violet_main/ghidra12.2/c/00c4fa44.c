/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4fa44; name: FUN_00c4fa44
 */


void FUN_00c4fa44(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  int *piVar21;
  undefined1 auVar22 [16];
  undefined8 local_658;
  undefined8 uStack_650;
  long local_648;
  long local_640;
  ulong local_638;
  undefined8 local_630;
  undefined4 local_628;
  long local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588;
  undefined1 auStack_584 [260];
  undefined8 local_480;
  undefined1 local_478;
  undefined1 local_470;
  undefined1 local_460;
  undefined1 local_450;
  undefined1 local_440;
  undefined1 local_430;
  undefined1 local_420;
  undefined1 local_410;
  undefined1 local_400;
  undefined1 local_3f0;
  undefined1 local_3e0;
  undefined1 local_3d0;
  undefined1 local_3c0;
  undefined1 local_3b0;
  undefined1 local_3a0;
  undefined1 local_390;
  undefined1 local_380;
  undefined4 local_370;
  undefined1 local_368;
  undefined4 local_358;
  undefined1 local_348;
  undefined1 local_330;
  undefined1 local_320;
  undefined1 local_310;
  undefined1 local_300;
  undefined1 local_2f0;
  undefined1 local_2e0;
  undefined4 local_2d0;
  undefined1 local_2c8;
  undefined1 local_2b8;
  undefined1 local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined1 local_270;
  undefined1 local_260;
  undefined1 local_250;
  undefined1 local_240;
  undefined1 local_230;
  undefined1 local_220;
  undefined1 local_210;
  undefined1 local_200;
  undefined1 local_1f0;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8;
  undefined1 local_198;
  undefined1 local_188;
  undefined1 local_178;
  undefined1 local_168;
  undefined1 local_158;
  undefined1 local_148;
  undefined1 local_138;
  undefined1 local_128;
  undefined1 local_118;
  undefined1 local_108;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_70;
  
  puVar1 = (ulong *)(param_1 + 0x248);
  do {
    uVar17 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = param_3;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (uVar17 != param_3) {
    lVar14 = *(long *)(param_1 + 0x68);
    lVar18 = *(long *)(param_1 + 0x70);
    if ((((lVar14 != lVar18) &&
         (FUN_00c50264(*(undefined8 *)(lVar14 + 8),0), lVar14 + 0x10 != lVar18)) &&
        (FUN_00c50264(*(undefined8 *)(lVar14 + 0x18),0), lVar14 + 0x20 != lVar18)) &&
       (FUN_00c50264(*(undefined8 *)(lVar14 + 0x28),0), lVar14 + 0x30 != lVar18)) {
      FUN_00c50264(*(undefined8 *)(lVar14 + 0x38),0);
      for (lVar14 = lVar14 + 0x40; lVar14 != lVar18; lVar14 = lVar14 + 0x10) {
        FUN_00c50264(*(undefined8 *)(lVar14 + 8),0);
      }
    }
    lVar14 = *(long *)(param_1 + 0xa0);
    lVar18 = *(long *)(param_1 + 0xa8);
    if ((lVar14 != lVar18) && (FUN_00c50264(*(undefined8 *)(lVar14 + 8),0), lVar14 + 0x10 != lVar18)
       ) {
      FUN_00c50264(*(undefined8 *)(lVar14 + 0x18),0);
      for (lVar14 = lVar14 + 0x20; lVar14 != lVar18; lVar14 = lVar14 + 0x10) {
        FUN_00c50264(*(undefined8 *)(lVar14 + 8),0);
      }
    }
    if (0 < *(int *)(param_1 + 0x428)) {
      if (*(long *)(param_1 + 0x2e8) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x308) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x328) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x348) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x368) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x388) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x3a8) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x3c8) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 1000) != 0) {
        FUN_00c59b80();
      }
      if (*(long *)(param_1 + 0x408) != 0) {
        FUN_00c59b80();
      }
    }
    if (*(char *)(param_1 + 0x251) != '\0') {
      lVar14 = *(long *)(param_1 + 0x208);
      lVar18 = *(long *)(param_1 + 0x210);
      if (((lVar14 != lVar18) && (*(undefined1 *)(lVar14 + 0x10) = 1, lVar14 + 0x18 != lVar18)) &&
         (*(undefined1 *)(lVar14 + 0x28) = 1, lVar14 + 0x30 != lVar18)) {
        *(undefined1 *)(lVar14 + 0x40) = 1;
        for (lVar14 = lVar14 + 0x48; lVar14 != lVar18; lVar14 = lVar14 + 0x18) {
          *(undefined1 *)(lVar14 + 0x10) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x251) = 0;
    }
    lVar14 = *(long *)(param_1 + 0x208);
    lVar18 = *(long *)(param_1 + 0x210) - lVar14;
    if (lVar18 == 0x30) {
      param_3 = param_3 & 1;
    }
    else {
      uVar17 = (lVar18 >> 3) * -0x5555555555555555;
      iVar7 = 0;
      if (uVar17 != 0) {
        iVar7 = (int)(param_3 / uVar17);
      }
      param_3 = (ulong)(uint)((int)param_3 - iVar7 * (int)uVar17);
    }
    *(int *)(param_1 + 0x240) = (int)param_3;
    if (*(char *)(lVar14 + param_3 * 0x18) == '\0') {
      *(long *)(param_1 + 0x200) = param_2;
      local_648 = *(long *)(param_2 + 8);
      local_640 = *(undefined8 *)(param_2 + 0x6098);
      local_638 = param_2 + 0x10;
      auVar22 = FUN_00c53d38(*(undefined8 *)(param_2 + 0x6100),&local_648);
      *(undefined1 (*) [16])(*(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x240) * 0x18)
           = auVar22;
      param_3 = (ulong)*(uint *)(param_1 + 0x240);
      lVar14 = *(long *)(param_1 + 0x208);
    }
    if ((*(char *)(lVar14 + param_3 * 0x18 + 0x10) != '\0') || (*(long *)(param_1 + 0x260) != 0)) {
      FUN_00c504ec(param_1,param_2);
      local_1b8[0] = 0;
      local_1a8 = 0;
      local_198 = 0;
      local_188 = 0;
      local_178 = 0;
      local_168 = 0;
      local_158 = 0;
      local_148 = 0;
      local_138 = 0;
      local_128 = 0;
      local_118 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_b4 = 0;
      local_ac = 0;
      local_a4 = 0;
      local_9c = 0;
      local_94 = 0;
      local_8c = 0;
      local_84 = 0;
      local_7c = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e4 = 0;
      local_dc = 0;
      local_d4 = 0;
      local_cc = 0;
      local_c4 = 0;
      local_bc = 0;
      local_70 = 0;
      local_638 = local_638 & 0xffffffffffffff00;
      local_630 = 0;
      local_628 = 0;
      local_470 = 0;
      local_588 = 0;
      local_640 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_608 = 0;
      uStack_600 = 0;
      local_5f8 = 0;
      uStack_5f0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5b8 = 0;
      uStack_5b0 = 0;
      local_5a8 = 0;
      uStack_5a0 = 0;
      local_598 = 0;
      uStack_590 = 0;
      local_648 = param_2;
      memset(auStack_584,0,0x101);
      local_370 = 2;
      local_358 = 1;
      local_2d0 = 4;
      local_288 = 0xffffffffffffffff;
      local_290 = 0xffffffffffffffff;
      local_298 = 0xffffffffffffffff;
      local_1e0 = 0xbf800000;
      local_480 = 0;
      local_478 = 0;
      local_460 = 0;
      local_450 = 0;
      local_440 = 0;
      local_430 = 0;
      local_420 = 0;
      local_410 = 0;
      local_400 = 0;
      local_3f0 = 0;
      local_3e0 = 0;
      local_3d0 = 0;
      local_3c0 = 0;
      local_3b0 = 0;
      local_3a0 = 0;
      local_390 = 0;
      local_380 = 0;
      local_368 = 0;
      local_348 = 0;
      local_330 = 0;
      local_320 = 0;
      local_310 = 0;
      local_300 = 0;
      local_2f0 = 0;
      local_2e0 = 0;
      local_2c8 = 0;
      local_2b8 = 0;
      local_2a8 = 0;
      local_280 = 0;
      local_270 = 0;
      local_260 = 0;
      local_250 = 0;
      local_240 = 0;
      local_230 = 0;
      local_220 = 0;
      local_210 = 0;
      local_200 = 0;
      local_1f0 = 0;
      local_1dc = 0;
      local_1d4 = 0;
      local_1d0 = 0x3f800000bf800000;
      local_1c8 = 0x3f800000;
      local_1c0 = 0;
      pcVar15 = (char *)(*(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x240) * 0x18);
      local_620 = *(long *)(pcVar15 + 8);
      local_638 = local_638 & 0xffffffffffffff00;
      if (*pcVar15 != '\0') {
        *(undefined8 *)(local_620 + 0x140) = 0;
        FUN_00c50980(local_620);
        FUN_00c50d00(local_620);
        if (local_620 != 0) {
          local_640 = local_620;
          (**(code **)PTR_DAT_047e0c70)(local_620);
          FUN_00c5030c(param_1,&local_648);
          if (*(long *)(param_1 + 0x180) == 0) {
            if (*(long *)(param_1 + 0x1c0) != 0) {
              FUN_00c56860(0,&local_648,local_1b8);
            }
          }
          else {
            FUN_00c51134(*(long *)(param_1 + 0x180),&local_648,local_1b8);
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            FUN_00c515a4(*(long *)(param_1 + 0x48),param_2,&local_648);
          }
          FUN_00c50644(param_1,&local_648);
          puVar4 = *(undefined4 **)(param_1 + 0x148);
          puVar5 = *(undefined4 **)(param_1 + 0x150);
          if (puVar4 != puVar5) {
            lVar14 = *(long *)(puVar4 + 2);
            if (lVar14 != 0) {
              uVar12 = *puVar4;
              uVar3 = puVar4[1];
              uVar13 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar14 + 0x70) + 0x110),lVar14 + 0x30)
              ;
              FUN_00c578d0(&local_648,uVar12,uVar3,uVar13);
            }
            while (puVar4 = puVar4 + 4, puVar4 != puVar5) {
              lVar14 = *(long *)(puVar4 + 2);
              if (lVar14 != 0) {
                uVar12 = *puVar4;
                uVar3 = puVar4[1];
                uVar13 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar14 + 0x70) + 0x110),
                                      lVar14 + 0x30);
                FUN_00c578d0(&local_648,uVar12,uVar3,uVar13);
              }
            }
          }
          FUN_00c507dc(param_1,&local_648);
          if (*(long *)(param_1 + 0x1a0) != 0) {
            FUN_00c51920(param_1,&local_648);
          }
          puVar11 = PTR_DAT_047e0c80;
          plVar20 = *(long **)(param_1 + 0x1c0);
          if (plVar20 != (long *)0x0) {
            piVar21 = (int *)*plVar20;
            piVar6 = (int *)plVar20[1];
            if (piVar21 != piVar6) {
              iVar7 = *piVar21;
              if ((char)piVar21[2] == '\0') {
                iVar8 = 0x3f;
                if (iVar7 != 0) {
                  iVar8 = iVar7;
                }
                pcVar16 = *(code **)PTR_DAT_047e0c80;
                uVar13 = 0;
              }
              else {
                local_658 = CONCAT44(local_658._4_4_,iVar7);
                puVar19 = (undefined8 *)FUN_00c516a0(*(undefined8 *)(local_648 + 0x6120));
                uVar13 = *puVar19;
                piVar2 = (int *)(puVar19 + 2);
                if (iVar7 != 0) {
                  piVar2 = (int *)&local_658;
                }
                iVar8 = *piVar2;
                pcVar16 = *(code **)puVar11;
              }
              (*pcVar16)(local_620,uVar13,iVar8);
              if (piVar21 + 0xc != piVar6) {
                iVar7 = piVar21[0xc];
                if ((char)piVar21[0xe] == '\0') {
                  iVar8 = 0x3f;
                  if (iVar7 != 0) {
                    iVar8 = iVar7;
                  }
                  pcVar16 = *(code **)puVar11;
                  uVar13 = 0;
                }
                else {
                  local_658 = CONCAT44(local_658._4_4_,iVar7);
                  puVar19 = (undefined8 *)FUN_00c516a0(*(undefined8 *)(local_648 + 0x6120));
                  uVar13 = *puVar19;
                  piVar2 = (int *)(puVar19 + 2);
                  if (iVar7 != 0) {
                    piVar2 = (int *)&local_658;
                  }
                  iVar8 = *piVar2;
                  pcVar16 = *(code **)puVar11;
                }
                (*pcVar16)(local_620,uVar13,iVar8);
                piVar21 = piVar21 + 0x18;
                if (piVar21 != piVar6) {
                  do {
                    iVar7 = *piVar21;
                    if ((char)piVar21[2] == '\0') {
                      iVar8 = 0x3f;
                      if (iVar7 != 0) {
                        iVar8 = iVar7;
                      }
                      pcVar16 = *(code **)puVar11;
                      uVar13 = 0;
                    }
                    else {
                      local_658 = CONCAT44(local_658._4_4_,iVar7);
                      puVar19 = (undefined8 *)FUN_00c516a0(*(undefined8 *)(local_648 + 0x6120));
                      uVar13 = *puVar19;
                      piVar2 = (int *)(puVar19 + 2);
                      if (iVar7 != 0) {
                        piVar2 = (int *)&local_658;
                      }
                      iVar8 = *piVar2;
                      pcVar16 = *(code **)puVar11;
                    }
                    (*pcVar16)(local_620,uVar13,iVar8);
                    piVar21 = piVar21 + 0xc;
                  } while (piVar6 != piVar21);
                }
              }
            }
            if (plVar20[7] == 0) {
              FUN_00c51ef8(plVar20,&local_648);
            }
            else {
              FUN_00c52e20(plVar20,&local_648);
            }
          }
          if (*(long *)(param_1 + 0x1e0) != 0) {
            FUN_00c53b6c(*(long *)(param_1 + 0x1e0),&local_648);
          }
          if (*(code **)(param_1 + 0x260) != (code *)0x0) {
            puVar19 = (undefined8 *)
                      (*(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x240) * 0x18);
            local_658 = *puVar19;
            uStack_650 = puVar19[1];
            uVar12 = (**(code **)(param_1 + 0x260))(param_1 + 0x280,&local_658);
            *(undefined4 *)(param_1 + 0x2e0) = uVar12;
          }
          FUN_00c503fc(param_1,&local_648);
          uVar13 = (**(code **)PTR_DAT_047e0c78)(local_620);
          *(undefined8 *)(local_640 + 0xa0) = uVar13;
          *(undefined1 *)
           (*(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x240) * 0x18 + 0x10) = 0;
        }
      }
    }
  }
  return;
}


