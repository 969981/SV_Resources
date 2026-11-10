/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eaef50; name: FUN_02eaef50
 */


void FUN_02eaef50(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  ulong local_68;
  
  plVar12 = (long *)PTR_PTR_047d1a50;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar8 * 2;
  if (uVar4 < 0x21) {
    uVar4 = 0x20;
  }
  if (0x7ffffffd < uVar4) {
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x40,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar13 = *(int *)(param_1 + 1);
  if (0 < iVar13) {
    puVar7 = (undefined8 *)*param_1;
    puVar9 = puVar3;
    puVar11 = puVar7;
    iVar14 = iVar13;
    do {
      FUN_02eaedd0(puVar11,puVar2);
      *puVar9 = *puVar11;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
      *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar11 + 0xc);
      *puVar11 = 0;
      puVar11[1] = 0;
      memcpy(puVar9 + 2,puVar11 + 2,0x24);
      plVar12 = (long *)PTR_PTR_047d1a50;
      iVar14 = iVar14 + -1;
      puVar11 = puVar11 + 8;
      puVar9 = puVar9 + 8;
    } while (iVar14 != 0);
    puVar10 = (uint *)((long)puVar7 + 0xc);
    do {
      puVar10[-1] = 0;
      if ((-1 < (int)*puVar10) && (*(long *)(puVar10 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar10 + -3),(ulong)*puVar10 << 1);
      }
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      iVar13 = iVar13 + -1;
      *puVar10 = 0x80000000;
      puVar10 = puVar10 + 0x10;
    } while (iVar13 != 0);
  }
  uVar5 = uVar4 * 0x40 | 0x40;
  if (uVar5 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar6 = uVar4 | 1;
    lVar1 = uVar4 * -0x40;
    uVar4 = uVar6;
    if (uVar5 <= local_68) {
      uVar4 = uVar6 + (local_68 + lVar1 >> 6);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar12 + 0x20))(plVar12,*param_1,uVar8 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar3;
  return;
}


