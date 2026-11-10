/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b1cd74; name: FUN_02b1cd74
 */


void FUN_02b1cd74(long param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 local_78;
  undefined2 local_70 [4];
  ulong local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  char local_48 [8];
  
  FUN_0211522c(param_1 + 0xd0,param_3);
  uVar10 = FUN_02115170(param_1);
  *(undefined8 *)(param_1 + 0xf0) = uVar10;
  lVar15 = param_1 + 0x60;
  *(long *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x90);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined1 *)(param_2 + 0x8d);
  uVar11 = FUN_00f7e2a0(uVar4,uVar5,0);
  if (((uVar11 & 1) != 0) && (*(char *)(param_2 + 0x99) != -1)) {
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    uStack_5c = 0;
    uStack_58 = 1;
    local_48[0] = *(char *)(param_2 + 0x99);
    local_50 = FUN_02115064(param_1,local_48);
    local_68 = local_68 & 0xffffffff00000000;
    local_60 = CONCAT31(local_60._1_3_,*(int *)(param_1 + 0x58) == 0);
    puVar12 = (undefined8 *)FUN_019be1c4(lVar15,&local_68);
    *(char *)(puVar12 + 3) = local_48[0];
    *puVar12 = CONCAT44(uStack_5c,local_60);
    puVar12[1] = CONCAT44(uStack_54,uStack_58);
    puVar12[2] = local_50;
  }
  uVar11 = FUN_00f7e2a0(uVar4,uVar5,1);
  if (((uVar11 & 1) != 0) && (*(char *)(param_2 + 0x9a) != -1)) {
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    uStack_5c = 1;
    uStack_58 = 1;
    local_48[0] = *(char *)(param_2 + 0x9a);
    local_50 = FUN_02115064(param_1,local_48);
    local_60 = CONCAT31(local_60._1_3_,*(int *)(param_1 + 0x58) == 1);
    local_68 = CONCAT44(local_68._4_4_,1);
    puVar12 = (undefined8 *)FUN_019be1c4(lVar15,&local_68);
    *(char *)(puVar12 + 3) = local_48[0];
    *puVar12 = CONCAT44(uStack_5c,local_60);
    puVar12[1] = CONCAT44(uStack_54,uStack_58);
    puVar12[2] = local_50;
  }
  uVar11 = FUN_00f7e2a0(uVar4,uVar5,2);
  if (((uVar11 & 1) != 0) && (*(char *)(param_2 + 0x9b) != -1)) {
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    uStack_5c = 2;
    uStack_58 = 1;
    local_48[0] = *(char *)(param_2 + 0x9b);
    local_50 = FUN_02115064(param_1,local_48);
    local_60 = CONCAT31(local_60._1_3_,*(int *)(param_1 + 0x58) == 2);
    local_68 = CONCAT44(local_68._4_4_,2);
    puVar12 = (undefined8 *)FUN_019be1c4(lVar15,&local_68);
    *(char *)(puVar12 + 3) = local_48[0];
    *puVar12 = CONCAT44(uStack_5c,local_60);
    puVar12[1] = CONCAT44(uStack_54,uStack_58);
    puVar12[2] = local_50;
  }
  uVar11 = FUN_00f7e2a0(uVar4,uVar5,3);
  if (((uVar11 & 1) != 0) && (*(char *)(param_2 + 0x9c) != -1)) {
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    uStack_5c = 3;
    uStack_58 = 1;
    local_48[0] = *(char *)(param_2 + 0x9c);
    local_50 = FUN_02115064(param_1,local_48);
    local_60 = CONCAT31(local_60._1_3_,*(int *)(param_1 + 0x58) == 3);
    local_68 = CONCAT44(local_68._4_4_,3);
    puVar12 = (undefined8 *)FUN_019be1c4(lVar15,&local_68);
    *(char *)(puVar12 + 3) = local_48[0];
    *puVar12 = CONCAT44(uStack_5c,local_60);
    puVar12[1] = CONCAT44(uStack_54,uStack_58);
    puVar12[2] = local_50;
  }
  uVar11 = FUN_00f7e2a0(uVar4,uVar5,4);
  if (((uVar11 & 1) != 0) && (*(char *)(param_2 + 0x9d) != -1)) {
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    uStack_5c = 4;
    uStack_58 = 1;
    local_48[0] = *(char *)(param_2 + 0x9d);
    local_50 = FUN_02115064(param_1,local_48);
    local_60 = CONCAT31(local_60._1_3_,*(int *)(param_1 + 0x58) == 4);
    local_68 = CONCAT44(local_68._4_4_,4);
    puVar12 = (undefined8 *)FUN_019be1c4(lVar15,&local_68);
    *(char *)(puVar12 + 3) = local_48[0];
    *puVar12 = CONCAT44(uStack_5c,local_60);
    puVar12[1] = CONCAT44(uStack_54,uStack_58);
    puVar12[2] = local_50;
  }
  if (*(char *)(param_2 + 0x710) == '\0') goto LAB_02b1d0b0;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar16 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar16;
    if (lVar16 != 0) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      }
      if (*(long *)(lVar16 + 0x70) != 0) {
        bVar8 = 0xfd;
        if (*(long *)PTR_DAT_047d0860 != 0) {
          local_68 = CONCAT71(local_68._1_7_,0xfd);
          FUN_00f42ddc(&local_60,*(long *)PTR_DAT_047d0860,&local_68,uVar10);
          bVar8 = (byte)local_68;
          if (DAT_045dfcb0 <= (byte)local_68 || local_60 != 0) {
            bVar8 = 0xfd;
          }
        }
        goto LAB_02b1d078;
      }
    }
