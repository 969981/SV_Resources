/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ed590; name: FUN_002ed590
 */


void FUN_002ed590(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  ulong local_18;
  
  local_18 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    uVar2 = param_1[1];
    if (uVar2 < *(ulong *)(lVar3 + 0x20) >> 1) {
      param_1[1] = uVar2 + 1;
      if ((*(byte *)(lVar3 + 0x20) & 1) == 0) {
        lVar3 = lVar3 + 0x28;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      lStack_38 = param_1[4];
      local_40 = param_1[3];
      lStack_28 = param_1[6];
      lStack_30 = param_1[5];
      plVar1 = *(long **)(lVar3 + uVar2 * 8);
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,param_1[2],&local_40,param_1[7],param_1 + 9,&local_18);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_002ed590(param_1,local_18);
      if (local_18 < 5) {
        return;
      }
      FUN_00350fd0();
      return;
    }
    lVar3 = param_1[8];
    param_2 = 0;
  }
  else {
    lVar3 = param_1[8];
    if (4 < param_2) {
      param_2 = FUN_00350fb0(param_2);
    }
  }
  FUN_0035351c(auStack_48,lVar3,param_2);
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


