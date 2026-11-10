/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fb388; name: FUN_015fb388
 */


void FUN_015fb388(long param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  short *psVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  short *psVar13;
  ulong local_60 [2];
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  psVar13 = *(short **)(param_1 + 0x4090);
  psVar9 = *(short **)(param_1 + 0x4098);
  if (psVar13 == psVar9) {
LAB_015fb3d0:
    if ((psVar13 != psVar9) && ((char)psVar13[0x44] == '\x02')) {
      *(undefined1 *)(psVar13 + 0xe3) = 1;
      FUN_015fb6b0(psVar13 + 0x48);
      if ((*(long *)(psVar13 + 0x14) != 0) &&
         (lVar10 = *(long *)(*(long *)(psVar13 + 0x14) + 0x10), lVar10 != 0)) {
        lVar10 = lVar10 + -0x28;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        FUN_01ea5f3c(lVar10,1,PTR_DAT_047d3e30);
        local_18 = FUN_00f4189c(param_1,psVar13 + 4);
        if ((((*(int *)(psVar13 + 0x3c) == 0) && (uVar5 = FUN_012960d8(&local_18), (uVar5 & 1) != 0)
             ) && (*(long *)(psVar13 + 0x1c) != 0)) &&
           (lVar11 = *(long *)(*(long *)(psVar13 + 0x1c) + 0x10), lVar11 != 0)) {
          iVar4 = FUN_01ea60e8(lVar11 + -0x28);
          uVar8 = 1;
          if (iVar4 != 0) {
            uVar8 = 2;
          }
          puVar6 = (undefined8 *)FUN_01a6a8cc(1,lVar10);
          plVar12 = (long *)*puVar6;
          if (plVar12 != (long *)0x0) {
            lVar10 = plVar12[6];
            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar13 = (short *)(lVar10 + 0x1a);
            do {
              sVar1 = *psVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar13,0x10);
              if (bVar3) {
                *psVar13 = sVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (sVar1 == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
              *(undefined8 *)(lVar10 + 8) = uVar7;
              *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
            }
            else if (sVar1 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          local_60[1] = 0xeb7375308113395e;
          pcStack_50 = "ride_type_int";
          local_48 = 0xd;
          local_40 = (long *)0x0;
          local_38 = FUN_01ea60f0(plVar12,plVar12 + 0x10,local_60 + 1);
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x20))();
          }
          local_60[1] = 0xd582f33769da0bac;
          pcStack_50 = "ride_trigger";
          local_48 = 0xc;
          local_40 = (long *)0x0;
          uVar5 = FUN_01ea60f0(plVar12,plVar12 + 0x25,local_60 + 1);
          local_60[0] = uVar5;
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x20))(local_40);
            uVar5 = local_60[0] & 0xff;
          }
          if (((char)local_38 != '\0') && ((uVar5 & 0xff) != 0)) {
            FUN_01a6a8d4(plVar12,&local_38,uVar8);
            FUN_01ea6208(plVar12,local_60,1);
          }
          if (plVar12 != (long *)0x0) {
            lVar10 = plVar12[6];
            psVar13 = (short *)(lVar10 + 0x1a);
            do {
              sVar1 = *psVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar13,0x10);
              if (bVar3) {
                *psVar13 = sVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (sVar1 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))(plVar12);
            }
            else if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
      }
    }
  }
  else {
    do {
      if (*psVar13 == *param_2) goto LAB_015fb3d0;
      psVar13 = psVar13 + 0xe4;
    } while (psVar9 != psVar13);
  }
  return;
}


