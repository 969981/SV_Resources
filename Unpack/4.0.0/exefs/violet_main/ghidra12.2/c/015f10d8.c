/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f10d8; name: FUN_015f10d8
 */


void FUN_015f10d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  local_40 = &DAT_e4d07a996e5ef5e8;
  pcStack_38 = "main";
  local_30 = 4;
  uStack_28 = 0;
  FUN_015f1168(uVar1,&local_40,param_2);
  local_40 = (undefined1 *)0xf9de5359e8af36cd;
  pcStack_38 = "poke_trade";
  local_30 = 10;
  uStack_28 = 0;
  FUN_015f1168(uVar1,&local_40,param_2);
  return;
}


