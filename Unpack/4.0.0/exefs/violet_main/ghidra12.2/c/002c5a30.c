/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c5a30; name: FUN_002c5a30
 */


void FUN_002c5a30(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_2 == (ulong *)0x0) {
    return;
  }
  uVar2 = param_2[0x12];
  param_2[0x12] = 0;
  if (uVar2 != 0) {
    FUN_002c5ac4(uVar2);
    FUN_0049e790(PTR_LAB_047cba48,uVar2);
  }
  if ((*param_2 & 1) == 0) {
    puVar1 = param_2 + 1;
  }
  else {
    puVar1 = (ulong *)param_2[1];
  }
                    /* try { // try from 002c5a88 to 002c5a8f has its CatchHandler @ 002c5ac0 */
  FUN_002c5c50(param_2,puVar1,*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[1]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


