/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0287e95c; name: FUN_0287e95c
 */


void FUN_0287e95c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0 [48];
  long local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_40 [4];
  long *local_18;
  
  uVar6 = *param_2;
  sVar4 = FUN_02855ddc();
  if (sVar4 == 0) {
    local_40[0] = 0;
    local_f8 = 0xf6205eb8b51b44c1;
    pcStack_f0 = "JoinSessionRejected";
    local_e8 = 0x13;
    local_e0 = (long *)0x0;
    FUN_027d34f4(param_1,&local_f8,local_40);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  else {
    FUN_02855d74(local_40,uVar6,0);
    local_b0[0] = '\0';
    local_60 = 0xe1a3d887bca4131b;
    pcStack_58 = "JoinSession";
    local_50 = 0xb;
    local_48 = (long *)0x0;
    cVar2 = *(char *)(param_2 + 1);
    if (cVar2 != '\0') {
      memcpy((void *)((ulong)local_b0 | 4),(void *)((long)param_2 + 0xc),0x28);
    }
    local_b0[0] = cVar2 != '\0';
    FUN_02854cc4(&local_80,uVar6,local_40,local_b0);
    FUN_0282da90(&local_18,&local_60,&local_80);
    local_d0 = 0x942838809ca0825a;
    pcStack_c8 = "StoreSessionInfo";
    local_c0 = 0x10;
    uStack_b8 = 0;
    local_d8 = uVar6;
    FUN_0287eb44(param_1,local_18,&local_d0,&local_d8);
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    lVar5 = local_80;
    local_80 = 0;
    if (lVar5 != 0) {
      FUN_027e5e74(auStack_78);
    }
    if (local_b0[0] != '\0') {
      local_b0[0] = '\0';
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    FUN_0278f0cc(local_40);
  }
  return;
}


