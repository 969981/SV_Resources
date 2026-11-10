/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02197130; name: FUN_02197130
 */


undefined8 FUN_02197130(void *param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_70 [48];
  
  fVar1 = *(float *)((long)param_2 + 8);
  fVar2 = *(float *)((long)param_3 + 8);
  if (*(float *)((long)param_1 + 8) <= fVar1) {
    if (fVar1 <= fVar2) {
      return 0;
    }
    memcpy(auStack_70,param_2,0x30);
    memcpy(param_2,param_3,0x2c);
    memcpy(param_3,auStack_70,0x2c);
    if (*(float *)((long)param_2 + 8) < *(float *)((long)param_1 + 8)) {
      memcpy(auStack_70,param_1,0x30);
      memcpy(param_1,param_2,0x2c);
LAB_021972a4:
      memcpy(param_2,auStack_70,0x2c);
      return 2;
    }
  }
  else {
    memcpy(auStack_70,param_1,0x30);
    if (fVar1 <= fVar2) {
      memcpy(param_1,param_2,0x2c);
      memcpy(param_2,auStack_70,0x2c);
      if (*(float *)((long)param_3 + 8) < *(float *)((long)param_2 + 8)) {
        memcpy(auStack_70,param_2,0x30);
        memcpy(param_2,param_3,0x2c);
        param_2 = param_3;
        goto LAB_021972a4;
      }
    }
    else {
      memcpy(param_1,param_3,0x2c);
      memcpy(param_3,auStack_70,0x2c);
    }
  }
  return 1;
}


