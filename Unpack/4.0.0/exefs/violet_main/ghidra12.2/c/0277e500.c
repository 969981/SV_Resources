/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277e500; name: FUN_0277e500
 */


void FUN_0277e500(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  char local_b8 [32];
  long *local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_047d8b70;
  puVar4 = PTR_PTR_047d4508;
  puVar3 = PTR_DAT_047d4248;
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 != 0) {
    for (lVar16 = *(long *)(lVar11 + 0x70); lVar16 != lVar11 + 0x68; lVar16 = *(long *)(lVar16 + 8))
    {
      lVar12 = *(long *)(lVar16 + 0x10);
      if ((int)((ulong)(*(long *)(lVar12 + 0x58) - *(long *)(lVar12 + 0x50)) >> 3) != 0) {
        uVar15 = 0;
        do {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + uVar15 * 8);
          if (**(char **)(lVar12 + 0x110) == '\0') {
            local_90 = *(long *)(lVar12 + 0xe8);
            local_88 = *(long *)(lVar12 + 0xf0);
            local_80 = *(ulong *)(lVar12 + 0xf8);
            local_78 = *(long **)(lVar12 + 0x100);
            if (local_78 != (long *)0x0) {
              pcVar14 = *(code **)(*local_78 + 0x18);
LAB_0277e724:
              (*pcVar14)();
            }
          }
          else {
            FUN_00d1e980(&local_68,lVar12 + 0x108,&DAT_03c9c9c5,lVar12 + 0xe8);
            plVar6 = local_68;
            plVar9 = (long *)puVar4;
            plVar2 = (long *)puVar5;
            if (local_68 != (long *)0x0) {
              plVar9 = local_68 + 7;
              plVar2 = local_68 + 6;
            }
            local_90 = *plVar2;
            local_88 = *plVar9;
            if (local_68 == (long *)0x0) {
              local_80 = 0;
              local_78 = local_68;
            }
            else {
              local_80 = local_68[8];
              (**(code **)(*local_68 + 0x18))(local_68);
              local_78 = plVar6;
              if (local_68 != (long *)0x0) {
                pcVar14 = *(code **)(*local_68 + 0x20);
                goto LAB_0277e724;
              }
            }
          }
          uVar13 = local_80 & 0xffffffff;
          if (0 < (int)local_80) {
            pcVar10 = (char *)(local_88 + uVar13);
            iVar7 = 0;
            do {
              uVar1 = (int)uVar13 - 1;
              uVar13 = (ulong)uVar1;
              if (*(char *)(local_88 + uVar13) == ':') {
                if ((iVar7 == 0) || (local_70 = (long *)0x0, *pcVar10 == '\0')) {
                  local_70 = (long *)0x0;
                  plVar9 = (long *)FUN_00d44228();
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 0x18))(plVar9);
                  }
                  if (local_70 != (long *)0x0) {
                    lVar12 = *local_70;
                    local_70 = plVar9;
                    (**(code **)(lVar12 + 0x20))();
                    plVar9 = local_70;
                  }
                }
                else {
                  if (((*PTR_DAT_047d4240 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d4510,puVar3,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d4240);
                  }
                  uVar8 = *(undefined8 *)puVar3;
                  *(undefined8 *)PTR_DAT_047d4250 = uVar8;
                  FUN_00cf9884(&local_68,uVar8,pcVar10);
                  plVar9 = local_70;
                  local_70 = (long *)0x0;
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 0x20))();
                  }
                  local_70 = local_68;
                  plVar9 = local_70;
                }
                goto LAB_0277e670;
              }
              pcVar10 = pcVar10 + -1;
              iVar7 = iVar7 + 1;
            } while (0 < (int)uVar1);
          }
          FUN_00daf940(&local_70,&local_90);
          plVar9 = local_70;
LAB_0277e670:
          local_70 = plVar9;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          plVar6 = local_70;
          lVar12 = *(long *)(lVar16 + 0x10);
          plVar9 = (long *)puVar4;
          plVar2 = (long *)puVar5;
          if (local_70 != (long *)0x0) {
            plVar9 = local_70 + 7;
            plVar2 = local_70 + 6;
          }
          local_90 = *plVar2;
          local_88 = *plVar9;
          if (local_70 == (long *)0x0) {
            local_80 = 0;
          }
          else {
            local_80 = local_70[8];
            local_78 = (long *)0x0;
            (**(code **)(*local_70 + 0x18))(local_70);
          }
          local_78 = plVar6;
          FUN_00db3d00(local_b8,param_1,param_2,lVar12 + 0x30,&local_90);
          if (local_b8[0] != '\0') {
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            local_b8[0] = '\0';
          }
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          lVar12 = *(long *)(lVar16 + 0x10);
          uVar15 = uVar15 + 1;
        } while (uVar15 < ((ulong)(*(long *)(lVar12 + 0x58) - *(long *)(lVar12 + 0x50)) >> 3 &
                          0xffffffff));
      }
    }
  }
  return;
}


