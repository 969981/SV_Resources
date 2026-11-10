/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002280b4; name: FUN_002280b4
 */


void FUN_002280b4(undefined1 *param_1,char *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int local_58 [2];
  byte local_50;
  undefined8 local_40;
  byte local_38;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (long *)(param_1 + 0x18);
    if (*plVar2 == 0) {
      if (((param_1[0x21] == '\0') || (param_1[0x22] != '\0')) &&
         (*param_1 = 0, param_1[0x20] == '\0')) {
        *param_2 = '\0';
        return;
      }
    }
    else {
      if (*param_2 == '\0') {
        *param_1 = 0;
        (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
        *(undefined8 *)(param_1 + 0x18) = 0;
        return;
      }
      *param_1 = 1;
      (**(code **)*puVar1)(local_58,puVar1,plVar2);
      *param_2 = local_58[0] == 0;
      if ((local_38 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_28);
      }
      if ((local_50 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_40);
      }
      *plVar2 = 0;
    }
  }
  return;
}


