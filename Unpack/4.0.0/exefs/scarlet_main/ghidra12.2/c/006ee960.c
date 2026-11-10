/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ee960; name: FUN_006ee960
 */


void FUN_006ee960(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)param_2[1];
  for (pbVar1 = (byte *)*param_2; pbVar1 != pbVar2; pbVar1 = pbVar1 + 0x20) {
    if ((*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar1 + 0x10);
    }
                    /* try { // try from 006ee98c to 006ee993 has its CatchHandler @ 006ee9ac */
    FUN_0026ea7c(param_1,pbVar3);
  }
  return;
}


