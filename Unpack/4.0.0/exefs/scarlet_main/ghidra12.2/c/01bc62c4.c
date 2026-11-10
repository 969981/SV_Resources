/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc62c4; name: FUN_01bc62c4
 */


void FUN_01bc62c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = 0x10;
  if (DAT_0480ee38 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (undefined8 *)FUN_01bc7078(param_2);
  uStack_60 = puVar2[1];
  local_58 = puVar2[2];
  local_68 = *puVar2;
  uStack_50 = puVar2[3];
  local_48 = puVar2[4];
  uStack_40 = puVar2[5];
  local_38 = puVar2[6];
  uStack_30 = puVar2[7];
  local_28 = puVar2[8];
  FUN_01bc716c(param_1,uVar1,&local_68);
  return;
}


