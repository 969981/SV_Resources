/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e85a0; name: FUN_014e85a0
 */


void FUN_014e85a0(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  iVar11 = *(int *)(param_1 + 0x108);
  if (iVar11 == 0) {
    lVar9 = FUN_01195854();
    uVar15 = (uint)*(byte *)(lVar9 + 0x570);
    iVar14 = 0;
    iVar11 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar14 = 1;
    if (iVar11 != 1) {
      if (iVar11 != 2) {
        uVar15 = 0xffffffff;
        iVar14 = 3;
        goto LAB_014e85dc;
      }
      iVar14 = 2;
    }
    uVar15 = *(uint *)(param_1 + 0x2a4);
  }
LAB_014e85dc:
  iVar16 = param_2[1];
  if (iVar11 == 0) {
    iVar16 = *param_2 + iVar16 * 6;
  }
  else if ((iVar11 != 1) && (iVar11 != 2)) {
    iVar16 = 1;
  }
  if (((iVar14 == 3) ||
      (lVar9 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar14,uVar15,iVar16), lVar9 == 0)) ||
     (((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0 &&
      (sVar3 = FUN_00cf44f4(), sVar3 == 0)))) {
    FUN_014e8ce4(param_1);
    return;
  }
  if (iVar14 == 0) {
    uVar10 = FUN_00cf4cfc(*(undefined8 *)(lVar9 + 0x70));
    plVar17 = *(long **)(param_1 + 0x1c0);
    if (((uVar10 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
      FUN_014c0fb4(plVar17,0,lVar9);
      uVar18 = *(undefined8 *)(param_1 + 0x1c0);
      if (*(long *)(*(long *)(lVar9 + 0x70) + 8) == 0) {
        uVar6 = FUN_00cf44f4();
        uVar7 = FUN_00cf41a8(*(undefined8 *)(lVar9 + 0x70));
        uVar8 = FUN_00f14b64(*(undefined8 *)(lVar9 + 0x70));
        uVar5 = FUN_00f13da0(uVar6,uVar7,uVar8);
        uVar5 = uVar5 & 0xff;
      }
      else {
        uVar5 = FUN_00e9987c();
      }
      FUN_011b6a88(uVar18,1,uVar5,3,0,1);
      local_80 = 3;
      local_78 = (long *)0x0;
      local_70 = 0x779b6f70b898b0ab;
      pcStack_68 = "L_cursorover_popup_00/T_name_poke_01";
      local_60 = 0x24;
      local_58 = (long *)0x0;
      local_90 = &DAT_e6b50e272d8cd992;
      puStack_88 = &DAT_03c3b7e8;
      local_b0 = 0x6f10d37858aed32b;
      pcStack_a8 = "msg_ui_box_popup_00";
      local_a0 = 0x13;
      local_98 = (long *)0x0;
      FUN_00f11e84(&local_b8,&local_90,&local_b0);
      FUN_014e4b9c(param_1,&local_70,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar17 = local_b8 + 5;
        do {
          lVar12 = *plVar17;
          iVar11 = (int)lVar12 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *(int *)plVar17 = iVar11;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar17 = local_78;
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
        plVar17 = local_78;
      }
    }
    else {
      uVar10 = (**(code **)(*plVar17 + 0x78))(plVar17,plVar17[8],0);
      if ((int)plVar17[0xb] != 0) {
        lVar12 = plVar17[8];
        *(ulong *)(plVar17[0xc] + 8) = uVar10 & 0xffff | 0x20000;
        plVar13 = (long *)plVar17[0xc];
        lVar19 = *plVar13;
        if (*(char *)(lVar19 + 0x54) != '\0') {
          uVar4 = FUN_011b8d00(*(undefined8 *)(lVar19 + 0x30),*(undefined8 *)(lVar12 + 0x30),
                               *(undefined2 *)(lVar19 + 0x50));
          *(undefined2 *)(lVar19 + 0x52) = uVar4;
          plVar13 = (long *)plVar17[0xc];
        }
        *(undefined2 *)(plVar13 + 2) = 0;
        *(ushort *)(plVar17[0xc] + 0x12) = *(ushort *)(plVar17[0xc] + 0x12) & 0xfffe;
      }
      local_70 = 0x779b6f70b898b0ab;
      pcStack_68 = "L_cursorover_popup_00/T_name_poke_01";
      local_60 = 0x24;
      local_58 = (long *)0x0;
      local_90 = &DAT_e6b50e272d8cd992;
      puStack_88 = &DAT_03c3b7e8;
      local_80 = 3;
      local_78 = (long *)0x0;
      local_b0 = 0xf3a3439af010602;
      pcStack_a8 = "msg_ui_box_pokename";
      local_a0 = 0x13;
      local_98 = (long *)0x0;
      FUN_014a9284(param_1,&local_70,&local_90,&local_b0);
      plVar17 = local_98;
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
  FUN_014e89c0(param_1,uVar18,uVar15,iVar16);
  FUN_014e8ab0(*(undefined8 *)(param_1 + 0x158),lVar9,iVar14,uVar15,iVar16);
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    FUN_014e9174(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 0x2a0) = 1;
  }
  return;
}


