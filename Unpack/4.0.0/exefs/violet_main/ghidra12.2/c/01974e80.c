/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01974e80; name: FUN_01974e80
 */


uint FUN_01974e80(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_20 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_20 = 0;
  }
  if ((*param_5 == '\x01') || (*param_5 == '\0')) {
    local_28 = *(undefined8 *)(param_5 + 8);
  }
  else {
    local_28 = 0;
  }
  uVar1 = FUN_01974f1c(param_2,*param_1,param_1[1],&local_18,&local_20,&local_28);
  return uVar1 & 1;
}


