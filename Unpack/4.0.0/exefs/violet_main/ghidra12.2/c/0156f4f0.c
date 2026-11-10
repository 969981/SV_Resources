/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156f4f0; name: FUN_0156f4f0
 */


void FUN_0156f4f0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_0156f598(&local_38);
  lVar1 = local_38;
  uVar2 = FUN_0156f54c(param_1,local_38);
  local_38 = 0;
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    FUN_01575d7c(auStack_30,lVar1);
  }
  return;
}


