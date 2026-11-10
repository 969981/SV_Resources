/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fbb44; name: FUN_004fbb44
 */


void FUN_004fbb44(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && *(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80)) {
                    /* try { // try from 004fbb68 to 004fbb6b has its CatchHandler @ 004fbbb0 */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),iVar1);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
  return;
}


