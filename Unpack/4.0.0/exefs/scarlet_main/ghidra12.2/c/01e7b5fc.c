/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7b5fc; name: FUN_01e7b5fc
 */


void FUN_01e7b5fc(byte *param_1,int param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined4 *__src;
  long *plVar14;
  undefined1 auStack_1270 [4624];
  
  plVar7 = (long *)*param_3;
  if (plVar7 != (long *)0x0) {
    pbVar13 = (byte *)*plVar7;
    pbVar1 = (byte *)plVar7[1];
    if (pbVar13 != pbVar1) {
      do {
        puVar12 = &DAT_cbf29ce484222645;
        __src = *(undefined4 **)(pbVar13 + 0x48);
        if (__src == (undefined4 *)0x0) goto LAB_01e7bd58;
        lVar10 = *(long *)(pbVar13 + 0x68);
        if (param_2 == 2) {
          bVar2 = param_1[0x100];
          puVar11 = puVar12;
          if (bVar2 == 0) {
LAB_01e7bd68:
            bVar2 = *pbVar13;
            if (bVar2 == 0) {
              bVar3 = false;
            }
            else {
              lVar9 = 1;
              do {
                puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
              bVar3 = false;
            }
          }
          else {
            pbVar8 = param_1 + 0x101;
            do {
              puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
            if (pbVar13 != (byte *)0x0) goto LAB_01e7bd68;
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar12 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
            bVar3 = true;
          }
          if (puVar11 == puVar12) {
            if (lVar10 != 0xe18) {
              pcVar5 = 
              "size == cmn::savedata::OutbreakSaveDataAccessor::kDeliveryOutbreakPokeDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kEncountOutbreakPokedataPath size error:%d \n";
              iVar4 = 0xd0;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c7c0(__src,0xe18);
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0x140];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0x141;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 0x300) {
              pcVar5 = 
              "size == cmn::savedata::OutbreakSaveDataAccessor::kDeliveryOutbreakZoneMainDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kEncountOutbreakZoneMainPath size error:%d \n";
              iVar4 = 0xd9;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c8e8(__src,0x300);
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0x180];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0x181;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 0x300) {
              pcVar5 = 
              "size == cmn::savedata::OutbreakSaveDataAccessor::kDeliveryOutbreakZoneSu1DataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kEncountOutbreakZoneSu1Path size error:%d \n";
              iVar4 = 0xe2;
              goto LAB_01e7c3ac;
            }
            FUN_01e7ca10(__src,0x300);
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0x1c0];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0x1c1;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 0x300) {
              pcVar5 = 
              "size == cmn::savedata::OutbreakSaveDataAccessor::kDeliveryOutbreakZoneSu2DataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kEncountOutbreakZoneSu2Path size error:%d \n";
              iVar4 = 0xec;
LAB_01e7c3ac:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        (pcVar5,"ParseAndSave",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/bcat/bcat_client.cpp"
                         ,iVar4,pcVar6,lVar10);
            }
            FUN_01e7cb38(__src,0x300);
          }
        }
        else if (param_2 == 1) {
          bVar2 = *pbVar13;
          if (bVar2 != 0) {
            lVar9 = 1;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = pbVar13[lVar9];
              lVar9 = lVar9 + 1;
            } while (bVar2 != 0);
            if (puVar12 == (undefined1 *)0x8b8e1b6feb5fec) {
              FUN_01e7c644(__src,lVar10);
            }
            puVar12 = &DAT_cbf29ce484222645;
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
              if ((puVar12 == (undefined1 *)0x16d3950e6e25fa26) &&
                 (memset(auStack_1270,0,0x1204), lVar10 == 0x1204)) {
                memcpy(auStack_1270,__src,0x1204);
                FUN_01e7c750(auStack_1270);
              }
              puVar12 = &DAT_cbf29ce484222645;
              bVar2 = *pbVar13;
              if (bVar2 != 0) {
                lVar9 = 1;
                do {
                  puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = pbVar13[lVar9];
                  lVar9 = lVar9 + 1;
                } while (bVar2 != 0);
                if ((lVar10 == 4) && (puVar12 == (undefined1 *)0x4a85a901017c5c6b)) {
                  DAT_04839338 = *__src;
                }
              }
            }
          }
        }
        else if (param_2 == 0) {
          bVar2 = *param_1;
          puVar11 = puVar12;
          if (bVar2 == 0) {
LAB_01e7bd98:
            bVar2 = *pbVar13;
            if (bVar2 == 0) {
              bVar3 = false;
            }
            else {
              lVar9 = 1;
              do {
                puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
              bVar3 = false;
            }
          }
          else {
            pbVar8 = param_1;
            do {
              pbVar8 = pbVar8 + 1;
              puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
            } while (bVar2 != 0);
            if (pbVar13 != (byte *)0x0) goto LAB_01e7bd98;
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar12 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
            bVar3 = true;
          }
          if (puVar11 == puVar12) {
            if (lVar10 != 0x58) {
              pcVar5 = "size == cmn::savedata::RaidSaveDataAccessor::kDeliveryRaidPriorityDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kRaidPriorityPath size error:%d \n";
              iVar4 = 0x91;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c3b4(__src,0x58,*(undefined8 *)(param_1 + 0x208));
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0x40];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0x41;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 30000) {
              pcVar5 = "size == cmn::savedata::RaidSaveDataAccessor::kDeliveryRaidEnemyDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kRaidEnemyPath size error:%d \n";
              iVar4 = 0x9a;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c458(__src,30000,*(undefined8 *)(param_1 + 0x208));
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0x80];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0x81;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 0xd0d8) {
              pcVar5 = 
              "size == cmn::savedata::RaidSaveDataAccessor::kDeliveryRaidLotteryRewardItemDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kRaidLotteryRewardItemPath size error:%d \n";
              iVar4 = 0xa3;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c4fc(__src,0xd0d8,*(undefined8 *)(param_1 + 0x208));
          }
          puVar11 = &DAT_cbf29ce484222645;
          bVar2 = param_1[0xc0];
          puVar12 = puVar11;
          if (bVar2 != 0) {
            pbVar8 = param_1 + 0xc1;
            do {
              puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          if (bVar3) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
            plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          else {
            bVar2 = *pbVar13;
            if (bVar2 != 0) {
              lVar9 = 1;
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = pbVar13[lVar9];
                lVar9 = lVar9 + 1;
              } while (bVar2 != 0);
            }
          }
          if (puVar12 == puVar11) {
            if (lVar10 != 0x6b40) {
              pcVar5 = 
              "size == cmn::savedata::RaidSaveDataAccessor::kDeliveryRaidFixedRewardItemDataSize";
              pcVar6 = "(BcatClient::ParseAndSave) kRaidFixedRewardItemPath size error:%d \n";
              iVar4 = 0xac;
              goto LAB_01e7c3ac;
            }
            FUN_01e7c5a0(__src,0x6b40,*(undefined8 *)(param_1 + 0x208));
          }
        }
LAB_01e7bd58:
        pbVar13 = pbVar13 + 0x70;
      } while (pbVar13 != pbVar1);
      if (plVar7[1] != *plVar7) {
        if (param_2 == 2) {
          FUN_01e7cce8();
          return;
        }
        if (param_2 == 0) {
          FUN_01e7cc60();
          return;
        }
      }
    }
  }
  return;
}


