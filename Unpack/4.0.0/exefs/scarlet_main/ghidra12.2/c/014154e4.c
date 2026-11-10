/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014154e4; name: FUN_014154e4
 */


void FUN_014154e4(long *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_66;
  undefined2 local_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_3a;
  undefined1 auStack_18 [8];
  
  lVar9 = FUN_01438e60(*(undefined8 *)(param_2 + 8));
  *param_1 = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
      pcVar12 = "count != 0";
      pcVar13 = "AddReference";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar15 = "Reference counter overflows.";
      goto LAB_01415674;
    }
  }
  lVar16 = *param_1;
  *(undefined1 *)(lVar16 + 0x40) = 1;
  local_50 = 0xffffffff;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x3ffffffff;
  local_3a = 0x10001000100;
  local_70 = 0xffffffffffffffff;
  local_90 = 0;
  local_60 = 0x1ffffffffff00ff;
  uStack_58 = 0xffffffffffffffff;
  local_88 = 0;
  local_66 = 0;
  local_3c = 0;
  local_68 = 0;
  local_44 = 0xffff00000000;
  local_4c = 0;
  local_62 = 0;
  lVar9 = FUN_00eebe4c(auStack_18,*(undefined8 *)(param_2 + 8),&local_90);
  if (lVar9 != 0) {
    piVar3 = (int *)(lVar9 + 0x28);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar16 = *param_1;
  }
  plVar10 = *(long **)(lVar16 + 0x48);
  *(undefined8 *)(lVar16 + 0x48) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 5;
    do {
      lVar8 = *plVar2;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
      pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar13 = "DecrementReferenceInternal";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar15 = "Reference counter underflows.";
LAB_01415674:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
    }
  }
  *(long *)(lVar16 + 0x48) = lVar9;
  *(undefined8 *)(*param_1 + 0x50) = 0;
  return;
}


