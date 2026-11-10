/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e22f60; name: FUN_01e22f60
 */


void FUN_01e22f60(long *param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar6 = *param_1;
  local_60 = 0x8fcb3185b58c9b99;
  pcStack_58 = "wazaId";
  local_50 = 6;
  local_48 = (long *)0x0;
  piVar3 = (int *)FUN_00d5a5a8(param_3,&local_60);
  if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined2 *)((long)piVar3 + uVar4);
  }
  if ((param_2 & 0xff) < 4) {
    uVar1 = FUN_00cf5fe0(uVar5,0);
    FUN_00eee5f0(*(undefined8 *)(lVar6 + 0x70),param_2,uVar5);
    FUN_00eee290(*(undefined8 *)(lVar6 + 0x70),param_2,0);
    FUN_00eedf30(*(undefined8 *)(lVar6 + 0x70),param_2,uVar1);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar6 = *param_1;
  local_60 = 0x6728c88a6d5a6274;
  pcStack_58 = "pointUp";
  local_50 = 7;
  local_48 = (long *)0x0;
  uVar2 = FUN_00d5a2b4(param_3,&local_60);
  if (2 < (uVar2 & 0xff)) {
    uVar2 = 3;
  }
  FUN_00eee290(*(undefined8 *)(lVar6 + 0x70),param_2,uVar2);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


