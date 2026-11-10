/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a3dcc; name: FUN_034a3dcc
 */


void FUN_034a3dcc(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined2 *)(param_1 + 0x2b8) = 1;
  puVar1 = PTR_DAT_047e71d0;
  puVar2 = *(undefined8 **)(PTR_DAT_047e71d0 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    *puVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 **)(puVar1 + 0x10) = puVar2;
  }
  if (*(undefined8 **)(puVar1 + 8) == (undefined8 *)0x0) {
    *(undefined8 **)puVar1 = puVar2;
  }
  else {
    **(undefined8 **)(puVar1 + 8) = puVar2;
    puVar2 = *(undefined8 **)(puVar1 + 0x10);
  }
  *(undefined8 **)(puVar1 + 8) = puVar2;
  *(undefined8 *)(puVar1 + 0x10) = *puVar2;
  *puVar2 = 0;
  *(int *)(puVar1 + 0x24) = *(int *)(puVar1 + 0x24) + 1;
  lVar3 = *(long *)(puVar1 + 8);
  *(long *)(lVar3 + 8) = param_1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)PTR_DAT_047e6fe0;
  *(ushort *)(lVar3 + 0x14) = *(ushort *)(lVar3 + 0x14) & 0xfe00 | 4;
  return;
}


