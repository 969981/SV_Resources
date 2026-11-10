/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346af20; name: FUN_0346af20
 */


void FUN_0346af20(long param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((*(long *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x108) != 0)) {
    plVar3 = *(long **)(param_1 + 0x100);
    do {
      plVar1 = (long *)*plVar3;
      if ((((*(char *)(param_2 + 0xf) == '\0') || (plVar1[0x14] == 0)) && (plVar1[0x12] != 0)) &&
         ((0 < *(short *)(plVar1[0x12] + 0x90) &&
          (uVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*param_2), (uVar2 & 1) == 0)))) {
        (**(code **)(*(long *)*plVar3 + 0xc0))((long *)*plVar3,param_2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x108) * 8))
    ;
  }
  return;
}


