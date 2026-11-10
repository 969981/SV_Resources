/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034db864; name: FUN_034db864
 */


undefined8 FUN_034db864(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar5 = *plVar3;
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x38) == param_2) break;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  bVar2 = *(byte *)(lVar5 + 0x40);
  if (bVar2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((long)param_3 + 0xc) == 0) {
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_3,4);
      if (lVar5 == 0) {
        return 1;
      }
      uVar6 = *(uint *)(param_3 + 1);
      *param_3 = lVar5;
      *(undefined4 *)((long)param_3 + 0xc) = 1;
    }
    else {
      lVar5 = *param_3;
      uVar6 = 0;
    }
    *(uint *)(param_3 + 1) = uVar6 + 1;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + (ulong)uVar6 * 4) = 0;
    }
    return 1;
  }
  puVar4 = (uint *)*param_3;
  uVar6 = *(uint *)(param_3 + 1);
  if (uVar6 != 0) {
    lVar5 = (ulong)uVar6 << 2;
    puVar7 = puVar4;
    do {
      if (*puVar7 == (uint)bVar2) {
        return 0;
      }
      lVar5 = lVar5 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  uVar8 = *(uint *)((long)param_3 + 0xc);
  if (uVar8 <= uVar6) {
    iVar1 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar8 = iVar1 + uVar8;
    puVar4 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar4,(ulong)uVar8 << 2);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    *param_3 = (long)puVar4;
    *(uint *)((long)param_3 + 0xc) = uVar8;
  }
  if (uVar6 < uVar8) {
    uVar6 = *(uint *)(param_3 + 1);
    *(uint *)(param_3 + 1) = uVar6 + 1;
    if (puVar4 != (uint *)0x0) {
      puVar4[uVar6] = (uint)bVar2;
      return 0;
    }
  }
  return 0;
}


