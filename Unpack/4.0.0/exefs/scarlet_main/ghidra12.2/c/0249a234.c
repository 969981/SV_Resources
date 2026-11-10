/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0249a234; name: FUN_0249a234
 */


void FUN_0249a234(char *param_1,byte *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = 0x40;
  if (DAT_0484c0c0 == '\0') {
    lVar2 = -1;
  }
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d5150, (*PTR_DAT_047d5148 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5148), puVar4 = (undefined8 *)PTR_DAT_047d5150,
     iVar3 != 0)) {
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
  uVar11 = *puVar4;
  uVar10 = puVar4[3];
  uVar9 = puVar4[2];
  uVar8 = puVar4[5];
  uVar7 = puVar4[4];
  uVar6 = puVar4[7];
  uVar5 = puVar4[6];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[1] = puVar4[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[7] = uVar6;
    puVar1[6] = uVar5;
  }
  return;
}


