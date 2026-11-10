/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00305600; name: FUN_00305600
 */


undefined8 FUN_00305600(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (param_2 != (undefined4 *)0x0) {
    lVar2 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
    lVar1 = (long)param_1 + 9;
    if (*param_1 != 0) {
      lVar1 = param_1[2];
    }
    uVar4 = param_1[1] & 0xff;
    if (*param_1 != 0) {
      uVar4 = param_1[1];
    }
                    /* try { // try from 0030564c to 0030567f has its CatchHandler @ 00305704 */
    puVar3 = (undefined8 *)FUN_0038ad50(PTR_PTR_047cca38,lVar2);
    if ((puVar3 == (undefined8 *)0x0) ||
       (uVar4 = FUN_00385610(lVar1,uVar4,puVar3,PTR_PTR_047cca38,lVar2), (uVar4 & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined4 *)*puVar3;
      if (puVar5 == (undefined4 *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
        puVar5 = (undefined4 *)puVar3[1];
      }
      else {
        *param_2 = *puVar5;
        param_2[1] = puVar5[1];
        puVar5 = (undefined4 *)puVar3[1];
      }
      if (puVar5 == (undefined4 *)0x0) {
        param_2[2] = 0;
        param_2[3] = 0;
        uVar6 = 1;
      }
      else {
        param_2[2] = *puVar5;
        param_2[3] = puVar5[1];
        uVar6 = 1;
      }
    }
    if (lVar2 != 0) {
                    /* try { // try from 003056c8 to 003056cf has its CatchHandler @ 00305700 */
      FUN_0038bd40(lVar2);
    }
  }
  return uVar6;
}


