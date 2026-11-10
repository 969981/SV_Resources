/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddb044; name: FUN_01ddb044
 */


void FUN_01ddb044(long param_1,byte param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  byte local_44 [4];
  undefined8 local_28;
  
  bVar6 = (param_2 & 1) == 0;
  local_68 = 0x2fa69a6ffc90a31d;
  if (bVar6) {
    local_68 = 0x9778194a3162a086;
  }
  pcStack_60 = "f_in";
  if (bVar6) {
    pcStack_60 = "f_out";
  }
  local_58 = 4;
  if (bVar6) {
    local_58 = 5;
  }
  local_50 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0x30);
  plVar10 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x58))(plVar9);
    lVar8 = FUN_00e895f4(plVar9[0x2e],&local_68);
    if (lVar8 != 0) {
      FUN_00dfcea4();
    }
    (**(code **)(*plVar9 + 0x60))(plVar9);
    plVar10 = *(long **)(param_1 + 0x30);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
      bVar6 = false;
      goto LAB_01ddb10c;
    }
  }
  bVar6 = true;
LAB_01ddb10c:
  local_88 = (undefined8 *)0xf1734e100977352b;
  pcStack_80 = "L_cursor_00";
  local_78 = 0xb;
  uStack_70 = 0;
  if (!bVar6) {
    (**(code **)(*plVar10 + 0x58))(plVar10);
    lVar8 = FUN_00c8c7b4(plVar10[0x2e],&local_88);
    (**(code **)(*plVar10 + 0x60))(plVar10);
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | param_2 & 1;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  if ((param_3 & 1) != 0) {
    local_44[0] = param_2 & 1;
    local_88 = (undefined8 *)0x0;
    pcStack_80 = (char *)0x0;
    FUN_01084328(&local_88,param_1 + 0x130);
    FUN_014e8d94(&local_88,s_F6C37329389CF546A_04541be5,local_44);
    puVar5 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
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
          local_28 = *puVar5;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
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
    if (local_44[0] == 0) {
      *(undefined1 *)(param_1 + 0x2ae) = 1;
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


