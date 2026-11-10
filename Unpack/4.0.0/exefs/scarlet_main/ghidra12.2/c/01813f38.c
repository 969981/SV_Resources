/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


