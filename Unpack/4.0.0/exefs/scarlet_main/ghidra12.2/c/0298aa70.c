/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298aa70; name: FUN_0298aa70
 */


void FUN_0298aa70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_3 + 10) == '\x05') {
    FUN_0298c1d0(param_1);
    uVar3 = FUN_0298c200(param_1,*param_3);
    if ((((uVar3 & 1) != 0) && (uVar3 = FUN_0124a808(param_1), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_014603fc(param_1), (uVar3 & 1) != 0)) {
      return;
    }
  }
  else {
    FUN_0298c240(param_1,*param_3,*(undefined2 *)(param_3 + 1));
  }
  uVar5 = *param_3;
  uVar1 = *(undefined1 *)((long)param_3 + 10);
  uVar2 = *(undefined2 *)(param_3 + 1);
  uVar4 = FUN_01246e90(param_1);
  FUN_029384cc(uVar4,uVar5,uVar2,uVar1);
  return;
}


