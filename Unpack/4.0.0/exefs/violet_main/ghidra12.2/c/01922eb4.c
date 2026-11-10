/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01922eb4; name: FUN_01922eb4
 */


void FUN_01922eb4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 local_84 [4];
  long local_80;
  undefined1 local_74 [4];
  long local_70 [4];
  
  puVar3 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar5 = PTR_DAT_047d6ca8;
  puVar4 = PTR_DAT_047d6ca0;
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  puVar2 = PTR_DAT_047d0a08;
  if ((((lVar10 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) && (iVar6 = FUN_00f21480(), iVar6 == 1))
     && (*(long *)(param_1 + 0x218) != 0)) {
    if (*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x1c8)) {
      local_74[0] = (undefined1)
                    ((uint)((int)*(long *)(param_1 + 0x1c8) - (int)*(long *)(param_1 + 0x1c0)) >> 2)
      ;
      FUN_016947d8(local_70);
      local_84[0] = 1;
      if ((local_70[0] != 0) && (FUN_01923450(&local_80,local_84,local_70[0] + 8), local_70[0] != 0)
         ) {
        FUN_019236f4(&local_80,local_74,local_70[0] + 8);
      }
      lVar1 = *(long *)(param_1 + 0x1c8);
      for (lVar10 = *(long *)(param_1 + 0x1c0); lVar10 != lVar1; lVar10 = lVar10 + 4) {
        if (local_70[0] != 0) {
          FUN_019233cc(&local_80,lVar10,local_70[0] + 8);
        }
      }
      plVar11 = *(long **)(param_1 + 0x218);
      uVar7 = FUN_014c27b0(local_70);
      uVar8 = FUN_014c27c8(local_70);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar7,uVar8);
      if ((uVar9 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1c0);
      }
      FUN_01694aa8(local_70);
      if (*(long *)(param_1 + 0x218) == 0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      FUN_016947d8(local_70);
      local_74[0] = 2;
      if ((local_70[0] != 0) && (FUN_01923450(&local_80,local_74,local_70[0] + 8), local_70[0] != 0)
         ) {
        FUN_01923850(&local_80,param_1 + 0x1fa,local_70[0] + 8);
      }
      plVar11 = *(long **)(param_1 + 0x218);
      uVar7 = FUN_014c27b0(local_70);
      uVar8 = FUN_014c27c8(local_70);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar7,uVar8);
      if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x1f8) != '\0')) {
        *(undefined1 *)(param_1 + 0x1f8) = 0;
      }
      FUN_01694aa8(local_70);
      if (*(long *)(param_1 + 0x218) == 0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x1fe) != '\0') {
      FUN_016947d8(local_70);
      local_74[0] = 3;
      if (local_70[0] != 0) {
        FUN_01923450(&local_80,local_74,local_70[0] + 8);
        if (local_70[0] != 0) {
          FUN_01923664(&local_80,param_1 + 0x1ff,local_70[0] + 8);
        }
      }
      plVar11 = *(long **)(param_1 + 0x218);
      uVar7 = FUN_014c27b0(local_70);
      uVar8 = FUN_014c27c8(local_70);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar7,uVar8);
      if ((uVar9 & 1) != 0) {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c98);
        }
        lVar10 = *(long *)puVar4;
        *(long *)puVar5 = lVar10;
        if (lVar10 != 0) {
          lVar10 = *(long *)puVar2;
          if (lVar10 == 0) {
            local_80 = 0;
          }
          else {
            local_80 = *(long *)(lVar10 + 0xb8);
            if (local_80 != 0) {
              FUN_01ec92cc(param_1,param_1 + 0x1ff,&local_80);
            }
          }
        }
        if (*(char *)(param_1 + 0x1fe) != '\0') {
          *(undefined1 *)(param_1 + 0x1fe) = 0;
        }
      }
      FUN_01694aa8(local_70);
      if (*(long *)(param_1 + 0x218) == 0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x204) != '\0') {
      FUN_016947d8(local_70);
      local_74[0] = 4;
      if ((local_70[0] != 0) && (FUN_01923450(&local_80,local_74,local_70[0] + 8), local_70[0] != 0)
         ) {
        FUN_01923514(&local_80,param_1 + 0x205,local_70[0] + 8);
      }
      plVar11 = *(long **)(param_1 + 0x218);
      uVar7 = FUN_014c27b0(local_70);
      uVar8 = FUN_014c27c8(local_70);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar7,uVar8);
      if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x204) != '\0')) {
        *(undefined1 *)(param_1 + 0x204) = 0;
      }
      FUN_01694aa8(local_70);
      if (*(long *)(param_1 + 0x218) == 0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x20a) != '\0') {
      FUN_016947d8(local_70);
      local_74[0] = 5;
      if (local_70[0] != 0) {
        FUN_01923450(&local_80,local_74,local_70[0] + 8);
        if (local_70[0] != 0) {
          FUN_019238d4(&local_80,param_1 + 0x20b,local_70[0] + 8);
        }
      }
      plVar11 = *(long **)(param_1 + 0x218);
      uVar7 = FUN_014c27b0(local_70);
      uVar8 = FUN_014c27c8(local_70);
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11,uVar7,uVar8);
      if ((uVar9 & 1) != 0) {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c98);
        }
        lVar10 = *(long *)puVar4;
        *(long *)puVar5 = lVar10;
        if (lVar10 != 0) {
          lVar10 = *(long *)puVar2;
          if (lVar10 == 0) {
            local_80 = 0;
          }
          else {
            local_80 = *(long *)(lVar10 + 0xb8);
            if (local_80 != 0) {
              FUN_01ec9400(param_1,param_1 + 0x20b,&local_80);
            }
          }
        }
        if (*(char *)(param_1 + 0x20a) != '\0') {
          *(undefined1 *)(param_1 + 0x20a) = 0;
        }
      }
      FUN_01694aa8(local_70);
    }
  }
  return;
}


