/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024b0ac; name: FUN_0024b0ac
 */


undefined8 * FUN_0024b0ac(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x60,8);
  puVar2 = (undefined8 *)*param_3;
  uVar5 = *puVar2;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  puVar1[5] = puVar2[1];
  puVar1[4] = uVar5;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2 = (undefined8 *)param_3[1];
  uVar5 = *puVar2;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  puVar1[9] = puVar2[1];
  puVar1[8] = uVar5;
  puVar1[0xb] = uVar4;
  puVar1[10] = uVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
                    /* try { // try from 0024b114 to 0024b127 has its CatchHandler @ 0024b180 */
  puVar2 = (undefined8 *)FUN_0024b1f4(param_1,param_2,&local_38,puVar1 + 4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = local_38;
  *puVar2 = puVar1;
  if (*(long *)*param_1 == 0) {
    puVar2 = puVar1;
  }
  else {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*puVar2;
  }
  FUN_010108e0(param_1[1],puVar2);
  param_1[3] = param_1[3] + 1;
  return puVar1;
}


