/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e1030; name: FUN_003e1030
 */


void FUN_003e1030(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_8 [5];
  undefined1 auStack_3 [3];
  
  *(undefined4 *)(param_1 + 4) = 2;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    lVar1 = 7;
    do {
      lVar2 = lVar1;
      auStack_8[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar2 + -1;
    } while (param_2 != 0);
    uVar3 = 0x102;
  }
  else {
    lVar1 = 7;
    do {
      lVar2 = lVar1;
      auStack_8[lVar2] = (char)param_2;
      param_2 = param_2 >> 8;
      lVar1 = lVar2 + -1;
    } while (param_2 != 0);
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 4) = uVar3;
  FUN_003df070(param_1,auStack_8 + lVar2,8 - (int)lVar2);
  return;
}


