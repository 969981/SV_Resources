/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d23d4; name: FUN_019d23d4
 */


undefined4
FUN_019d23d4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [108];
  undefined4 local_34;
  
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_34 = param_1;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_a0);
    local_a8 = param_5[3];
    local_b8 = (code *)param_5[1];
    local_c0 = *param_5;
    local_b0 = param_5[2];
  }
  uVar2 = FUN_019d2678(uVar3,param_3,param_4,&local_34,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  return uVar2;
}


