/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00720e58; name: FUN_00720e58
 */


long FUN_00720e58(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long lStack_60;
  ulong local_58;
  long *local_50;
  long lStack_48;
  ulong local_40;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  if (param_1 != param_2) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar5 = *(ulong *)(lVar4 + 0x18);
    plVar1 = local_50;
    lVar2 = lStack_48;
    uVar3 = local_40;
    if (uVar5 < *(ulong *)(lVar4 + 8)) {
LAB_00720e8c:
      plVar6 = *(long **)(*(long *)(lVar4 + 0x20) + uVar5 * 8);
      if (plVar6 == (long *)0x0) goto code_r0x00720e94;
      if (plVar6 == *(long **)(*(long *)(lVar4 + 0x20) + (uVar5 ^ 1) * 8)) {
        plVar6 = *(long **)(*plVar6 + 0x20);
      }
      while (local_50 = plVar6, local_40 = uVar5, lStack_48 = lVar4, local_50 != (long *)0x0) {
        FUN_0071e3bc(&local_38,param_1,&local_50);
        lVar4 = lStack_30;
        uVar5 = local_28;
        plVar6 = local_38;
        uVar3 = local_40;
        lVar2 = lStack_48;
        plVar1 = local_50;
      }
    }
LAB_00720ee4:
    local_40 = uVar3;
    lStack_48 = lVar2;
    local_50 = plVar1;
    lStack_60 = *(long *)(param_2 + 0x10);
    local_58 = *(ulong *)(lStack_60 + 0x18);
    uVar5 = *(ulong *)(lStack_60 + 8);
    if (local_58 < uVar5) {
      do {
        local_68 = *(long **)(*(long *)(lStack_60 + 0x20) + local_58 * 8);
        if (local_68 != (long *)0x0) {
          if (local_68 == *(long **)(*(long *)(lStack_60 + 0x20) + (local_58 ^ 1) * 8)) {
            local_68 = *(long **)(*local_68 + 0x20);
          }
          goto LAB_00720f3c;
        }
        local_58 = local_58 + 1;
      } while (uVar5 != local_58);
      local_68 = (long *)0x0;
      local_58 = uVar5;
    }
    else {
      local_68 = (long *)0x0;
    }
LAB_00720f3c:
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_00720f70(param_1,&local_68,&local_80);
  }
  return param_1;
code_r0x00720e94:
  uVar5 = uVar5 + 1;
  if (*(ulong *)(lVar4 + 8) == uVar5) goto LAB_00720ee4;
  goto LAB_00720e8c;
}


