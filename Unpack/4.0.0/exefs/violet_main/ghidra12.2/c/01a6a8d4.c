/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a6a8d4; name: FUN_01a6a8d4
 */


void FUN_01a6a8d4(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined8 local_70;
  undefined4 local_4;
  
  local_4 = param_3;
  if (*(long *)(param_1 + 0x6e) == 0) {
    local_80 = &local_4;
    local_a0 = &LAB_02e657b0;
    local_98 = FUN_02e657f0;
    local_90 = &LAB_02e657f4;
    puStack_88 = &LAB_02e65800;
    FUN_00c837c0(param_1,param_1 + 0x20,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    puStack_78 = &local_4;
    local_a0 = &LAB_029e901c;
    local_98 = FUN_02e65784;
    local_90 = &LAB_02e65788;
    puStack_88 = &LAB_02e6579c;
    local_80 = param_1;
    local_70 = param_2;
    FUN_00c837c0(param_1,param_1 + 0x20,param_2,&local_a0);
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


