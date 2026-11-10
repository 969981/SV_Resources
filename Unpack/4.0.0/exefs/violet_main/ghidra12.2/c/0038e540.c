/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e540; name: FUN_0038e540
 */


void FUN_0038e540(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  timespec local_50;
  
  puVar1 = PTR_PTR_047ccfe0;
  if ((uint)(param_2 >> 0x20) < 3) {
    while( true ) {
      auVar3 = (**(code **)puVar1)(param_2 >> 0x20);
      if (999999999 < auVar3._8_4_) break;
      iVar2 = FUN_0038dcf0(param_1,param_2,auVar3._0_8_,auVar3._8_8_);
      if (iVar2 < 1) {
        return;
      }
      auVar4 = FUN_0038dfd0(param_1,param_2,auVar3._0_8_,auVar3._8_8_);
      local_50.tv_sec = auVar4._0_8_;
      local_50.tv_nsec = (long)auVar4._8_4_;
      iVar2 = nanosleep(&local_50,(timespec *)0x0);
      if (iVar2 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


