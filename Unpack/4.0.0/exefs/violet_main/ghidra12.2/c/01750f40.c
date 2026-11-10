/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01750f40; name: FUN_01750f40
 */


void FUN_01750f40(undefined8 param_1,undefined8 *param_2,byte param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  byte local_38 [4];
  byte local_34 [4];
  
  uVar2 = 0;
  pcVar3 = (code *)0x0;
  pcVar4 = (code *)0x0;
  uVar5 = 0;
  puVar1 = &LAB_02ba5a10;
  if (DAT_04859168 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_130);
    uVar2 = *param_2;
    pcVar3 = (code *)param_2[1];
    pcVar4 = (code *)param_2[2];
    uVar5 = param_2[3];
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(auStack_130,auStack_b0);
      local_d0 = uVar2;
      local_c8 = pcVar3;
      local_c0 = pcVar4;
      uStack_b8 = uVar5;
    }
  }
  local_34[0] = param_3 & 1;
  local_38[0] = param_4 & 1;
  FUN_01751074(param_1,puVar1,0,&local_d0,local_34,local_38,param_7,param_8,uVar2,pcVar3,pcVar4,
               uVar5);
  pcVar4 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar4)(auStack_b0);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(auStack_130);
  }
  return;
}


