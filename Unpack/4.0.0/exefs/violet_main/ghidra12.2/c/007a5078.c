/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a5078; name: FUN_007a5078
 */


void FUN_007a5078(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00792f30(lVar1,2);
    FUN_007a5310(param_1[0x11]);
  }
  uVar2 = FUN_0078cdf4(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a50c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


