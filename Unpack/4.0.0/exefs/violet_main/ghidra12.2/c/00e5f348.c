/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5f348; name: FUN_00e5f348
 */


void FUN_00e5f348(undefined4 *param_1,undefined1 *param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_0111b030(*param_2);
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar1)) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0;
    *(undefined1 *)(*param_3 + param_3[2]) = *param_2;
    param_3[2] = param_3[2] + 1;
  }
  *param_1 = uVar2;
  return;
}


