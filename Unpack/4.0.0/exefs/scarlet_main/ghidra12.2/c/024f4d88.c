/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f4d88; name: FUN_024f4d88
 */


void FUN_024f4d88(undefined1 *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar3 = (code *)*param_2;
  if ((((1 < *param_3) ||
       (puVar4 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar4 = (undefined8 *)PTR_DAT_047d5150,
     iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)((long)puVar4 + 0x38) = 0;
    *(undefined8 *)((long)puVar4 + 0x20) = 0;
    *(undefined8 *)((long)puVar4 + 0x28) = 0;
    *(undefined8 *)((long)puVar4 + 0x10) = 0;
    *(undefined8 *)((long)puVar4 + 0x18) = 0;
    *puVar4 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  uVar5 = *puVar4;
  uVar7 = puVar4[3];
  uVar6 = puVar4[2];
  uVar9 = puVar4[5];
  uVar8 = puVar4[4];
  uVar11 = puVar4[7];
  uVar10 = puVar4[6];
  if (((1 < *param_4) || (*(long *)(param_4 + 8) == 0)) &&
     (((*PTR_DAT_047d5148 & 1) == 0 &&
      (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar1 = PTR_DAT_047d5150, iVar2 != 0)))) {
    *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d5148);
  }
  local_60 = (*pcVar3)(uVar5);
  *param_1 = 1;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  local_40 = uVar8;
  uStack_38 = uVar9;
  uStack_30 = uVar10;
  uStack_28 = uVar11;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


