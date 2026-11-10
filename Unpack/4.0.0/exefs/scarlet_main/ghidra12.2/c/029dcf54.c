/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dcf54; name: FUN_029dcf54
 */


void FUN_029dcf54(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *local_18;
  
  if (param_2 != (long *)0x0) {
    plVar3 = (long *)*param_2;
    plVar1 = (long *)param_2[1];
    local_18 = param_2;
    if (plVar1 != plVar3) {
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        FUN_01041cd8(*(undefined8 *)(param_1 + 0x170),*plVar3 + 0x1d0);
      }
      uVar2 = FUN_029dcfd0(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x180),
                           &local_18);
      FUN_01041414(param_1 + 0x178,uVar2,*(undefined8 *)(param_1 + 0x180));
    }
  }
  return;
}


