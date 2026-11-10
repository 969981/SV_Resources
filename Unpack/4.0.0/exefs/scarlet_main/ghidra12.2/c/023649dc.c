/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023649dc; name: FUN_023649dc
 */


void FUN_023649dc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 != 0) && (puVar3 = *(undefined8 **)(*param_2 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d6548;
    if ((*PTR_DAT_047d6540 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d6540);
      puVar4 = (undefined8 *)PTR_DAT_047d6548;
      if (iVar1 != 0) {
        uVar2 = FUN_019dae00(param_1,param_2);
        *(undefined8 *)PTR_DAT_047d6548 = uVar2;
        __cxa_guard_release(PTR_DAT_047d6540);
        puVar4 = (undefined8 *)PTR_DAT_047d6548;
      }
    }
    do {
      if (puVar3 == puVar4) {
        FUN_02364d54(param_1,param_2);
        return;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}


