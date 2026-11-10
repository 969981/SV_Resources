/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c920; name: FUN_0010c920
 */


void FUN_0010c920(undefined4 *param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = param_1;
  if (((uint)param_1 >> 1 & 1) != 0) {
    param_3 = param_3 - 1;
    puVar1 = (undefined4 *)((long)param_1 + 2);
    *(undefined2 *)param_1 = param_2;
  }
  uVar3 = param_3 >> 1;
  if (uVar3 != 0) {
    puVar2 = puVar1;
    do {
      uVar3 = uVar3 - 1;
      puVar1 = puVar2 + 1;
      *puVar2 = CONCAT22(param_2,param_2);
      puVar2 = puVar1;
    } while (uVar3 != 0);
  }
  if ((param_3 & 1) != 0) {
    *(undefined2 *)puVar1 = param_2;
  }
  return;
}


