/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003688a0; name: FUN_003688a0
 */


void FUN_003688a0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      uStack_38 = param_2[1];
      local_40 = *param_2;
      uStack_28 = param_2[3];
      uStack_30 = param_2[2];
      FUN_003686e0(param_1,&local_40);
      param_3 = param_3 + -1;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  return;
}


