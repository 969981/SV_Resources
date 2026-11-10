/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217222c; name: FUN_0217222c
 */


void FUN_0217222c(ulong param_1,short *param_2,uint param_3)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulong)param_3;
    do {
      param_1 = FUN_021722d4(param_1,param_2);
      if ((((param_1 & 1) == 0) && (param_1 = FUN_02172330(param_2), (param_1 & 1) == 0)) &&
         (param_1 = FUN_0217237c(param_2), (param_1 & 1) == 0)) {
        sVar1 = *param_2;
        if (sVar1 == 0xf5) {
          lVar2 = 0;
        }
        else if (sVar1 == 0x451) {
          lVar2 = 2;
        }
        else {
          if (sVar1 != 0xff) goto LAB_02172274;
          lVar2 = 1;
        }
        *param_2 = (&DAT_03d61f68)[lVar2 * 2];
      }
LAB_02172274:
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return;
}


