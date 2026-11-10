/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02503ba0; name: FUN_02503ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02503ba0(undefined1 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((1 < *param_2) ||
     (puVar6 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d4538);
      puVar6 = PTR_DAT_047d4540;
      uVar4 = _UNK_03cabe58;
      uVar3 = _DAT_03cabe50;
      uVar2 = _UNK_03caa988;
      uVar1 = _DAT_03caa980;
      if (iVar5 != 0) {
        *(undefined8 *)(PTR_DAT_047d4540 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x28) = 0;
        *(undefined8 *)(puVar6 + 8) = uVar2;
        *(undefined8 *)puVar6 = uVar1;
        *(undefined8 *)(puVar6 + 0x18) = uVar4;
        *(undefined8 *)(puVar6 + 0x10) = uVar3;
        __cxa_guard_release(PTR_DAT_047d4538);
      }
    }
    else {
      puVar6 = PTR_DAT_047d4540;
    }
  }
  thunk_FUN_025041bc(&local_40,puVar6);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  return;
}


