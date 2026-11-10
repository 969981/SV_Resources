/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00174a40; name: FUN_00174a40
 */


undefined1 *
FUN_00174a40(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,void *param_5,
            size_t param_6,undefined4 param_7,undefined8 param_8,float *param_9,undefined8 param_10,
            undefined4 param_11,void *param_12)

{
  undefined1 *puVar1;
  undefined1 auStack_478 [1032];
  
  if ((long)param_6 < 0x21) {
    *param_9 = (float)(long)param_6 + 3.0;
    if (param_4 - (long)param_3 < (long)(param_6 + 3)) {
      puVar1 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      param_3[2] = (char)param_6;
      *param_3 = (char)(param_6 >> 0x10);
      param_3[1] = (char)(param_6 >> 8);
      memcpy(param_3 + 3,param_5,param_6);
      puVar1 = param_3 + 3 + (param_6 - (long)param_3);
    }
  }
  else {
    FUN_0015edc0(param_5,param_6,auStack_478,0x100,0);
    if (param_12 != (void *)0x0) {
      memcpy(param_12,auStack_478,0x400);
    }
    puVar1 = (undefined1 *)
             FUN_00174230(param_1,param_2,param_3,param_4,param_5,param_6,auStack_478,param_7,
                          param_8,param_9,param_10,param_11);
  }
  return puVar1;
}


