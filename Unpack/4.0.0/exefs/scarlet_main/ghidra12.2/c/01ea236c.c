/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea236c; name: FUN_01ea236c
 */


void FUN_01ea236c(long param_1,undefined1 *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 local_48 [2];
  undefined2 local_46;
  undefined1 *local_28;
  
  if (3 < param_3) {
    local_48[0] = *param_2;
    local_46 = *(undefined2 *)(param_2 + 1);
    local_28 = local_48;
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(param_1 + 0x70);
    if (plVar3 != plVar1) {
      do {
        uVar2 = FUN_01ea2440(&local_28,plVar3);
        if ((uVar2 & 1) != 0) goto LAB_01ea23dc;
        plVar3 = plVar3 + 4;
      } while (plVar1 != plVar3);
      plVar3 = plVar1;
LAB_01ea23dc:
      if ((plVar3 != *(long **)(param_1 + 0x70)) &&
         ((((char)plVar3[3] != '\0' || ((*plVar3 != 0 && (*(short *)(*plVar3 + 0x1a) != 0)))) &&
          (plVar3 = (long *)plVar3[2], plVar3 != (long *)0x0)))) {
        (**(code **)(*plVar3 + 8))(plVar3,param_2 + 3,(ulong)param_3 - 3);
      }
    }
  }
  return;
}


