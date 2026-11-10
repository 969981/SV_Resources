/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02169c54; name: FUN_02169c54
 */


undefined4 FUN_02169c54(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3) <= (ulong)(long)param_2)
  {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 8);
  uVar1 = *(uint *)(lVar2 + 0xa0);
  if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0216dd60();
  }
  return *(undefined4 *)(*(long *)(lVar2 + (ulong)uVar1 * 0x20 + 0x60) + 0x98);
}


