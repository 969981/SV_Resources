/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f57dc; name: FUN_001f57dc
 */


void FUN_001f57dc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*param_1 + (uVar3 + param_1[2] & param_1[1]) * 8);
      FUN_001f8300(puVar2[1]);
      FUN_001f8300(*puVar2);
      FUN_001f45b0(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[3]);
  }
  FUN_001f45b0(lVar1,*param_1);
  return;
}


