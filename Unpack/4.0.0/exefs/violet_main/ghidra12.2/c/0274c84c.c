/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0274c84c; name: FUN_0274c84c
 */


undefined8 FUN_0274c84c(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
LAB_0274c87c:
                    /* WARNING: Subroutine does not return */
    FUN_0274c840();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    if (3 < param_3) goto LAB_0274c87c;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 8);
  }
  return uVar1;
}


