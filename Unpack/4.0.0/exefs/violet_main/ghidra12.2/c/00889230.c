/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00889230; name: FUN_00889230
 */


void FUN_00889230(long *param_1,ulong param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_00889278(param_1,*param_1,
                       param_3 << 0x30 | param_2 & 0xffffffff | (ulong)(param_4 & 0xffff) << 0x20);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return;
}


