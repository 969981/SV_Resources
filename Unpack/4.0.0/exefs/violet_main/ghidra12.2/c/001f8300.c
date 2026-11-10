/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8300; name: FUN_001f8300
 */


void FUN_001f8300(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 4) != -1)) {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      FUN_001f45c4(param_1[1],param_1,*param_1);
      return;
    }
  }
  return;
}


