/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00361a70; name: FUN_00361a70
 */


void FUN_00361a70(void)

{
  undefined *puVar1;
  int *__ptr;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  FUN_0038db40(&DAT_047ef840);
  if (DAT_047ef800 == '\x01') {
    DAT_047ef800 = '\0';
    FUN_0038dcb0(&DAT_047ef80c);
    puVar1 = PTR_LAB_047cba48;
    while (0 < DAT_047ef804) {
      auVar4 = FUN_0038dd60(0);
      FUN_0038dbe0(&DAT_047ef814,&DAT_047ef840,auVar4._0_8_,auVar4._8_8_);
      __ptr = DAT_047ef820;
      if (DAT_047ef820 != (int *)0x0) {
        DAT_047ef820 = (int *)0x0;
        FUN_0038db60(&DAT_047ef840);
        do {
          if (*(long **)(__ptr + 2) == (long *)0x0) {
            if (*__ptr != 4) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          else {
            (**(code **)(**(long **)(__ptr + 2) + 0x18))();
            puVar3 = *(undefined8 **)(__ptr + 2);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3);
              FUN_0049e790(puVar1,puVar3);
            }
            *__ptr = 3;
            __ptr[2] = 0;
            __ptr[3] = 0;
          }
          piVar2 = *(int **)(__ptr + 8);
          free(__ptr);
          __ptr = piVar2;
        } while (piVar2 != (int *)0x0);
        FUN_0038db40(&DAT_047ef840);
      }
    }
  }
  DAT_047ef838 = 0;
  FUN_0038db60(&DAT_047ef840);
  return;
}


