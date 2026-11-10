/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec6c8; name: FUN_007ec6c8
 */


void FUN_007ec6c8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_047d14e8;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if ((int)param_1[4] != 0) {
    do {
      lVar2 = FUN_0078fac8(param_1 + 2);
      if (lVar2 == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(lVar2 - *(int *)((long)param_1 + 0x24));
      }
      (**(code **)*puVar3)(puVar3);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_007bfae0(puVar3);
        FUN_007bfaa0(puVar3);
      }
    } while ((int)param_1[4] != 0);
  }
  return;
}


