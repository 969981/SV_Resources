/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f63c0; name: FUN_003f63c0
 */


long FUN_003f63c0(long param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  char *local_38;
  long lStack_30;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = FUN_00444ed0(param_3);
    return lVar2;
  }
  if (param_2 != (char *)0x0) {
    local_38 = param_2;
    lStack_30 = param_3;
    lVar2 = FUN_00451a40(*(undefined8 *)(param_1 + 0x10),&local_38);
    if (lVar2 != 0) {
      return *(long *)(lVar2 + 0x10);
    }
    iVar1 = strcmp(param_2,"ENV");
    if ((iVar1 == 0) && (lVar2 = FUN_00444ed0(param_3), lVar2 != 0)) {
      return lVar2;
    }
  }
  local_38 = "default";
  lStack_30 = param_3;
  lVar2 = FUN_00451a40(*(undefined8 *)(param_1 + 0x10),&local_38);
  if (lVar2 == 0) {
    return 0;
  }
  return *(long *)(lVar2 + 0x10);
}


