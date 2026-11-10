/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7d36c; name: FUN_00f7d36c
 */


void FUN_00f7d36c(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined1 *)(param_1 + 0x2b0)) {
  case 0:
    goto switchD_00f7d39c_caseD_0;
  case 1:
    FUN_00f7fbb8(param_1);
    return;
  case 2:
    lVar3 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(*(long *)(lVar3 + 8) + 0x38);
    if (((((*(uint *)(lVar4 + 0x498) & 0x10801000) == 0) && (*(int *)(lVar4 + 0x30) == 0)) &&
        (*(int *)(*(long *)(lVar3 + 0x10) + 0x36c) == 0)) &&
       (cVar1 = FUN_014f5f74(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 0x468) + 0x150),0),
       cVar1 != '\0')) {
      FUN_00f7fa18(param_1);
      return;
    }
    FUN_00f7da20(param_1);
    return;
  case 3:
    FUN_00f7fd58(param_1);
    return;
  case 4:
    FUN_00f7e5cc(param_1);
    return;
  case 5:
    FUN_00f7fef8(param_1);
    return;
  default:
    FUN_00f80098(param_1);
    return;
  case 7:
    uVar2 = FUN_00f7e8a0(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00f7d510(param_1);
      goto LAB_00f7d400;
    }
switchD_00f7d39c_caseD_0:
    return;
  case 8:
    FUN_00f7de34(param_1);
    return;
  case 9:
    FUN_00f7d570(*(undefined8 *)(*(long *)(param_1 + 0x40) + 8),6,3,0);
LAB_00f7d400:
    FUN_00f7d4c8(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18));
    FUN_00f7d7f4(param_1);
    return;
  }
}


