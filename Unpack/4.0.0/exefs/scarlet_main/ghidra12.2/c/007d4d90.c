/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d4d90; name: FUN_007d4d90
 */


void FUN_007d4d90(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong local_e8 [24];
  long local_28;
  
  lVar1 = FUN_007ec50c();
  if (lVar1 != 0) {
    lVar1 = FUN_007ec50c(param_1);
    lVar2 = FUN_007ec4a8(param_1);
    if (lVar1 == lVar2) {
      return;
    }
  }
  lVar1 = FUN_007ec50c(param_1);
  if ((lVar1 == 0) || (lVar1 = FUN_007ec4a8(param_1), lVar1 == 0)) {
    return;
  }
  lVar1 = FUN_007ec50c(param_1);
  lVar2 = FUN_007ec4a8(param_1);
  if (lVar1 == lVar2) {
    return;
  }
  uVar3 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xc0));
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x784) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x860) == 0) {
    return;
  }
  local_e8[0] = 0;
  FUN_007935cc(local_e8);
  if (local_e8[0] < *(ulong *)(param_1 + 0x860)) {
    return;
  }
  lVar1 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 != lVar1 + 0x18) {
    iVar5 = 0;
    do {
      lVar6 = *(long *)(lVar2 + 0x10);
      if ((*(char *)(lVar6 + 0x3a) == '\x02') && (*(char *)(lVar6 + 0x78) != '\0')) {
        local_e8[iVar5] = *(ulong *)(lVar6 + 0x30);
        iVar5 = iVar5 + 1;
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != lVar1 + 0x18);
    if (0 < iVar5) {
      FUN_007d4ef0(param_1,local_e8);
      plVar4 = (long *)FUN_0079365c();
      lVar1 = *plVar4;
      local_28 = 0;
      FUN_007935cc(&local_28);
      local_28 = local_28 + lVar1 * 3000;
      goto LAB_007d4edc;
    }
  }
  local_28 = 0;
LAB_007d4edc:
  *(long *)(param_1 + 0x860) = local_28;
  return;
}


