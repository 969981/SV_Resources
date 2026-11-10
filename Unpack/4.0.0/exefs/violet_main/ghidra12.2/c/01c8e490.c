/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c8e490; name: FUN_01c8e490
 */


void FUN_01c8e490(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined8 local_348;
  undefined1 auStack_340 [56];
  undefined1 local_308;
  undefined1 auStack_300 [712];
  undefined8 local_38;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    local_348 = *(undefined8 *)(param_2 + 8);
    FUN_01c8e564(auStack_340,param_2 + 0x10);
    local_308 = 0;
    cVar1 = param_2[0x48];
    if (cVar1 != '\0') {
      memcpy(auStack_300,param_2 + 0x50,0x2c8);
    }
    local_38 = *(undefined8 *)(param_2 + 0x318);
    local_308 = cVar1 != '\0';
    FUN_01c8e61c(param_1,&local_348);
    FUN_01c8e52c(&local_348);
  }
  return;
}


