/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eacd1c; name: FUN_00eacd1c
 */


void FUN_00eacd1c(long param_1,ulong param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 local_70 [16];
  
  param_4 = param_4 & 0xffffffff;
  uVar2 = 1L << (param_2 & 0x3f);
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x150) & (uVar2 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x150) | uVar2;
  }
  *(ulong *)(param_1 + 0x150) = uVar1;
  FUN_00eb1310(*(undefined8 *)(param_1 + 200),param_2 & 0xffffffff,(uVar1 & uVar2) != 0);
  if ((*(ulong *)(param_1 + 0x150) & uVar2) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
    if (((int)param_2 == 0) && (param_3 < 7)) {
      pcVar5 = (char *)(lVar4 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 8);
      if (*pcVar5 == '\0') {
        local_70 = FUN_01447a08(lVar4,0,param_3,param_4);
        *(long *)pcVar5 = local_70._0_8_;
        *(long *)(lVar4 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 0x10) = local_70._8_8_;
      }
      else {
        local_70._8_8_ = *(undefined8 *)(lVar4 + (ulong)param_3 * 0x50 + param_4 * 0x10 + 0x10);
        local_70._0_8_ = *(undefined8 *)pcVar5;
      }
    }
    else {
      local_70 = FUN_01447a08(lVar4,param_2 & 0xffffffff,param_3,param_4);
    }
    FUN_00ebe848(uVar3,param_2 & 0xffffffff,local_70);
    FUN_00f190b8(*(undefined8 *)(param_1 + 200),0,1);
  }
  return;
}


