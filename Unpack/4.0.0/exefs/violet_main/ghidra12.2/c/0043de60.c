/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043de60; name: FUN_0043de60
 */


undefined8 FUN_0043de60(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  lVar2 = *(long *)(param_1 + 4);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x90) != (code *)0x0) {
      uVar1 = (**(code **)(lVar2 + 0x90))(param_1,param_2);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      lVar2 = *(long *)(param_1 + 4);
    }
    if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043dec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0x30))(param_1,param_2);
      return uVar1;
    }
  }
  return 0xfffffffe;
}


