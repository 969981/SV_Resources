/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181cac8; name: FUN_0181cac8
 */


void FUN_0181cac8(undefined2 *param_1,undefined1 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_3;
  switch(param_2) {
  case 0:
    *param_1 = param_3;
    return;
  case 1:
    *(undefined1 *)(param_1 + 1) = uVar1;
    return;
  case 2:
    *(undefined1 *)((long)param_1 + 3) = uVar1;
    return;
  case 3:
    *(undefined1 *)(param_1 + 2) = uVar1;
    return;
  case 4:
    *(undefined1 *)((long)param_1 + 5) = uVar1;
    return;
  case 5:
    *(undefined1 *)(param_1 + 3) = uVar1;
  }
  return;
}


