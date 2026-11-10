/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278f0d0; name: FUN_0278f0d0
 */


void FUN_0278f0d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_5b0;
  undefined3 uStack_5ac;
  char local_530 [1152];
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (*(long *)(param_2 + 0x1c0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x1c0) + 0x10);
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar6 = lVar4 + -0x28;
    }
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d6ca0;
  *(undefined8 *)PTR_DAT_047d6ca8 = uVar5;
  if (lVar6 == 0) {
    local_50 = 0xf9ea7befe95aa249;
    pcStack_48 = "NoSessionInstance";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_02792464(param_1,&local_50);
    plVar1 = local_38;
  }
  else if (*(char *)(param_2 + 0x9c) == '\0') {
    local_70 = 0x9d4262a916a71fe7;
    pcStack_68 = "NotEnabled";
    local_60 = 10;
    local_58 = (long *)0x0;
    FUN_02792464(param_1,&local_70);
    plVar1 = local_58;
  }
  else if (*(int *)(param_2 + 0xa0) == 2) {
    local_90 = 0xd9f1c65c26ca0f43;
    pcStack_88 = "SkipCreateSession_SendOnly";
    local_80 = 0x1a;
    local_78 = (long *)0x0;
    FUN_01987400(param_1,&local_90,&DAT_03d68958);
    plVar1 = local_78;
  }
  else {
    uVar3 = FUN_019d8b40(uVar5);
    if ((uVar3 & 1) == 0) {
      memset(local_530,0,0x480);
      memset((void *)((ulong)&local_5b0 | 7),0,0x4a);
      local_5b0 = 0x63616562;
      uStack_5ac = 0x6e6f;
      FUN_01959c90(param_1,lVar6,&local_5b0);
      return;
    }
    local_b0 = 0x3f5647e359f786bd;
    pcStack_a8 = "SkipCreateSession_SessionIsAlreadyCreated";
    local_a0 = 0x29;
    local_98 = (long *)0x0;
    FUN_01987400(param_1,&local_b0,&DAT_03d68958);
    plVar1 = local_98;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}


