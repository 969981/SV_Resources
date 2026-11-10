/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256e350; name: FUN_0256e350
 */


void FUN_0256e350(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80 [3];
  long local_68;
  int local_60;
  uint local_5c;
  undefined4 local_48;
  float local_44;
  
  puVar1 = PTR_LAB_047df608;
  if (DAT_04850bb0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_018d1a70(param_5);
  local_44 = (float)param_3;
  local_88 = param_8;
  uStack_84 = param_7;
  local_80[0] = param_2;
  local_48 = param_6;
  FUN_0256ee0c(&local_68,param_4,puVar1,0,uVar2,local_80,&local_44,&local_48,&uStack_84,&local_88);
  FUN_015f0570(param_1,&local_68);
  puVar1 = PTR_DAT_047d1a08;
  if (local_60 != 0) {
    lVar5 = (long)local_60 << 6;
    lVar4 = local_68 + -8;
    do {
      uVar3 = *(ulong *)(lVar4 + lVar5);
      if ((uVar3 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar3 - 1,0);
      }
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_68,(ulong)local_5c << 6);
  }
  return;
}


