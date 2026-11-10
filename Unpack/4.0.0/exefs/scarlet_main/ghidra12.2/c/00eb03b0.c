/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb03b0; name: FUN_00eb03b0
 */


void FUN_00eb03b0(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  long *local_a8;
  long local_a0;
  char *pcStack_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  lVar6 = *param_2;
  uVar7 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 3) * 0x3e0f83e1;
  if ((int)uVar7 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    lVar8 = *(long *)(*(long *)(lVar6 + 0x88) + uVar10 * 0x108 + 0x48);
    local_80 = *(undefined8 *)(lVar8 + 8);
    uStack_78 = *(undefined8 *)(lVar8 + 0x10);
    local_70 = *(undefined8 *)(lVar8 + 0x18);
    local_68 = *(long **)(lVar8 + 0x20);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
      lVar6 = *param_2;
    }
    puVar11 = *(undefined8 **)(lVar6 + 0x58);
    puVar2 = *(undefined8 **)(lVar6 + 0x50);
    do {
      if (puVar2 == puVar11) {
        local_48 = (long *)0x0;
        goto LAB_00eb04ec;
      }
      FUN_00eb0610(&local_48,*puVar2,&local_80);
      puVar2 = puVar2 + 1;
    } while (local_48 == (long *)0x0);
    lVar6 = *(long *)(*param_2 + 0x88) + uVar10 * 0x108 + 0x80;
    FUN_00eb5618(param_1,&local_48,&local_80,lVar6);
    local_a0 = local_48[0x38];
    pcVar1 = (char *)local_48[0x39];
    local_90 = local_48[0x3a];
    plVar9 = (long *)local_48[0x3b];
    pcStack_98 = pcVar1;
    local_88 = plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (*pcVar1 != '\0') {
      puVar11 = *(undefined8 **)(*param_2 + 0x50);
      puVar2 = *(undefined8 **)(*param_2 + 0x58);
      if (puVar11 != puVar2) {
LAB_00eb0574:
        puVar12 = puVar11 + 1;
        FUN_00eb0610(&local_a8,*puVar11,&local_a0);
        if (local_a8 == (long *)0x0) break;
        FUN_00eb5618(param_1,&local_a8,&local_a0,lVar6);
        if (local_a8 != (long *)0x0) {
          plVar9 = local_a8 + 5;
          do {
            lVar6 = *plVar9;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_00eb05e8;
        }
        plVar9 = local_88;
      }
    }
LAB_00eb04c4:
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        lVar6 = *plVar9;
        iVar5 = (int)lVar6 + -1;
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
      else if ((int)lVar6 == 0) {
LAB_00eb05e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
LAB_00eb04ec:
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (uVar7 & 0xffffffff)) {
      return;
    }
    lVar6 = *param_2;
  } while( true );
  puVar11 = puVar12;
  if (puVar2 == puVar12) goto LAB_00eb04c4;
  goto LAB_00eb0574;
}


