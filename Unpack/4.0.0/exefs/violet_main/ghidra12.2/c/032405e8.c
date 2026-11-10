/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032405e8; name: FUN_032405e8
 */


void FUN_032405e8(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    puVar2 = (undefined8 *)(param_2 + 8);
    do {
      (**(code **)(*param_1 + 0x40))(param_1,puVar2[-1],*puVar2);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 != 0);
  }
  return;
}


