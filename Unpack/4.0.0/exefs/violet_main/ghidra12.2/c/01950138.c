/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01950138; name: FUN_01950138
 */


void FUN_01950138(undefined8 param_1)

{
  short *psVar1;
  char **ppcVar2;
  ulong *puVar3;
  long **pplVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  short sVar15;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  long *local_a0;
  long *local_98;
  char *local_90;
  ulong local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
  puVar10 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar10;
  uStack_68 = puVar10[1];
  local_60 = puVar10[2];
  local_58 = (long *)puVar10[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != 0) {
    if (*(short *)(local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_50[0] + 0x1a);
      sVar15 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar15) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_019501f8;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019501f8:
          bVar7 = false;
        }
        if (bVar7) {
          lVar14 = *(long *)(local_50[0] + 0x10);
          if (lVar14 == 0) goto LAB_019503d0;
          lVar11 = FUN_011aa97c(lVar14 + 0xe0,&local_b8);
          if (lVar11 != 0) {
            local_b8 = 0xf23c095037328591;
            local_b0 = "VoiceType";
            local_a8 = 9;
            local_a0 = (long *)0x0;
            uVar12 = FUN_01470908(param_1,&local_b8);
            uVar13 = 0;
            if ((uVar12 & 0xff) != 0) {
              uVar13 = (undefined4)(uVar12 >> 0x20);
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            local_d8 = 0x352b79c017918034;
            pcStack_d0 = "JointName";
            local_c8 = 9;
            local_c0 = (long *)0x0;
            FUN_01315eac(&local_b8,param_1,&local_d8);
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            bVar7 = (char)local_b8 != '\0';
            ppcVar2 = (char **)PTR_DAT_047d3e30;
            if (bVar7) {
              ppcVar2 = &local_b0;
            }
            local_90 = *ppcVar2;
            puVar3 = (ulong *)(PTR_DAT_047d3e30 + 8);
            if (bVar7) {
              puVar3 = &local_a8;
            }
            local_88 = *puVar3;
            pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
            if (bVar7) {
              pplVar4 = &local_a0;
            }
            local_80 = *pplVar4;
            pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
            if (bVar7) {
              pplVar4 = &local_98;
            }
            local_78 = *pplVar4;
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))();
            }
            if ((char)local_b8 != '\0') {
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              local_b8 = local_b8 & 0xffffffffffffff00;
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            local_b8 = 0x6bfdff25f365b50;
            local_b0 = "Follow";
            local_a8 = 6;
            local_a0 = (long *)0x0;
            uVar8 = FUN_0141f968(param_1,&local_b8);
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            FUN_0197045c(lVar11,uVar13,&local_90,(uVar8 & 0xff) == 0 || 0xff < uVar8,100);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
          }
          (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
          break;
        }
        sVar15 = sVar5;
      } while (sVar5 != 0);
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_019503d0:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      FUN_0116e168();
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


