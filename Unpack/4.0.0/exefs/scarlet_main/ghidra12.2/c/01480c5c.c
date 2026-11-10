/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01480c5c; name: FUN_01480c5c
 */


void FUN_01480c5c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = FUN_0148106c(param_1,param_3);
  if ((uVar2 & 1) != 0) {
    *param_2 = 1;
    if (*(long *)(param_3 + 0xe) != 0) {
      uVar3 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar3,*param_3,*(undefined8 *)(param_3 + 0xe));
    }
    uVar1 = FUN_01480d4c(param_1,param_3);
    uVar2 = FUN_01480d80(param_1,param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      FUN_01482074(param_1,param_3,uVar1);
      return;
    }
    FUN_01480db8(uVar2,param_3,uVar1);
    uVar3 = FUN_01243584(param_1);
    FUN_014818f8(uVar3,*param_3,*(undefined8 *)(param_3 + 2),*(undefined1 *)(param_3 + 4),uVar1,
                 *(undefined2 *)((long)param_3 + 0x1a),*(undefined1 *)(param_3 + 0xc),
                 *(undefined1 *)(param_3 + 0x10));
    FUN_01480df0(param_1,param_3,uVar1);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


