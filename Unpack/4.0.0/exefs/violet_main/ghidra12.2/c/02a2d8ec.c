/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2d8ec; name: FUN_02a2d8ec
 */


void FUN_02a2d8ec(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 local_7c [4];
  long *plStack_78;
  long *local_70;
  undefined8 local_68;
  
  local_68 = param_1;
  uVar5 = FUN_01910bc8(param_1,&local_68);
  FUN_02a2e560(&local_d0,uVar5);
  local_b0 = DAT_0483aec0;
  DAT_0483aec0 = (long *)0x0;
  FUN_02a2d874(&local_b0);
  DAT_0483aec0 = local_d0;
  local_d0 = (long *)0x0;
  FUN_02a2d874(&local_d0);
  local_70 = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar1 = DAT_0485a0a0 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_02a2dd50;
  }
  lVar10 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x20) + 0x10))();
  }
  plStack_78 = (long *)FUN_00cd16dc(&local_b0,local_68,&local_70);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 5;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar11 == -1) {
LAB_02a2dd50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar11 = 0;
  do {
    local_7c[0] = (undefined1)lVar11;
    local_b0 = (long *)local_7c;
    lVar6 = FUN_02a2efb0(DAT_0483aec0 + 8,local_7c,&local_b0);
    local_d0 = (long *)(&PTR_s_effect_materials_jewel_m00_jewel_04568aa8)[lVar11];
    FUN_00e52f24(&local_b0,&local_d0);
    FUN_00cbf934(lVar6 + 0x28,0,&local_b0,0,0);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x12);
  local_7c[0] = 99;
  local_b0 = (long *)local_7c;
  lVar11 = FUN_02a2efb0(DAT_0483aec0 + 8,local_7c,&local_b0);
  local_d0 = (long *)0x3c71587;
  FUN_00e52f24(&local_b0,&local_d0);
  FUN_00cbf934(lVar11 + 0x28,0,&local_b0,0,0);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  plVar1 = DAT_0483aec0 + 9;
  plVar8 = (long *)DAT_0483aec0[8];
  while (plVar8 != plVar1) {
    local_d0 = (long *)0x39deb424d448898e;
    pcStack_c8 = "pokemon_jewel";
    local_c0 = 0xd;
    local_b8 = (long *)0x0;
    FUN_00ebf090(&local_b0,lVar10,&local_d0,*(undefined8 *)(plVar8[6] + 0x210),
                 *(undefined8 *)(plVar8[6] + 0x248),&plStack_78,1,0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_d0 = plVar8 + 4;
    lVar11 = FUN_01fa4870(DAT_0483aec0 + 0xf,plVar8 + 4,&local_d0);
    plVar9 = local_90;
    if (*(char *)(lVar11 + 0x28) == '\0') {
      if ((char)local_b0 != '\0') {
        *(undefined8 *)(lVar11 + 0x30) = local_a8;
        *(undefined8 *)(lVar11 + 0x38) = local_a0;
        *(undefined8 *)(lVar11 + 0x40) = local_98;
        *(long **)(lVar11 + 0x48) = local_90;
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        *(undefined1 *)(lVar11 + 0x28) = 1;
        goto LAB_02a2dbd4;
      }
    }
    else {
      if ((char)local_b0 == '\0') {
        if (*(long **)(lVar11 + 0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + 0x48) + 0x20))();
        }
        *(undefined1 *)(lVar11 + 0x28) = 0;
      }
      else {
        *(undefined8 *)(lVar11 + 0x30) = local_a8;
        *(undefined8 *)(lVar11 + 0x38) = local_a0;
        *(undefined8 *)(lVar11 + 0x40) = local_98;
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))(local_90);
        }
        plVar7 = *(long **)(lVar11 + 0x48);
        *(long **)(lVar11 + 0x48) = plVar9;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
      }
LAB_02a2dbd4:
      if ((char)local_b0 != '\0') {
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        local_b0 = (long *)((ulong)local_b0 & 0xffffffffffffff00);
      }
    }
    plVar9 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar9 = plVar8 + 2;
      bVar4 = *(long **)*plVar9 != plVar8;
      plVar8 = (long *)*plVar9;
      if (bVar4) {
        do {
          lVar11 = *plVar9;
          plVar9 = (long *)(lVar11 + 0x10);
          plVar8 = (long *)*plVar9;
        } while (*(long *)*plVar9 != lVar11);
      }
    }
    else {
      do {
        plVar8 = plVar9;
        plVar9 = (long *)*plVar8;
      } while (plVar9 != (long *)0x0);
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 5;
    do {
      lVar11 = *plVar1;
      iVar3 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plStack_78 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_02a2dd78;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
  }
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar10 = *plVar1;
      iVar3 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_02a2dd78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


