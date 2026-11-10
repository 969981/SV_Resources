/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054c9fc; name: FUN_0054c9fc
 */


void FUN_0054c9fc(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  long *plVar1;
  int local_58 [2];
  byte local_50;
  undefined8 local_40;
  byte local_38;
  undefined8 local_28;
  uint local_18;
  char local_14;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined8 *)(param_1 + 0x360) = param_4;
    local_14 = (char)param_3[1];
    local_18 = *param_3;
    if (local_14 != '\0') {
      local_18 = local_18 | 1;
      *param_3 = local_18;
      *(undefined1 *)(param_1 + 0x351) = 1;
    }
    FUN_0054cac0(local_58,param_1 + 0x318,param_2,&local_18);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
    if (local_58[0] == 0) {
      plVar1 = *(long **)(param_1 + 0x20);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x2e8,(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


