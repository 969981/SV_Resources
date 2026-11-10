/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ecb2c; name: FUN_027ecb2c
 */


void FUN_027ecb2c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8 [3];
  long *local_90;
  char local_88 [72];
  long *local_28;
  
  lVar9 = *param_2;
  FUN_0195a874(local_a8,param_3);
  FUN_0195a950(local_88,local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_88[0] == '\0') {
    local_c8 = 0x20bab3e3d76997df;
    pcStack_c0 = "InvalidParameter";
    local_b8 = 0x10;
    local_b0 = (long *)0x0;
    FUN_027ecde4(param_1,&local_c8);
    if (local_b0 == (long *)0x0) {
      return;
    }
    pcVar8 = *(code **)(*local_b0 + 0x20);
    goto LAB_027ecd28;
  }
  uVar7 = (uint)*(ushort *)(lVar9 + 0x5c0);
  if (*(ushort *)(lVar9 + 0x5c0) == 0) {
    local_a8[0] = 0;
    nn::os::GenerateRandomBytes(local_a8,8);
    uVar7 = (int)local_a8[0] +
            ((int)(SUB168(SEXT816(local_a8[0]) * SEXT816(0x6666666666666667),8) >> 1) -
            (SUB164(SEXT816(local_a8[0]) * SEXT816(0x6666666666666667),0xc) >> 0x1f)) * -5 + 4;
    *(short *)(lVar9 + 0x5c0) = (short)uVar7;
    if ((uVar7 & 0xffff) != 0) goto LAB_027ecb84;
LAB_027ecd74:
    FUN_01959c90(&local_d0,lVar9,param_3);
  }
  else {
LAB_027ecb84:
    *(short *)(lVar9 + 0x5c0) = (short)(uVar7 - 1);
    if ((uVar7 - 1 & 0xffff) == 0) goto LAB_027ecd74;
    FUN_027e3320(&local_d0,lVar9,param_3);
  }
  plVar6 = local_d0;
  local_f0 = 0x7ffa5533b9781f92;
  pcStack_e8 = "WaitMember";
  local_e0 = 10;
  local_d8 = (long *)0x0;
  lVar5 = param_2[1];
  local_a8[0] = 0;
  nn::os::GenerateRandomBytes(local_a8,8);
  FUN_027ecfd0(&local_28,
               (double)((int)local_a8[0] +
                        ((SUB164(SEXT816(local_a8[0]) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                        (SUB164(SEXT816(local_a8[0]) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) *
                        -1000 + 3000 & 0xffff),plVar6,&local_f0,(short)lVar5);
  local_110 = 0x1b6c0662029545e2;
  pcStack_108 = "JoinRandomRecover";
  local_100 = 0x11;
  uStack_f8 = 0;
  local_a8[0] = lVar9;
  FUN_027ed72c(param_1,local_28,&local_110,local_a8);
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027ecdcc;
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_d0 == (long *)0x0) {
    return;
  }
  lVar9 = local_d0[6];
  psVar1 = (short *)(lVar9 + 0x1a);
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
    *(undefined8 *)(lVar9 + 0x10) = 0;
    pcVar8 = *(code **)(*local_d0 + 0x50);
LAB_027ecd28:
    (*pcVar8)();
    return;
  }
  if (sVar2 != 0) {
    return;
  }
LAB_027ecdcc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


