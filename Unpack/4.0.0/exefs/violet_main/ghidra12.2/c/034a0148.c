/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a0148; name: FUN_034a0148
 */


void FUN_034a0148(int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  lVar2 = DAT_048b0118;
  if (param_1 == 0) {
    for (; (lVar2 != 0 && (*(char *)(lVar2 + 0x46d) == '\0')); lVar2 = *(long *)(lVar2 + 0x20)) {
    }
  }
  else {
    local_20 = param_2;
    iStack_1c = param_1;
    if (param_2 == 0) {
      FUN_0349dde0(&iStack_1c,&local_20);
    }
    lVar2 = CONCAT44(local_20,iStack_1c);
    lVar1 = DAT_048b0118;
    if (lVar2 == 0) {
      for (; (lVar1 != 0 && (*(char *)(lVar1 + 0x46d) == '\0')); lVar1 = *(long *)(lVar1 + 0x20)) {
      }
    }
    else {
      if ((iStack_1c == 0) || (local_20 == 0)) {
        local_18 = iStack_1c;
        local_14 = local_20;
        FUN_0349dde0(&local_18,&local_14);
        lVar2 = CONCAT44(local_14,local_18);
        lVar1 = DAT_048b0118;
      }
      for (; (lVar1 != 0 && (*(long *)(lVar1 + 0x28) != lVar2)); lVar1 = *(long *)(lVar1 + 0x20)) {
      }
    }
  }
  return;
}


