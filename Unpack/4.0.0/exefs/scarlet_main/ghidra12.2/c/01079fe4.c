/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01079fe4; name: FUN_01079fe4
 */


/* WARNING: Removing unreachable block (ram,0x0107a1c8) */
/* WARNING: Removing unreachable block (ram,0x0107a1d0) */
/* WARNING: Removing unreachable block (ram,0x0107a1d8) */
/* WARNING: Removing unreachable block (ram,0x0107a1e0) */
/* WARNING: Removing unreachable block (ram,0x0107a20c) */
/* WARNING: Removing unreachable block (ram,0x0107a1e8) */

void FUN_01079fe4(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long local_48;
  
  plVar1 = (long *)(param_1 + 0x140);
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar14 = (long *)*(long *)(param_1 + 0x170);
    while (plVar14 != (long *)0x0) {
      plVar15 = (long *)*plVar14;
      plVar8 = (long *)plVar14[3];
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_0107a420;
      }
      plVar8 = *(long **)(param_1 + 0x178);
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar14,0x20,8);
        plVar14 = plVar15;
      }
      else {
        FUN_00c48fe8(plVar8,plVar14,0x20,8);
        plVar14 = plVar15;
      }
    }
    uVar9 = *(ulong *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (uVar9 != 0) {
      uVar12 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar13 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar13 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar13 * 8 + 0x10) = 0;
          lVar11 = uVar13 * 8;
          uVar13 = uVar13 + 4;
          *(undefined8 *)(*plVar1 + lVar11 + 0x18) = 0;
        } while ((uVar9 & 0xfffffffffffffffc) != uVar13);
      }
      if (uVar12 != 0) {
        lVar11 = uVar13 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar11) = 0;
          uVar12 = uVar12 - 1;
          lVar11 = lVar11 + 8;
        } while (uVar12 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  plVar14 = *(long **)(param_2 + 0x170);
  do {
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(char *)(param_2 + 0x58) != '\0') {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(**(long **)(param_2 + 0x28 + uVar9 * 8) + 0x98))();
          uVar10 = FUN_01021c94(param_1,uVar7);
          bVar4 = *(byte *)(param_1 + 0x58);
          *(byte *)(param_1 + 0x58) = bVar4 + 1;
          *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x28) = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_2 + 0x58));
      }
      *(undefined1 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      if (*(char *)(param_2 + 0x90) != '\0') {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(**(long **)(param_2 + 0x60 + uVar9 * 8) + 0x98))();
          uVar10 = FUN_01021c94(param_1,uVar7);
          bVar4 = *(byte *)(param_1 + 0x90);
          *(byte *)(param_1 + 0x90) = bVar4 + 1;
          *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x60) = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_2 + 0x90));
      }
      *(undefined1 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      if (*(char *)(param_2 + 200) != '\0') {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(**(long **)(param_2 + 0x98 + uVar9 * 8) + 0x98))();
          uVar10 = FUN_01021c94(param_1,uVar7);
          bVar4 = *(byte *)(param_1 + 200);
          *(byte *)(param_1 + 200) = bVar4 + 1;
          *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x98) = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_2 + 200));
      }
      *(undefined1 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if (*(char *)(param_2 + 0x100) != '\0') {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(**(long **)(param_2 + 0xd0 + uVar9 * 8) + 0x98))();
          uVar10 = FUN_01021c94(param_1,uVar7);
          bVar4 = *(byte *)(param_1 + 0x100);
          *(byte *)(param_1 + 0x100) = bVar4 + 1;
          *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0xd0) = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_2 + 0x100));
      }
      *(undefined1 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      if (*(char *)(param_2 + 0x138) != '\0') {
        uVar9 = 0;
        do {
          uVar7 = (**(code **)(**(long **)(param_2 + 0x108 + uVar9 * 8) + 0x98))();
          uVar10 = FUN_01021c94(param_1,uVar7);
          bVar4 = *(byte *)(param_1 + 0x138);
          *(byte *)(param_1 + 0x138) = bVar4 + 1;
          *(undefined8 *)(param_1 + (ulong)bVar4 * 8 + 0x108) = uVar10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_2 + 0x138));
      }
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      return;
    }
    plVar8 = (long *)plVar14[3];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x70))
                (&local_48,plVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70));
      plVar8 = (long *)FUN_010a1b68(plVar1,plVar14 + 2);
      plVar15 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar15 != (long *)0x0) {
        lVar11 = plVar15[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_0107a420:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar11 = local_48;
      local_48 = 0;
      *plVar8 = lVar11;
    }
    plVar14 = (long *)*plVar14;
  } while( true );
}


