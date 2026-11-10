/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a60290; name: FUN_01a60290
 */


void FUN_01a60290(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 byte *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  float local_64;
  undefined8 local_60 [3];
  long local_48;
  int local_40;
  uint local_3c;
  
  puVar1 = PTR_FUN_047df600;
  if (DAT_04850ba8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if ((1 < *param_5) ||
     (puVar3 = *(undefined **)(param_5 + 8), *(undefined **)(param_5 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df530 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047df530,puVar1);
      puVar3 = PTR_DAT_047df538;
      if (iVar2 != 0) {
        *(undefined8 *)(PTR_DAT_047df538 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined8 *)puVar3 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047df530);
      }
    }
    else {
      puVar3 = PTR_DAT_047df538;
    }
  }
  local_64 = (float)param_3;
  local_70 = param_8;
  local_6c = param_7;
  uStack_68 = param_6;
  local_60[0] = param_2;
  FUN_01a60424(&local_48,param_4,puVar1,0,puVar3,local_60,&local_64,&uStack_68,&local_6c,&local_70);
  FUN_015f0570(param_1,&local_48);
  puVar1 = PTR_DAT_047d1a08;
  if (local_40 != 0) {
    lVar6 = (long)local_40 << 6;
    lVar5 = local_48 + -8;
    do {
      uVar4 = *(ulong *)(lVar5 + lVar6);
      if ((uVar4 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar4 - 1,0);
      }
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_48,(ulong)local_3c << 6);
  }
  return;
}


