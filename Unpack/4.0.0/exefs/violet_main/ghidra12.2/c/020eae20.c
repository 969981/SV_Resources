/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eae20; name: FUN_020eae20
 */


void FUN_020eae20(long param_1,uint param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_020eaa60((int)param_1,param_3);
  if (0x3dd < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_020eaaa0();
  }
  uVar3 = 1L << ((ulong)param_2 & 0x3f);
  puVar1 = (ulong *)(param_1 + ((ulong)(param_2 >> 3) & 0x1ffffff8) + 0x80);
  if ((uVar2 & 1) == 0) {
    uVar3 = *puVar1 & (uVar3 ^ 0xffffffffffffffff);
  }
  else {
    uVar3 = *puVar1 | uVar3;
  }
  *puVar1 = uVar3;
  return;
}


