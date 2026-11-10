/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0021d48c; name: FUN_0021d48c
 */


ulong * FUN_0021d48c(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)(*param_1 & 0xfffffffffffffffe);
  if ((*param_1 & 1) == 0) {
    if (puVar2 != (ulong *)0x0) goto LAB_0021d4a8;
LAB_0021d4d0:
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (puVar1 == (ulong *)0x0) goto LAB_0021d4ec;
  }
  else {
    puVar2 = (ulong *)*puVar2;
    if (puVar2 == (ulong *)0x0) goto LAB_0021d4d0;
LAB_0021d4a8:
    if (puVar2[0xe] != 0) {
      FUN_00520d08(puVar2,0,0x20);
    }
    puVar1 = (ulong *)FUN_00520544(puVar2,0x20,PTR_LAB_047cbe48);
  }
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
LAB_0021d4ec:
  *param_1 = (ulong)puVar1 | 1;
  *puVar1 = (ulong)puVar2;
  return puVar1 + 1;
}


