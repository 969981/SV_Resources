/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c75dc; name: FUN_008c75dc
 */


void FUN_008c75dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_008f2994(param_1 + 0x178);
  (**(code **)PTR_DAT_047d2430)
            (*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
             *(undefined8 *)(param_1 + 0x170),0,*(undefined8 *)PTR_DAT_047d2428,0);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_0110a1f4(*(long *)(param_1 + 0x1c8),param_2);
    lVar2 = *(long *)(param_1 + 0x1c8);
    if (lVar2 != 0) {
      FUN_0110a1e0(lVar2);
      FUN_00896e98(lVar2);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x1c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 0x1c0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00896e98(plVar1);
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}


