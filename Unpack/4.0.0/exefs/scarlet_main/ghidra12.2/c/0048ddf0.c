/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048ddf0; name: FUN_0048ddf0
 */


long * FUN_0048ddf0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)FUN_0047e450(*(undefined8 *)(param_1 + 8),iVar1);
      if ((plVar3[1] == param_2) &&
         (iVar2 = FUN_0045d160(*(undefined8 *)(*plVar3 + 8),param_3), iVar2 == 0)) {
        return plVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  return (long *)0x0;
}


