/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f12718; name: FUN_00f12718
 */


long * FUN_00f12718(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong local_58;
  ulong local_40;
  long *local_38 [3];
  ulong *local_8;
  
  uVar1 = *param_2;
  local_40 = param_1[1];
  if (local_40 != 0) {
    uVar3 = local_40 - 1;
    if ((local_40 & uVar3) == 0) {
      local_58 = uVar3 & uVar1;
      plVar5 = *(long **)(*param_1 + local_58 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar1 && (plVar5[1] & uVar3) != local_58))
          goto LAB_00f127c0;
        } while (plVar5[2] != uVar1);
        goto LAB_00f12784;
      }
    }
    else {
      local_58 = uVar1;
      if (local_40 <= uVar1) {
        uVar3 = 0;
        if (local_40 != 0) {
          uVar3 = uVar1 / local_40;
        }
        local_58 = uVar1 - uVar3 * local_40;
      }
      plVar5 = *(long **)(*param_1 + local_58 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_00f127c0;
          uVar3 = plVar5[1];
          if (uVar3 != uVar1) {
            if (local_40 <= uVar3) {
              uVar4 = 0;
              if (local_40 != 0) {
                uVar4 = uVar3 / local_40;
              }
              uVar3 = uVar3 - uVar4 * local_40;
            }
            if (uVar3 != local_58) goto LAB_00f127c0;
          }
        } while (plVar5[2] != uVar1);
        goto LAB_00f12784;
      }
    }
  }
LAB_00f127c0:
  local_8 = param_2;
  FUN_00f12990(local_38,param_1,uVar1,&local_8);
  if ((local_40 == 0) || (*(float *)(param_1 + 0xc) * (float)local_40 < (float)(param_1[0xb] + 1)))
  {
    uVar3 = (ulong)(local_40 < 3 || (local_40 & local_40 - 1) != 0) | local_40 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_011cc8a8(param_1,uVar4);
    local_40 = param_1[1];
    if ((local_40 & local_40 - 1) == 0) {
      uVar1 = local_40 - 1 & uVar1;
    }
    else if (local_40 <= uVar1) {
      uVar3 = 0;
      if (local_40 != 0) {
        uVar3 = uVar1 / local_40;
      }
      uVar1 = uVar1 - uVar3 * local_40;
    }
    local_58 = uVar1;
  }
  plVar5 = local_38[0];
  plVar2 = *(long **)(*param_1 + local_58 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
    *(long **)(*param_1 + local_58 * 8) = plVar2;
    if (*local_38[0] != 0) {
      uVar1 = *(ulong *)(*local_38[0] + 8);
      if ((local_40 & local_40 - 1) == 0) {
        uVar1 = uVar1 & local_40 - 1;
      }
      else if (local_40 <= uVar1) {
        uVar3 = 0;
        if (local_40 != 0) {
          uVar3 = uVar1 / local_40;
        }
        uVar1 = uVar1 - uVar3 * local_40;
      }
      *(long **)(*param_1 + uVar1 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
  }
  local_38[0] = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_01430c10(local_38);
LAB_00f12784:
  return plVar5 + 6;
}


