/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f222d4; name: FUN_00f222d4
 */


void FUN_00f222d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar4 = local_50;
  plVar1 = (long *)FUN_007ec544();
  if (plVar1 == (long *)0x0) {
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    piVar4 = local_40;
    goto LAB_00f223a8;
  }
  (**(code **)(*plVar1 + 0x80))(local_40,plVar1,param_3);
  if (local_40[0] != 0) {
LAB_00f22314:
    piVar4 = local_40;
    goto LAB_00f223a8;
  }
  if ((*(long *)(param_2 + 0x70) == 0) || (lVar2 = FUN_007ec4a8(param_2), lVar2 == 0)) {
LAB_00f22384:
    local_50[0] = 0x10408;
  }
  else {
    uVar3 = FUN_007efb98(*(undefined8 *)(param_2 + 0x70));
    if ((uVar3 & 1) == 0) {
      local_50[0] = 0x2c27;
    }
    else {
      if ((*(byte *)(param_2 + 0x78) < 0xb) &&
         ((1 << (ulong)(*(byte *)(param_2 + 0x78) & 0x1f) & 0x736U) != 0)) goto LAB_00f22384;
      uVar3 = FUN_007efbd8(*(undefined8 *)(param_2 + 0x70),param_3);
      if ((uVar3 & 1) == 0) {
        local_50[0] = 0x10407;
      }
      else {
        if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
          uVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_2 + 0x98) + uVar3) != -1) goto LAB_00f22384;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50));
        }
        FUN_007e6578(local_50,param_2,param_3,0xb);
        FUN_018ff39c(local_40,local_50);
        if (local_40[0] != 0) goto LAB_00f22314;
        local_50[0] = 0;
      }
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
LAB_00f223a8:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


