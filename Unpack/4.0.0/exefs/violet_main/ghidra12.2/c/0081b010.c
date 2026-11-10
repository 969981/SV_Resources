/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081b010; name: FUN_0081b010
 */


void FUN_0081b010(long *param_1,undefined2 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 uVar4;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  plVar1 = param_1 + 2;
  *param_1 = (long)(PTR_DAT_047d1938 + 0x10);
                    /* try { // try from 0081b03c to 0081b043 has its CatchHandler @ 0081b084 */
  FUN_008187e4(plVar1);
                    /* try { // try from 0081b044 to 0081b057 has its CatchHandler @ 0081b088 */
  FUN_008188fc(plVar1,param_3);
  lVar3 = FUN_00818948(plVar1);
  uVar4 = 0x14;
  if (*(int *)(lVar3 + 8) != 0x1c) {
    uVar4 = 0;
  }
  uVar2 = 8;
  if (*(int *)(lVar3 + 8) != 2) {
    uVar2 = uVar4;
  }
  *(undefined2 *)((long)param_1 + 10) = uVar2;
  return;
}


