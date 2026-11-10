/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b3f7cc; name: FUN_00b3f7cc
 */


void FUN_00b3f7cc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_530;
  char acStack_528 [8];
  undefined1 local_520;
  undefined8 local_51f;
  undefined8 local_517;
  undefined8 local_50f;
  undefined8 local_507;
  undefined8 local_4ff;
  undefined8 local_4f7;
  undefined8 local_4ef;
  undefined8 local_4e7;
  char local_4b0 [1152];
  
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
    memset(local_4b0,0,0x480);
    local_51f = 0;
    local_517 = 0;
    local_50f = 0;
    local_507 = 0;
    local_4ff = 0;
    local_4f7 = 0;
    local_4ef = 0;
    local_4e7 = 0;
    local_520 = 0;
    local_530 = DAT_03c2775a;
    acStack_528[0] = s_FA2C301A_03c27762[0];
    acStack_528[1] = s_FA2C301A_03c27762[1];
    acStack_528[2] = s_FA2C301A_03c27762[2];
    acStack_528[3] = s_FA2C301A_03c27762[3];
    acStack_528[4] = s_FA2C301A_03c27762[4];
    acStack_528[5] = s_FA2C301A_03c27762[5];
    acStack_528[6] = s_FA2C301A_03c27762[6];
    acStack_528[7] = s_FA2C301A_03c27762[7];
    FUN_01986a1c(&local_530,param_2);
    FUN_01f33b7c(param_1,lVar1,&local_530,8);
  }
  return;
}


