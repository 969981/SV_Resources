/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01979dc0; name: FUN_01979dc0
 */


uint FUN_01979dc0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 4) {
    local_30 = 0xf1411e9a16610a06;
    pcStack_28 = "0300_roar01";
    local_20 = 0xb;
  }
  else {
    if (param_2 == 1) {
      pcStack_28 = "0400_attack01";
      local_30 = 0xf538ade03921c351;
    }
    else {
      if (param_2 != 2) {
        if (param_2 != 3) {
          uVar1 = 0;
          goto LAB_01979e00;
        }
        local_30 = 0xfc4bc442d842326d;
        pcStack_28 = "0450_rangeattack01";
        local_20 = 0x12;
        goto LAB_01979df4;
      }
      pcStack_28 = "0410_attack02";
      local_30 = 0x4578e44c98bc9217;
    }
    local_20 = 0xd;
  }
LAB_01979df4:
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_01979e00:
  return uVar1 & 1;
}


