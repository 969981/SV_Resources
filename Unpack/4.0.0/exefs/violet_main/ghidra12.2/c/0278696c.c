/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278696c; name: FUN_0278696c
 */


int FUN_0278696c(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_14;
  
  local_14 = 0;
  if (*(int *)(param_1 + 0x3b0) == 0) {
    local_14 = 1;
  }
  else {
    iVar1 = FUN_02786af0(param_1 + 0x36c,*(int *)(param_1 + 0x3b0),&local_14);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_14 == 0) {
      return 0x47a;
    }
  }
  FUN_02786c70(&local_50,*(undefined8 *)(param_1 + 8),(long)local_14);
  uVar4 = local_50;
  local_50 = 0;
  lVar3 = *(long *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = uVar4;
  if (lVar3 != 0) {
    FUN_02786830(param_1 + 0x3c0);
  }
  *(undefined8 *)(param_1 + 0x3c8) = uStack_40;
  *(undefined8 *)(param_1 + 0x3d0) = local_38;
  *(undefined8 *)(param_1 + 0x3c0) = local_48;
  iVar1 = *(int *)(param_1 + 0x3b0);
  lVar3 = param_1 + 0x3d8;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (iVar1 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    FUN_02785618(auStack_68,param_1 + 0x360);
    iVar1 = FUN_02786ff0(uVar4,auStack_68,param_1 + 0x3e0,lVar3);
    puVar2 = auStack_68;
  }
  else if (iVar1 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    FUN_02785618(auStack_60,param_1 + 0x360);
    iVar1 = FUN_02786e90(uVar4,auStack_60,param_1 + 0x3e0,param_1 + 0x36c,lVar3);
    puVar2 = auStack_60;
  }
  else {
    if (iVar1 != 0) {
      return 0xc47a;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    FUN_02785618(auStack_58,param_1 + 0x360);
    iVar1 = FUN_02786d90(uVar4,auStack_58,param_1 + 0x36c,lVar3);
    puVar2 = auStack_58;
  }
  FUN_02782500(puVar2);
  return iVar1;
}


