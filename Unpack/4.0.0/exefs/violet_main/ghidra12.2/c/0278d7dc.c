/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278d7dc; name: FUN_0278d7dc
 */


ulong FUN_0278d7dc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 8;
  if ((*param_1 == 0) || ((ulong)(param_1[1] << 3) < 0xc)) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0278e2f8(*param_1,&local_18);
    uVar2 = uVar1 & 0xff00;
    uVar1 = uVar1 & 0xff;
  }
  return uVar1 | uVar2;
}


