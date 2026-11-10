/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038dbe0; name: FUN_0038dbe0
 */


bool FUN_0038dbe0(pthread_cond_t *param_1,pthread_mutex_t *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  timespec local_40;
  
  auVar2 = FUN_0038dd60(param_4 >> 0x20);
  iVar1 = FUN_0038dcf0(param_3,param_4,auVar2._0_8_,auVar2._8_8_);
  if (iVar1 == 0) {
    iVar1 = pthread_cond_wait(param_1,param_2);
  }
  else {
    auVar3 = FUN_0038e1e0(param_3,param_4,1);
    local_40.tv_sec = auVar3._0_8_;
    local_40.tv_nsec = (long)auVar3._8_4_;
    iVar1 = pthread_cond_timedwait(param_1,param_2,&local_40);
  }
  if (((iVar1 != 0) && (iVar1 != 0xb)) && (iVar1 != 0x6e)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar1 == 0x6e;
}


