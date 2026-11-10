/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01254148; name: FUN_01254148
 */


void FUN_01254148(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [10];
  
  *param_2 = 0;
  FUN_01246154(auStack_68);
  if (*(char *)((long)param_3 + 0x4a) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce0e4(uVar3,*param_3);
  }
  if (param_3[1] == 8) {
    local_78 = *(undefined8 *)(param_3 + 4);
    uStack_70 = *(undefined8 *)(param_3 + 6);
    uVar3 = FUN_01246e90(param_1);
    FUN_02936050(uVar3,*param_3,*(undefined1 *)(param_3 + 2),&local_78);
    uVar4 = FUN_029806b0(param_1,*param_3,*(undefined1 *)(param_3 + 2),&local_78,
                         *(undefined1 *)((long)param_3 + 9));
    FUN_02980738(auStack_68,*(undefined1 *)(param_3 + 2),*(undefined1 *)((long)param_3 + 9));
  }
  else {
    uVar4 = FUN_029807c0(param_1,param_3[1],param_3 + 4,*(undefined1 *)((long)param_3 + 0x49));
  }
  if ((uVar4 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    if (*(char *)(param_3 + 0x12) == '\0') {
      if (*(short *)(param_3 + 8) != 0x9c) {
        uVar3 = FUN_01243584(param_1);
        FUN_02980868(uVar3,*(undefined2 *)(param_3 + 8));
      }
      puVar5 = param_3 + 9;
      uVar4 = FUN_018ce3ac(puVar5);
      uVar3 = FUN_01243584(param_1);
      if ((uVar4 & 1) == 0) {
        puVar5 = auStack_68;
      }
      FUN_0124b0ac(uVar3,*param_3,puVar5);
    }
    bVar2 = 1;
  }
  if (*(char *)((long)param_3 + 0x4a) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce27c(uVar3,*param_3);
  }
  iVar6 = param_3[1];
  bVar1 = (bool)(bVar2 ^ 1);
  if ((iVar6 == 8) && (!bVar1)) {
    uVar3 = FUN_01246e90(param_1);
    FUN_02936450(uVar3,*param_3,*(undefined1 *)(param_3 + 2));
    iVar6 = param_3[1];
  }
  if (iVar6 != 8 && !bVar1) {
    uVar3 = FUN_01246e90(param_1);
    FUN_02936a78(uVar3,*param_3,param_3[1]);
    iVar6 = param_3[1];
    if (iVar6 == 9) {
      FUN_02980878(param_1);
      iVar6 = param_3[1];
    }
  }
  if (!(bool)(iVar6 != 2 | bVar1)) {
    FUN_0298090c(param_1,*param_3);
  }
  *param_2 = bVar2;
  return;
}


