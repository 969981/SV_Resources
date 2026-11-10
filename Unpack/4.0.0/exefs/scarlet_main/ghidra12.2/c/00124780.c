/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124780; name: FUN_00124780
 */


undefined4 FUN_00124780(undefined8 param_1,char *param_2,undefined8 param_3)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int local_460 [2];
  FILE *local_458;
  undefined1 auStack_450 [1024];
  int local_34;
  
  iVar1 = FUN_00c5d980();
  iVar1 = iVar1 + 1;
  if (param_2 == (char *)0x0) {
    FUN_00c85bd0(param_1,"=stdin");
    local_458 = *(FILE **)PTR_stdin_047cb840;
  }
  else {
    FUN_01b2cd10(param_1,&DAT_03c31f7d,param_2);
    local_458 = fopen(param_2,"r");
    if (local_458 == (FILE *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      lVar6 = FUN_00c646d0(param_1,iVar1,0);
      lVar6 = lVar6 + 1;
      pcVar8 = "open";
      goto LAB_001249a8;
    }
  }
  iVar2 = FUN_00124a00(local_460,&local_34);
  if (iVar2 != 0) {
    lVar6 = (long)local_460[0];
    local_460[0] = local_460[0] + 1;
    auStack_450[lVar6] = 10;
  }
  if ((param_2 != (char *)0x0) && (local_34 == 0x1b)) {
    local_458 = freopen(param_2,"rb",local_458);
    if (local_458 == (FILE *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      lVar6 = FUN_00c646d0(param_1,iVar1,0);
      lVar6 = lVar6 + 1;
      pcVar8 = "reopen";
      goto LAB_001249a8;
    }
    FUN_00124a00(local_460,&local_34);
  }
  if (local_34 != -1) {
    lVar6 = (long)local_460[0];
    local_460[0] = local_460[0] + 1;
    auStack_450[lVar6] = (char)local_34;
  }
  uVar7 = FUN_00c646d0(param_1,0xffffffff,0);
  uVar3 = FUN_001232e0(param_1,&LAB_00124b10,local_460,uVar7,param_3);
  __stream = local_458;
  iVar2 = ferror(local_458);
  if (param_2 != (char *)0x0) {
    fclose(__stream);
  }
  if (iVar2 == 0) {
    FUN_00c5dcd0(param_1,iVar1,0xffffffff);
    FUN_00c5db00(param_1,0xfffffffe);
    return uVar3;
  }
  FUN_00c5db00(param_1,iVar1);
  piVar4 = __errno_location();
  pcVar5 = strerror(*piVar4);
  lVar6 = FUN_00c646d0(param_1,iVar1,0);
  lVar6 = lVar6 + 1;
  pcVar8 = "read";
LAB_001249a8:
  FUN_01b2cd10(param_1,"cannot %s %s: %s",pcVar8,lVar6,pcVar5);
  FUN_00c5dcd0(param_1,iVar1,0xffffffff);
  FUN_00c5db00(param_1,0xfffffffe);
  return 6;
}


