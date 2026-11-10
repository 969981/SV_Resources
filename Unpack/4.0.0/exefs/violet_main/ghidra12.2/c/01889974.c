/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01889974; name: FUN_01889974
 */


undefined8 FUN_01889974(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  uVar8 = FUN_01195974();
  iVar7 = *(int *)(param_1 + 0x108);
  uVar12 = uVar8 >> 0x20;
  if (iVar7 == 0) {
    lVar9 = FUN_01195854();
    uVar13 = (uint)*(byte *)(lVar9 + 0x570);
    iVar7 = *(int *)(param_1 + 0x108);
  }
  else if (iVar7 - 1U < 2) {
    uVar13 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    uVar13 = 0xffffffff;
  }
  if (iVar7 == 0) {
    uVar12 = (ulong)(uint)((int)uVar8 + (int)(uVar8 >> 0x20) * 6);
  }
  else if ((iVar7 != 1) && (iVar7 != 2)) {
    uVar12 = 1;
  }
  uVar10 = FUN_01195854();
  uVar8 = FUN_014e797c(uVar10,uVar13 - 1);
  if ((uVar8 & 1) != 0) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar9 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar9;
    local_e0 = 0x9361c9d60afa3753;
    pcStack_d8 = "PLAY_UI_COMMON_BEEP";
    local_d0 = 0x13;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar9 + 0x48) == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar10 = FUN_00cf8198();
    }
    memset(&local_c0,0,0x80);
    plVar11 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
    iVar7 = (**(code **)(*plVar11 + 0xd0))
                      (plVar11,"PLAY_UI_COMMON_BEEP",uVar10,1,&LAB_01080c70,lVar9,0,0,0);
    if ((iVar7 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar9 + 0x220),&local_e0,iVar7,uVar10,0,&local_c0,0),
       pcVar6 = local_b8, local_b8 != (code *)0x0)) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar6)(auStack_a0);
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    return 0;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  if (*(char *)(param_1 + 0x1714) != '\0') {
    uVar14 = 2;
    iVar7 = FUN_014e94fc(param_1,2,uVar13,uVar12);
    if (iVar7 == 2) goto LAB_01889acc;
  }
  uVar14 = 0;
LAB_01889acc:
  FUN_014e56f4(uVar10,5,uVar12,uVar14,0);
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  FUN_014e2aa0(2,uVar12,&local_c0,&local_e0);
  FUN_01dc0d88(*(undefined8 *)(param_1 + 0x1a8),2,uVar13,local_c0 & 0xffffffff,local_e0 & 0xffffffff
               ,1,1);
  lVar9 = *(long *)(param_1 + 0x1a8);
  if ((*(int *)(lVar9 + 0x6c38) == 2) && (*(byte *)(lVar9 + 0x6c3c) == uVar13)) {
    local_c0 = local_c0 & 0xffffffff00000000;
    local_e0 = local_e0 & 0xffffffff00000000;
    FUN_014e2aa0(2,uVar12,&local_c0,&local_e0);
    uVar2 = *(uint *)(lVar9 + 0x6c3c);
    uVar5 = uVar2 >> 8 & 0x3f;
    if (((int)uVar5 <= (int)local_c0) && ((int)local_c0 < (int)(uVar5 + (uVar2 >> 0x14 & 0x3f)))) {
      uVar5 = uVar2 >> 0xe & 0x3f;
      if ((((int)uVar5 <= (int)local_e0) && ((int)local_e0 < (int)(uVar5 + (uVar2 >> 0x1a)))) &&
         (plVar11 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),2,uVar13,uVar12),
         plVar11 != (long *)0x0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x1a8);
        plVar1 = plVar11 + 5;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_e8 = plVar11;
        if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_014e63f0(uVar10,&local_e8,5,uVar12,0);
        if (local_e8 != (long *)0x0) {
          plVar11 = local_e8 + 5;
          do {
            lVar9 = *plVar11;
            iVar7 = (int)lVar9 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*local_e8 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 0x1a8);
        if ((*(char *)(param_1 + 0x1714) == '\0') ||
           (iVar7 = FUN_014e94fc(param_1,1,uVar13,uVar12), iVar7 != 2)) {
          uVar14 = 0;
        }
        else {
          uVar14 = 2;
        }
        FUN_014e56f4(uVar10,5,uVar12,uVar14,1);
        FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),5,uVar12,0);
      }
    }
  }
  FUN_01dc2a18(*(undefined8 *)(param_1 + 0x1a8),0);
  uVar13 = *(uint *)(*(long *)(param_1 + 0x1a8) + 0x6c3c);
  FUN_01ddc4d0(param_1,uVar13 & 0xff,uVar13 >> 0xe & 0x3f);
  *(undefined2 *)(param_1 + 0x1e4) = 0xfffe;
  return 1;
}


