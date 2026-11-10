/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003579b0; name: FUN_003579b0
 */


void FUN_003579b0(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  undefined1 auStack_18 [8];
  
  if ((*(int *)(param_1 + 0x30) != 0) || (*(long *)(param_1 + 0x40) != 0)) {
    FUN_003673f0(auStack_40,"FD shutdown");
    uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x1f7,
                         auStack_40,0,0);
    uVar1 = FUN_00351770(uVar1,3,0xe);
    FUN_0035351c(auStack_18,param_3,uVar1);
    return;
  }
  if (*param_2 == 1) {
    *param_2 = 0;
    FUN_0035351c(auStack_40,param_3,0);
    plVar2 = *(long **)(param_1 + 0x50);
    if (((plVar2 == (long *)(param_1 + 0x50)) &&
        (plVar2 = *(long **)(param_1 + 0x78), plVar2 == (long *)0x0)) &&
       (plVar2 = *(long **)(param_1 + 0x80), plVar2 == (long *)0x0)) {
      return;
    }
    FUN_0038db40(*(undefined8 *)((long)plVar2 + 0x10));
    if (*(long *)((long)plVar2 + 0x18) != 0) {
      FUN_003576f0(*(undefined8 *)((long)plVar2 + 0x10),*(long *)((long)plVar2 + 0x18),2);
      FUN_0038db60(*(undefined8 *)((long)plVar2 + 0x10));
      return;
    }
  }
  else if (*param_2 == 0) {
    *param_2 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


