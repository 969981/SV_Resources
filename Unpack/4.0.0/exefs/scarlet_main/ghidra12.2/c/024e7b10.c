/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024e7b10; name: FUN_024e7b10
 */


void FUN_024e7b10(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_FUN_047df108;
  if (DAT_0484f148 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_0184ccb0(param_3);
  FUN_024e97b0(&local_70,param_2,puVar1,0,uVar2);
  *param_1 = 1;
  local_50 = local_70;
  uStack_48 = uStack_68;
  local_40 = local_60;
  uStack_38 = uStack_58;
  FUN_024c8d4c(param_1 + 8,&local_50);
  return;
}


