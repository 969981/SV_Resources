/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c46c0; name: FUN_006c46c0
 */


undefined1  [16] FUN_006c46c0(MultiWaitType *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_30 [16];
  
  do {
    uVar1 = nn::os::WaitAny(param_1);
    uVar2 = FUN_006c4704(param_1,local_30,uVar1);
  } while ((uVar2 & 1) != 0);
  return local_30;
}


