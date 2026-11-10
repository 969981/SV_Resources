/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012544f8; name: FUN_012544f8
 */


/* WARNING: Removing unreachable block (ram,0x012547ec) */
/* WARNING: Removing unreachable block (ram,0x012547f4) */
/* WARNING: Removing unreachable block (ram,0x012547fc) */

undefined8 FUN_012544f8(long param_1,long *param_2)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined2 local_44;
  undefined4 local_24;
  
  bVar4 = *(byte *)(param_2 + 0x2c);
  lVar16 = 0;
  if (bVar4 < 5) {
    lVar16 = param_1 + (ulong)bVar4 * 0x38 + 0x28;
  }
  uVar9 = FUN_012548c0(lVar16);
  if ((uVar9 & 1) == 0) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
    uVar5 = *(undefined1 *)(lVar16 + 0x30);
    iVar1 = *(int *)(lVar15 + 0x70) + 1;
    *(int *)(lVar15 + 0x70) = iVar1;
    local_78 = (long *)CONCAT44(local_78._4_4_,iVar1);
    puVar10 = (uint *)FUN_01078064(lVar15 + 8,&local_78);
    uVar17 = (uint)bVar4;
    *puVar10 = uVar17;
    *(undefined1 *)(puVar10 + 1) = uVar5;
    local_24 = local_78._0_4_;
    if (*param_2 == -0x55b9ee5fee87d0a6) {
      FUN_02979688(&local_78,*(undefined8 *)(param_1 + 8),param_2 + 1);
      plVar18 = local_78;
      local_80 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70);
      local_78 = (long *)FUN_010a19f8(*(undefined8 *)(param_1 + 8),&local_80,param_1 + 0x10);
      if (local_78 != (long *)0x0) {
        lVar16 = local_78[6];
        if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          *(undefined8 *)(lVar16 + 8) = uVar14;
          *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      uVar14 = FUN_010a1b68(param_1 + 0x140,&local_24);
      FUN_0297974c(uVar14,&local_78);
      if (local_78 != (long *)0x0) {
        lVar16 = local_78[6];
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_012546fc;
      }
    }
    else {
      if (*(long **)(param_1 + 0x20) == (long *)0x0) {
        return 0;
      }
      (**(code **)(**(long **)(param_1 + 0x20) + 0x70))(&local_78);
      plVar18 = local_78;
      (**(code **)(local_78[8] + 8))(local_78 + 8,param_2 + 1);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x68))
                (&local_78,*(long **)(param_1 + 0x20),*param_2,
                 *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),*(undefined8 *)(param_1 + 0x10));
      plVar11 = (long *)FUN_010a1b68(param_1 + 0x140,&local_24);
      plVar12 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar12 != (long *)0x0) {
        lVar16 = plVar12[6];
        psVar2 = (short *)(lVar16 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_012546fc;
      }
      plVar12 = local_78;
      local_78 = (long *)0x0;
      *plVar11 = (long)plVar12;
    }
    puVar13 = (undefined8 *)FUN_010a1b68(param_1 + 0x140,&local_24);
    uVar8 = local_24;
    local_78 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    uStack_70 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    local_60 = local_24;
    local_4c = *(undefined8 *)((long)param_2 + 0x174);
    local_5c = *(undefined8 *)((long)param_2 + 0x164);
    local_54 = *(undefined8 *)((long)param_2 + 0x16c);
    local_44 = *(undefined2 *)((long)param_2 + 0x17c);
    local_68 = plVar18;
    (**(code **)(*(long *)*puVar13 + 0x68))((long *)*puVar13,&local_78);
    FUN_010a1f30(param_1,uVar17,uVar8);
    FUN_010a29d0(param_1,uVar17);
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[6];
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar18 + 0x50))(plVar18);
      }
      else if (sVar3 == 0) {
LAB_012546fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  return uVar14;
}


