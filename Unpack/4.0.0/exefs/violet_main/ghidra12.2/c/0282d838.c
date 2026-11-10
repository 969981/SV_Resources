/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0282d838; name: FUN_0282d838
 */


void FUN_0282d838(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [48];
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 local_88 [48];
  undefined4 local_58 [2];
  undefined1 auStack_50 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar7 = *param_2;
  local_88[0] = 0;
  if (*(char *)(param_2 + 1) == '\0') {
    FUN_027e955c(local_58,uVar7,local_88);
  }
  else {
    memcpy((void *)((ulong)local_88 | 4),(void *)((long)param_2 + 0xc),0x28);
    local_88[0] = 1;
    FUN_027e955c(local_58,uVar7,local_88);
    local_88[0] = 0;
  }
  if ((char)local_58[0] == '\0') {
    local_28 = 0;
    local_140 = 0xf6205eb8b51b44c1;
    pcStack_138 = "JoinSessionRejected";
    local_130 = 0x13;
    local_128 = (long *)0x0;
    local_58[0] = 0x6c47;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)&local_28);
    FUN_0282dc04(param_1,&local_140,local_58);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
  }
  else {
    local_f8[0] = '\0';
    local_a8 = 0xe1a3d887bca4131b;
    pcStack_a0 = "JoinSession";
    local_98 = 0xb;
    local_90 = (long *)0x0;
    cVar3 = *(char *)(param_2 + 1);
    if (cVar3 != '\0') {
      memcpy((void *)((ulong)local_f8 | 4),(void *)((long)param_2 + 0xc),0x28);
    }
    local_f8[0] = cVar3 != '\0';
    FUN_027e51a0(&local_c8,uVar7,auStack_50,local_f8);
    FUN_0282da90(&local_28,&local_a8,&local_c8);
    local_118 = 0x942838809ca0825a;
    pcStack_110 = "StoreSessionInfo";
    local_108 = 0x10;
    uStack_100 = 0;
    local_120 = uVar7;
    FUN_0282db40(param_1,CONCAT44(uStack_24,local_28),&local_118,&local_120);
    plVar5 = (long *)CONCAT44(uStack_24,local_28);
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    lVar6 = local_c8;
    local_c8 = 0;
    if (lVar6 != 0) {
      FUN_027e5e74(auStack_c0);
    }
    if (local_f8[0] != '\0') {
      local_f8[0] = '\0';
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if ((char)local_58[0] != '\0') {
      FUN_0278f0cc(auStack_50);
    }
  }
  return;
}


