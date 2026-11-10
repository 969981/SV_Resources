/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f0348; name: FUN_015f0348
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f0348(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 byte *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60 [3];
  long local_48;
  int local_40;
  uint local_3c;
  undefined4 local_18;
  float local_14;
  
  puVar1 = PTR_LAB_047df610;
  if (DAT_04850bb8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if ((1 < *param_5) ||
     (puVar5 = *(undefined **)(param_5 + 8), *(undefined **)(param_5 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df510 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047df510);
      puVar5 = PTR_DAT_047df518;
      uVar3 = _UNK_03cabe58;
      uVar2 = _DAT_03cabe50;
      if (iVar4 != 0) {
        *(undefined8 *)(PTR_DAT_047df518 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0;
        *(undefined8 *)puVar5 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 0x18) = uVar3;
        *(undefined8 *)(puVar5 + 0x10) = uVar2;
        __cxa_guard_release(PTR_DAT_047df510);
      }
    }
    else {
      puVar5 = PTR_DAT_047df518;
    }
  }
  local_14 = (float)param_3;
  local_68 = param_8;
  uStack_64 = param_7;
  local_60[0] = param_2;
  local_18 = param_6;
  FUN_015f04e4(&local_48,param_4,puVar1,0,puVar5,local_60,&local_14,&local_18,&uStack_64,&local_68);
  FUN_015f0570(param_1,&local_48);
  puVar1 = PTR_DAT_047d1a08;
  if (local_40 != 0) {
    lVar8 = (long)local_40 << 6;
    lVar7 = local_48 + -8;
    do {
      uVar6 = *(ulong *)(lVar7 + lVar8);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar6 - 1,0);
      }
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_48,(ulong)local_3c << 6);
  }
  return;
}


