/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc8024; name: FUN_01bc8024
 */


void FUN_01bc8024(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined2 local_70;
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
  if (DAT_0480ee48 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (undefined8 *)FUN_01bc8d50(param_2);
  local_70 = *(undefined2 *)(puVar2 + 1);
  local_78 = *puVar2;
  uStack_60 = puVar2[3];
  local_58 = puVar2[4];
  local_68 = puVar2[2];
  uStack_50 = puVar2[5];
  local_48 = puVar2[6];
  uStack_40 = puVar2[7];
  local_38 = puVar2[8];
  uStack_30 = puVar2[9];
  local_28 = puVar2[10];
  FUN_01bc8e50(param_1,uVar1,&local_78);
  return;
}


