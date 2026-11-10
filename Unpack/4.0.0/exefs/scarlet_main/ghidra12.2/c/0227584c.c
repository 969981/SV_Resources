/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0227584c; name: FUN_0227584c
 */


void FUN_0227584c(long param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    FUN_02275aa4(*(long *)(param_1 + 8) + param_2 * 0x80,param_4,param_5,param_6);
    plVar1 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      *plVar1 = lVar2 + -1;
    }
  }
  *param_3 = *param_3 + 0x10;
  return;
}


