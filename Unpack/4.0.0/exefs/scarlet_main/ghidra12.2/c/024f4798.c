/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f4798; name: FUN_024f4798
 */


void FUN_024f4798(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar2 = (code *)*param_2;
  if ((((1 < *param_3) ||
       (puVar3 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar3 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar3 = (undefined8 *)PTR_DAT_047d5150,
     iVar1 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar3 + 0x38) = 0;
    *(undefined8 *)((long)puVar3 + 0x20) = 0;
    *(undefined8 *)((long)puVar3 + 0x28) = 0;
    *(undefined8 *)((long)puVar3 + 0x10) = 0;
    *(undefined8 *)((long)puVar3 + 0x18) = 0;
    *puVar3 = 0;
    *(undefined8 *)((long)puVar3 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  uVar7 = puVar3[5];
  uVar6 = puVar3[4];
  uVar9 = puVar3[7];
  uVar8 = puVar3[6];
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  local_60 = (*pcVar2)(*puVar3);
  *param_1 = 1;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  local_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar8;
  uStack_28 = uVar9;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


