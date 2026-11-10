/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00720d48; name: FUN_00720d48
 */


void FUN_00720d48(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  if (*param_1 == *param_2) {
    lVar1 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar1;
    lVar1 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar1;
    return;
  }
  local_68 = 0;
  local_60 = (undefined4)param_1[1];
  FUN_0071ece8(&local_68);
  lStack_30 = param_1[2];
  local_28 = *(ulong *)(lStack_30 + 0x18);
  uVar2 = *(ulong *)(lStack_30 + 8);
  if (local_28 < uVar2) {
    do {
      local_38 = *(long **)(*(long *)(lStack_30 + 0x20) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(lStack_30 + 0x20) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        goto LAB_00720e08;
      }
      local_28 = local_28 + 1;
    } while (uVar2 != local_28);
    local_38 = (long *)0x0;
    local_28 = uVar2;
  }
  else {
    local_38 = (long *)0x0;
  }
LAB_00720e08:
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_00720f70(&local_68,&local_38,&local_50);
  FUN_00720e58(param_1,param_2);
  FUN_00720e58(param_2,&local_68);
  FUN_0071e2e8(&local_68);
  return;
}


