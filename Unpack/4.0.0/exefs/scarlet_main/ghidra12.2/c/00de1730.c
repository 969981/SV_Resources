/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00de1730; name: FUN_00de1730
 */


undefined8 FUN_00de1730(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  for (plVar1 = *(long **)(param_1 + 0xb8); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((plVar1[4] != 0) && ((*(byte *)(plVar1[4] + 0x1e8) & 1) == 0)) {
      return 0;
    }
  }
  for (plVar1 = *(long **)(param_1 + 0x188); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((plVar1[3] != 0) && ((*(byte *)(plVar1[3] + 0x60) & 1) == 0)) {
      return 0;
    }
  }
  if ((((*(long *)(param_1 + 0x50) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1e8) & 1) != 0)) &&
      ((*(long *)(param_1 + 600) == 0 || ((*(byte *)(*(long *)(param_1 + 600) + 0x1e8) & 1) != 0))))
     && ((((*(long *)(param_1 + 0x2d0) != 0 &&
           ((*(byte *)(*(long *)(param_1 + 0x2d0) + 0x1e8) & 1) != 0)) &&
          (*(long *)(param_1 + 0x308) != 0)) &&
         ((*(byte *)(*(long *)(param_1 + 0x308) + 0x60) & 1) != 0)))) {
    lVar2 = *(long *)(param_1 + 0x310);
    while( true ) {
      if (lVar2 == *(long *)(param_1 + 0x318)) {
        plVar1 = *(long **)(param_1 + 0x378);
        if (plVar1 == (long *)0x0) {
          return 1;
        }
        do {
          for (plVar3 = (long *)plVar1[9]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if ((plVar3[4] != 0) && ((*(byte *)(plVar3[4] + 0x1e8) & 1) == 0)) {
              return 0;
            }
          }
          plVar1 = (long *)*plVar1;
          if (plVar1 == (long *)0x0) {
            return 1;
          }
        } while( true );
      }
      if ((*(long *)(lVar2 + 8) == 0) || ((*(byte *)(*(long *)(lVar2 + 8) + 0x1e8) & 1) == 0))
      break;
      lVar2 = lVar2 + 0x40;
    }
  }
  return 0;
}


