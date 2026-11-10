/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a929c; name: FUN_033a929c
 */


void FUN_033a929c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0xa8) = -(uint)(*(int *)(param_1 + 0xc0) < 1);
  iVar2 = *(int *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 200) + lVar3);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x20))
                (*(long **)(param_1 + 0x98),*puVar1,puVar1[1]);
      iVar2 = *(int *)(param_1 + 0xd0);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x24) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}


