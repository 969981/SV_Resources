/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011db6c8; name: FUN_011db6c8
 */


void FUN_011db6c8(long param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar19 = *(ulong *)(param_1 + 0xe8);
    puVar18 = (undefined8 *)
              (*(long *)(*(long *)(param_1 + 0xb0) + (uVar19 / 0x66) * 8) + (uVar19 % 0x66) * 0x28);
    uVar7 = *puVar18;
    uVar21 = *(uint *)(puVar18 + 1);
    uVar11 = *(undefined8 *)((long)puVar18 + 0xc);
    uVar8 = *(undefined8 *)((long)puVar18 + 0xc);
    uVar13 = *(undefined8 *)((long)puVar18 + 0x14);
    uVar9 = *(undefined8 *)((long)puVar18 + 0x14);
    puVar1 = (undefined8 *)((long)puVar18 + 0x1c);
    uVar14 = *puVar1;
    uVar12 = *puVar1;
    uVar10 = *puVar1;
    uVar22 = (ulong)*(uint *)((long)puVar18 + 0x24);
    *(ulong *)(param_1 + 0xe8) = uVar19 + 1;
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    FUN_011dbdec(param_1 + 0xa8);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar16 != 0)) {
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      FUN_00ca1a48(&local_40,lVar16 + 0x20);
      puVar1 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        lVar16 = local_40[2];
        plVar20 = (long *)(lVar16 + -0x28);
        psVar2 = (short *)(local_40 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_40 + 0x1c);
          do {
            iVar15 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_18 = *puVar1;
            FUN_00c44438(lVar17 + 0x8040,&local_18);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (lVar16 != 0) {
          *(ulong *)(lVar16 + 0xa0) = (ulong)uVar21;
          *(undefined8 *)(lVar16 + 0x98) = uVar7;
          if (*(char *)(lVar16 + 0xcc) == '\0') {
            *(undefined1 *)(lVar16 + 0xcc) = 1;
            (**(code **)(*(long *)(lVar16 + -0x28) + 0x78))(plVar20);
            *(undefined8 *)(lVar16 + 0xb0) = uVar9;
            *(undefined8 *)(lVar16 + 0xa8) = uVar8;
            if (*(char *)(lVar16 + 0xcc) == '\0') {
              *(undefined1 *)(lVar16 + 0xcc) = 1;
              (**(code **)(*(long *)(lVar16 + -0x28) + 0x78))(plVar20);
              *(ulong *)(lVar16 + 0xc0) = uVar22;
              *(undefined8 *)(lVar16 + 0xb8) = uVar10;
              if (*(char *)(lVar16 + 0xcc) == '\0') {
                *(undefined1 *)(lVar16 + 0xcc) = 1;
                (**(code **)(*plVar20 + 0x78))(plVar20);
              }
            }
            else {
              *(ulong *)(lVar16 + 0xc0) = uVar22;
              *(undefined8 *)(lVar16 + 0xb8) = uVar14;
            }
          }
          else {
            *(undefined8 *)(lVar16 + 0xb0) = uVar13;
            *(undefined8 *)(lVar16 + 0xa8) = uVar11;
            *(ulong *)(lVar16 + 0xc0) = uVar22;
            *(undefined8 *)(lVar16 + 0xb8) = uVar12;
          }
        }
      }
    }
  }
  return;
}


