/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d0e5c; name: FUN_001d0e5c
 */


void FUN_001d0e5c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_38;
  int local_34;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0xd8), lVar2 != 0)) {
    if (param_2 != -1) {
      local_38 = param_2;
      lVar1 = FUN_001c8b08(lVar2 + 0xb8,&local_38,4);
      if (lVar1 != 0) {
        if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
          (**(code **)(lVar2 + 0x60))
                    (param_1,param_2,4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar1 + 0x28));
        }
        local_34 = param_2;
        FUN_001c8a64(lVar2 + 0xb8,&local_34,4);
      }
    }
  }
  return;
}


