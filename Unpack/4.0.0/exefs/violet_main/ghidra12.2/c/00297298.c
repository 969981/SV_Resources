/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00297298; name: FUN_00297298
 */


void FUN_00297298(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *local_28;
  
  *param_1 = 0;
  uVar3 = *param_2;
  uVar2 = uVar3 >> 1;
  local_28 = param_2 + 1;
  if ((uVar3 & 1) != 0) {
    local_28 = (ulong *)param_2[1];
  }
  if (uVar3 < 4) {
    puVar1 = param_1 + 1;
  }
  else {
    puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar2 * 0x90);
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
                    /* try { // try from 002972fc to 0029730b has its CatchHandler @ 0029732c */
  FUN_0027b3f0(param_1,puVar1,&local_28,uVar2);
  *param_1 = *param_1 + (uVar3 & 0xfffffffffffffffe);
  return;
}


