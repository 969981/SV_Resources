/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00789990; name: FUN_00789990
 */


void FUN_00789990(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Result *pRVar6;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined4 local_28 [2];
  
  if ((*(char *)(param_2 + 0x5a) == '\x01') || (*(char *)(param_2 + 0x5a) == '\x04')) {
LAB_00789a08:
    local_38 = CONCAT44(local_38._4_4_,0x10408);
  }
  else {
    cVar2 = FUN_007ec4f0();
    if ((cVar2 == -3) || (lVar3 = FUN_007ec50c(param_2), lVar3 == 0)) goto LAB_00789a08;
    lVar3 = FUN_007ec4a8(param_2);
    lVar4 = FUN_007ec50c(param_2);
    if (lVar3 != lVar4) {
      *(undefined1 *)(param_2 + 0x5a) = 1;
      local_38 = 0;
      FUN_007935cc(&local_38);
      *(long *)(param_2 + 0x60) = local_38;
      uVar5 = FUN_007ec50c(param_2);
      FUN_00789bf0(&local_38,param_2,uVar5);
      local_48[0]._0_4_ = 0x2c0a;
      puVar1 = local_48;
      pRVar6 = (Result *)local_28;
      local_28[0] = 0;
      goto LAB_00789a24;
    }
    *(undefined1 *)(param_2 + 0x5a) = 3;
    *(undefined1 *)(param_2 + 0x78) = 1;
    local_38 = (ulong)local_38._4_4_ << 0x20;
  }
  puVar1 = &local_38;
  local_48[0]._0_4_ = 0;
  pRVar6 = (Result *)local_48;
LAB_00789a24:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)puVar1 | 4),pRVar6);
  FUN_00cbd7c0(param_1,&local_38);
  return;
}


