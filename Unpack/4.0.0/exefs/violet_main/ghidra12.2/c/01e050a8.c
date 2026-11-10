/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e050a8; name: FUN_01e050a8
 */


void FUN_01e050a8(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                 undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 (*local_30) [16];
  undefined8 local_28;
  
  if ((DAT_04837608 & 1) == 0) {
    local_30 = param_1;
    local_28 = param_2;
    iVar2 = __cxa_guard_acquire(&DAT_04837608);
    param_2 = local_28;
    param_1 = local_30;
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
      param_2 = local_28;
      param_1 = local_30;
    }
  }
  uVar1 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  *(undefined4 *)param_1[2] = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  lVar3 = FUN_01aa1cf8(uVar1,param_2,param_3);
  if (lVar3 != 0) {
    local_40 = 0;
    uStack_38 = 0;
    FUN_0180f428(&local_40,lVar3);
    auVar4 = FUN_00cbc2e4(lVar3,lVar3 + 0x90);
    *(undefined4 *)param_1[2] = *param_4;
    *param_1 = auVar4;
    *(undefined8 *)(param_1[1] + 8) = uStack_38;
    *(undefined8 *)param_1[1] = local_40;
  }
  return;
}


