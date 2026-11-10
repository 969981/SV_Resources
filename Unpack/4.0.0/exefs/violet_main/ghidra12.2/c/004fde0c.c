/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fde0c; name: FUN_004fde0c
 */


void FUN_004fde0c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    plVar1 = (long *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      return;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x18);
    }
    plVar1 = (long *)FUN_00520544(lVar3,0x18,PTR_LAB_047cdae8);
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = lVar3;
  }
  *(long **)(param_1 + 0x10) = plVar1;
  return;
}


