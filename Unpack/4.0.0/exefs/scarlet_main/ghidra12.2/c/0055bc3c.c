/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055bc3c; name: FUN_0055bc3c
 */


undefined8 * FUN_0055bc3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0055bd1c(param_1,param_2,&local_28,auStack_38,param_3);
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0xb8,8);
                    /* try { // try from 0055bc90 to 0055bc97 has its CatchHandler @ 0055bcf0 */
    FUN_0055c100(puVar2 + 4,param_4);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = local_28;
    *puVar1 = puVar2;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar2;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar1);
    param_1[3] = param_1[3] + 1;
  }
  return puVar2;
}


