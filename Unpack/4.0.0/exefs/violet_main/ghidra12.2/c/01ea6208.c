/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea6208; name: FUN_01ea6208
 */


void FUN_01ea6208(byte *param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  byte *local_80;
  byte *pbStack_78;
  undefined8 local_70;
  byte local_4 [4];
  
  local_4[0] = param_3 & 1;
  if (*(long *)(param_1 + 0x2f0) == 0) {
    local_80 = local_4;
    local_a0 = &LAB_02e659e0;
    local_98 = FUN_02e65a28;
    local_90 = &LAB_02e65a2c;
    puStack_88 = &LAB_02e65a38;
    FUN_00c837c0(param_1,param_1 + 0x128,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    pbStack_78 = local_4;
    local_a0 = &LAB_029e9c14;
    local_98 = FUN_02e659b4;
    local_90 = &LAB_02e659b8;
    puStack_88 = &LAB_02e659cc;
    local_80 = param_1;
    local_70 = param_2;
    FUN_00c837c0(param_1,param_1 + 0x128,param_2,&local_a0);
    pcVar1 = local_98;
  }
  if (pcVar1 != (code *)0x0) {
    puStack_88 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


