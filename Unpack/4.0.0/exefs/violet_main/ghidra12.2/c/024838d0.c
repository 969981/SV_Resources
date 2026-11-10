/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024838d0; name: FUN_024838d0
 */


undefined8 FUN_024838d0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char local_48 [8];
  undefined1 auStack_40 [32];
  
  uVar2 = FUN_02482c20(param_1,1);
  if (((DAT_0484a7b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0484a7b0), iVar1 != 0)) {
    DAT_0484c2d0 = 1;
    __cxa_guard_release(&DAT_0484a7b0);
  }
  FUN_02483980(local_48,uVar2);
  FUN_00d1fe80(param_1,local_48);
  if (local_48[0] == '\x01') {
    FUN_00ea3018(auStack_40,0);
  }
  return 1;
}


