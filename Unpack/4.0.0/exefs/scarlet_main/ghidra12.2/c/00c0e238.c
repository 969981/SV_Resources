/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0e238; name: FUN_00c0e238
 */


long FUN_00c0e238(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = param_3 + 7U & 0xfffffffffffffff8;
  if ((param_1[6] != 0) && ((code *)param_1[0x10] != (code *)0x0)) {
    (*(code *)param_1[0x10])(param_2,uVar3);
  }
  lVar1 = tpidr_el0;
  if ((((*(long *)(lVar1 + 0x20) == *param_1) &&
       (plVar2 = *(long **)(lVar1 + 0x28), plVar2 != (long *)0x0)) ||
      ((plVar2 = (long *)param_1[2], plVar2 != (long *)0x0 && (*plVar2 == lVar1 + 0x20)))) &&
     (lVar1 = plVar2[2], uVar3 <= (ulong)(plVar2[3] - lVar1))) {
    plVar2[2] = lVar1 + uVar3;
    return (long)plVar2 + lVar1;
  }
  lVar1 = FUN_00c0e318(param_1,uVar3);
  return lVar1;
}


