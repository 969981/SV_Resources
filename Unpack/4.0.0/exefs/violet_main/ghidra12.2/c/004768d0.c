/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004768d0; name: FUN_004768d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_004768d0(void *param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong __n;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [128];
  undefined8 local_40;
  
  local_40 = 0x4000000000;
  local_d0 = 0;
  uStack_c8 = 0;
  lVar1 = 0x47f1b5c;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  uStack_108 = _UNK_03caad48;
  local_110 = _DAT_03caad40;
  uStack_f8 = _UNK_03cabe18;
  uStack_100 = _DAT_03cabe10;
  uStack_e8 = _UNK_03cabe28;
  local_f0 = _DAT_03cabe20;
  uStack_d8 = _UNK_03caaa38;
  uStack_e0 = _DAT_03caaa30;
  if (param_2 != 0) {
    local_d0 = param_2 << 3;
    uStack_c8 = param_2 >> 0x3d;
    __n = param_2;
    if (0x7f < param_2) {
      FUN_00475590(&local_110,param_1,param_2 >> 7);
      __n = param_2 & 0x7f;
      if (__n == 0) goto LAB_00476980;
      param_1 = (void *)((long)param_1 + (param_2 - __n));
    }
    memcpy(auStack_c0,param_1,__n);
    local_40 = CONCAT44(local_40._4_4_,(int)__n);
  }
LAB_00476980:
  FUN_00475390(lVar1,&local_110);
  FUN_00453300(&local_110,0xd8);
  return lVar1;
}


