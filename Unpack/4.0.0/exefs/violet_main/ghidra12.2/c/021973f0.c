/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021973f0; name: FUN_021973f0
 */


int FUN_021973f0(void *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int iVar1;
  undefined1 auStack_80 [48];
  
  iVar1 = FUN_021972c0();
  if (*(float *)((long)param_5 + 8) < *(float *)((long)param_4 + 8)) {
    memcpy(auStack_80,param_4,0x30);
    memcpy(param_4,param_5,0x2c);
    memcpy(param_5,auStack_80,0x2c);
    if (*(float *)((long)param_3 + 8) <= *(float *)((long)param_4 + 8)) {
      iVar1 = iVar1 + 1;
    }
    else {
      memcpy(auStack_80,param_3,0x30);
      memcpy(param_3,param_4,0x2c);
      memcpy(param_4,auStack_80,0x2c);
      if (*(float *)((long)param_2 + 8) <= *(float *)((long)param_3 + 8)) {
        iVar1 = iVar1 + 2;
      }
      else {
        memcpy(auStack_80,param_2,0x30);
        memcpy(param_2,param_3,0x2c);
        memcpy(param_3,auStack_80,0x2c);
        if (*(float *)((long)param_1 + 8) <= *(float *)((long)param_2 + 8)) {
          iVar1 = iVar1 + 3;
        }
        else {
          memcpy(auStack_80,param_1,0x30);
          memcpy(param_1,param_2,0x2c);
          memcpy(param_2,auStack_80,0x2c);
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  return iVar1;
}


