/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6a0d8; name: FUN_00c6a0d8
 */


void FUN_00c6a0d8(long *param_1)

{
  long lVar1;
  
  if (((*(char *)(param_1[0x73] + 0x22d) == '\0') ||
      (lVar1 = *(long *)(param_1[0x73] + 0x198), lVar1 == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0x10), lVar1 == 0)) {
    return;
  }
  FUN_00c6a0d8(lVar1 + -0x28);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00c6a128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


