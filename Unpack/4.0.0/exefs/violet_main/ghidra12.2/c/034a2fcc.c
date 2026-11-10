/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a2fcc; name: FUN_034a2fcc
 */


void FUN_034a2fcc(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 2) == 0 || *(long *)(param_2 + 2) == param_1[5]) &&
     ((param_2[4] == 0 || (param_2[4] == (int)param_1[0x45])))) {
    switch(*param_2) {
    case 0:
      FUN_034a30a4(param_1,param_2 + 5,1);
      return;
    case 1:
      FUN_034a3174(param_1,param_2 + 5);
      return;
    case 2:
      FUN_034a32dc(param_1,param_2 + 5,*(undefined1 *)((long)param_2 + 0x22));
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x034a304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)(param_2 + 10));
      return;
    case 5:
      if ((long *)param_1[0xd] == (long *)0x0) {
        *(undefined4 *)(param_1 + 0xe) = 0;
        return;
      }
      for (plVar1 = *(long **)param_1[0xd]; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        lVar2 = plVar1[1];
        if ((*(int *)(lVar2 + 0x6c) == 0x7fffffff) &&
           (*(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(lVar2 + 0x70),
           *(int *)(lVar2 + 0x78) != 3)) {
          *(undefined4 *)(lVar2 + 0x78) = 2;
        }
      }
    }
  }
  return;
}


