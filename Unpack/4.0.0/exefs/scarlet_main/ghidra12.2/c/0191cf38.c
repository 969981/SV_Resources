/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0191cf38; name: FUN_0191cf38
 */


undefined8
FUN_0191cf38(long param_1,int *param_2,undefined4 param_3,undefined2 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 0;
    }
    goto LAB_0191d000;
  }
  plVar3 = *(long **)(param_1 + 0x1b0);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_0191cf7c:
    uVar1 = FUN_014aeb48(param_1);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar1 & 1) != 0))
    goto LAB_0191cfc8;
LAB_0191cf98:
    uVar2 = 1;
  }
  else {
    uVar1 = FUN_014aeb48(param_1);
    if ((((uVar1 & 1) == 0) || (uVar1 = FUN_014aeb20(param_1,1), (uVar1 & 1) == 0)) &&
       (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_0191cf7c;
      goto LAB_0191cf98;
    }
LAB_0191cfc8:
    uVar2 = 0;
  }
  (**(code **)(*plVar3 + 0x210))(plVar3,param_3,param_4,0,uVar2,param_5,1,0);
  *param_2 = *param_2 + 1;
LAB_0191d000:
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x228))();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


