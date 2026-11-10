/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02985718; name: FUN_02985718
 */


void FUN_02985718(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)(param_3 + 2) != 0) {
    uVar6 = 0;
    do {
      if (*(char *)(param_3[4] + uVar6) != '\0') {
        FUN_01a46378(param_1,*param_3,*(undefined8 *)(param_3[3] + uVar6 * 8),
                     *(char *)(param_3[4] + uVar6),*(undefined1 *)(param_3 + 5));
        uVar1 = (**(code **)(**(long **)(param_3[3] + uVar6 * 8) + 0x98))();
        FUN_0297fe5c(param_1,8,uVar1);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290);
        uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
        uVar2 = (**(code **)(**(long **)(param_3[3] + uVar6 * 8) + 0x98))();
        uVar3 = FUN_0128ab58(uVar4,uVar1,uVar2);
        if ((uVar3 & 1) == 0) {
          uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
          FUN_0297fe5c(param_1,0x1b,uVar1);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
        uVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar1);
        FUN_01248470(uVar5,uVar4,0x1a);
      }
      FUN_02937164(*(undefined8 *)(param_1 + 0x38),param_3[1],*param_3,
                   *(undefined8 *)(param_3[3] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 2));
  }
  return;
}


