/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00496270; name: FUN_00496270
 */


int FUN_00496270(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char local_44;
  char local_43;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar2 = FUN_003e8f00(param_1,&DAT_03c2bfae,1);
      if (iVar2 == 1) {
        return 1;
      }
      return -1;
    }
    if (0 < *param_2) {
      uVar3 = 0;
      iVar2 = 0;
      while( true ) {
        if ((uVar3 != 0) &&
           (iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20),
           (int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0)) {
          iVar1 = FUN_003e8f00(param_1,&DAT_03c2c7f8,2);
          if (iVar1 != 2) {
            return -1;
          }
          iVar2 = iVar2 + 2;
        }
        local_44 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
        local_43 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
        iVar1 = FUN_003e8f00(param_1,&local_44,2);
        if (iVar1 != 2) break;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 2;
        if ((long)*param_2 <= (long)uVar3) {
          return iVar2;
        }
      }
      return -1;
    }
  }
  return 0;
}


