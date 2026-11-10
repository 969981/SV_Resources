/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfa7d8; name: FUN_01dfa7d8
 */


void FUN_01dfa7d8(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  if (((DAT_04837228 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837228), iVar8 != 0)) {
    FUN_00100190(&LAB_00a8b6e0,&DAT_04837218,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837228);
  }
  DAT_04837230 = DAT_04837218;
  if ((*param_2 != 0) &&
     (local_60 = *(long **)(DAT_04837218 + (long)param_3 * 8 + 0x48), local_60 != (long *)0x0)) {
    lVar10 = local_60[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar11 = local_60;
    if (local_60 != (long *)0x0) {
      if ((*(byte *)(local_60[0x16] + 0x6c) & 1) == 0) {
LAB_01dfab24:
        *param_1 = 0;
        param_1[1] = 0;
LAB_01dfab28:
        lVar10 = plVar11[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
          return;
        }
        if (sVar4 != 0) {
          return;
        }
LAB_01dfab4c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar12 = local_60[0x16];
      plVar2 = (long *)(lVar12 + 0x78);
      lVar10 = nn::os::GetCurrentThread();
LAB_01dfa894:
      if (*plVar2 == 0) goto code_r0x01dfa89c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x80));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x80));
            while (*plVar2 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01dfa8a4;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01dfa8a4:
      iVar8 = *(int *)(lVar12 + 0x68);
      cVar5 = *(char *)(lVar12 + 100);
      *(undefined8 *)(lVar12 + 0x78) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x80));
      if ((iVar8 != 0) || (cVar5 == '\0')) goto LAB_01dfab24;
      FUN_00cebc38(&local_58,*param_2);
      plVar11 = local_58;
      local_88 = (undefined8 *)&DAT_61030efc6e70abcf;
      pcStack_80 = "poke_orange";
      local_78 = 0xb;
      local_70 = (long *)0x0;
      FUN_010b6530(&local_68,local_58,&local_88,&local_60,0,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x60))(plVar11);
      }
      plVar11 = local_68;
      if (local_68 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_00dfba48(local_68,*param_2);
        lVar10 = *param_2;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        FUN_0133cea0(plVar11,lVar10,param_4,PTR_DAT_047d3e30);
        lVar10 = plVar11[0x86];
        plVar11[0x87] = plVar11[0x87] | 1;
        *(undefined1 *)(plVar11 + 0x86) = 1;
        if ((char)lVar10 == '\0') {
          FUN_00d37964(plVar11,2,1);
          (**(code **)(*plVar11 + 0x108))(plVar11);
          FUN_00cf6de0(plVar11 + 0x21,&local_88);
          plVar11 = local_68;
        }
        (**(code **)(*plVar11 + 0x18))(&local_88,plVar11);
        *param_1 = 0;
        param_1[1] = 0;
        plVar2 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          plVar2 = plVar11 + 5;
        }
        if ((long *)local_88[2] == plVar2) {
          FUN_00cbc6dc(param_1,&local_88);
        }
        puVar7 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_88 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_58 = (long *)*puVar7;
              FUN_00c44438(lVar10 + 0x8040,&local_58);
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if (local_68 != (long *)0x0) {
          lVar10 = local_68[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_01dfab4c;
        }
      }
      plVar11 = local_60;
      if (local_60 == (long *)0x0) {
        return;
      }
      goto LAB_01dfab28;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x01dfa89c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar6) {
    *plVar2 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01dfa8a4;
  goto LAB_01dfa894;
}


