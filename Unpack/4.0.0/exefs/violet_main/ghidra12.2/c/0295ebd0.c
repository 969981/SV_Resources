/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0295ebd0; name: FUN_0295ebd0
 */


void FUN_0295ebd0(undefined8 param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  int iStack_7c;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined1 local_5c;
  int local_54 [11];
  undefined4 local_28;
  undefined1 local_24;
  
  local_24 = FUN_02943aa0();
  local_28 = 5;
  bVar1 = FUN_02943d30(param_1,&local_28,local_54);
  if (bVar1 != 0) {
    uVar2 = (ulong)bVar1;
    piVar3 = local_54;
    do {
      iStack_84 = *piVar3;
      if (iStack_84 != param_2) {
        local_80 = 0x1020152;
        local_64 = 0;
        local_6c = 0;
        local_74 = 0;
        local_5c = 1;
        local_88 = param_2;
        iStack_7c = param_2;
        local_78 = iStack_84;
        FUN_0293e3a0(param_1,&local_88);
        return;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 != 0);
  }
  return;
}


