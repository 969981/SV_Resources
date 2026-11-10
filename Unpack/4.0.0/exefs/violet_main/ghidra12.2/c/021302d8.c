/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021302d8; name: FUN_021302d8
 */


void FUN_021302d8(undefined8 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 local_4c [4];
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  undefined1 local_24 [4];
  
  local_48 = 0x688d5ae5cd3b19f5;
  pcStack_40 = "VisibleRainbow";
  local_38 = 0xe;
  local_30 = (long *)0x0;
  uVar2 = FUN_0141f968(param_1,&local_48);
  local_24[0] = 0;
  if ((uVar2 & 0xff) != 0) {
    local_24[0] = (char)(uVar2 >> 8);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  FUN_02130434("CFunc_Tml_SetVisibleRainbow",local_24);
  local_48 = 0x6149149d91ad6044;
  pcStack_40 = "VisibleShootingStar";
  local_38 = 0x13;
  local_30 = (long *)0x0;
  uVar2 = FUN_0141f968(param_1,&local_48);
  local_4c[0] = 0;
  if ((uVar2 & 0xff) != 0) {
    local_4c[0] = (char)(uVar2 >> 8);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  FUN_02130434("CFunc_Tml_SetVisibleShootingStart",local_4c);
  local_48 = 0xcea5cfc611aef589;
  pcStack_40 = "VisibleCharaCloud";
  local_38 = 0x11;
  local_30 = (long *)0x0;
  uVar3 = FUN_0141f968(param_1,&local_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  uVar1 = 0;
  if ((uVar3 & 0xff) != 0) {
    uVar1 = (char)(uVar3 >> 8);
  }
  local_48 = CONCAT71(local_48._1_7_,uVar1);
  FUN_02130434("CFunc_Tml_SetVisibleCharaCloud",&local_48);
  return;
}


