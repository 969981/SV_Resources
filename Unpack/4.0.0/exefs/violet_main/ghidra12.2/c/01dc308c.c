/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc308c; name: FUN_01dc308c
 */


void FUN_01dc308c(undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,
                 float *param_5)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *local_130;
  long local_128;
  long lStack_120;
  long local_118;
  long *local_110;
  long *local_108 [19];
  long *local_68;
  
  if (((param_5 != (float *)0x0) && (*(char *)((long)param_5 + 0xb) != '\0')) &&
     ((ulong)*(byte *)((long)param_5 + 9) < 0xb0)) {
    FUN_014e5ac0(local_108,param_4 + (ulong)*(byte *)((long)param_5 + 9) * 0x98 + 0x30);
    local_68 = *(long **)(param_4 + 0x6cd0);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x58))();
    }
    plVar3 = local_108[0];
    plVar4 = (long *)PTR_DAT_047d8b70;
    plVar1 = (long *)PTR_PTR_047d4508;
    plVar7 = (long *)PTR_DAT_047d8b70;
    if (local_108[0] != (long *)0x0) {
      plVar7 = local_108[0] + 6;
    }
    local_128 = *plVar7;
    plVar7 = (long *)PTR_PTR_047d4508;
    if (local_108[0] != (long *)0x0) {
      plVar7 = local_108[0] + 7;
    }
    lStack_120 = *plVar7;
    if (local_108[0] == (long *)0x0) {
      local_118 = 0;
    }
    else {
      local_118 = local_108[0][8];
    }
    local_110 = (long *)0x0;
    if (local_108[0] != (long *)0x0) {
      (**(code **)(*local_108[0] + 0x18))(local_108[0]);
    }
    local_110 = plVar3;
    fVar8 = (float)FUN_014a3d64(&local_68,&local_128);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x60))();
    }
    fVar9 = *param_5;
    fVar10 = param_5[1];
    local_130 = *(long **)(param_4 + 0x6cd0);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x58))();
    }
    plVar5 = local_108[0];
    plVar7 = plVar1;
    plVar3 = plVar4;
    if (local_108[0] != (long *)0x0) {
      plVar7 = local_108[0] + 7;
      plVar3 = local_108[0] + 6;
    }
    local_128 = *plVar3;
    lStack_120 = *plVar7;
    if (local_108[0] == (long *)0x0) {
      local_118 = 0;
    }
    else {
      local_118 = local_108[0][8];
    }
    local_110 = (long *)0x0;
    if (local_108[0] != (long *)0x0) {
      (**(code **)(*local_108[0] + 0x18))(local_108[0]);
    }
    local_110 = plVar5;
    FUN_01442568(fVar8 + fVar9,param_2 + fVar10,param_3,&local_130,&local_128);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x60))();
    }
    cVar2 = *(char *)((long)param_5 + 10) + -1;
    *(char *)((long)param_5 + 10) = cVar2;
    if ((cVar2 == '\0') &&
       (*(undefined1 *)((long)param_5 + 0xb) = 0, *(char *)(param_5 + 2) == '\x01')) {
      plVar7 = *(long **)(param_4 + 0x6cd0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x58))(plVar7);
      }
      if (local_108[0] != (long *)0x0) {
        plVar1 = local_108[0] + 7;
        plVar4 = local_108[0] + 6;
      }
      local_128 = *plVar4;
      lStack_120 = *plVar1;
      if (local_108[0] == (long *)0x0) {
        local_118 = 0;
      }
      else {
        local_118 = local_108[0][8];
      }
      local_110 = (long *)0x0;
      if (local_108[0] != (long *)0x0) {
        (**(code **)(*local_108[0] + 0x18))(local_108[0]);
      }
      local_110 = local_108[0];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x58))(plVar7);
        lVar6 = FUN_00c8c7b4(plVar7[0x2e],&local_128);
        (**(code **)(*plVar7 + 0x60))(plVar7);
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
        }
      }
      if (local_108[0] != (long *)0x0) {
        (**(code **)(*local_108[0] + 0x20))(local_108[0]);
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x60))(plVar7);
      }
    }
    FUN_014e58d8(local_108);
  }
  return;
}


