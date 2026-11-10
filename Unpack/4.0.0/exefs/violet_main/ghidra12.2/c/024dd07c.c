/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024dd07c; name: FUN_024dd07c
 */


void FUN_024dd07c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_FUN_047df028;
  if (DAT_0484f0c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_0184ccb0(param_3);
  FUN_024e090c(&local_70,param_2,puVar1,0,uVar2);
  *param_1 = 1;
  local_50 = local_70;
  uStack_48 = uStack_68;
  local_40 = local_60;
  uStack_38 = uStack_58;
  FUN_024c8d4c(param_1 + 8,&local_50);
  return;
}


