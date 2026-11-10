/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ce550; name: FUN_003ce550
 */


undefined8 FUN_003ce550(int *param_1)

{
  undefined8 uVar1;
  int local_18;
  undefined1 auStack_14 [4];
  
  if ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0) ||
     (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)) {
    uVar1 = FUN_003cb8a0(param_1,auStack_14,&local_18,0);
    if ((int)uVar1 == 0) {
      *param_1 = local_18;
      if ((0x303 < local_18) &&
         ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
        local_18 = 0x303;
      }
      param_1[0x1ad] = local_18;
      return 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


