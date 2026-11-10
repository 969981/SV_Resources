/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e514c; name: FUN_001e514c
 */


void FUN_001e514c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  
  if ((*(byte *)(*param_1 + 0xf43) >> 2 & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  plVar1 = param_1 + 0x1b;
  if ((uVar2 & 4) != 0) {
    plVar1 = param_1 + 0x21;
  }
  if ((uVar2 & 0x20) != 0) {
    plVar1 = param_1 + 0x2d;
  }
  if ((uVar2 & 0x40) != 0) {
    plVar1 = param_1 + 0x25;
  }
  FUN_001db818(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",*plVar1,param_1 + 0x11,
               param_1[0x32],param_1[0xc]);
  return;
}


