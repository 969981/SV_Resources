/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02245198; name: FUN_02245198
 */


void FUN_02245198(long param_1)

{
  undefined8 *puVar1;
  long **pplVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  uVar6 = *(ulong *)(param_1 + 0x160);
  if (uVar6 == 0) {
    return;
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar8 = uVar6 - 1 & 0x746c50dd3115765e;
  }
  else {
    uVar8 = 0x746c50dd3115765e;
    if (uVar6 < 0x746c50dd3115765f) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = 0x746c50dd3115765e / uVar6;
      }
      uVar8 = 0x746c50dd3115765e - uVar8 * uVar6;
    }
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x158) + uVar8 * 8);
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (1 < uVar7) {
    do {
      uVar7 = plVar9[1];
      if (uVar7 == 0x746c50dd3115765e) {
        if (plVar9[2] == 0x746c50dd3115765e) goto LAB_022452ac;
      }
      else {
        if (uVar6 <= uVar7) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar3 * uVar6;
        }
        if (uVar7 != uVar8) {
          return;
        }
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar9[1] == 0x746c50dd3115765e) {
      if (plVar9[2] == 0x746c50dd3115765e) goto LAB_022452ac;
    }
    else if ((plVar9[1] & uVar6 - 1) != uVar8) {
      return;
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_02245508:
  bVar4 = (char)plVar9[6] != '\0';
  goto LAB_02245514;
LAB_022452ac:
  local_98 = 0x91fc4aa14b691c6;
  puStack_90 = &DAT_03c41801;
  local_88 = 4;
  local_80 = (long *)0x0;
  FUN_01315eac(&local_78,param_1,&local_98);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar4 = (char)local_78 != '\0';
  puVar1 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar4) {
    puVar1 = &local_70;
  }
  local_50 = *puVar1;
  puVar1 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar4) {
    puVar1 = &local_68;
  }
  local_48 = *puVar1;
  puVar1 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  if (bVar4) {
    puVar1 = &local_60;
  }
  local_40 = *puVar1;
  pplVar2 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar4) {
    pplVar2 = &local_58;
  }
  local_38 = *pplVar2;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  if ((char)local_78 != '\0') {
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if ((DAT_0485a0e8 == 0) ||
     (local_78 = FUN_00d4e220(DAT_0485a0e8,&local_50,0), (local_78 & 0xff) == 0)) goto LAB_0224551c;
  uVar6 = *(ulong *)(param_1 + 0x160);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & 0x746c50dd3115765e;
    }
    else {
      uVar8 = 0x746c50dd3115765e;
      if (uVar6 < 0x746c50dd3115765f) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = 0x746c50dd3115765e / uVar6;
        }
        uVar8 = 0x746c50dd3115765e - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x158) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == 0x746c50dd3115765e) {
            if (plVar9[2] == 0x746c50dd3115765e) goto LAB_02245508;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_022454c4;
          plVar9 = (long *)*plVar9;
          bVar4 = false;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == 0x746c50dd3115765e) {
            if (plVar9[2] == 0x746c50dd3115765e) goto LAB_02245508;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar8) goto LAB_022454c4;
          }
          plVar9 = (long *)*plVar9;
          bVar4 = false;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_02245514;
    }
  }
LAB_022454c4:
  bVar4 = false;
LAB_02245514:
  FUN_016a7f0c(DAT_0485a0e8,&local_78,bVar4);
LAB_0224551c:
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


