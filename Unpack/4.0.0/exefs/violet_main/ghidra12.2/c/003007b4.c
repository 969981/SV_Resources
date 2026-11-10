/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003007b4; name: FUN_003007b4
 */


void FUN_003007b4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_18;
  
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_18 = *param_3;
  *param_3 = 0;
                    /* try { // try from 003007dc to 003007e3 has its CatchHandler @ 00300804 */
  FUN_003004fc(param_1,&local_18);
  lVar1 = local_18;
  local_18 = 0;
  if (lVar1 != 0) {
                    /* try { // try from 003007f0 to 003007f3 has its CatchHandler @ 00300800 */
    FUN_003b8e30();
  }
  return;
}


