/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c7ebd4; name: FUN_01c7ebd4
 */


void FUN_01c7ebd4(char *param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = 0x10;
  if (DAT_04815b98 == '\0') {
    lVar2 = -1;
  }
  if ((1 < *param_2) ||
     (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d4538 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4538), iVar3 != 0)) {
      FUN_01667884(&local_50);
      puVar4 = (undefined8 *)PTR_DAT_047d4540;
      puVar1 = (undefined8 *)(PTR_DAT_047d4540 + 0x20);
      *(undefined8 *)(PTR_DAT_047d4540 + 0x28) = uStack_28;
      *puVar1 = local_30;
      *(undefined8 *)((long)puVar4 + 8) = uStack_48;
      *puVar4 = local_50;
      *(undefined8 *)((long)puVar4 + 0x18) = uStack_38;
      *(undefined8 *)((long)puVar4 + 0x10) = uStack_40;
      __cxa_guard_release(PTR_DAT_047d4538);
    }
    else {
      puVar4 = (undefined8 *)PTR_DAT_047d4540;
    }
  }
  uVar9 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  uVar6 = puVar4[5];
  uVar5 = puVar4[4];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[1] = puVar4[1];
    *puVar1 = uVar9;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
  }
  return;
}