LAB_02b1d074:
    bVar8 = 0xfd;
  }
  else {
    if ((((*(long *)(param_1 + 0xd8) == 0) || (*(short *)(*(long *)(param_1 + 0xd8) + 0x1a) == 0))
        || (*(long *)(param_1 + 0xd8) == 0)) ||
       (lVar16 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar16 == 0)) goto LAB_02b1d074;
    bVar8 = FUN_00e5f3b4(lVar16 + -0x28);
  }
LAB_02b1d078:
  uVar10 = FUN_02115170(param_1);
  local_60 = 0xff;
  puVar13 = (undefined1 *)FUN_019be1c4(lVar15,&local_60);
  *puVar13 = 0;
  *(undefined8 *)(puVar13 + 0x10) = uVar10;
  puVar13[0x18] = bVar8;
  *(undefined8 *)(puVar13 + 4) = 0x1000000ff;
LAB_02b1d0b0:
  FUN_01a68860(param_1);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    iVar9 = *(int *)(*(long *)(param_1 + 0x50) + 0x34);
    cVar6 = *(char *)(*(long *)(param_1 + 0x50) + 0x8d);
    if (((iVar9 != 2) || (cVar6 != '\0')) && ((iVar9 != 2 || (3 < (byte)(cVar6 - 3U))))) {
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      uVar10 = *(undefined8 *)PTR_DAT_047d6ca0;
      *(undefined8 *)PTR_DAT_047d6ca8 = uVar10;
      local_70[0] = 5;
      FUN_01a68be0(&local_60,param_1);
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      FUN_01a69060(&local_90,&local_60);
      FUN_01a68ad0(&local_60);
      local_80 = param_1 + 0x48;
      local_78 = 0;
      FUN_0178e4dc(&local_68,uVar10,local_70,&local_90);
      plVar14 = *(long **)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[6];
        psVar1 = (short *)(lVar15 + 0x1a);
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
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar11 = local_68;
      puVar12 = local_90;
      local_68 = 0;
      *(ulong *)(param_1 + 0xf8) = uVar11;
      if (local_90 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_90 + 3);
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
          piVar2 = (int *)((long)local_90 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_60 = (uint)*puVar12;
            uStack_5c = (undefined4)((ulong)*puVar12 >> 0x20);
            FUN_00c44438(lVar15 + 0x8040,&local_60);
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
      DAT_0483ab50 = 0;
    }
  }
  return;
}


