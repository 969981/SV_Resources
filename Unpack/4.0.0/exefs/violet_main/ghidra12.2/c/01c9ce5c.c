/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9ce5c; name: FUN_01c9ce5c
 */


void FUN_01c9ce5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_580;
  char *pcStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined *puStack_558;
  undefined8 local_550;
  undefined8 local_548;
  char acStack_540 [5];
  char local_53b [3];
  char acStack_538 [5];
  undefined1 auStack_533 [115];
  char local_4c0 [1152];
  
  if (((DAT_0483a128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483a128), iVar2 != 0)) {
    FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a128);
  }
  lVar1 = DAT_0483a118;
  DAT_0483a110 = DAT_0483a118;
  if (DAT_0483a118 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    memset(local_4c0,0,0x480);
    memset(auStack_533,0,0x44);
    local_560 = 0xd61b039966c7c8d2;
    puStack_558 = &DAT_03bed9ab;
    local_548 = 0;
    acStack_540[0] = s_CasualBattle_03befad1[0];
    acStack_540[1] = s_CasualBattle_03befad1[1];
    acStack_540[2] = s_CasualBattle_03befad1[2];
    acStack_540[3] = s_CasualBattle_03befad1[3];
    acStack_540[4] = s_CasualBattle_03befad1[4];
    local_53b[0] = s_CasualBattle_03befad1[5];
    local_53b[1] = s_CasualBattle_03befad1[6];
    local_53b[2] = s_CasualBattle_03befad1[7];
    acStack_538[0] = s_CasualBattle_03befad1[8];
    acStack_538[1] = s_CasualBattle_03befad1[9];
    acStack_538[2] = s_CasualBattle_03befad1[10];
    acStack_538[3] = s_CasualBattle_03befad1[0xb];
    acStack_538[4] = s_CasualBattle_03befad1[0xc];
    local_550 = 4;
    FUN_01f2f314(acStack_540,0,&local_560,1);
    local_580 = 0x97115b87b3e98537;
    pcStack_578 = "lose_flag";
    local_570 = 9;
    uStack_568 = 0;
    FUN_01f2f314(acStack_540,1,&local_580,param_2 & 1);
    FUN_01f2f3d4(param_1,lVar1,acStack_540,0,2);
  }
  return;
}


