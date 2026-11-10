/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e0844; name: FUN_029e0844
 */


void FUN_029e0844(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    local_28 = *param_4;
    (*(code *)*puVar1)(puVar1 + 4,param_3,&local_28);
    plVar2 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      *plVar2 = lVar3 + -1;
    }
  }
  return;
}


