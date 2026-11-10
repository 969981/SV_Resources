/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff320; name: FUN_007ff320
 */


void FUN_007ff320(long param_1)

{
  int *piVar1;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  *(undefined1 *)(param_1 + 0x1370) = 0;
  FUN_00800fd4(*(undefined8 *)(param_1 + 0x1308));
  if (*(long *)(param_1 + 0x1398) != 0) {
    FUN_00800878();
    (**(code **)(**(long **)(param_1 + 0x1398) + 0x10))(*(long **)(param_1 + 0x1398),0);
  }
  piVar1 = *(int **)(param_1 + 0x13a0);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_30,local_40);
      FUN_0078cb94(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x13a0) = 0;
  }
  return;
}


