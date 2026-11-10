/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110b040; name: FUN_0110b040
 */


void FUN_0110b040(undefined8 *param_1,long *param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar8 = local_38;
  if (*param_2 == 0) {
    lVar13 = 0;
  }
  else {
    lVar12 = *(long *)(*param_2 + 0x10);
    lVar13 = 0;
    if (lVar12 != 0) {
      lVar13 = lVar12 + -0x28;
    }
  }
  uVar4 = (param_3 - 1U) * 8;
  uVar5 = (undefined1)(0xff0401 >> (ulong)(uVar4 & 0x18));
  uVar14 = (undefined1)(0x808181 >> (ulong)(uVar4 & 0x18));
  if (2 < param_3 - 1U) {
    uVar5 = 0;
    uVar14 = 0x80;
  }
  local_38 = (undefined8 *)CONCAT71((uint7)CONCAT11(uVar5,uVar14),0x80);
  uVar9 = local_38;
  local_38._4_4_ = SUB84(uVar8,4);
  local_38._0_4_ = CONCAT13(0x80,(int3)uVar9);
  lVar12 = FUN_0110b210(lVar13,*(undefined8 *)(lVar13 + 8),&local_38);
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00c43ef0(&local_38,lVar12 + 0x98);
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + 0x28;
  }
  if (local_38[2] == lVar13) {
    FUN_0110babc(param_1,&local_38);
  }
  puVar10 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_38 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_28 = *puVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_28);
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
  return;
}


