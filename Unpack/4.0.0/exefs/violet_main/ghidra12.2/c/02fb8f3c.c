/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb8f3c; name: FUN_02fb8f3c
 */


void FUN_02fb8f3c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  ulong local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  uVar2 = *(int *)((long)param_1 + 0xc) * 2;
  uVar9 = (ulong)uVar2;
  if (uVar2 < 3) {
    uVar9 = 2;
  }
  if (0x7ffffffd < uVar9) {
    uVar9 = 0x7ffffffe;
  }
  local_48 = uVar9 * 8;
  puVar6 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar7 = (undefined8 *)*param_1;
    uVar1 = uVar2 & 3;
    puVar10 = puVar6;
    if (2 < uVar2 - 1) {
      iVar12 = -(uVar2 & 0xfffffffc);
      do {
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar10[3] = puVar7[3];
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 4;
        iVar12 = iVar12 + 4;
      } while (iVar12 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  uVar8 = uVar9 * 8 | 8;
  if (uVar8 <= local_48) {
    local_48 = local_48 - 8;
    uVar11 = uVar9 | 1;
    lVar3 = uVar9 * -8;
    uVar9 = uVar11;
    if (uVar8 <= local_48) {
      uVar9 = uVar11 + (local_48 + lVar3 >> 3);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = (long)puVar6;
  return;
}


