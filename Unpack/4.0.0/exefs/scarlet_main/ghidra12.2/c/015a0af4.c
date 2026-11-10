/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a0af4; name: FUN_015a0af4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015a0af4(long *param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined2 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined4 local_61c;
  undefined8 local_618;
  char *pcStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  char *local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined4 local_5d0;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [80];
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4a0;
  undefined4 local_400;
  undefined *local_3f0;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined1 local_34c;
  undefined1 local_340;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined4 local_250;
  undefined *local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar8 = FUN_015a0ff4(*param_2 + 0x108,&local_650);
    if (lVar8 == 0) {
      local_640 = 0x101010101010101;
      local_638 = 0;
      local_630 = 0x200000001;
      uStack_628 = 0x3d23d70a3e23d70a;
      local_620 = 0x3c23d70a;
      local_650 = (undefined8 *)0x0;
      uStack_648 = 0;
      local_61c = FUN_01728cf0(1,6);
      local_5d0 = 0;
      local_5a0 = 0;
      local_618 = 0x8a442895aff72141;
      pcStack_610 = "CameraInfluence";
      local_608 = 0xf;
      uStack_600 = 0x9f708d66d453f25;
      local_5f8 = "IgnoreCollision";
      uStack_5f0 = 0xf;
      local_5e0 = 0;
      uStack_5d8 = 0;
      local_598 = 1;
      local_5c0 = 0;
      uStack_5b8 = 0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      uStack_588 = _UNK_03cab0d8;
      local_590 = _DAT_03cab0d0;
      memset(auStack_580,0,0x44);
      local_520 = 0x3f00000000000000;
      local_530 = 0;
      uStack_528 = 0;
      local_510 = 0;
      uStack_508 = 0;
      local_500 = 0;
      uStack_4f8 = 0;
      uStack_4e8 = _UNK_03cabe58;
      local_4f0 = _DAT_03cabe50;
      local_4a0 = 0;
      local_400 = 0;
      local_4b0 = 0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      uStack_4c8 = 0;
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_3f0 = PTR_DAT_047d5400 + 0x10;
      uStack_3d8 = 0;
      local_3e0 = 0;
      local_3d0 = PTR_DAT_047d53f0 + 0x10;
      local_3c8 = 0;
      uStack_3a8 = 0;
      local_3b0 = 0;
      local_3a0 = PTR_DAT_047d53f8 + 0x10;
      local_190 = 0x3f80000040000000;
      local_188 = 3;
      local_60 = &DAT_cbf29ce484222645;
      local_3c0 = 0;
      local_398 = 0;
      local_390 = 0;
      local_388 = 0;
      local_380 = 0;
      local_378 = 0;
      local_370 = 0x33f4ccccd;
      local_368 = 0x3f000000;
      local_350 = 0;
      local_34c = 1;
      local_340 = 0;
      local_320 = 0x3f800000;
      local_318 = 0;
      local_2f0 = 0;
      local_250 = 0;
      local_210 = 0;
      local_218 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0x33f4ccccd;
      local_1b8 = 0x3f000000;
      local_1a0 = 0;
      local_19c = 1;
      local_170 = 0x200000001;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_58 = 0;
      local_640 = 0x10000000000;
      local_630 = CONCAT44(local_630._4_4_,4);
      uStack_358 = _UNK_03caaf48;
      local_360 = _DAT_03caaf40;
      uStack_328 = 0;
      local_330 = 0;
      uStack_228 = 0;
      local_230 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1a8 = _UNK_03caaf48;
      local_1b0 = _DAT_03caaf40;
      uStack_178 = 0;
      local_180 = 0;
      uStack_d8 = _UNK_03cabe58;
      local_e0 = _DAT_03cabe50;
      uStack_c8 = _UNK_03cabe58;
      local_d0 = _DAT_03cabe50;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = _UNK_03cabe58;
      local_a0 = _DAT_03cabe50;
      uStack_308 = 0;
      local_310 = 0;
      uStack_2f8 = _UNK_03cabe58;
      uStack_300 = _DAT_03cabe50;
      local_240 = local_3f0;
      local_220 = local_3d0;
      local_1f0 = local_3a0;
      lVar8 = FUN_015a1458(*param_2,*(undefined8 *)(*param_2 + 8),&local_650);
      *param_1 = lVar8;
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x98);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_015a0fd4;
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar9;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_015a0e94;
      }
      FUN_015a1250(&local_5e0);
      puVar6 = local_650;
      if (local_650 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_650 + 3);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar1 = (int *)((long)local_650 + 0x1c);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    else {
      FUN_013e7a84();
      *param_1 = lVar8;
      lVar8 = *(long *)(lVar8 + 0x98);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_015a0fd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar9;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
LAB_015a0e94:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  return;
}


