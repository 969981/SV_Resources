/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e3760; name: FUN_025e3760
 */


undefined8 FUN_025e3760(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar3 = FUN_025e3560(param_1,1);
  if ((DAT_048539e0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048539e0);
    if (iVar2 != 0) {
      DAT_048539d0 = FUN_025e3b04;
      DAT_048539d8 = 0;
      __cxa_guard_release(&DAT_048539e0,uVar3);
    }
  }
  FUN_025e3704(local_48,&DAT_048539d0,uVar3);
  FUN_017d4450(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_017d4994(auStack_38);
    }
  }
  return 1;
}


