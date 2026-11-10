/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02303bc0; name: FUN_02303bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02303bc0(void *param_1,long *param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__src;
  long lVar4;
  
  if ((*param_2 == 0) || (lVar4 = *(long *)(*param_2 + 0x10), lVar4 == 0)) {
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
    param_3 = *(code **)(param_3 + *(long *)(lVar4 + ((long)param_4 >> 1) + -0x28));
  }
  __src = (void *)(*param_3)();
  memcpy(param_1,__src,0x60);
  return;
}


