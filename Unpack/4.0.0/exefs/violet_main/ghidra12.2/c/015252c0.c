/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015252c0; name: FUN_015252c0
 */


void FUN_015252c0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_e0;
  undefined8 *local_d8;
  long *local_d0;
  undefined8 local_80;
  long local_78;
  undefined8 local_70 [2];
  
  puVar3 = PTR_DAT_047d8e30;
  puVar2 = PTR_DAT_047d8e28;
  if (param_1 != param_2) {
    do {
      lVar8 = *param_1;
      if (lVar8 != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar8 + 8))((undefined8 *)(lVar8 + 8));
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
            uVar7 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar7;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar3 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar2);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            uVar6 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar6 & 1) == 0) {
              lVar8 = lVar8 + -0x20;
              *(int *)param_3[1] = *(int *)param_3[1] + 1;
              local_78 = lVar8;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              uVar6 = FUN_015255c0(lVar8,PTR_DAT_047d3e30);
              if ((uVar6 & 1) != 0) {
                lStack_e0 = (long)&local_80 + 4;
                local_d8 = &local_80;
                local_d0 = &local_78;
                local_80 = 0;
                puVar9 = *(undefined8 **)(local_78 + 0x178);
                puVar1 = *(undefined8 **)(local_78 + 0x180);
                if ((puVar9 != puVar1) && (FUN_0129faf8(&lStack_e0,*puVar9), puVar9 + 1 != puVar1))
                {
                  local_70[0] = puVar9[1];
                  FUN_0129faf0(&lStack_e0,local_70);
                  if (puVar9 + 2 != puVar1) {
                    local_70[0] = puVar9[2];
                    FUN_0129faf0(&lStack_e0,local_70);
                    if (puVar9 + 3 != puVar1) {
                      local_70[0] = puVar9[3];
                      FUN_0129faf0(&lStack_e0,local_70);
                      for (puVar9 = puVar9 + 4; puVar9 != puVar1; puVar9 = puVar9 + 1) {
                        local_70[0] = *puVar9;
                        FUN_0129faf0(&lStack_e0,local_70);
                      }
                    }
                  }
                }
                FUN_02b80548(&lStack_e0);
                if ((local_80._4_4_ == (int)local_80) && (0 < (int)local_80)) {
                  *(int *)*param_3 = *(int *)*param_3 + 1;
                }
              }
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


