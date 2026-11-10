/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fc350; name: FUN_002fc350
 */


void FUN_002fc350(long param_1,byte param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int *__ptr;
  
  FUN_0038db40(param_1 + 0x130);
  bVar1 = *(byte *)(param_1 + 0x150) | param_2 & 1;
  __ptr = *(int **)(param_1 + 0x158);
  *(byte *)(param_1 + 0x150) = bVar1;
  if (param_3 == (int *)0x0) {
    if (__ptr != (int *)0x0) goto LAB_002fc3a0;
LAB_002fc3cc:
    bVar2 = false;
  }
  else {
    if (__ptr != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002fc414 to 002fc417 has its CatchHandler @ 002fc418 */
      abort();
    }
    *(int **)(param_1 + 0x158) = param_3;
    __ptr = param_3;
LAB_002fc3a0:
    if (*(long *)(__ptr + 6) == 0) {
      if ((bVar1 == 0) && (*__ptr != 0)) goto LAB_002fc3cc;
    }
    else if (bVar1 == 0) goto LAB_002fc3cc;
    bVar2 = true;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
                    /* try { // try from 002fc3d0 to 002fc3d7 has its CatchHandler @ 002fc430 */
  FUN_0038db60(param_1 + 0x130);
  if (bVar2) {
    (**(code **)(param_1 + 0x78))
              (*__ptr,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(__ptr + 2),
               *(undefined8 *)(__ptr + 4),*(undefined8 *)(__ptr + 6));
    free(__ptr);
    return;
  }
  return;
}


