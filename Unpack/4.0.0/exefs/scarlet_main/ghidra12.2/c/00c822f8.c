/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c822f8; name: FUN_00c822f8
 */


long * FUN_00c822f8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_48;
  undefined1 auStack_40 [8];
  long *local_38 [3];
  ulong *local_8;
  
  uVar1 = *param_2;
  local_48 = param_1[1];
  if (local_48 != 0) {
    uVar4 = local_48 - 1;
    if ((local_48 & uVar4) == 0) {
      local_60 = uVar4 & uVar1;
      plVar2 = *(long **)(*param_1 + local_60 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar1 && (plVar2[1] & uVar4) != local_60))
          goto LAB_00c82390;
        } while (plVar2[2] != uVar1);
        goto LAB_00c824c8;
      }
    }
    else {
      local_60 = uVar1;
      if (local_48 <= uVar1) {
        uVar4 = 0;
        if (local_48 != 0) {
          uVar4 = uVar1 / local_48;
        }
        local_60 = uVar1 - uVar4 * local_48;
      }
      plVar2 = *(long **)(*param_1 + local_60 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_00c82390;
          uVar4 = plVar2[1];
          if (uVar4 != uVar1) {
            if (local_48 <= uVar4) {
              uVar3 = 0;
              if (local_48 != 0) {
                uVar3 = uVar4 / local_48;
              }
              uVar4 = uVar4 - uVar3 * local_48;
            }
            if (uVar4 != local_60) goto LAB_00c82390;
          }
        } while (plVar2[2] != uVar1);
        goto LAB_00c824c8;
      }
    }
  }
LAB_00c82390:
  local_8 = param_2;
  FUN_00c836b0(local_38,param_1,uVar1,&DAT_03d63534,&local_8,auStack_40);
  if ((local_48 == 0) || (*(float *)(param_1 + 0xc) * (float)local_48 < (float)(param_1[0xb] + 1)))
  {
    uVar4 = (ulong)(local_48 < 3 || (local_48 & local_48 - 1) != 0) | local_48 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    FUN_0130fccc(param_1,uVar3);
    local_48 = param_1[1];
    if ((local_48 & local_48 - 1) == 0) {
      uVar1 = local_48 - 1 & uVar1;
    }
    else if (local_48 <= uVar1) {
      uVar4 = 0;
      if (local_48 != 0) {
        uVar4 = uVar1 / local_48;
      }
      uVar1 = uVar1 - uVar4 * local_48;
    }
    local_60 = uVar1;
  }
  plVar2 = *(long **)(*param_1 + local_60 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
    *(long **)(*param_1 + local_60 * 8) = plVar2;
    if (*local_38[0] != 0) {
      uVar1 = *(ulong *)(*local_38[0] + 8);
      if ((local_48 & local_48 - 1) == 0) {
        uVar1 = uVar1 & local_48 - 1;
      }
      else if (local_48 <= uVar1) {
        uVar4 = 0;
        if (local_48 != 0) {
          uVar4 = uVar1 / local_48;
        }
        uVar1 = uVar1 - uVar4 * local_48;
      }
      *(long **)(*param_1 + uVar1 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar2;
    *plVar2 = (long)local_38[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar2 = local_38[0];
LAB_00c824c8:
  return plVar2 + 6;
}


