/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c62cc; name: FUN_001c62cc
 */


undefined4 FUN_001c62cc(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] != 0) {
      if ((*(int *)((long)param_1 + 0x25c) != param_2) || (*(char *)((long)param_1 + 0x269) == '\0')
         ) {
        FUN_001d0e5c(*param_1,param_2);
        FUN_001d14e0(*param_1,1);
        uVar1 = (*(code *)param_1[10])(param_1[0xb],param_2);
        FUN_001d14e0(*param_1,0);
        return uVar1;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN_001d0e5c(*param_1,param_2);
  }
  nnsocketClose(param_2);
  return 0;
}


