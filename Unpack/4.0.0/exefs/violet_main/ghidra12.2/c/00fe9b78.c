/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe9b78; name: FUN_00fe9b78
 */


long FUN_00fe9b78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  
  *(undefined8 *)(param_1 + 0x138) = 0;
  lVar1 = *(long *)PTR_DAT_047d0a08;
  param_1 = param_1 + 0x110;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0xd8);
    lVar1 = lVar1 + 0xd0;
    if (lVar2 != lVar1) {
      local_18 = *(undefined8 *)(lVar2 + 0x10);
      FUN_00fe9c44(param_1,&local_18);
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 != lVar1) {
        local_18 = *(undefined8 *)(lVar2 + 0x10);
        FUN_00fe9c44(param_1,&local_18);
        lVar2 = *(long *)(lVar2 + 8);
        if (lVar2 != lVar1) {
          local_18 = *(undefined8 *)(lVar2 + 0x10);
          FUN_00fe9c44(param_1,&local_18);
          while (lVar2 = *(long *)(lVar2 + 8), lVar2 != lVar1) {
            local_18 = *(undefined8 *)(lVar2 + 0x10);
            FUN_00fe9c44(param_1,&local_18);
          }
        }
      }
    }
  }
  return param_1;
}


