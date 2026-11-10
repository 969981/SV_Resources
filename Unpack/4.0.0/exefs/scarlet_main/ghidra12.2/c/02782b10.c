/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02782b10; name: FUN_02782b10
 */


void FUN_02782b10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    local_28 = param_2;
    FUN_02784e80(&local_48,param_2,&local_28);
    uVar1 = local_48;
    local_48 = 0;
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (lVar2 != 0) {
      FUN_02784dd0(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x38) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = local_30;
    *(undefined8 *)(param_1 + 0x30) = local_40;
  }
  return;
}


