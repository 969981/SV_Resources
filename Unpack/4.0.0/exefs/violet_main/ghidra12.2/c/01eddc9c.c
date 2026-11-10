/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eddc9c; name: FUN_01eddc9c
 */


void FUN_01eddc9c(undefined1 *param_1,long param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_2c0 [624];
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  
  if (param_3 < 0x32) {
    uVar2 = FUN_01edda04();
    if (param_3 < uVar2) {
      param_2 = param_2 + (ulong)param_3 * 0x278;
      uStack_48 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x46) >> 0x10);
      uStack_50 = (undefined6)*(undefined8 *)(param_2 + 0x40);
      local_4a = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x30);
      cVar1 = *(char *)(param_2 + 0x4e);
      memcpy(auStack_2c0,(void *)(param_2 + 0x4f),0x269);
      *param_1 = 0;
      if (cVar1 == '\0') {
        return;
      }
      *(ulong *)(param_1 + 0xe) = CONCAT62(uStack_48,local_4a);
      param_1[0x16] = cVar1;
      *(ulong *)(param_1 + 8) = CONCAT26(local_4a,uStack_50);
      memcpy(param_1 + 0x17,auStack_2c0,0x269);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


