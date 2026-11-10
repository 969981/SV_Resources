/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02303b1c; name: FUN_02303b1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02303b1c(void *param_1,long *param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__src;
  
  if (*param_2 == 0) {
    memset(param_1,0,0x60);
    uVar3 = _DAT_03cabe60;
    uVar2 = DAT_03cab628;
    uVar1 = DAT_03cab620;
    *(undefined8 *)((long)param_1 + 0x18) = _UNK_03cabe68;
    *(undefined8 *)((long)param_1 + 0x10) = uVar3;
    *(undefined8 *)((long)param_1 + 0x28) = uVar2;
    *(undefined8 *)((long)param_1 + 0x20) = uVar1;
    uVar2 = _UNK_03caa5b8;
    uVar1 = _DAT_03caa5b0;
    *(undefined1 *)((long)param_1 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0x40490fdb40490fdb;
    *(undefined8 *)((long)param_1 + 0x4c) = 0x40490fdb40490fdb;
    *(undefined4 *)((long)param_1 + 4) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x38) = uVar2;
    *(undefined8 *)((long)param_1 + 0x30) = uVar1;
    return;
  }
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(long *)(*param_2 + ((long)param_4 >> 1)));
  }
  __src = (void *)(*param_3)();
  memcpy(param_1,__src,0x60);
  return;
}


