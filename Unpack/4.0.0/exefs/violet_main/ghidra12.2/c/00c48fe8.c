/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c48fe8; name: FUN_00c48fe8
 */


void FUN_00c48fe8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  lVar5 = (**(code **)(*param_1 + 0xd8))();
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c490bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
    return;
  }
  lVar5 = FUN_00c4e600();
  uVar7 = *(ulong *)(lVar5 + 0x12c0);
  if (uVar7 == 200) {
    uVar3 = *(undefined4 *)(lVar5 + 0x12c8);
    *(undefined4 *)(lVar5 + 0x12c8) = 0;
    plVar6 = (long *)FUN_00c4e600();
    if (plVar6[600] != 0) {
      local_70 = plVar6 + plVar6[600] * 3;
      local_68 = plVar6;
      FUN_00c4ea30(&local_68,&local_70);
      plVar9 = (long *)*plVar6;
      plVar2 = plVar6;
      if (plVar6[600] != 0) {
        plVar2 = plVar6 + plVar6[600] * 3;
      }
      if (plVar2 == plVar6) {
        local_78 = 0;
        uVar7 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar6 + 0xd0))();
        if ((long *)*plVar6 != plVar9) {
          (**(code **)(*plVar9 + 0x100))(plVar9,plVar6,plVar6);
          plVar9 = (long *)*plVar6;
        }
        plVar1 = plVar6 + 3;
        if (plVar2 == plVar1) {
          local_78 = 0;
          uVar7 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar1 + 0xd0))();
          bVar4 = (long *)*plVar1 != plVar9;
          if (bVar4) {
            (**(code **)(*plVar9 + 0x100))(plVar9,plVar6,plVar6 + 3);
            plVar9 = (long *)plVar6[3];
          }
          local_78 = (ulong)bVar4;
          plVar1 = plVar6 + 6;
          if (plVar2 == plVar1) {
            uVar7 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            if ((long *)*plVar1 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,plVar6 + 6);
              plVar9 = (long *)plVar6[6];
              local_78 = 2;
            }
            plVar1 = plVar6 + 9;
            if (plVar2 == plVar1) {
              uVar7 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar9) {
                (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,plVar6 + 9);
                plVar9 = (long *)plVar6[9];
                local_78 = 3;
              }
              plVar1 = plVar6 + 0xc;
              if (plVar2 == plVar1) {
                uVar7 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar9) {
                  (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,plVar6 + 0xc);
                  plVar9 = (long *)plVar6[0xc];
                  local_78 = 4;
                }
                plVar1 = plVar6 + 0xf;
                if (plVar2 == plVar1) {
                  uVar7 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar9) {
                    (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,plVar6 + 0xf);
                    plVar9 = (long *)plVar6[0xf];
                    local_78 = 5;
                  }
                  uVar7 = 6;
                  for (local_80 = plVar6 + 0x12; plVar2 != local_80; local_80 = local_80 + 3) {
                    (**(code **)(*(long *)*local_80 + 0xd0))();
                    if ((long *)*local_80 != plVar9) {
                      (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,local_80);
                      plVar9 = (long *)*local_80;
                      local_78 = uVar7;
                    }
                    uVar7 = uVar7 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar9 + 0x100))(plVar9,plVar6 + local_78 * 3,plVar6 + uVar7 * 3);
      plVar6[600] = 0;
    }
    uVar7 = *(ulong *)(lVar5 + 0x12c0);
    *(undefined4 *)(lVar5 + 0x12c8) = uVar3;
  }
  if (199 < uVar7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined8 *)(lVar5 + uVar7 * 0x18);
  *(int *)(puVar8 + 2) = (int)param_3;
  *(int *)((long)puVar8 + 0x14) = (int)param_4;
  *puVar8 = param_1;
  puVar8[1] = param_2;
  *(long *)(lVar5 + 0x12c0) = *(long *)(lVar5 + 0x12c0) + 1;
                    /* WARNING: Could not recover jumptable at 0x00c49084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))(param_1);
  return;
}


