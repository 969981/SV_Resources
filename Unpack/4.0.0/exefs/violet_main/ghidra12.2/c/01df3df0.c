/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df3df0; name: FUN_01df3df0
 */


void FUN_01df3df0(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0 [13];
  ulong *local_38;
  undefined8 uStack_30;
  ulong local_28;
  
  iVar8 = *(int *)(param_1 + 0x48);
  if (iVar8 == 2) {
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ac) != '\0') {
      iVar8 = FUN_0119391c();
      if ((iVar8 == 2) || (iVar8 = FUN_0119391c(), iVar8 == 1)) {
        *(undefined8 *)(param_1 + 0x44) = 0xb;
      }
      else {
        uVar9 = FUN_01dda514(*(undefined8 *)(param_1 + 0x30));
        if ((uVar9 & 1) == 0) {
          FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
        }
        local_c0 = &LAB_00a89680;
        local_b8 = FUN_00a896c0;
        local_b0 = &LAB_00a896c4;
        puStack_a8 = &LAB_00a896d0;
        local_a0[0] = param_1;
        FUN_01dda320(*(undefined8 *)(param_1 + 0x30),0x2a,&local_c0,0,0,1,0);
        pcVar6 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar6)(local_a0);
        }
      }
    }
  }
  else if (iVar8 == 1) {
    FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
    FUN_01dda668(*(undefined8 *)(param_1 + 0x30));
    FUN_01df37c4(*(undefined8 *)(param_1 + 0x30),0);
    local_38 = (ulong *)0x0;
    uStack_30 = 0;
    FUN_01084328(&local_38,*(long *)(param_1 + 0x30) + 0x130);
    local_28 = local_28 & 0xffffffffffffff00;
    FUN_01de0af4(&local_38,s_F52FFAAAD818F1846_04542db3,&local_28);
    puVar7 = local_38;
    if (local_38 != (ulong *)0x0) {
      puVar1 = local_38 + 3;
      do {
        sVar3 = (short)*puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *(short *)puVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_38 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar8 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
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
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  else if (iVar8 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_0129e570(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return;
}


