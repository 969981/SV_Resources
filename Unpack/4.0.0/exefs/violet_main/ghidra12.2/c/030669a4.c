/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030669a4; name: FUN_030669a4
 */


void FUN_030669a4(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong local_68;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar8 * 2;
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  if (0x7ffffffd < uVar4) {
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x10,&local_68);
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    puVar13 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar9 = puVar3;
    puVar10 = puVar13;
    iVar14 = iVar12;
    do {
      FUN_03066b20(puVar5,puVar10);
      *puVar9 = *puVar10;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
      puVar5 = (undefined8 *)(ulong)*(uint *)((long)puVar10 + 0xc);
      *(uint *)((long)puVar9 + 0xc) = *(uint *)((long)puVar10 + 0xc);
      iVar14 = iVar14 + -1;
      puVar9 = puVar9 + 2;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 2;
    } while (iVar14 != 0);
    puVar11 = (uint *)((long)puVar13 + 0xc);
    do {
      puVar11[-1] = 0;
      if ((-1 < (int)*puVar11) && (*(long *)(puVar11 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar11 + -3),(ulong)*puVar11 << 5);
      }
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      iVar12 = iVar12 + -1;
      *puVar11 = 0x80000000;
      puVar11 = puVar11 + 4;
    } while (iVar12 != 0);
  }
  uVar6 = uVar4 * 0x10 | 0x10;
  if (uVar6 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar7 = uVar4 | 1;
    lVar1 = uVar4 * -0x10;
    uVar4 = uVar7;
    if (uVar6 <= local_68) {
      uVar4 = uVar7 + (local_68 + lVar1 >> 4);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar8 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar3;
  return;
}


