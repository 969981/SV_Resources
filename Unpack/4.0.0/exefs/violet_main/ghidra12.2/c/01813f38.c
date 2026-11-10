/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01813f38; name: FUN_01813f38
 */


bool FUN_01813f38(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3) <= (ulong)(long)param_2)
  {
    return false;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 8);
  if (*(int *)(lVar2 + 0xa4) == 1) {
    return true;
  }
  lVar2 = **(long **)(lVar2 + 0x40);
  puVar1 = (undefined8 *)PTR_DAT_047d8b70;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x30);
  }
  return (undefined1 *)*puVar1 != &DAT_cbf29ce484222645;
}


