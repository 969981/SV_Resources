/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c1588; name: FUN_002c1588
 */


void FUN_002c1588(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *local_28;
  
  *param_1 = 0;
  uVar4 = *param_2;
  uVar3 = uVar4 >> 1;
  local_28 = param_2 + 1;
  if ((uVar4 & 1) != 0) {
    local_28 = (ulong *)param_2[1];
  }
  if (uVar4 < 6) {
    puVar2 = param_1 + 1;
  }
  else {
    uVar1 = uVar3;
    if (uVar3 < 5) {
      uVar1 = 4;
    }
    puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x18);
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar1;
    *param_1 = *param_1 | 1;
  }
                    /* try { // try from 002c15f8 to 002c1607 has its CatchHandler @ 002c1628 */
  FUN_002c16a0(param_1,puVar2,&local_28,uVar3);
  *param_1 = *param_1 + (uVar4 & 0xfffffffffffffffe);
  return;
}


