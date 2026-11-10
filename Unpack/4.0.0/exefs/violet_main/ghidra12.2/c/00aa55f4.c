/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aa55f4; name: FUN_00aa55f4
 */


void FUN_00aa55f4(long param_1,long *param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  short sVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  undefined1 *local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar11 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00aa5670;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00aa5670:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar13 = (long *)(lVar8 + -0x28);
        uVar7 = FUN_00e75364(plVar13,*(undefined8 *)(lVar8 + -0x20));
        if ((param_3 & 1) == 0) {
          local_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          FUN_00ca1a48(&local_b0,param_2);
          local_e0 = 0x6a80aa644050026b;
          pcStack_d8 = "PokeCharaCol";
          local_c0 = 0x16;
          local_bc = 1;
          local_b8 = 0x42340000;
          local_d0 = 0xc;
          local_c8 = (long *)0x0;
          FUN_01e3b7d0(&local_a0,param_1,&local_b0,uVar7,&local_e0);
          if (local_a0 != (long *)0x0) {
            lVar9 = local_a0[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_a0 + 0x50))();
            }
            else if (sVar11 == 0) goto LAB_00aa591c;
          }
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          if (local_b0 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_b0 + 3);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 != 1) goto LAB_00aa5830;
            piVar2 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              puVar12 = local_b0;
            } while (cVar4 != '\0');
LAB_00aa5990:
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_160 = (undefined1 *)*puVar12;
              FUN_00c44438(lVar9 + 0x8040,&local_160);
            }
          }
        }
        else {
          local_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          FUN_00ca1a48(&local_68,param_2);
          local_98 = 0x6a80aa644050026b;
          pcStack_90 = "PokeCharaCol";
          local_78 = 0x17;
          local_74 = 1;
          local_70 = 0x42340000;
          local_88 = 0xc;
          local_80 = (long *)0x0;
          FUN_01e3b7d0(&local_58,param_1,&local_68,uVar7,&local_98);
          if (local_58 != (long *)0x0) {
            lVar9 = local_58[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_58 + 0x50))();
            }
            else if (sVar11 == 0) goto LAB_00aa591c;
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if (local_68 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_68 + 3);
            do {
              sVar11 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar11 == 1) {
              piVar2 = (int *)((long)local_68 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                puVar12 = local_68;
              } while (cVar4 != '\0');
              goto LAB_00aa5990;
            }
LAB_00aa5830:
            if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        lVar9 = FUN_01453138(plVar13,*(undefined8 *)(lVar8 + -0x20));
        *(undefined4 *)(lVar9 + 0x140) = 1;
        uVar14 = *(uint *)(param_1 + 0xcc);
        *(ulong *)(lVar9 + 0x138) = (ulong)uVar14;
        *(ulong *)(lVar9 + 0x130) = CONCAT44(uVar14,uVar14);
        local_160 = &LAB_00aa62e8;
        local_158 = FUN_00aa64ec;
        local_150 = FUN_00aa64f0;
        local_148 = &LAB_00aa64f4;
        pcVar10 = *(code **)(lVar9 + 0x158);
        if (pcVar10 == (code *)0x0) {
LAB_00aa58b0:
          (*local_150)(auStack_140,lVar9 + 0x170);
          *(undefined1 **)(lVar9 + 0x168) = local_148;
          *(undefined8 *)(lVar9 + 0x150) = local_160;
          *(code **)(lVar9 + 0x158) = local_158;
          *(code **)(lVar9 + 0x160) = local_150;
        }
        else {
          *(undefined8 *)(lVar9 + 0x160) = 0;
          *(undefined8 *)(lVar9 + 0x168) = 0;
          *(undefined8 *)(lVar9 + 0x150) = 0;
          *(undefined8 *)(lVar9 + 0x158) = 0;
          (*pcVar10)(lVar9 + 0x170);
          if (local_150 != (code *)0x0) goto LAB_00aa58b0;
        }
        pcVar10 = local_158;
        if (local_158 != (code *)0x0) {
          local_150 = (code *)0x0;
          local_148 = (undefined1 *)0x0;
          local_160 = (undefined1 *)0x0;
          local_158 = (code *)0x0;
          (*pcVar10)(auStack_140);
        }
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
          return;
        }
        if (sVar11 != 0) {
          return;
        }
LAB_00aa591c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


