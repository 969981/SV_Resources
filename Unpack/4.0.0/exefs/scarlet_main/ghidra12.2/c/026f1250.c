/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f1250; name: FUN_026f1250
 */


void FUN_026f1250(long param_1,undefined8 *param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  void *pvVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  size_t __n;
  int iVar8;
  void *__dest;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined2 local_84 [2];
  char local_80 [24];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  pvVar4 = *(void **)(param_1 + 0x80a8);
  __dest = (void *)FUN_026f1460(*(undefined8 *)(param_1 + 0x80a0),pvVar4,&local_58);
  if (pvVar4 != __dest) {
    __n = (long)pvVar4 - ((long)__dest + 0x20);
    if (__n != 0) {
      memmove(__dest,(void *)((long)__dest + 0x20),__n);
    }
    *(size_t *)(param_1 + 0x80a8) = (long)__dest + __n;
    FUN_026f14ac(local_80,param_1,&local_58);
    if ((local_80[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
      lVar11 = local_68[2];
      puVar12 = local_68;
      if ((lVar11 != 0) && (local_84[0] = 0, 0x10 < param_3)) {
        param_2 = param_2 + 2;
        uVar10 = 0x10;
        do {
          local_84[0] = *(undefined2 *)param_2;
          uVar5 = *(ushort *)((long)param_2 + 2);
          local_48 = local_84;
          plVar9 = (long *)FUN_026f1540(lVar11 + 0xe0,&local_48);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x168))(plVar9,(long)param_2 + 4,(ulong)uVar5);
          }
          uVar10 = uVar10 + 4 + (uint)uVar5;
          param_2 = (undefined8 *)((long)param_2 + 4 + (ulong)uVar5);
        } while (uVar10 < param_3);
        if (local_80[0] == '\0') {
          return;
        }
        puVar12 = local_68;
        if (local_68 == (undefined8 *)0x0) {
          return;
        }
      }
      psVar1 = (short *)(puVar12 + 3);
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
        piVar2 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_48 = (undefined2 *)*puVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


