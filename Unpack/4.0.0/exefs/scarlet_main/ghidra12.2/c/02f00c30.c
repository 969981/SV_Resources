/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f00c30; name: FUN_02f00c30
 */


void FUN_02f00c30(ulong *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  code *local_40;
  undefined8 uStack_38;
  
  local_40 = FUN_02f00be0;
  uStack_38 = 0;
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    puVar3 = param_1;
    do {
      if ((plVar2[2] == param_2) &&
         (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_40,0x10), iVar1 != 0)) {
        if ((*param_1 & 3) == 0) {
          *puVar3 = plVar2[1] & 0xfffffffffffffffcU | *puVar3 & 3;
          (**(code **)(*plVar2 + 8))(plVar2);
          return;
        }
        plVar2[1] = plVar2[1] & 0xfffffffffffffffcU | 1;
        return;
      }
      puVar3 = (ulong *)(plVar2 + 1);
      plVar2 = (long *)(*puVar3 & 0xfffffffffffffffc);
    } while (plVar2 != (long *)0x0);
  }
  return;
}


