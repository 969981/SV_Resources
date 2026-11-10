/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01946274; name: FUN_01946274
 */


void FUN_01946274(undefined8 param_1,undefined4 *param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined2 local_18 [2];
  undefined4 local_14;
  
  lVar1 = FUN_019462f4(param_5);
  if (*(char *)(lVar1 + 1) == '\0') {
    if (param_3 == 4) {
      local_14 = *param_2;
      FUN_019462fc(param_1,&local_14);
    }
  }
  else if ((*(char *)(lVar1 + 1) == '\x01') && (param_3 == 2)) {
    local_18[0] = *(undefined2 *)param_2;
    FUN_01eaa948(param_1,local_18);
  }
  return;
}


