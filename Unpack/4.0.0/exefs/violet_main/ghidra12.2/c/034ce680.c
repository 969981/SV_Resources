/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ce680; name: FUN_034ce680
 */


undefined8 FUN_034ce680(void *param_1,uint param_2,uint param_3,long param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((param_3 & 0xf00) == 0x300) {
    uVar4 = 0x1f;
  }
  else {
    if (*(int *)((long)param_1 + 0x44) == 0) {
      FUN_034d2278(*(undefined4 *)((long)param_1 + 0x34),*(undefined4 *)((long)param_1 + 0x38),
                   *(undefined4 *)((long)param_1 + 0x3c),*(undefined4 *)((long)param_1 + 0x30),
                   *(undefined4 *)((long)param_1 + 0x48),param_2,param_3,param_5,param_4);
    }
    else {
      if (param_4 == 0) {
        return 2;
      }
      uVar3 = param_2;
      if ((param_2 & 0xf00) == 0x100) {
        uVar1 = param_2 >> 0xc & 0x637;
        uVar3 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
        uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
        uVar3 = uVar1 << 0xc | (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
      }
      uVar1 = (param_3 & 0xff) + 3;
      iVar2 = (param_2 & 0xff) * (uVar1 >> 2);
      memset(param_5,0,(ulong)(uint)(iVar2 * 0x10));
      if ((uVar3 & 0xff) != 0) {
        memcpy(&local_90,param_1,0x30);
        if (*(int *)((long)param_1 + 0x44) == 1) {
          local_90 = 0;
          uStack_88 = 0x3f800000;
          local_80 = 0x3f800000;
        }
        FUN_034458bc((long)param_1 + 0x30,&local_90,1,param_2,uVar3,param_3,iVar2 * 4,param_4,
                     param_5);
      }
      if (((param_2 & param_3) >> 0xf & 1) != 0) {
        *(undefined4 *)
         ((long)param_5 +
         (long)(int)((param_3 & 0xff) - 1) * 4 +
         (ulong)((uVar1 & 0x1fc) * ((param_2 & 0xff) - 1)) * 4) = 0x3f800000;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


