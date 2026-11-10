/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195f010; name: FUN_0195f010
 */


void FUN_0195f010(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48 [8];
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_80 = *param_2;
  local_78 = param_2[1];
  uStack_70 = param_2[2];
  FUN_0195f318(&local_68,&local_80);
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_68 = 0;
  local_48[0] = '\x01';
  local_30 = local_58;
  uStack_28 = uStack_50;
  FUN_0195f0a0(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_01a98198(&uStack_38);
    }
  }
  return;
}


