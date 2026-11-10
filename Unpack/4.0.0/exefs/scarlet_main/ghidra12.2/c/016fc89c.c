/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fc89c; name: FUN_016fc89c
 */


void FUN_016fc89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  uVar2 = FUN_016fc954(param_3);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  local_48 = *(undefined8 *)(param_1 + 8);
  FUN_016fc960(&local_40,local_48,&local_48);
  lVar1 = local_40;
  local_40 = 0;
  lVar3 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar1;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x60) = local_30;
    *(undefined8 *)(param_1 + 0x68) = local_28;
    *(undefined8 *)(param_1 + 0x58) = local_38;
    local_40 = 0;
  }
  else {
    FUN_015c1218(param_1 + 0x58);
    lVar1 = local_40;
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(undefined8 *)(param_1 + 0x60) = local_30;
    *(undefined8 *)(param_1 + 0x68) = local_28;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_015c1218(&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_016fcaa0(param_1);
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  return;
}


