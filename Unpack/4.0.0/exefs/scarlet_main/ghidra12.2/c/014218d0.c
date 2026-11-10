/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014218d0; name: FUN_014218d0
 */


void FUN_014218d0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long local_40;
  undefined8 local_38;
  
  local_38 = *param_1;
  FUN_01421b44(&local_40,local_38,&local_38);
  local_38 = DAT_0485ac08;
  DAT_0485ac08 = 0;
  FUN_014219f4(&local_38);
  DAT_0485ac08 = local_40;
  local_40 = 0;
  FUN_014219f4(&local_40);
  local_38 = *param_1;
  FUN_01421c04(&local_40,local_38,&local_38);
  local_38 = DAT_0485ac10;
  DAT_0485ac10 = 0;
  FUN_01421a60(&local_38);
  DAT_0485ac10 = local_40;
  local_40 = 0;
  FUN_01421a60(&local_40);
  lVar1 = DAT_0485ac08;
  FUN_00c41540(DAT_0485ac08);
  lVar2 = DAT_0485ac10;
  puVar5 = *(undefined8 **)(lVar1 + 0x88);
  FUN_00c41540(DAT_0485ac10);
  puVar4 = *(undefined8 **)(lVar2 + 0x88);
  *puVar5 = 0;
  puVar5[1] = 0;
  *puVar4 = 0;
  DAT_0485ac18 = 0;
  uVar3 = FUN_01421d80(param_2);
  FUN_01421cc4(&local_40,uVar3);
  local_38 = DAT_0485ac00;
  DAT_0485ac00 = 0;
  FUN_01421acc(&local_38);
  DAT_0485ac00 = local_40;
  local_40 = 0;
  FUN_01421acc(&local_40);
  return;
}


