/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222f140; name: FUN_0222f140
 */


void FUN_0222f140(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long *plVar12;
  byte bVar13;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  ulong local_50 [3];
  long *plStack_38;
  long *local_18;
  
  local_80 = *(undefined8 *)(param_1 + 0x110);
  uStack_78 = *(undefined8 *)(param_1 + 0x118);
  local_70 = *(undefined8 *)(param_1 + 0x120);
  plVar12 = *(long **)(param_1 + 0x128);
  local_68 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_60 = (ulong *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_60,param_1 + 0x30,&local_80);
    plVar12 = local_68;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_60 != (ulong *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar11 = *(short *)((long)local_60 + 0x1a);
LAB_0222f1e8:
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0222f20c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0222f20c:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x0222f214;
      uVar8 = local_60[2];
      if (uVar8 == 0) goto LAB_0222f338;
      lVar9 = FUN_0222f480(uVar8 + 0xe0,local_50);
      if (lVar9 != 0) {
        FUN_00d8fb98(local_50,PTR_DAT_047d9c40);
        lVar9 = FUN_01132f14(lVar9,local_50);
        if (lVar9 == 0) {
          local_18 = (long *)0x0;
        }
        else {
          FUN_00f422c8(&local_18,lVar9,&local_a0);
        }
        if (plStack_38 != (long *)0x0) {
          (**(code **)(*plStack_38 + 0x20))();
        }
        plVar12 = local_18;
        if (local_18 != (long *)0x0) {
          local_a0 = 0xe37fcfc819fe048a;
          pcStack_98 = "Position";
          local_90 = 8;
          local_88 = (long *)0x0;
          FUN_015eea10(local_50,param_1,&local_a0);
          bVar13 = -((char)local_50[0] == '\0');
          plVar12[0x21] =
               CONCAT17((byte)((ulong)plStack_38 >> 0x38) & ~bVar13,
                        CONCAT16((byte)((ulong)plStack_38 >> 0x30) & ~bVar13,
                                 CONCAT15((byte)((ulong)plStack_38 >> 0x28) & ~bVar13,
                                          CONCAT14((byte)((ulong)plStack_38 >> 0x20) & ~bVar13,
                                                   CONCAT13((byte)((ulong)plStack_38 >> 0x18) &
                                                            ~bVar13,CONCAT12((byte)((ulong)
                                                  plStack_38 >> 0x10) & ~bVar13,
                                                  CONCAT11((byte)((ulong)plStack_38 >> 8) & ~bVar13,
                                                           (byte)plStack_38 & ~bVar13)))))));
          plVar12[0x20] =
               CONCAT17((byte)(local_50[2] >> 0x38) & ~bVar13,
                        CONCAT16((byte)(local_50[2] >> 0x30) & ~bVar13,
                                 CONCAT15((byte)(local_50[2] >> 0x28) & ~bVar13,
                                          CONCAT14((byte)(local_50[2] >> 0x20) & ~bVar13,
                                                   CONCAT13((byte)(local_50[2] >> 0x18) & ~bVar13,
                                                            CONCAT12((byte)(local_50[2] >> 0x10) &
                                                                     ~bVar13,CONCAT11((byte)(
                                                  local_50[2] >> 8) & ~bVar13,
                                                  (byte)local_50[2] & ~bVar13)))))));
          FUN_01ea5ce4(plVar12,2);
          if ((char)local_50[0] != '\0') {
            local_50[0] = local_50[0] & 0xffffffffffffff00;
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          if (local_18 != (long *)0x0) {
            lVar9 = local_18[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar10) {
                *psVar1 = sVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_18 + 0x50))();
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
      }
      (**(code **)(*(long *)(uVar8 - 0x28) + 0x60))((long *)(uVar8 - 0x28));
LAB_0222f334:
      if (local_60 == (ulong *)0x0) {
        return;
      }
    }
LAB_0222f338:
    puVar6 = local_60;
    puVar2 = local_60 + 3;
    do {
      sVar11 = (short)*puVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *(short *)puVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_50[0] = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,local_50);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x0222f214:
  sVar11 = sVar4;
  if (sVar4 == 0) goto LAB_0222f334;
  goto LAB_0222f1e8;
}


