/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03471d7c; name: FUN_03471d7c
 */


void FUN_03471d7c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(*(long *)(param_1 + 0x40) + 0x20) != '\0')) {
    local_48 = param_1 + 0x38;
    uStack_38 = 0x200000002;
    local_40 = param_1;
    FUN_03497f00(*(undefined8 *)PTR_DAT_047e7048,&local_48,param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)0x0) {
    if ((param_4 & 1) != 0) {
      uVar2 = FUN_03471aac();
      if ((uVar2 & 1) != 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0xa0);
    }
    (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,1);
  }
  return;
}


