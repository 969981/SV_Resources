/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ce1b0; name: FUN_025ce1b0
 */


void FUN_025ce1b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_2 + 8) == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    uStack_38 = param_2[3];
    uStack_40 = param_2[2];
    uStack_28 = param_2[5];
    local_30 = param_2[4];
    uStack_18 = param_2[7];
    uStack_20 = param_2[6];
    *param_1 = 1;
    FUN_00d319d0(param_1 + 8,&local_50);
  }
  return;
}


