/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005acfbc; name: FUN_005acfbc
 */


void FUN_005acfbc(undefined1 *param_1,char *param_2)

{
  long *plVar1;
  int local_58 [2];
  byte local_50;
  undefined8 local_40;
  byte local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    if (*plVar1 == 0) {
      if (((param_1[0x19] == '\0') || (param_1[0x1a] != '\0')) &&
         (*param_1 = 0, param_1[0x18] == '\0')) {
        *param_2 = '\0';
        return;
      }
    }
    else {
      if (*param_2 == '\0') {
        *param_1 = 0;
        (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))(*(long **)PTR_DAT_047cbb08,*plVar1);
        *(undefined8 *)(param_1 + 0x10) = 0;
        return;
      }
      FUN_005ad0c0(local_58,plVar1);
      *param_2 = local_58[0] == 0;
      *param_1 = local_58[0] == 0;
      if ((local_38 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_28);
      }
      if ((local_50 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_40);
      }
      *plVar1 = 0;
    }
  }
  return;
}


