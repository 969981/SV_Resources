/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02693600; name: FUN_02693600
 */


ulong FUN_02693600(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)FUN_00c41a10(param_1,0xffffffff);
  if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = **(ulong **)(*plVar1 + 8);
    uVar2 = uVar3 & 0xffffffff00000000;
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3 | uVar2;
}


