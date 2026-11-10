/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a52010; name: FUN_01a52010
 */


void FUN_01a52010(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                 byte param_5,void *param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 local_a8;
  undefined1 local_a4;
  char local_a3;
  char local_a2;
  undefined1 auStack_a0 [72];
  undefined1 local_58;
  byte local_57;
  
  plVar4 = (long *)FUN_02944160();
  cVar1 = (**(code **)(*plVar4 + 0x68))(plVar4,PTR_DAT_047e2708);
  uVar2 = FUN_029454c8(*param_1,param_4);
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(param_1[1] + 0x30),param_2);
  uVar3 = (**(code **)(*plVar4 + 0x2a8))();
  if (((uVar3 & 0xffff) == (uVar2 & 0xffff)) &&
     (uVar5 = FUN_018f6550(param_1,param_2), (uVar5 & 1) != 0)) {
    local_a2 = FUN_01972c08(*param_1,uVar2,1);
    cVar1 = local_a2 + cVar1;
  }
  else {
    local_a2 = '\0';
  }
  memset(&local_a8,0,0x50);
  local_58 = 1;
  local_a8 = param_2;
  local_a4 = param_3;
  local_a3 = cVar1;
  local_57 = param_5 & 1;
  if (param_6 != (void *)0x0) {
    memcpy(auStack_a0,param_6,0x24);
  }
  FUN_01974650(param_1,&local_a8);
  return;
}


