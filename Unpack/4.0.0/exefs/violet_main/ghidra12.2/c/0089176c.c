/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089176c; name: FUN_0089176c
 */


undefined8 FUN_0089176c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (param_1 + 8 == lVar2) {
      return 0;
    }
    uVar1 = FUN_00890944(*(undefined8 *)(lVar2 + 0x10),param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return 1;
}


