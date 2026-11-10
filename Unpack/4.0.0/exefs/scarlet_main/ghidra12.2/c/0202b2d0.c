/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0202b2d0; name: FUN_0202b2d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0202b2d0(float param_1,long param_2,long *param_3,long *param_4,int param_5,uint param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long lVar10;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_011f3030(&local_70,*(undefined8 *)(*param_3 + (ulong)*(uint *)(param_2 + 8)));
  if (local_70 != 0) {
    if (*(short *)(local_70 + 0x1a) != 0) {
      psVar1 = (short *)(local_70 + 0x1a);
      sVar7 = *(short *)(local_70 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0202b368;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0202b368:
          bVar4 = false;
        }
        if (bVar4) {
          plVar8 = (long *)0x0;
          if (*(long *)(local_70 + 0x10) != 0) {
            plVar8 = (long *)(*(long *)(local_70 + 0x10) + -0x28);
          }
          goto LAB_0202b390;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
    plVar8 = (long *)0x0;
LAB_0202b390:
    psVar1 = (short *)(local_70 + 0x18);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      FUN_0116e168();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar8 != (long *)0x0) {
      if (param_5 == 1) {
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        lStack_68 = 0;
        lVar6 = *param_4;
        uVar5 = FUN_0202b52c(lVar6,CONCAT44((float)((ulong)lVar6 >> 0x20) +
                                            (float)((ulong)_DAT_03cabea0 >> 0x20),
                                            (float)lVar6 + (float)_DAT_03cabea0),2,&local_70);
        if ((uVar5 & 1) == 0) {
          lStack_78 = param_4[1];
          lVar10 = *param_4;
          lVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
          local_80 = CONCAT44(*(undefined4 *)(lVar6 + 0x34),(int)lVar10);
          goto LAB_0202b4d8;
        }
LAB_0202b458:
        FUN_012c7df0(&uStack_38);
LAB_0202b460:
        lVar10 = param_4[1];
        lVar6 = *param_4;
LAB_0202b464:
        local_80 = lVar6;
        lStack_78 = lVar10;
      }
      else {
        if (param_5 != 0) goto LAB_0202b460;
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        lStack_68 = 0;
        lVar6 = *param_4;
        uVar5 = FUN_0202b52c(lVar6,CONCAT44((float)((ulong)lVar6 >> 0x20) +
                                            (float)((ulong)_DAT_03cab0f0 >> 0x20),
                                            (float)lVar6 + (float)_DAT_03cab0f0),1,&local_70);
        lVar10 = lStack_68;
        lVar6 = local_70;
        if ((uVar5 & 1) != 0) {
          if ((param_6 & 1) != 0) {
            lStack_78 = param_4[1];
            local_80 = *param_4;
            if (param_1 <= ABS((float)((ulong)local_80 >> 0x20) - (float)((ulong)local_70 >> 0x20)))
            goto LAB_0202b4d8;
          }
          FUN_012c7df0(&uStack_38);
          goto LAB_0202b464;
        }
        lVar6 = *param_4;
        uVar5 = FUN_0202b52c(lVar6,CONCAT44((float)((ulong)lVar6 >> 0x20) +
                                            (float)((ulong)_DAT_03cabea0 >> 0x20),
                                            (float)lVar6 + (float)_DAT_03cabea0),1,&local_70);
        if ((uVar5 & 1) == 0) goto LAB_0202b458;
        local_80 = local_70;
        lStack_78 = lStack_68;
LAB_0202b4d8:
        FUN_012c7df0(&uStack_38);
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
      goto LAB_0202b318;
    }
  }
  lStack_78 = param_4[1];
  local_80 = *param_4;
LAB_0202b318:
  auVar9._8_8_ = lStack_78;
  auVar9._0_8_ = local_80;
  return auVar9;
}


