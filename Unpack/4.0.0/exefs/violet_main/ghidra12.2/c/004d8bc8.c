/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d8bc8; name: FUN_004d8bc8
 */


void FUN_004d8bc8(undefined *param_1)

{
  long *plVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if ((param_1 == PTR_DAT_047cd940) || (plVar1 = *(long **)(param_1 + 0x38), plVar1 == (long *)0x0))
  {
    return;
  }
  *plVar1 = (long)(PTR_DAT_047cd960 + 0x10);
                    /* try { // try from 004d8c40 to 004d8c43 has its CatchHandler @ 004d8c78 */
  FUN_004ca714(plVar1 + 1);
  FUN_004d2ad4(plVar1 + 6);
  FUN_005212b0(plVar1 + 2);
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


