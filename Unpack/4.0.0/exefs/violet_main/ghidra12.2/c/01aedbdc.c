/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aedbdc; name: FUN_01aedbdc
 */


long FUN_01aedbdc(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long local_18;
  
  cVar1 = *param_3;
  if (cVar1 == '\x02') {
    local_18 = 0;
    if (*(long *)(param_3 + 8) != 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x10);
      local_18 = 0;
      if (lVar3 != 0) {
        local_18 = lVar3 + -0x28;
      }
    }
  }
  else if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    local_18 = *(long *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  iVar2 = FUN_01aeea6c(param_2,*param_1,param_1[1],&local_18);
  return (long)iVar2;
}


