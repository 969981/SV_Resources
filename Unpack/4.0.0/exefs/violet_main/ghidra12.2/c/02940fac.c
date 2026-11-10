/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02940fac; name: FUN_02940fac
 */


void FUN_02940fac(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar2 = FUN_014813f4(param_1,*param_3);
  uVar3 = FUN_029839b4(param_1,*param_3);
  if ((uVar3 & 1) != 0) {
    if (*(char *)((long)param_3 + 5) != '\0') {
      uVar4 = FUN_01243584(param_1);
      FUN_0197495c(uVar4,uVar2);
    }
    uVar4 = FUN_01243584(param_1);
    FUN_0124b0ac(uVar4,*param_3,param_3 + 2);
    uVar3 = FUN_02983a54(param_1,uVar2,*(undefined1 *)(param_3 + 1));
    if ((uVar3 & 1) != 0) {
      FUN_01582534(param_1);
      uVar4 = FUN_014813ec();
      uVar1 = FUN_010e161c(uVar4,*param_3);
      uVar4 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar4,*param_3,param_3 + 0xb);
      uVar4 = FUN_0123f628(param_1);
      FUN_02983a90(uVar4,uVar1);
      FUN_0123de68(param_1);
      uVar4 = FUN_0123de70();
      FUN_0123fa5c(uVar4,1);
      *param_2 = 1;
    }
    if (*(char *)((long)param_3 + 5) != '\0') {
      uVar4 = FUN_01243584(param_1);
      FUN_018521d8(uVar4,uVar2);
      return;
    }
  }
  return;
}


