/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d0cbc; name: FUN_001d0cbc
 */


undefined8 FUN_001d0cbc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar2 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    *param_1 = 0;
    plVar1 = (long *)param_1[1];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (((*(byte *)((long)plVar1 + 0x15a5) >> 3 & 1) == 0) && (plVar1[2] != 0)) {
        FUN_001cef34(plVar1,0,1);
      }
      if (*(int *)(plVar1 + 0x1a) == 2) {
        FUN_001c9724(plVar1,plVar1[0x19]);
        plVar1[0x19] = 0;
        *(undefined4 *)(plVar1 + 0x1a) = 0;
      }
      plVar1[0x220] = 0;
      plVar1[0x1b] = 0;
      plVar1 = (long *)lVar3;
    }
    FUN_001c7584(param_1 + 0x1f);
    FUN_001c8b94(param_1 + 0x17);
    FUN_001c6df8(param_1 + 0x1f);
    FUN_001cb68c(param_1 + 4,0);
    FUN_001cb68c(param_1 + 8,0);
    FUN_001c8b94(param_1 + 0x10);
    FUN_001da36c(0,param_1 + 0x30);
    FUN_001da4f4(0,param_1 + 0x34);
    FUN_001ec308(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


