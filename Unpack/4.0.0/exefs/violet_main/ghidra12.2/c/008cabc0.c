/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cabc0; name: FUN_008cabc0
 */


void FUN_008cabc0(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(char *)(*(long *)(param_1 + 0x238) + 0x28) != '\0') || (*(int *)(param_1 + 0x14) != 0x3f))
  {
    for (lVar3 = *(long *)(param_1 + 0x150); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x80)) {
      if ((*(char *)(lVar3 + 4) != '\0') &&
         (lVar2 = *(long *)(lVar3 + 0x238), 0 < *(int *)(lVar2 + 0x88))) {
        lVar4 = 0;
        do {
          if ((*(char *)(*(long *)(*(long *)(lVar2 + lVar4 * 8 + 0x90) + 0x10) + 0x7e1) == '\x01')
             && (lVar1 = *(long *)(lVar3 + lVar4 * 8 + 0x440), lVar1 != 0)) {
            do {
              lVar2 = *(long *)(lVar1 + 0x80);
              FUN_008caa50(param_1,param_2,lVar1,param_3,param_4 & 1,param_5,param_6,param_7,param_8
                          );
              lVar1 = lVar2;
            } while (lVar2 != 0);
            lVar2 = *(long *)(lVar3 + 0x238);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar2 + 0x88));
      }
      FUN_008caa50(param_1,param_2,lVar3,param_3,param_4 & 1,param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar3 + 4) != '\0') &&
         (lVar2 = *(long *)(lVar3 + 0x238), 0 < *(int *)(lVar2 + 0x88))) {
        lVar4 = 0;
        do {
          if ((*(char *)(*(long *)(*(long *)(lVar2 + lVar4 * 8 + 0x90) + 0x10) + 0x7e1) == '\0') &&
             (lVar1 = *(long *)(lVar3 + lVar4 * 8 + 0x440), lVar1 != 0)) {
            do {
              lVar2 = *(long *)(lVar1 + 0x80);
              FUN_008caa50(param_1,param_2,lVar1,param_3,param_4 & 1,param_5,param_6,param_7,param_8
                          );
              lVar1 = lVar2;
            } while (lVar2 != 0);
            lVar2 = *(long *)(lVar3 + 0x238);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar2 + 0x88));
      }
    }
  }
  return;
}


