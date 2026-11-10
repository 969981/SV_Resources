/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00485280; name: FUN_00485280
 */


int * FUN_00485280(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_0047e200();
  if (-1 < iVar1) {
    if (1 < *param_2 - 1U) {
      piVar4 = (int *)FUN_0047e450(param_1,iVar1);
      return piVar4;
    }
    iVar2 = FUN_0047e430(param_1);
    if (iVar1 < iVar2) {
      do {
        piVar4 = (int *)FUN_0047e450(param_1,iVar1);
        iVar3 = *piVar4;
        if (iVar3 != *param_2) {
          return (int *)0x0;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_004839c0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
LAB_00485330:
          if (iVar3 != 0) {
            return (int *)0x0;
          }
          iVar3 = *param_2;
        }
        else if (iVar3 == 1) {
          iVar3 = FUN_00483920(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
          goto LAB_00485330;
        }
        if (iVar3 == 2) {
          iVar3 = FUN_00483a60(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        else {
          if (iVar3 != 1) {
            return piVar4;
          }
          iVar3 = FUN_00483b60(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
        }
        if (iVar3 == 0) {
          return piVar4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
  }
  return (int *)0x0;
}


