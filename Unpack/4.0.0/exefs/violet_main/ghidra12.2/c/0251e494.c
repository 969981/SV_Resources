/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251e494; name: FUN_0251e494
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0251e494(undefined1 *param_1,double param_2,undefined1 param_3 [16],undefined8 param_4,
                 byte *param_5,byte *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar8 = param_3._8_8_;
  uVar6 = param_3._0_8_;
  if ((1 < *param_5) ||
     (puVar4 = *(undefined **)(param_5 + 8), *(undefined **)(param_5 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d4538);
      puVar4 = PTR_DAT_047d4540;
      uVar9 = _UNK_03cabe58;
      uVar7 = _DAT_03cabe50;
      uVar2 = _UNK_03caa988;
      uVar1 = _DAT_03caa980;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047d4540 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        *(undefined8 *)(puVar4 + 8) = uVar2;
        *(undefined8 *)puVar4 = uVar1;
        *(undefined8 *)(puVar4 + 0x18) = uVar9;
        *(undefined8 *)(puVar4 + 0x10) = uVar7;
        __cxa_guard_release(PTR_DAT_047d4538);
        uVar6 = uVar7;
        uVar8 = uVar9;
      }
    }
    else {
      puVar4 = PTR_DAT_047d4540;
    }
  }
  if ((1 < *param_6) ||
     (puVar5 = *(undefined **)(param_6 + 8), *(undefined **)(param_6 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d4538);
      puVar5 = PTR_DAT_047d4540;
      uVar9 = _UNK_03cabe58;
      uVar7 = _DAT_03cabe50;
      uVar2 = _UNK_03caa988;
      uVar1 = _DAT_03caa980;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047d4540 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0;
        *(undefined8 *)(puVar5 + 8) = uVar2;
        *(undefined8 *)puVar5 = uVar1;
        *(undefined8 *)(puVar5 + 0x18) = uVar9;
        *(undefined8 *)(puVar5 + 0x10) = uVar7;
        __cxa_guard_release(PTR_DAT_047d4538);
        uVar6 = uVar7;
        uVar8 = uVar9;
      }
    }
    else {
      puVar5 = PTR_DAT_047d4540;
    }
  }
  local_50 = FUN_01ea3064((float)param_2,puVar4,puVar5);
  *param_1 = 1;
  uStack_40 = uVar6;
  uStack_38 = uVar8;
  local_30 = param_4;
  FUN_019b8824(param_1 + 8,local_50);
  return;
}


