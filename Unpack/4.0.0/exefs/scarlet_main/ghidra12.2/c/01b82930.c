/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b82930; name: FUN_01b82930
 */


void FUN_01b82930(undefined1 *param_1,char *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 0x18);
    local_40 = *(undefined8 *)(param_2 + 0x10);
    uStack_28 = *(undefined8 *)(param_2 + 0x28);
    uStack_30 = *(undefined8 *)(param_2 + 0x20);
    uStack_18 = *(undefined8 *)(param_2 + 0x38);
    local_20 = *(undefined8 *)(param_2 + 0x30);
    *param_1 = 1;
    FUN_019b8824(param_1 + 8,&local_40);
  }
  return;
}


