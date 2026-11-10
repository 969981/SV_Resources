/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eba94; name: FUN_001eba94
 */


undefined8 FUN_001eba94(undefined8 *param_1,int param_2,char *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0') ||
     (uVar2 = FUN_001eb994(param_1,param_2), (int)uVar2 == 0)) {
    uVar3 = FUN_001eba3c(*param_1);
    puVar1 = PTR_PTR_047cb968;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0x23;
    }
    else {
      *(byte *)(param_1 + (long)param_2 * 3 + 0x54) =
           *(byte *)(param_1 + (long)param_2 * 3 + 0x54) | 1;
      uVar2 = (**(code **)(*(long *)puVar1 + 0x68))(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        if (*param_3 != '\0') {
          FUN_001dac98(*param_1,5);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


