/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c5580; name: FUN_031c5580
 */


void FUN_031c5580(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    lVar2 = 0;
    lVar3 = (ulong)*(uint *)((long)param_1 + 0xc) + 1;
    do {
      if (*(long *)(*param_1 + lVar2) != -1) {
        *(undefined8 *)(*param_1 + lVar2) = 0xffffffffffffffff;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (*param_1 != 0)) {
    (**(code **)(*param_2 + 0x20))
              (param_2,*param_1,(long)*(int *)((long)param_1 + 0xc) * 0x10 + 0x10);
  }
  *param_1 = 0;
  param_1[1] = -0x100000000;
  return;
}


