/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eac2f8; name: FUN_00eac2f8
 */


void FUN_00eac2f8(long param_1,long *param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  lVar8 = *(long *)(*(long *)(*param_4 + 0x88) + (param_3 & 0xffffffff) * 0x108 + 0x48);
  local_90 = *(undefined8 *)(lVar8 + 8);
  uStack_88 = *(undefined8 *)(lVar8 + 0x10);
  local_80 = *(undefined8 *)(lVar8 + 0x18);
  plVar1 = *(long **)(lVar8 + 0x20);
  plStack_78 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar10 = *param_2;
  lVar8 = **(long **)(lVar10 + 0x58);
  FUN_00eac558(&local_48,param_1,&local_90);
  if (local_48 == (long *)0x0) goto LAB_00eac3e4;
  lVar8 = lVar8 + 0x38;
  (**(code **)(*DAT_0485a020 + 0x98))(DAT_0485a020,&local_48,lVar8);
  uVar6 = FUN_00d100a8(local_48);
  if ((uVar6 & 1) == 0) {
    if (*(char *)(param_1 + 0x1a6) == '\0') {
      FUN_015200b8(local_48);
    }
LAB_00eac43c:
    puVar7 = (undefined8 *)FUN_00ec74e0(local_48);
    local_68 = *puVar7;
    pcVar2 = (char *)puVar7[1];
    local_58 = puVar7[2];
    plVar9 = (long *)puVar7[3];
    pcStack_60 = pcVar2;
    local_50 = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (*pcVar2 != '\0') {
      FUN_00eac558(&local_70,param_1,&local_68);
      if (local_70 != (long *)0x0) {
        (**(code **)(*DAT_0485a020 + 0x98))(DAT_0485a020,&local_70,lVar8);
        uVar6 = FUN_00d100a8(local_70);
        if ((uVar6 & 1) != 0) {
          FUN_00d10690(*(undefined8 *)(lVar10 + 200),0x1f,local_70 + 0x1e);
        }
        if (local_70 != (long *)0x0) {
          plVar9 = local_70 + 5;
          do {
            lVar8 = *plVar9;
            iVar5 = (int)lVar8 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
          else if ((int)lVar8 == 0) goto LAB_00eac524;
        }
      }
      plVar9 = local_50;
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x1a6) != '\0') goto LAB_00eac43c;
    FUN_00d10690(*(undefined8 *)(lVar10 + 200),0x1f,local_48 + 0x1e);
  }
  if (local_48 != (long *)0x0) {
    plVar9 = local_48 + 5;
    do {
      lVar8 = *plVar9;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_00eac524:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_00eac3e4:
  (**(code **)(*DAT_0485a020 + 0xa0))(DAT_0485a020,param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


