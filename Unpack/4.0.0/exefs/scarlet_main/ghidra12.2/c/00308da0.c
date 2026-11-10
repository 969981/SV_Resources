/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308da0; name: FUN_00308da0
 */


void FUN_00308da0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_28 [4];
  char local_24 [4];
  
  FUN_00308af0();
  if (*(long *)(param_2 + 0x170) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x1b1) == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x1b0) == '\0') {
    return;
  }
  if (((*(char *)(param_2 + 0x1b3) != '\0') || (*(char *)(param_1 + 0xc48) == '\0')) &&
     (FUN_00368510(param_2 + 0x658), *(char *)(param_2 + 0x788) == '\0')) {
    FUN_00368510(param_2 + 0x798);
  }
  if (*(char *)(param_2 + 0x788) == '\0') {
    bVar3 = *(long *)(param_2 + 0x7b8) != 0;
    cVar2 = *(char *)(param_2 + 0x1b1);
  }
  else {
    bVar3 = true;
    cVar2 = *(char *)(param_2 + 0x1b1);
  }
  if (cVar2 == '\0') {
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0x678);
  if ((bool)(bVar3 | uVar6 == 0)) goto LAB_00308e48;
  if ((*(char *)(param_2 + 0x1b3) == '\0') && (*(long *)(param_2 + 0x170) != 0)) {
    lVar1 = param_2 + 0x658;
    if (*(int *)(param_2 + 0xabc) != 1) {
      lVar4 = *(long *)(param_2 + 0xc10);
      if (lVar4 == 0) {
        lVar4 = FUN_0034d600(*(int *)(param_2 + 0xabc));
        *(long *)(param_2 + 0xc10) = lVar4;
      }
      uVar6 = FUN_0034d5f0(lVar4,lVar1,param_2 + 0x798,0,5,local_24);
      if ((uVar6 & 1) == 0) {
        FUN_00368510(lVar1);
        FUN_00368510(param_2 + 0x798);
        *(undefined1 *)(param_2 + 0x1b3) = 1;
      }
      else {
        if (*(long *)(param_2 + 0x7b8) != 0) {
          bVar3 = true;
          *(undefined1 *)(param_2 + 0xac0) = 1;
        }
        if (local_24[0] != '\0') {
          FUN_0034d640(*(undefined8 *)(param_2 + 0xc10));
          *(undefined8 *)(param_2 + 0xc10) = 0;
        }
      }
      goto LAB_00308e48;
    }
    if (4 < uVar6) {
      uVar6 = 5;
    }
    FUN_00368bc0(lVar1,uVar6,param_2 + 0x798);
    if (*(long *)(param_2 + 0x7b8) != 0) {
      bVar3 = true;
      *(undefined1 *)(param_2 + 0xac0) = 1;
      goto LAB_00308e48;
    }
  }
  bVar3 = false;
LAB_00308e48:
  if (((*(char *)(param_2 + 0x1b1) != '\0') && (!(bool)(bVar3 | *(long *)(param_2 + 0x678) != 0)))
     && (*(long *)(param_2 + 0x170) != 0)) {
    FUN_0037b060(param_2 + 0x180,*(undefined8 *)(param_2 + 0x178));
    *(undefined8 *)(param_2 + 0x178) = 0;
    FUN_00316bf0(param_2 + 0x418,*(undefined8 *)(param_2 + 0x168));
    uVar5 = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_2 + 0x170) = 0;
    FUN_0035351c(auStack_28,uVar5,0);
    return;
  }
  return;
}


