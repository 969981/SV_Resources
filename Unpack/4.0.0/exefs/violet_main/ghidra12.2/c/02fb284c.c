/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb284c; name: FUN_02fb284c
 */


void FUN_02fb284c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  uVar7 = *(int *)((long)param_1 + 0xc) * 2;
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  if (0x7ffffffd < uVar7) {
    uVar7 = 0x7ffffffe;
  }
  uVar11 = (ulong)uVar7 * 0x10;
  local_48 = uVar11;
  puVar6 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar6;
    if (uVar3 != 1) {
      iVar10 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = puVar8[1];
        iVar10 = iVar10 + 2;
        *puVar9 = *puVar8;
        puVar9[1] = uVar2;
        puVar1 = puVar8 + 2;
        uVar2 = puVar8[3];
        puVar8 = puVar8 + 4;
        puVar9[2] = *puVar1;
        puVar9[3] = uVar2;
        puVar9 = puVar9 + 4;
      } while (iVar10 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[1] = uVar2;
    }
  }
  uVar11 = uVar11 + 0x10;
  if (uVar11 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar3 = uVar7 + 1 + (int)(local_48 + (ulong)uVar7 * -0x10 >> 4);
    if (local_48 < uVar11) {
      uVar3 = uVar7 + 1;
    }
    uVar7 = uVar3;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(uint *)((long)param_1 + 0xc) = uVar7;
  *param_1 = puVar6;
  return;
}


