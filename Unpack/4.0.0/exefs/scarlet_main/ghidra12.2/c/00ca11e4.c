/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca11e4; name: FUN_00ca11e4
 */


void FUN_00ca11e4(undefined4 param_1,long *param_2,byte param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  float __x;
  float fVar9;
  long *local_d8;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  long *local_b8;
  undefined4 local_b0;
  byte local_ac;
  long *local_a8;
  long *local_48;
  
  local_ac = param_3 & 1;
  local_d0 = FUN_00ca1504;
  local_c8 = FUN_02e50f14;
  local_c0 = &LAB_02e51058;
  local_b8 = (long *)&LAB_02e51064;
  puVar8 = (undefined8 *)param_2[0xf];
  puVar1 = (undefined8 *)param_2[0x10];
  pcVar5 = FUN_02e50f14;
  local_b0 = param_1;
  local_a8 = param_2;
  if (puVar8 != puVar1) {
    local_48 = (long *)*puVar8;
    FUN_00ca1504(&local_b0,&local_48);
    if (puVar8 + 4 != puVar1) {
      local_48 = (long *)puVar8[4];
      (*local_d0)(&local_b0,&local_48);
      if (puVar8 + 8 != puVar1) {
        local_48 = (long *)puVar8[8];
        (*local_d0)(&local_b0,&local_48);
        if (puVar8 + 0xc != puVar1) {
          local_48 = (long *)puVar8[0xc];
          (*local_d0)(&local_b0,&local_48);
          if (puVar8 + 0x10 != puVar1) {
            local_48 = (long *)puVar8[0x10];
            (*local_d0)(&local_b0,&local_48);
            for (puVar8 = puVar8 + 0x14; puVar8 != puVar1; puVar8 = puVar8 + 4) {
              local_48 = (long *)*puVar8;
              (*local_d0)(&local_b0,&local_48);
            }
          }
        }
      }
    }
    pcVar5 = local_c8;
    if (local_c8 == (code *)0x0) goto LAB_00ca131c;
  }
  local_c0 = (undefined1 *)0x0;
  local_b8 = (long *)0x0;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  (*pcVar5)(&local_b0);
LAB_00ca131c:
  lVar6 = param_2[0x4d];
  if (((lVar6 != 0) && (*(undefined8 **)(lVar6 + 0x78) != *(undefined8 **)(lVar6 + 0x80))) &&
     ((undefined8 *)param_2[0xf] != (undefined8 *)param_2[0x10])) {
    plVar7 = *(long **)param_2[0xf];
    plVar2 = (long *)(**(code **)(*(long *)**(undefined8 **)(lVar6 + 0x78) + 0x78))();
    plVar3 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7);
    plVar4 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
    local_d0 = (code *)*plVar4;
    local_c8 = (code *)plVar4[1];
    local_c0 = (undefined1 *)plVar4[2];
    local_b8 = (long *)plVar4[3];
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x18))();
    }
    pcVar5 = local_d0;
    plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (pcVar5 != (code *)*plVar4) {
      (**(code **)(*plVar7 + 0x98))(0,plVar7,&local_d0);
      plVar3 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7);
    }
    __x = (float)(**(code **)(*plVar2 + 0x80))(plVar2);
    fVar9 = (float)(**(code **)(*plVar3 + 0x80))(plVar3);
    if (__x != fVar9) {
      if (1.0 < __x) {
        __x = fmodf(__x,1.0);
      }
      (**(code **)(*plVar3 + 0x88))(__x,plVar3);
    }
    (**(code **)(*(long *)param_2[0x4d] + 0xc0))(&local_48);
    (**(code **)(*param_2 + 0xc0))(&local_d8,param_2);
    (**(code **)(*local_d8 + 0x198))(local_d8,local_48);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x18))();
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  return;
}


