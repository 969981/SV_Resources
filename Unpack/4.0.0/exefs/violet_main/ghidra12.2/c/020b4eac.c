/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020b4eac; name: FUN_020b4eac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020b4eac(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 long *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  fVar2 = *(float *)(*param_5 + (ulong)*(uint *)(param_3 + 0x84));
  fVar3 = (float)_DAT_03cabe60 * fVar2;
  fVar2 = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar2;
  fVar1 = (float)((ulong)param_2 >> 0x20);
  FUN_020b4f4c(local_40,param_2,CONCAT44(fVar1 - fVar2,(float)param_2 - fVar3),param_4);
  if (local_40[0] == '\0') {
    FUN_020b4f4c(local_60,param_2,CONCAT44(fVar1 + fVar2,(float)param_2 + fVar3),param_4);
    if (local_60[0] == '\0') {
      return;
    }
    *(undefined1 *)param_1 = 1;
    uStack_28 = uStack_48;
    local_30 = local_50;
  }
  else {
    *(undefined1 *)param_1 = 1;
  }
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  return;
}


